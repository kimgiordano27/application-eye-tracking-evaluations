#!/usr/bin/env python3
"""
make-manual-review-pack.py

Takes the output from GeneralStructureEyePatternScan.java and creates a
manual inspection package.

Input:
    general-structure-results/
        structure_scan_report.csv
        exported .c files in score/label folders

Output:
    manual-review-pack/
        manual_review_index.csv
        manual_review_index.json
        manual_review_summary.md
        A_must_review/
        B_high_priority/
        C_likely_review/
        D_borderline/
        chatgpt_upload_batches/

This script does NOT call an API.
It uses scoring to help you decide which files to manually inspect or upload
to ChatGPT Plus.

Usage:
    python make-manual-review-pack.py \
        /c/realDesktop/manifest-evaluations/summer-26/ghidra-pipeline/il2cpp-files/FruitBladeVR/general-structure-results \
        /c/realDesktop/manifest-evaluations/summer-26/ghidra-pipeline/il2cpp-files/FruitBladeVR/manual-review-pack

Common:
    python make-manual-review-pack.py INPUT_RESULTS_DIR OUT_DIR --top 75
    python make-manual-review-pack.py INPUT_RESULTS_DIR OUT_DIR --top 50 --min-priority 80
    python make-manual-review-pack.py INPUT_RESULTS_DIR OUT_DIR --batch-size 3 --max-chars-per-function 9000
"""

import argparse
import csv
import json
import re
import shutil
from pathlib import Path
from typing import Any, Dict, List, Tuple


EYE_KEYWORD_RE = re.compile(
    r"(eye|gaze|EyeGaze|OVREye|EyeTracking|EyeTracked|leftEye|rightEye|pupil|fovea|foveation|XR_EXT_eye_gaze_interaction|OculusFoveation)",
    re.IGNORECASE,
)

SDK_KEYWORD_RE = re.compile(
    r"(OVRPlugin|OVRManager|OpenXR|UnityOpenXR|XRSettings|InputDevice|ActionState|ActionSet|FeatureValue)",
    re.IGNORECASE,
)

COLLECTION_KEYWORD_RE = re.compile(
    r"(StreamWriter|BinaryWriter|TextWriter|FileStream|WriteLine|WriteAllText|AppendAllText|Flush|Close|persistentDataPath|\.csv|\.json|Telemetry|Analytics|SendEvent|LogEvent|UnityWebRequest|Upload|Post|Request)",
    re.IGNORECASE,
)

GENERIC_NEGATIVE_RE = re.compile(
    r"(controller|Controller|hand|Hand|head|Head|camera|Camera|mouse|Mouse)",
    re.IGNORECASE,
)


SINK_MODULES = {
    "ray_interaction",
    "data_collection",
    "telemetry",
    "foveation_rendering",
    "ui_interaction",
}

GENERAL_STRUCTURE_MODULES = {
    "source_state",
    "validity_gate",
    "pose_vector",
}


MODULE_BONUSES = {
    # General structure pieces.
    "source_state": 8,
    "validity_gate": 8,
    "pose_vector": 10,
    "paired_state_refs": 8,
    "frame_behavior": 5,

    # Sinks / uses.
    "ray_interaction": 15,
    "data_collection": 22,
    "telemetry": 20,
    "foveation_rendering": 20,
    "ui_interaction": 12,

    # Supporting, not required.
    "keyword_support": 12,
    "structure_combo": 18,
}


EVIDENCE_BONUSES = {
    "full_general_sensor_structure": 25,
    "validity_gate_then_pose_then_sink": 18,
    "pose_vector_used_by_sink": 14,
    "eye_or_gaze_keyword_boost": 12,
    "nearby_consecutive_field_accesses_possible_pair": 8,
    "repeated_pose_getters": 8,
    "data_logging_hits": 12,
    "telemetry_or_network_hits": 12,
    "foveation_or_rendering_hits": 12,
    "ray_interaction_hits": 10,
    "ui_interaction_hits": 8,
}


