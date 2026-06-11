# app_category_from_normalized_so.py
import pathlib
import json
import csv
from datetime import datetime, timezone
from typing import Dict, List, Tuple, Optional

MAX_TERMS = 500
MAX_EXAMPLES_PER_TERM_PER_FILE = 10   # smaller for app-level summary
MAX_EVIDENCE_LINES_PER_CATEGORY = 80  # cap master evidence per category per app

WRITE_APP_CSV = True
WRITE_MASTER_TXT = True

ENABLEMENT_CATEGORY = "Eye-Tracking Enablement"
UNCATEGORIZED = "Uncategorized"

CATEGORY_RULES = [
    ("Foveated Rendering",
     {"foveation", "foveated rendering", "foveated graphics", "foveated display", "foveated rendering mode", "foveated", "Foveat", "Foveation",  "Foveated",
      "ovrp_GetFoveationEyeTracked", "ovrp_SetFoveationEyeTracked", "MetaGetFoveation", "xrGetFoveationEyeTrackedStateMETA", "GetEyeTrackedFoveatedRenderingEnabled",
      "GetEyeTrackedFoveatedRenderingSupported", "SetEyeTrackedFoveatedRenderingEnabled", "MetaGetEyeTrackedFoveationSupported", "MetaGetFoveationEyeTracked",
      "MetaSetFoveationEyeTracked ", "xrGetFoveationEyeTrackedStateMETA", "GetEyeTrackedFoveatedRendering"},
     {"foveat", "Foveat"}),

    ("Raw Data Collection",
     {"EyeTrackingProvider", "EyeTrackingState", "GazeProvider",
      "ovrp_GetEyeGazesState", "ovrp_GetEyeTrackingState", "ovrp_GetEyeTrackingState2",
      "ovrpEyeGazesState", "ovrpEyeGaze", "ovrpEyeTrackingState",
      "GetEyeGazeData"},
     {"ovrp_GetEye", "ovrpEye", "EyeTrackingState", "EyeTrackingProvider", "GetEyeGazeData"}),

    ("Gaze Interactions",
     {"EyeGazeInteractor", "GazeInteractor",
      "interaction selection", "dwell time"},
     {"Interactor", "dwell", "selection", "gaze input"}),

    ("Gaze Geometry",
     {"EyeGazeDirection", "EyeGazePosition", "EyeGazeRotation", "EyeOpenAmount", "eyeOpenness"},
     {"GazeDirection", "GazePosition", "GazeRotation", "EyeOpen"}),

    ("Biometric Signals & Metrics",
     {"PupilDilation", "BlinkRate", "BlinkDuration", "SaccadeVelocity", "SaccadeAmplitude", "fixation",
      "fixation duration", "attention measurement", "attentionScore", "focused object"},
     {"Pupil", "Blink", "Saccade", "fixation", "attention", "focused object"}),

    ("Eye-Tracking Enablement",
     {"EyeTracked", "eyeTrackingSupported", "eyeGazeSupported",
      "ovrp_SetEyeTrackingEnabled", "ovrp_GetEyeTrackingEnabled",
      "FOculusEyeTracking", "IOculusEyeTrackerModule", "eye tracking",
      "XR_EXT_eye_gaze_interaction", "xrLocateEyeGazesEXT", "XrEyeGazesEXT", "XrEyeGazeEXT", "XrEyeGazesInfoEXT",
      "xrLocateEyeGazes", "XrEyeGaze"},
     {"Supported", "SetEyeTrackingEnabled", "GetEyeTrackingEnabled", "OculusEye"}),
]

# Priority for "primary category" (when app has multiple non-enablement categories)
CATEGORY_PRIORITY = [
    "Foveated Rendering",
    "Raw Data Collection",
    "Biometric Signals & Metrics",
    "Gaze Interactions",
    "Gaze Geometry",
    ENABLEMENT_CATEGORY,
]

