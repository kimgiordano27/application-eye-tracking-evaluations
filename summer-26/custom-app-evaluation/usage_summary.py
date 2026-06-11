from pathlib import Path
import csv
import json
from collections import defaultdict

# --------------------------------------------------------------------
# INPUTS
# --------------------------------------------------------------------
INPUT_TXT = Path(r"scan-results-app-categorized/app-category-master.txt")

# If an app_id exists in this JSON, we will merge its categories into the
# app's categories from master-results.txt.
APK_CATEGORY_SUMMARY_JSON = Path(r"../scan-results/apk_category_summary.json")

OUT_DIR = Path(r"../scan-results")
OUT_DIR.mkdir(parents=True, exist_ok=True)

# --------------------------------------------------------------------
# OUTPUTS
# --------------------------------------------------------------------
# Keeps your original outputs (but now merged with APK json when present)
OUT_WIDE_CSV = OUT_DIR / "app_functionality.csv"
OUT_LONG_CSV = OUT_DIR / "app_functionality_long.csv"
OUT_TXT = OUT_DIR / "app_functionality.txt"


# --------------------------------------------------------------------
# PARSING CONSTANTS
# --------------------------------------------------------------------
GAME_PREFIX = "===== APP:"
CATEGORY_PREFIX = "[CATEGORY]"

# --------------------------------------------------------------------
# CATEGORY NORMALIZATION / TAGGING
# --------------------------------------------------------------------
def normalize_category(cat: str) -> str:
    """
    Normalizes category tags so you:
      - never get 2+ "Foveated Rendering" tags for one app
      - catch foveated rendering thoroughly even if phrased differently
    """
    c = (cat or "").strip()
    if not c:
        return ""

    cl = c.lower()

    # ---- Thorough foveated rendering catch ----
    # Anything that looks like foveated/ffr/dfr -> canonical "Foveated Rendering"
    # (You can add more synonyms here if your corpus has them.)
    foveated_signals = [
        "dynamic foveated",
        "dfr",
        "eye tracked foveated",
        "gaze foveated",
    ]
    if any(sig in cl for sig in foveated_signals):
        return "Foveated Rendering"

    # Otherwise, keep original (but trimmed)
    return c


def is_enablement_category(cat: str) -> bool:
    """
    Treat any category containing 'enablement' as enablement-only.
    If you have a different naming scheme, adjust here.
    """
    return "enablement" in (cat or "").lower()


def pick_primary_category(categories: set[str]) -> str:
    """
    Choose a stable primary category.
    Priority: Foveated Rendering first (per your emphasis), else alphabetical.
    """
    if "Foveated Rendering" in categories:
        return "Foveated Rendering"
    if not categories:
        return ""
    return sorted(categories)[0]


# --------------------------------------------------------------------
# MASTER RESULTS TXT PARSER
# --------------------------------------------------------------------
def parse_master_results_txt(path: Path) -> dict[str, set[str]]:
    """
    Returns:
      game_to_categories: { "com_example_app-decoded": {"Eye-Tracking Enablement", ...}, ... }
    """
    game_to_categories: dict[str, set[str]] = defaultdict(set)
    current_game = None

    with path.open("r", encoding="utf-8", errors="replace") as f:
        for raw in f:
            line = raw.strip()

            # New game block
            if line.startswith(GAME_PREFIX):
                # Example: "===== GAME: AR-toolkit-decoded ====="
                current_game = line[len(GAME_PREFIX):].strip()
                if current_game.endswith("====="):
                    current_game = current_game[:-5].strip()
                continue

            # Category line
            if CATEGORY_PREFIX in line and current_game:
                idx = line.find(CATEGORY_PREFIX)
                cat = line[idx + len(CATEGORY_PREFIX):].strip()
                cat = normalize_category(cat)
                if cat:
                    game_to_categories[current_game].add(cat)

    return game_to_categories


# --------------------------------------------------------------------
# APK CATEGORY SUMMARY JSON LOADER (robust to a few possible shapes)
# --------------------------------------------------------------------
def _extract_categories_from_obj(obj) -> set[str]:
    """
    Attempts to extract categories from a dict-like object that might have:
      - "app_categories" (string "A;B;C" or list)
      - "categories" (list)
      - "detected_functionality" (string)
      - "detected_categories" (list)
    """
    cats: set[str] = set()

    if not isinstance(obj, dict):
        return cats

    # Common fields seen in similar pipelines
    for key in ("app_categories", "categories", "detected_categories", "detected_functionality"):
        if key not in obj:
            continue

        val = obj.get(key)
        if val is None:
            continue

        if isinstance(val, str):
            # allow either "A; B; C" or "A,B,C"
            parts = [p.strip() for p in val.replace(",", ";").split(";")]
            for p in parts:
                p2 = normalize_category(p)
                if p2:
                    cats.add(p2)

        elif isinstance(val, list):
            for item in val:
                if isinstance(item, str):
                    p2 = normalize_category(item)
                    if p2:
                        cats.add(p2)

    return cats