BATCH_INSTRUCTIONS = """
You are reviewing decompiled IL2CPP/Ghidra pseudocode for possible eye-tracking functionality.

Use the scanner score only as a prioritization hint. Make your decision from the code.

Important:
- Do not rely only on eye/gaze/OVR/OpenXR names.
- Focus on general behavior and structure first.
- Eye-specific names are supporting evidence, not required.
- A generic camera raycast, controller raycast, head raycast, or normal UI function should NOT be labeled eye tracking unless there is supporting evidence.
- Be conservative.

Look for this general structure:
1. sensor/state/feature data is retrieved or checked,
2. validity/confidence/enabled/permission checks gate behavior,
3. pose/vector/direction/rotation/position data is extracted,
4. the data is used for ray interaction, UI selection, rendering/foveation, logging, file writing, telemetry, analytics, or networking.

Return one JSON object per function using this schema:
{
  "rank": 1,
  "function_name": "string",
  "uses_eye_tracking": "yes | no | uncertain",
  "category": "gaze_retrieval | permission_setup | gaze_interaction | data_collection | foveated_rendering | telemetry | setup_only | unrelated | uncertain",
  "confidence": 0.0,
  "depends_on_eye_specific_names": true,
  "general_structure_match": true,
  "evidence": ["specific evidence from the code"],
  "reasoning_summary": "brief explanation"
}

Return JSONL only, one JSON object per line.
Do not use markdown fences.
""".strip()


def split_semicolon(value: str) -> List[str]:
    if not value:
        return []

    return [item.strip() for item in value.split(";") if item.strip()]


def safe_int(value: Any, default: int = 0) -> int:
    try:
        return int(str(value).strip())
    except Exception:
        return default


def normalize_path(path_value: str) -> Path:
    """
    Handles both Windows paths like C:\\realDesktop\\...
    and Git Bash paths like /c/realDesktop/...
    """

    p = Path(path_value)

    if p.exists():
        return p

    # Convert Windows path to Git Bash style.
    m = re.match(r"^([A-Za-z]):\\(.*)$", path_value)

    if m:
        drive = m.group(1).lower()
        rest = m.group(2).replace("\\", "/")
        alt = Path(f"/{drive}/{rest}")

        if alt.exists():
            return alt

    # Convert Git Bash path to Windows style.
    m = re.match(r"^/([A-Za-z])/(.*)$", path_value)

    if m:
        drive = m.group(1).upper()
        rest = m.group(2).replace("/", "\\")
        alt = Path(f"{drive}:\\{rest}")

        if alt.exists():
            return alt

    return p


def read_text_if_exists(path_value: str) -> str:
    if not path_value:
        return ""

    p = normalize_path(path_value)

    if not p.exists():
        return ""

    return p.read_text(encoding="utf-8", errors="replace")


def count_limited(pattern: re.Pattern, text: str, limit: int) -> int:
    count = 0

    for _ in pattern.finditer(text):
        count += 1

        if count >= limit:
            return limit

    return count


def evidence_contains(evidence: List[str], needle: str) -> bool:
    return any(needle in item for item in evidence)


def has_general_structure(modules: List[str], evidence: List[str]) -> bool:
    module_set = set(modules)

    has_core_modules = GENERAL_STRUCTURE_MODULES.issubset(module_set)
    has_sink = bool(module_set.intersection(SINK_MODULES))

    has_combo_evidence = (
        evidence_contains(evidence, "full_general_sensor_structure")
        or evidence_contains(evidence, "validity_gate_then_pose_then_sink")
        or evidence_contains(evidence, "pose_vector_used_by_sink")
    )

    return (has_core_modules and has_sink) or has_combo_evidence