def load_search_terms(terms_path: pathlib.Path) -> List[str]:
    terms: List[str] = []
    for line in terms_path.read_text(encoding="utf-8").splitlines():
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        terms.append(line)
        if len(terms) >= MAX_TERMS:
            break
    return terms

def collect_matching_lines(text: str, term: str, limit: int) -> List[str]:
    t = term.lower()
    out: List[str] = []
    for line in text.splitlines():
        if t in line.lower():
            out.append(line.rstrip("\n"))
            if len(out) >= limit:
                break
    return out

def categorize_term(term: str) -> Tuple[str, str]:
    """
    Return (category, confidence) for a term based on rules.
      - high: exact term match
      - medium: substring/pattern match
      - none: no match (Uncategorized)
    IMPORTANT: No automatic fallback into enablement here.
    """
    t = term.strip()
    tl = t.lower()

    for category, exact_terms, substr_patterns in CATEGORY_RULES:
        for e in exact_terms:
            if tl == e.lower():
                return category, "high"
        for p in substr_patterns:
            if p.lower() in tl:
                return category, "medium"

    return UNCATEGORIZED, "none"

def scan_text_file(txt_path: pathlib.Path, terms: List[str]) -> List[dict]:
    try:
        text = txt_path.read_text(encoding="utf-8", errors="replace")
    except Exception as e:
        return [{"type": "read_error", "term": None, "detail": f"{type(e).__name__}: {e}"}]

    # Fix UTF-16 null artifacts that can break substring matching
    text = text.replace("\x00", "")
    lower_text = text.lower()

    hits: List[dict] = []

    for term in terms:
        t = term.strip()
        if not t:
            continue

        if t.lower() in lower_text:
            examples = collect_matching_lines(text, t, MAX_EXAMPLES_PER_TERM_PER_FILE)

            # Normal categorization based on the term
            cat, conf = categorize_term(t)

            # 🔥 Override to Foveated Rendering if the matched content shows foveation
            cat2, override_reason = override_category_if_needed(t, cat, examples)
            if override_reason:
                conf = override_reason  # replace confidence with explicit reason

            hits.append({
                "term": t,
                "category": cat2,
                "category_confidence": conf,
                "examples": examples
            })

    return hits


def pick_primary_category(non_enablement_categories: List[str]) -> Optional[str]:
    if not non_enablement_categories:
        return None
    # Use priority order; if category not found, push to end alphabetically
    rank = {c: i for i, c in enumerate(CATEGORY_PRIORITY)}
    return sorted(non_enablement_categories, key=lambda c: (rank.get(c, 10_000), c.lower()))[0]


FOVEATION_HINTS = ("foveat", "foveation", "foveated")

def is_foveation_text(s: str) -> bool:
    sl = s.lower()
    return any(h in sl for h in FOVEATION_HINTS)

def override_category_if_needed(term: str, cat: str, examples: List[str]) -> Tuple[str, str]:
    """
    If the term or any example line indicates foveation, force the category
    to Foveated Rendering even if the term was EyeTracked/Enablement.
    """
    if is_foveation_text(term):
        return "Foveated Rendering", "override(term_contains_foveat)"

    for line in examples:
        if is_foveation_text(line):
            return "Foveated Rendering", "override(line_contains_foveat)"

    return cat, None  # no override


