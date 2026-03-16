from pathlib import Path
import csv
import re

# ---------------------------------------------------------------------
# INPUT FILES
# ---------------------------------------------------------------------
APP_FUNCTIONALITY_TXT = Path(
    r"..\scan-results\app_functionality.txt"
)

MANIFEST_SUMMARY_TXT = Path(
    r"..\manifest-scan-results\manifest_only_summary_2026-03-02_12-31-24.txt"
)

# ---------------------------------------------------------------------
# OUTPUT FILE
# ---------------------------------------------------------------------
OUT_CSV = Path(
    r"..\scan-results\app_eye_tracking_visual_matrix.csv"
)

# ---------------------------------------------------------------------
# HELPERS
# ---------------------------------------------------------------------
def normalize_name(name: str) -> str:
    """Normalize an app/file name for consistent matching."""
    return name.strip()


def parse_app_functionality(path: Path):
    """
    Parse blocks like:

    app_name-decoded:
      - Category A
      - Category B
    """
    app_to_categories = {}
    all_categories = set()

    current_app = None

    with path.open("r", encoding="utf-8") as f:
        for raw_line in f:
            line = raw_line.rstrip("\n").rstrip("\r")

            # Match app header line: "something-decoded:"
            if line.strip().endswith(":") and not line.strip().startswith("-"):
                current_app = normalize_name(line.strip()[:-1])
                if current_app not in app_to_categories:
                    app_to_categories[current_app] = set()
                continue

            # Match category line: "  - Some Category"
            stripped = line.strip()
            if stripped.startswith("-") and current_app is not None:
                category = stripped[1:].strip()
                if category:
                    app_to_categories[current_app].add(category)
                    all_categories.add(category)

    return app_to_categories, sorted(all_categories)


def parse_manifest_summary(path: Path):
    """
    Parse sections like:

    eye tracking tag in manifest:
    app1
    app2

    eye tracking tag not in manifest:
    app3
    app4
    """
    in_manifest = set()
    not_in_manifest = set()

    current_section = None

    with path.open("r", encoding="utf-8") as f:
        for raw_line in f:
            line = raw_line.strip()

            if not line:
                continue

            lower = line.lower()

            if lower.startswith("eye tracking tag in manifest"):
                current_section = "in"
                continue

            if lower.startswith("eye tracking tag not in manifest"):
                current_section = "not_in"
                continue

            # Skip lines that are clearly not app names
            if line.endswith(":"):
                continue

            app_name = normalize_name(line)

            if current_section == "in":
                in_manifest.add(app_name)
            elif current_section == "not_in":
                not_in_manifest.add(app_name)

    return in_manifest, not_in_manifest


# ---------------------------------------------------------------------
# MAIN
# ---------------------------------------------------------------------
def main():
    app_to_categories, categories = parse_app_functionality(APP_FUNCTIONALITY_TXT)
    in_manifest, not_in_manifest = parse_manifest_summary(MANIFEST_SUMMARY_TXT)

    # Union of all app names seen in either file
    all_apps = sorted(set(app_to_categories.keys()) | in_manifest | not_in_manifest)

    header = [
        "Decoded File Name",
        "Manifest Eye Tracking Declaration",
    ] + categories

    with OUT_CSV.open("w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow(header)

        for app in all_apps:
            app_categories = app_to_categories.get(app, set())

            in_manifest_value = "Present" if app in in_manifest else "Not Present"
            not_in_manifest_value = "Present" if app in not_in_manifest else "Not Present"

            if app in in_manifest:
                manifest_status = "Eye Tracking Tag In Manifest"
            elif app in not_in_manifest:
                manifest_status = "Eye Tracking Tag Not In Manifest"
            else:
                manifest_status = "not listed in manifest summary"

            row = [
                app,
                manifest_status,
            ]

            for category in categories:
                row.append("Used In App" if category in app_categories else "Not Used In App")

            writer.writerow(row)

    print(f"Done. CSV written to:\n{OUT_CSV}")


if __name__ == "__main__":
    main()