def compute_manual_priority(row: Dict[str, str], text: str) -> Tuple[int, List[str], str]:
    """
    Creates a manual review priority score.

    This is intentionally general-structure-first:
    - core structure and sink behavior get the largest bonuses
    - collection / telemetry / foveation sinks get strong bonuses
    - eye keywords are only supporting evidence
    """

    base_score = safe_int(row.get("score", "0"))
    modules = split_semicolon(row.get("modules", ""))
    evidence = split_semicolon(row.get("evidence", ""))

    priority = base_score
    reasons: List[str] = []

    reasons.append(f"base_scanner_score_{base_score}")

    module_set = set(modules)

    for module in modules:
        bonus = MODULE_BONUSES.get(module, 0)

        if bonus:
            priority += bonus
            reasons.append(f"module_bonus_{module}_{bonus}")

    for ev in evidence:
        for needle, bonus in EVIDENCE_BONUSES.items():
            if needle in ev:
                priority += bonus
                reasons.append(f"evidence_bonus_{needle}_{bonus}")
                break

    general_structure = has_general_structure(modules, evidence)

    if general_structure:
        priority += 25
        reasons.append("general_structure_first_bonus_25")

    # Stronger priority for actual sinks.
    if "data_collection" in module_set:
        priority += 15
        reasons.append("sensitive_sink_data_collection_bonus_15")

    if "telemetry" in module_set:
        priority += 15
        reasons.append("sensitive_sink_telemetry_bonus_15")

    if "foveation_rendering" in module_set:
        priority += 12
        reasons.append("sensitive_sink_foveation_bonus_12")

    # Keyword support. Helpful but not required.
    eye_keyword_count = count_limited(EYE_KEYWORD_RE, text, 5)
    sdk_keyword_count = count_limited(SDK_KEYWORD_RE, text, 4)
    collection_keyword_count = count_limited(COLLECTION_KEYWORD_RE, text, 4)

    if eye_keyword_count > 0:
        bonus = min(20, eye_keyword_count * 4)
        priority += bonus
        reasons.append(f"keyword_support_eye_or_gaze_{eye_keyword_count}_bonus_{bonus}")

    if sdk_keyword_count > 0:
        bonus = min(12, sdk_keyword_count * 3)
        priority += bonus
        reasons.append(f"keyword_support_sdk_{sdk_keyword_count}_bonus_{bonus}")

    if collection_keyword_count > 0:
        bonus = min(16, collection_keyword_count * 4)
        priority += bonus
        reasons.append(f"keyword_support_collection_or_telemetry_{collection_keyword_count}_bonus_{bonus}")

    # Mild negative for generic camera/controller/head patterns when they lack stronger support.
    generic_count = count_limited(GENERIC_NEGATIVE_RE, text, 3)

    if generic_count > 0 and eye_keyword_count == 0 and not general_structure:
        priority -= 15
        reasons.append("negative_generic_camera_controller_head_without_eye_or_structure_-15")

    tier = choose_tier(priority)

    return priority, reasons, tier


def choose_tier(priority: int) -> str:
    if priority >= 160:
        return "A_must_review"
    if priority >= 125:
        return "B_high_priority"
    if priority >= 90:
        return "C_likely_review"
    if priority >= 60:
        return "D_borderline"
    return "E_low_context"


def safe_filename(name: str, max_len: int = 160) -> str:
    safe = re.sub(r"[^A-Za-z0-9_$.\-]+", "_", name)

    if len(safe) > max_len:
        safe = safe[:max_len]

    return safe


def load_report(report_csv: Path) -> List[Dict[str, str]]:
    with report_csv.open("r", encoding="utf-8", errors="replace", newline="") as f:
        reader = csv.DictReader(f)
        return list(reader)


def copy_candidate_file(src_value: str, out_dir: Path, rank: int, priority: int, tier: str, function_name: str) -> str:
    src = normalize_path(src_value)

    if not src.exists():
        return ""

    tier_dir = out_dir / tier
    tier_dir.mkdir(parents=True, exist_ok=True)

    dest_name = f"{rank:03d}_p{priority}_{safe_filename(function_name)}.c"
    dest = tier_dir / dest_name

    shutil.copy2(src, dest)

    return str(dest)


def shorten_text(text: str, max_chars: int) -> str:
    if len(text) <= max_chars:
        return text

    half = max_chars // 2
    return (
        text[:half]
        + "\n\n/* ... MIDDLE OF FUNCTION OMITTED FOR UPLOAD SIZE ... */\n\n"
        + text[-half:]
    )


