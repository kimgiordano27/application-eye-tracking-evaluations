from __future__ import annotations

import re
import time
from dataclasses import dataclass
from datetime import datetime
from pathlib import Path
from typing import List, Optional, Set, Tuple

from playwright.sync_api import sync_playwright, TimeoutError as PlaywrightTimeoutError
from playwright._impl._errors import TargetClosedError


# ============================================================
# CONFIG
# ============================================================
HEADLESS = False
SEED_URLS = [
    "https://www.meta.com/experiences/view/777072216186618/?price=FREE",
     "https://www.meta.com/experiences/view/777073612853145/?price=FREE"  # new listing
    # add more here later
]

TARGET_EYE = 60
TARGET_NO_EYE = 60

# Listing scroll behavior
SCROLL_STEP_PX = 500
SCROLL_PAUSE_SEC = 6.0
MAX_TOTAL_SCROLLS = 1500
STALL_SCROLLS_LIMIT = 10   # stop after this many scrolls with no new free tiles discovered

# Detail page behavior
NAV_TIMEOUT_MS = 45_000
DETAIL_WAIT_MS = 1200
POLITE_DELAY_SEC = 0.5

SLOW_MO_MS = 50  # set 50 if HEADLESS=False


# ============================================================
# OUTPUT
# ============================================================
DATE_STAMP = datetime.now().strftime("%Y-%m-%d")
OUT_DIR = Path(f"meta_store_outputs_{DATE_STAMP}")
OUT_DIR.mkdir(exist_ok=True)

EYE_LINKS_OUT = OUT_DIR / f"eye_tracking_links_{DATE_STAMP}.txt"
EYE_NAMES_OUT = OUT_DIR / f"eye_tracking_names_{DATE_STAMP}.txt"
NO_LINKS_OUT = OUT_DIR / f"no_eye_tracking_links_{DATE_STAMP}.txt"
NO_NAMES_OUT = OUT_DIR / f"no_eye_tracking_names_{DATE_STAMP}.txt"
META_OUT = OUT_DIR / f"found_date_{DATE_STAMP}.txt"


# ============================================================
# HELPERS
# ============================================================
def normalize_ws(s: str) -> str:
    return re.sub(r"\s+", " ", s).strip()

def load_existing(path: Path) -> Set[str]:
    if not path.exists():
        return set()
    return {line.strip() for line in path.read_text(encoding="utf-8").splitlines() if line.strip()}


def write_lines(path: Path, lines: List[str]) -> None:
    path.write_text("\n".join(lines) + ("\n" if lines else ""), encoding="utf-8")


def clean_title_to_name(title: str) -> str:
    title = normalize_ws(title)
    title = re.sub(r"\s*[-|]\s*Meta.*$", "", title, flags=re.IGNORECASE)
    title = re.sub(r"\s*on\s+Meta\s+Quest.*$", "", title, flags=re.IGNORECASE)
    return title.strip()


def extract_app_name(detail_page) -> str:
    # Prefer og:title
    try:
        og = detail_page.locator('meta[property="og:title"]').first
        if og.count() > 0:
            content = og.get_attribute("content")
            if content:
                return clean_title_to_name(content)
    except Exception:
        pass

    # Then H1
    try:
        h1 = detail_page.locator("h1").first
        if h1.count() > 0:
            txt = h1.inner_text(timeout=2_000)
            if txt:
                return normalize_ws(txt)[:200]
    except Exception:
        pass

    # Then document.title
    try:
        t = detail_page.title()
        if t:
            return clean_title_to_name(t)[:200]
    except Exception:
        pass

    return "UNKNOWN_NAME"


def page_text_contains(page, needle: str) -> bool:
    try:
        txt = page.locator("body").inner_text(timeout=3_000)
        return needle.lower() in txt.lower()
    except Exception:
        return False


def has_eye_tracking(detail_page) -> bool:
    # Text-based check is robust to DOM changes
    for n in ["Eye tracking", "eye tracking", "eye-tracking", "Eye Tracking"]:
        if page_text_contains(detail_page, n):
            return True
    return False


# ============================================================
# TILE EXTRACTION (STRICT: app tiles only)
# ============================================================

BASE = "https://www.meta.com"

# App detail pages look like: /experiences/<slug>/<id>/
# BUT the listing/collection page can be: /experiences/view/<id>/
# So we explicitly EXCLUDE "view" (and a couple other non-app patterns).
EXPERIENCE_HREF_RE = re.compile(
    r"^/experiences/(?!view/|wishlist/?|cart/?|settings/?|account/?|help/?|store/?|search/?)[^/]+/\d{6,}/?$",
    re.IGNORECASE
)