def load_apk_category_summary(path: Path) -> dict[str, dict]:
    """
    Returns:
      app_id -> full record dict (so we can also reuse metrics if present)
    Supports:
      - dict keyed by app_id
      - list of dicts with an app id field
    """
    if not path.exists():
        return {}

    with path.open("r", encoding="utf-8") as f:
        data = json.load(f)

    out: dict[str, dict] = {}

    if isinstance(data, dict):
        # either keyed by app_id, or a wrapper with "apps"
        if all(isinstance(v, dict) for v in data.values()):
            # assume keyed by app_id
            for app_id, rec in data.items():
                if isinstance(rec, dict):
                    out[str(app_id)] = rec
        elif "apps" in data and isinstance(data["apps"], list):
            for rec in data["apps"]:
                if isinstance(rec, dict):
                    app_id = rec.get("app_id") or rec.get("id") or rec.get("package") or rec.get("app")
                    if app_id:
                        out[str(app_id)] = rec
    elif isinstance(data, list):
        for rec in data:
            if isinstance(rec, dict):
                app_id = rec.get("app_id") or rec.get("id") or rec.get("package") or rec.get("app")
                if app_id:
                    out[str(app_id)] = rec

    return out


# --------------------------------------------------------------------
# MERGE + OUTPUTS
# --------------------------------------------------------------------
def merge_categories(
    txt_map: dict[str, set[str]],
    apk_map: dict[str, dict],
) -> dict[str, dict]:
    """
    Produces merged per-app records, including:
      - union of categories (txt + apk json)
      - enablement flags
      - pulls scan metrics from apk json if present
    """
    all_apps = set(txt_map.keys()) | set(apk_map.keys())
    merged: dict[str, dict] = {}

    for app_id in sorted(all_apps):
        cats = set()

        # from TXT
        cats |= set(normalize_category(c) for c in txt_map.get(app_id, set()) if normalize_category(c))

        # from APK JSON
        apk_rec = apk_map.get(app_id, {})
        cats |= _extract_categories_from_obj(apk_rec)

        # final normalize/dedupe (especially for foveated)
        cats = set(normalize_category(c) for c in cats if normalize_category(c))

        enablement_cats = {c for c in cats if is_enablement_category(c)}
        non_enablement_cats = set(cats) - set(enablement_cats)

        # If you truly mean "enablement_only" should be 1 when there are enablement hits
        # and *no* non-enablement hits, this is the right definition:
        enablement_only = 1 if (enablement_cats and not non_enablement_cats) else 0

        record = {
            "app_id": app_id,
            "app_categories": ";".join(sorted(cats)),
            "primary_category": pick_primary_category(cats),
            "enablement_only": enablement_only,
            "has_enablement_hits": 1 if enablement_cats else 0,
            "has_non_enablement_hits": 1 if non_enablement_cats else 0,

            # These next fields are optional metrics.
            # If your APK summary json already computed them, we pass them through.
            "txt_files_scanned": apk_rec.get("txt_files_scanned", ""),
            "files_with_hits": apk_rec.get("files_with_hits", ""),
            "total_term_hits": apk_rec.get("total_term_hits", ""),
        }

        merged[app_id] = record

    return merged


def write_wide_csv_from_merged(merged: dict[str, dict], out_path: Path) -> None:
    with out_path.open("w", newline="", encoding="utf-8") as f:
        w = csv.writer(f)
        w.writerow(["app_id", "detected_functionality"])
        for app_id in sorted(merged.keys()):
            w.writerow([app_id, merged[app_id]["app_categories"].replace(";", "; ")])


def write_long_csv_from_merged(merged: dict[str, dict], out_path: Path) -> None:
    with out_path.open("w", newline="", encoding="utf-8") as f:
        w = csv.writer(f)
        w.writerow(["app_id", "functionality"])
        for app_id in sorted(merged.keys()):
            cats = [c.strip() for c in merged[app_id]["app_categories"].split(";") if c.strip()]
            for cat in sorted(set(cats)):
                w.writerow([app_id, cat])


def write_txt_from_merged(merged: dict[str, dict], out_path: Path) -> None:
    with out_path.open("w", encoding="utf-8") as f:
        for app_id in sorted(merged.keys()):
            cats = [c.strip() for c in merged[app_id]["app_categories"].split(";") if c.strip()]
            f.write(f"{app_id}:\n")
            for cat in sorted(set(cats)):
                f.write(f"  - {cat}\n")
            f.write("\n")



def main():
    txt_map = parse_master_results_txt(INPUT_TXT)
    apk_map = load_apk_category_summary(APK_CATEGORY_SUMMARY_JSON)

    merged = merge_categories(txt_map, apk_map)

    # Original outputs (now include merged categories)
    write_wide_csv_from_merged(merged, OUT_WIDE_CSV)
    write_long_csv_from_merged(merged, OUT_LONG_CSV)
    write_txt_from_merged(merged, OUT_TXT)


    print(f"Parsed TXT apps: {len(txt_map)}")
    print(f"Loaded APK JSON apps: {len(apk_map)}")
    print(f"Merged apps: {len(merged)}")
    print("Wrote:")
    print(f"  {OUT_WIDE_CSV}")
    print(f"  {OUT_LONG_CSV}")
    print(f"  {OUT_TXT}")


if __name__ == "__main__":
    main()