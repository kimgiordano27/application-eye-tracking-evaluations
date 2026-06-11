import pathlib
import json
from datetime import datetime

# ============================================================
# PATH CONFIG
# ============================================================

MANIFEST_DIR = pathlib.Path("./manifests")
OUTPUT_DIR = pathlib.Path("./manifest-scan-results")
SEARCH_TERMS_FILE = pathlib.Path("search_terms.txt")

OUTPUT_DIR.mkdir(parents=True, exist_ok=True)


# ============================================================
# LOAD SEARCH TERMS (CASE SENSITIVE)
# ============================================================

def load_search_terms():
    terms = []
    for line in SEARCH_TERMS_FILE.read_text(encoding="utf-8").splitlines():
        line = line.strip()
        if line:
            terms.append(line)
    return terms


# ============================================================
# SCAN SINGLE FILE: RETURN ALL HITS + FIRST HIT
# ============================================================

def scan_file_for_all_hits(path: pathlib.Path, terms):
    try:
        text = path.read_text(encoding="utf-8", errors="ignore")
    except Exception as e:
        return {
            "read_error": str(e),
            "hits": [],
            "first_match_term": None,
            "tag_present": False,
        }

    hits = []
    first_match = None

    for term in terms:
        if term in text:  # case-sensitive
            hits.append(term)
            if first_match is None:
                first_match = term

    return {
        "read_error": None,
        "hits": hits,
        "first_match_term": first_match,
        "tag_present": len(hits) > 0,
    }


# ============================================================
# MAIN (APP-LEVEL, MANIFEST-ONLY)
# ============================================================

def main():
    terms = load_search_terms()
    print(f"Loaded {len(terms)} search terms")

    apps_with_tag = []
    apps_without_tag = []
    per_app_results = []

    # Only consider immediate subdirectories as apps
    app_dirs = sorted([p for p in MANIFEST_DIR.iterdir() if p.is_dir()])

    for app_dir in app_dirs:
        app_name = app_dir.name
        manifest_path = app_dir / "AndroidManifest.xml"

        if not manifest_path.exists():
            # If your structure ever changes, you can add a fallback find here
            result = {
                "app": app_name,
                "manifest_file": str(manifest_path),
                "tag_present": False,
                "first_match_term": None,
                "hits": [],
                "read_error": "AndroidManifest.xml not found",
            }
            apps_without_tag.append(app_name)
            per_app_results.append(result)
            continue

        scan = scan_file_for_all_hits(manifest_path, terms)

        result = {
            "app": app_name,
            "manifest_file": str(manifest_path),
            "tag_present": scan["tag_present"],
            "first_match_term": scan["first_match_term"],
            "hits": scan["hits"],               # ALL hits encountered in manifest
            "read_error": scan["read_error"],   # None if OK
        }

        per_app_results.append(result)

        if scan["tag_present"]:
            apps_with_tag.append(app_name)
        else:
            apps_without_tag.append(app_name)

    timestamp = datetime.now().strftime("%Y-%m-%d_%H-%M-%S")

    # JSON output
    output_payload = {
        "meta": {
            "timestamp": timestamp,
            "manifest_dir": str(MANIFEST_DIR),
            "search_terms_file": str(SEARCH_TERMS_FILE),
            "terms_count": len(terms),
            "apps_scanned": len(app_dirs),
            "apps_with_tag_count": len(apps_with_tag),
            "apps_without_tag_count": len(apps_without_tag),
        },
        "apps": per_app_results,
    }

    output_json = OUTPUT_DIR / f"manifest_only_scan_{timestamp}.json"
    output_json.write_text(json.dumps(output_payload, indent=2), encoding="utf-8")

    # TXT summary output (exact format you asked for)
    output_txt = OUTPUT_DIR / f"manifest_only_summary_{timestamp}.txt"
    lines = []
    lines.append("eye tracking tag in manifest:")
    lines.extend(sorted(apps_with_tag))
    lines.append("")  # blank line
    lines.append("eye tracking tag not in manifest:")
    lines.extend(sorted(apps_without_tag))
    output_txt.write_text("\n".join(lines) + "\n", encoding="utf-8")

    print("\nScan complete.")
    print(f"Apps scanned:              {len(app_dirs)}")
    print(f"Eye-tracking tag present:  {len(apps_with_tag)}")
    print(f"No eye-tracking tag:       {len(apps_without_tag)}")
    print(f"JSON Output: {output_json}")
    print(f"TXT Output:  {output_txt}")


if __name__ == "__main__":
    main()