def make_batch_block(item: Dict[str, Any], max_chars_per_function: int) -> str:
    function_text = read_text_if_exists(item.get("file_path", ""))
    function_text = shorten_text(function_text, max_chars_per_function)

    return f"""
============================================================
RANK: {item["rank"]}
FUNCTION_NAME: {item["function_name"]}
ENTRY_POINT: {item.get("entry_point", "")}
MANUAL_PRIORITY_SCORE: {item["manual_priority_score"]}
MANUAL_TIER: {item["manual_tier"]}
ORIGINAL_SCANNER_SCORE: {item["scanner_score"]}
ORIGINAL_SCANNER_LABEL: {item["scanner_label"]}
MODULES: {item["modules"]}
EVIDENCE: {item["evidence"]}
PRIORITY_REASONS: {item["priority_reasons"]}
SOURCE_FILE: {item["file_path"]}
COPIED_FILE: {item["copied_file"]}
============================================================

BEGIN_DECOMPILED_FUNCTION
{function_text}
END_DECOMPILED_FUNCTION
""".strip()


def write_chatgpt_batches(
    selected: List[Dict[str, Any]],
    out_dir: Path,
    batch_size: int,
    max_chars_per_batch: int,
    max_chars_per_function: int,
) -> None:
    batch_dir = out_dir / "chatgpt_upload_batches"
    batch_dir.mkdir(parents=True, exist_ok=True)

    batch_index = 1
    current_parts = [BATCH_INSTRUCTIONS]
    current_chars = len(BATCH_INSTRUCTIONS)
    current_count = 0

    for item in selected:
        block = make_batch_block(item, max_chars_per_function)
        block_len = len(block)

        should_flush = (
            current_count > 0
            and (
                current_count >= batch_size
                or current_chars + block_len > max_chars_per_batch
            )
        )

        if should_flush:
            path = batch_dir / f"manual_review_batch_{batch_index:03d}.txt"
            path.write_text("\n\n".join(current_parts), encoding="utf-8")
            batch_index += 1
            current_parts = [BATCH_INSTRUCTIONS]
            current_chars = len(BATCH_INSTRUCTIONS)
            current_count = 0

        current_parts.append(block)
        current_chars += block_len
        current_count += 1

    if current_count > 0:
        path = batch_dir / f"manual_review_batch_{batch_index:03d}.txt"
        path.write_text("\n\n".join(current_parts), encoding="utf-8")


def write_index_csv(path: Path, rows: List[Dict[str, Any]]) -> None:
    fieldnames = [
        "rank",
        "manual_priority_score",
        "manual_tier",
        "function_name",
        "entry_point",
        "scanner_score",
        "scanner_label",
        "modules",
        "evidence",
        "priority_reasons",
        "file_path",
        "copied_file",
    ]

    with path.open("w", encoding="utf-8", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=fieldnames)
        writer.writeheader()

        for row in rows:
            out = dict(row)

            for key in ["modules", "evidence", "priority_reasons"]:
                if isinstance(out.get(key), list):
                    out[key] = "; ".join(str(x) for x in out[key])

            writer.writerow({key: out.get(key, "") for key in fieldnames})