def is_seed_like(url: str) -> bool:
    # treat anything under /experiences/ as "listing-ish" but we want to keep it on SEED_URL specifically
    return "https://www.meta.com/experiences/" in (url or "")

def harvest_free_tile_links(listing_page) -> Set[str]:
    """
    Returns absolute URLs for app tiles only:
      - href matches /experiences/<slug>/<id>/ and is NOT /experiences/view/<id>/
      - anchor is visible
      - anchor contains a "Get" CTA somewhere inside (typical for free items on listing pages)
    """
    free_links: Set[str] = set()

    # Scope to main content to avoid header/footer nav anchors
    # (Meta pages can have lots of /experiences/ links in nav/menus)
    main = listing_page.locator("main").first
    scope = main if main.count() > 0 else listing_page.locator("body")

    # Candidate anchors inside the main content area only
    tiles = scope.locator('a[href^="/experiences/"]')
    count = tiles.count()

    for i in range(count):
        a = tiles.nth(i)

        # Must be visible (filters out many hidden menu items / overlays)
        try:
            if not a.is_visible():
                continue
        except Exception:
            continue

        href = (a.get_attribute("href") or "").strip()
        if not href or not EXPERIENCE_HREF_RE.match(href):
            continue

        # Must look like an actual "tile" by containing a Get CTA inside the anchor
        # (prevents grabbing category links, random experience links, etc.)
        try:
            # Use regex to match "Get" as a standalone label
            get_cta = a.locator("text=/^\\s*Get\\s*$/i")
            if get_cta.count() == 0:
                continue
        except Exception:
            continue

        free_links.add(BASE + href)

    return free_links


# ============================================================
# KEEP LISTING PAGE "LOCKED" TO THE ORIGINAL SEED URL
# ============================================================

def is_app_detail_url(url: str) -> bool:
    # True for: https://www.meta.com/experiences/<slug>/<id>/
    # False for: https://www.meta.com/experiences/view/<id>/ (listing)
    if not url:
        return False
    m = re.match(r"^https://www\.meta\.com/experiences/([^/]+)/(\d{6,})/?", url)
    if not m:
        return False
    slug = m.group(1).lower()
    return slug != "view"




def ensure_listing_open(context, listing_page, lock_url: str):
    if listing_page.is_closed():
        listing_page = context.new_page()
        listing_page.set_default_navigation_timeout(NAV_TIMEOUT_MS)
        listing_page.goto(lock_url, wait_until="domcontentloaded")
        listing_page.wait_for_timeout(DETAIL_WAIT_MS)
        return listing_page

    cur = ""
    try:
        cur = listing_page.url or ""
    except Exception:
        cur = ""

    # Only reset if we’re clearly off-course
    if ("meta.com/experiences" not in cur) or is_app_detail_url(cur):
        listing_page.goto(lock_url, wait_until="domcontentloaded")
        listing_page.wait_for_timeout(DETAIL_WAIT_MS)

    return listing_page





def scroll_listing(listing_page) -> None:
    # Make sure we scroll the LISTING tab, not whatever is focused
    try:
        listing_page.bring_to_front()
    except Exception:
        pass

    # Real wheel events often trigger lazy-load better than window.scrollBy
    try:
        listing_page.mouse.wheel(0, SCROLL_STEP_PX)
    except Exception:
        # fallback to JS scroll
        listing_page.evaluate("(step) => window.scrollBy(0, step)", SCROLL_STEP_PX)






# ============================================================
# SCRAPE + CLASSIFY
# ============================================================
@dataclass
class AppRecord:
    name: str
    link: str


def classify_detail(detail_page, url: str) -> Tuple[bool, str]:
    detail_page.goto(url, wait_until="domcontentloaded")
    detail_page.wait_for_timeout(DETAIL_WAIT_MS)
    name = extract_app_name(detail_page)
    eye = has_eye_tracking(detail_page)
    return eye, name

def append_unique(path: Path, items: List[str], existing: Set[str]):
    new_items = [x for x in items if x not in existing]
    if not new_items:
        return
    with path.open("a", encoding="utf-8") as f:
        for item in new_items:
            f.write(item + "\n")