def main():
    script_dir = pathlib.Path(__file__).resolve().parent
    repo_root = script_dir.parent

    scan_results_dir = repo_root / "scan-results"
    terms_path = script_dir / "search_terms.txt"

    # Separate output folder
    out_root = repo_root / "scan-results-app-categorized"
    out_root.mkdir(parents=True, exist_ok=True)

    print("Scan results:", scan_results_dir.resolve(), "exists=", scan_results_dir.exists())
    print("Terms file:", terms_path.resolve(), "exists=", terms_path.exists())
    print("Output folder:", out_root.resolve())

    terms = load_search_terms(terms_path)
    print("Search terms loaded:", len(terms))

    apk_dirs = sorted([p for p in scan_results_dir.iterdir() if p.is_dir()], key=lambda p: p.name.lower())

    csv_rows: List[Dict[str, str]] = []
    enablement_only_apps: List[str] = []

    master_lines: List[str] = []
    if WRITE_MASTER_TXT:
        master_lines.append("# app-category-master.txt")
        master_lines.append("# App-level category assignment from scanning normalized ASCII (.so strings outputs)")
        master_lines.append("# Rule: Eye-Tracking Enablement is ONLY assigned if no other category matches exist for the app.")
        master_lines.append(f"# generated_utc: {datetime.now(timezone.utc).isoformat()}")
        master_lines.append("")
        master_lines.append("")

    for apk_out in apk_dirs:
        normalized_ascii_dir = apk_out / "normalized" / "ascii"
        if not normalized_ascii_dir.exists():
            continue

        txt_files = sorted(list(normalized_ascii_dir.rglob("*.txt")), key=lambda p: str(p).lower())
        if not txt_files:
            continue

        print(f"[+] App-categorizing: {apk_out.name} (txt_files={len(txt_files)})")

        # Aggregate evidence by category
        category_evidence: Dict[str, Dict[str, object]] = {}
        files_with_hits = 0
        total_hits = 0

        for txt in txt_files:
            hits = scan_text_file(txt, terms)
            term_hits = [h for h in hits if h.get("term") is not None]

            if not term_hits:
                continue

            files_with_hits += 1
            total_hits += len(term_hits)

            for h in term_hits:
                cat = h["category"]
                category_evidence.setdefault(cat, {
                    "hit_count": 0,
                    "terms": set(),
                    "sample_lines": []  # type: ignore
                })
                category_evidence[cat]["hit_count"] = int(category_evidence[cat]["hit_count"]) + 1  # type: ignore
                category_evidence[cat]["terms"].add(h["term"])  # type: ignore

                # Keep some evidence lines (bounded)
                sample_lines: List[str] = category_evidence[cat]["sample_lines"]  # type: ignore
                for line in h.get("examples", []):
                    if len(sample_lines) >= MAX_EVIDENCE_LINES_PER_CATEGORY:
                        break
                    # annotate with file
                    sample_lines.append(f"{txt.relative_to(apk_out).as_posix()}: {line}")

        # Determine app categories with the enablement-only rule
        raw_categories = {c for c in category_evidence.keys() if c != UNCATEGORIZED}
        has_enablement = ENABLEMENT_CATEGORY in raw_categories
        non_enablement = sorted([c for c in raw_categories if c != ENABLEMENT_CATEGORY], key=lambda s: s.lower())

        if non_enablement:
            # If any non-enablement exists, app is NOT categorized as enablement (but we keep evidence in JSON)
            app_categories = non_enablement
        else:
            # Only enablement counts if it's the only real matched category
            app_categories = [ENABLEMENT_CATEGORY] if has_enablement else []

        if app_categories == [ENABLEMENT_CATEGORY]:
            enablement_only_apps.append(apk_out.name)

        primary = pick_primary_category(app_categories if app_categories != [ENABLEMENT_CATEGORY] else [])

        # Build per-app JSON
        out_app_dir = out_root / apk_out.name
        out_app_dir.mkdir(parents=True, exist_ok=True)

        # Convert sets to lists for JSON
        category_evidence_json = {}
        for cat, info in category_evidence.items():
            category_evidence_json[cat] = {
                "hit_count": int(info["hit_count"]),  # type: ignore
                "unique_terms": sorted(list(info["terms"]), key=lambda s: s.lower()),  # type: ignore
                "sample_lines": info["sample_lines"],  # type: ignore
            }

        app_summary = {
            "apk": apk_out.name,
            "timestamp_utc": datetime.now(timezone.utc).isoformat(),
            "normalized_ascii_path": str(normalized_ascii_dir.resolve()),
            "summary": {
                "txt_files_scanned": len(txt_files),
                "files_with_hits": files_with_hits,
                "total_term_hits": total_hits,
                "raw_categories_detected": sorted(list(raw_categories), key=lambda s: s.lower()),
                "app_categories_after_enablement_rule": app_categories,
                "primary_category": primary,
                "enablement_only": (app_categories == [ENABLEMENT_CATEGORY]),
            },
            "category_evidence": category_evidence_json
        }

        (out_app_dir / "app_category_summary.json").write_text(
            json.dumps(app_summary, indent=2),
            encoding="utf-8"
        )

        # CSV row per app
        csv_rows.append({
            "apk": apk_out.name,
            "app_categories": ";".join(app_categories),
            "primary_category": primary or "",
            "enablement_only": "1" if (app_categories == [ENABLEMENT_CATEGORY]) else "0",
            "has_enablement_hits": "1" if has_enablement else "0",
            "has_non_enablement_hits": "1" if bool(non_enablement) else "0",
            "txt_files_scanned": str(len(txt_files)),
            "files_with_hits": str(files_with_hits),
            "total_term_hits": str(total_hits),
        })

        # Master evidence (optional)
        if WRITE_MASTER_TXT and app_categories:
            master_lines.append(f"===== APP: {apk_out.name} =====")
            master_lines.append(f"Assigned categories: {', '.join(app_categories) if app_categories else '(none)'}")
            master_lines.append(f"Primary (non-enablement): {primary or '(n/a)'}")
            master_lines.append(f"Enablement-only: {'YES' if (app_categories == [ENABLEMENT_CATEGORY]) else 'NO'}")
            master_lines.append("")

            # Print evidence for assigned categories (and include enablement evidence if it existed but was dropped)
            cats_to_show = list(app_categories)
            if has_enablement and ENABLEMENT_CATEGORY not in cats_to_show:
                cats_to_show.append(ENABLEMENT_CATEGORY)  # show as "dropped but present"

            for cat in cats_to_show:
                if cat not in category_evidence_json:
                    continue
                suffix = " (present but NOT assigned)" if (cat == ENABLEMENT_CATEGORY and ENABLEMENT_CATEGORY not in app_categories) else ""
                master_lines.append(f"  [CATEGORY] {cat}{suffix}")
                master_lines.append(f"    hit_count={category_evidence_json[cat]['hit_count']}, "
                                    f"unique_terms={len(category_evidence_json[cat]['unique_terms'])}")
                # show a few sample lines
                for line in category_evidence_json[cat]["sample_lines"][:MAX_EVIDENCE_LINES_PER_CATEGORY]:
                    master_lines.append(f"      {line}")
                master_lines.append("")
            master_lines.append("")

    # Write global CSV
    if WRITE_APP_CSV:
        csv_path = out_root / "app_category_summary.csv"
        with csv_path.open("w", newline="", encoding="utf-8") as f:
            writer = csv.DictWriter(
                f,
                fieldnames=[
                    "apk", "app_categories", "primary_category",
                    "enablement_only", "has_enablement_hits", "has_non_enablement_hits",
                    "txt_files_scanned", "files_with_hits", "total_term_hits"
                ]
            )
            writer.writeheader()
            writer.writerows(csv_rows)
        print(f"[+] Wrote app CSV: {csv_path.resolve()}")

    # Write enablement-only list
    enablement_only_path = out_root / "enablement_only_apps.txt"
    enablement_only_path.write_text(
        "\n".join(enablement_only_apps) + ("\n" if enablement_only_apps else ""),
        encoding="utf-8"
    )
    print(f"[+] Wrote enablement-only list: {enablement_only_path.resolve()}")

    # Write master text
    if WRITE_MASTER_TXT:
        master_path = out_root / "app-category-master.txt"
        master_path.write_text("\n".join(master_lines) + "\n", encoding="utf-8")
        print(f"[+] Wrote master evidence report: {master_path.resolve()}")

if __name__ == "__main__":
    main()