def write_summary(path: Path, rows: List[Dict[str, Any]], app_name: str) -> None:
    tier_counts: Dict[str, int] = {}

    for row in rows:
        tier = row["manual_tier"]
        tier_counts[tier] = tier_counts.get(tier, 0) + 1

    lines = []
    lines.append(f"# Manual Review Pack Summary: {app_name}")
    lines.append("")
    lines.append(f"Selected functions: {len(rows)}")
    lines.append("")
    lines.append("## Tier counts")
    lines.append("")

    for tier in ["A_must_review", "B_high_priority", "C_likely_review", "D_borderline", "E_low_context"]:
        if tier in tier_counts:
            lines.append(f"- {tier}: {tier_counts[tier]}")

    lines.append("")
    lines.append("## Top functions")
    lines.append("")

    for row in rows[:30]:
        lines.append(f"### {row['rank']}. {row['function_name']}")
        lines.append("")
        lines.append(f"- Manual priority score: {row['manual_priority_score']}")
        lines.append(f"- Manual tier: {row['manual_tier']}")
        lines.append(f"- Original scanner score: {row['scanner_score']}")
        lines.append(f"- Original scanner label: {row['scanner_label']}")
        lines.append(f"- Modules: {'; '.join(row['modules'])}")
        lines.append(f"- Evidence: {'; '.join(row['evidence'])}")
        lines.append(f"- Priority reasons: {'; '.join(row['priority_reasons'][:8])}")
        lines.append(f"- Copied file: {row['copied_file']}")
        lines.append("")

    path.write_text("\n".join(lines), encoding="utf-8")


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Create a ranked manual review pack from Ghidra general structure scan results."
    )

    parser.add_argument("results_dir", help="Path to general-structure-results directory.")
    parser.add_argument("out_dir", help="Output directory for manual review pack.")

    parser.add_argument(
        "--top",
        type=int,
        default=100,
        help="Maximum number of ranked functions to package. Default: 100"
    )

    parser.add_argument(
        "--min-priority",
        type=int,
        default=60,
        help="Minimum manual priority score to include. Default: 60"
    )

    parser.add_argument(
        "--batch-size",
        type=int,
        default=5,
        help="Functions per ChatGPT upload batch. Default: 5"
    )

    parser.add_argument(
        "--max-chars-per-batch",
        type=int,
        default=60000,
        help="Maximum characters per ChatGPT upload batch. Default: 60000"
    )

    parser.add_argument(
        "--max-chars-per-function",
        type=int,
        default=12000,
        help="Maximum characters per function in upload batches. Default: 12000"
    )

    parser.add_argument(
        "--no-copy",
        action="store_true",
        help="Do not copy .c files into tier folders."
    )

    parser.add_argument(
        "--no-batches",
        action="store_true",
        help="Do not create ChatGPT upload batch .txt files."
    )

    args = parser.parse_args()

    results_dir = Path(args.results_dir)
    out_dir = Path(args.out_dir)

    report_csv = results_dir / "structure_scan_report.csv"

    if not report_csv.exists():
        raise FileNotFoundError(f"Could not find report CSV: {report_csv}")

    out_dir.mkdir(parents=True, exist_ok=True)

    app_name = results_dir.parent.name
    report_rows = load_report(report_csv)

    scored_rows: List[Dict[str, Any]] = []

    for row in report_rows:
        file_path = row.get("file_path", "")
        function_text = read_text_if_exists(file_path)

        priority, reasons, tier = compute_manual_priority(row, function_text)

        if priority < args.min_priority:
            continue

        modules = split_semicolon(row.get("modules", ""))
        evidence = split_semicolon(row.get("evidence", ""))

        item: Dict[str, Any] = {
            "rank": 0,
            "manual_priority_score": priority,
            "manual_tier": tier,
            "function_name": row.get("function_name", ""),
            "entry_point": row.get("entry_point", ""),
            "scanner_score": safe_int(row.get("score", "0")),
            "scanner_label": row.get("label", ""),
            "modules": modules,
            "evidence": evidence,
            "priority_reasons": reasons,
            "file_path": file_path,
            "copied_file": "",
        }

        scored_rows.append(item)

    scored_rows.sort(
        key=lambda item: (
            item["manual_priority_score"],
            item["scanner_score"],
            item["function_name"],
        ),
        reverse=True,
    )

    selected = scored_rows[: args.top]

    for index, item in enumerate(selected, start=1):
        item["rank"] = index

    if not args.no_copy:
        for item in selected:
            item["copied_file"] = copy_candidate_file(
                src_value=item["file_path"],
                out_dir=out_dir,
                rank=item["rank"],
                priority=item["manual_priority_score"],
                tier=item["manual_tier"],
                function_name=item["function_name"],
            )

    write_index_csv(out_dir / "manual_review_index.csv", selected)

    (out_dir / "manual_review_index.json").write_text(
        json.dumps(selected, indent=2),
        encoding="utf-8"
    )

    write_summary(out_dir / "manual_review_summary.md", selected, app_name)

    if not args.no_batches:
        write_chatgpt_batches(
            selected=selected,
            out_dir=out_dir,
            batch_size=args.batch_size,
            max_chars_per_batch=args.max_chars_per_batch,
            max_chars_per_function=args.max_chars_per_function,
        )

    print("Manual review pack created.")
    print(f"App: {app_name}")
    print(f"Input report rows: {len(report_rows)}")
    print(f"Rows above min priority {args.min_priority}: {len(scored_rows)}")
    print(f"Selected top rows: {len(selected)}")
    print(f"Output directory: {out_dir}")
    print()
    print("Open these first:")
    print(out_dir / "manual_review_summary.md")
    print(out_dir / "manual_review_index.csv")
    print(out_dir / "chatgpt_upload_batches")


if __name__ == "__main__":
    main()