def main() -> int:
    with sync_playwright() as p:
        browser = p.chromium.launch(headless=HEADLESS, slow_mo=SLOW_MO_MS)
        context = browser.new_context()

        listing = context.new_page()
        detail = context.new_page()
        listing.set_default_navigation_timeout(NAV_TIMEOUT_MS)
        detail.set_default_navigation_timeout(NAV_TIMEOUT_MS)

        # load existing sets here (so we append later)
        existing_eye_links = load_existing(EYE_LINKS_OUT)
        existing_no_links  = load_existing(NO_LINKS_OUT)
        existing_eye_names = load_existing(EYE_NAMES_OUT)
        existing_no_names  = load_existing(NO_NAMES_OUT)

        eye: List[AppRecord] = []
        no_eye: List[AppRecord] = []
        visited: Set[str] = set()

        for seed_url in SEED_URLS:
            # If we already hit both caps, stop entirely
            if len(eye) >= TARGET_EYE and len(no_eye) >= TARGET_NO_EYE:
                print("\nReached target caps (60 eye + 60 no-eye). Stopping.\n")
                break

            print(f"\n=== SCRAPING LISTING ===\n{seed_url}\n")

            # Open listing
            listing.goto(seed_url, wait_until="domcontentloaded")
            listing.wait_for_timeout(DETAIL_WAIT_MS)

            LOCK_URL = listing.url
            print(f"[lock] Listing locked to:\n  {LOCK_URL}\n")

            discovered_free_tiles: Set[str] = set()
            stall = 0

            for scroll_i in range(1, MAX_TOTAL_SCROLLS + 1):
                # Stop everything if both caps met
                if len(eye) >= TARGET_EYE and len(no_eye) >= TARGET_NO_EYE:
                    break

                listing = ensure_listing_open(context, listing, LOCK_URL)

                before = len(discovered_free_tiles)
                try:
                    discovered_free_tiles |= harvest_free_tile_links(listing)
                except TargetClosedError:
                    print("[recover] listing closed during harvest; recreating next loop...")
                    stall += 1
                    continue

                after = len(discovered_free_tiles)
                stall = stall + 1 if after == before else 0

                print(
                    f"[scroll {scroll_i}/{MAX_TOTAL_SCROLLS}] "
                    f"free_tiles={len(discovered_free_tiles)} visited={len(visited)} "
                    f"eye={len(eye)}/{TARGET_EYE} no={len(no_eye)}/{TARGET_NO_EYE} "
                    f"stall={stall}/{STALL_SCROLLS_LIMIT}"
                )

                # Visit newly discovered tiles (that we haven't visited yet)
                new_links = [u for u in sorted(discovered_free_tiles) if u not in visited]

                for url in new_links:
                    # Stop if both caps met
                    if len(eye) >= TARGET_EYE and len(no_eye) >= TARGET_NO_EYE:
                        break

                    # Mark visited early to avoid reprocessing
                    visited.add(url)

                    # Skip anything already in output files (append-only)
                    if url in existing_eye_links or url in existing_no_links:
                        continue

                    try:
                        eye_tag, name = classify_detail(detail, url)

                        if eye_tag:
                            if len(eye) < TARGET_EYE:
                                eye.append(AppRecord(name=name, link=url))
                                existing_eye_links.add(url)
                                existing_eye_names.add(name)
                                print(f"  +EYE ({len(eye)}/{TARGET_EYE}) {name}")
                        else:
                            if len(no_eye) < TARGET_NO_EYE:
                                no_eye.append(AppRecord(name=name, link=url))
                                existing_no_links.add(url)
                                existing_no_names.add(name)
                                print(f"  +NO  ({len(no_eye)}/{TARGET_NO_EYE}) {name}")

                    except PlaywrightTimeoutError:
                        print(f"  TIMEOUT {url}")
                    except TargetClosedError:
                        print("  [recover] detail page closed; recreating...")
                        detail = context.new_page()
                        detail.set_default_navigation_timeout(NAV_TIMEOUT_MS)
                    except Exception as e:
                        print(f"  ERROR {type(e).__name__} {url}")

                    time.sleep(POLITE_DELAY_SEC)

                # If no new tiles for STALL_SCROLLS_LIMIT scrolls, move to next seed URL
                if stall >= STALL_SCROLLS_LIMIT:
                    print(
                        f"\nStopping: listing stopped yielding new FREE tiles "
                        f"(stall limit reached: {stall}/{STALL_SCROLLS_LIMIT}). Moving to next seed.\n"
                    )
                    break

                # Scroll the listing
                try:
                    scroll_listing(listing)
                except TargetClosedError:
                    print("[recover] listing closed during scroll; will reopen next loop.")

                listing.wait_for_timeout(int(SCROLL_PAUSE_SEC * 1000))




if __name__ == "__main__":
    raise SystemExit(main())
