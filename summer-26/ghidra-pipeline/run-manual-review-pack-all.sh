#!/usr/bin/env bash

set -uo pipefail

PIPELINE_ROOT="/c/realDesktop/manifest-evaluations/summer-26/ghidra-pipeline"
IL2CPP_FILES_ROOT="$PIPELINE_ROOT/il2cpp-files"
REVIEW_SCRIPT="$PIPELINE_ROOT/make-manual-review-pack.py"

success_count=0
skip_count=0
fail_count=0

echo "=========================================="
echo "Creating manual review packs"
echo "=========================================="
echo ""

if [[ ! -f "$REVIEW_SCRIPT" ]]; then
    echo "ERROR: Script not found:"
    echo "$REVIEW_SCRIPT"
    exit 1
fi

for app_folder in "$IL2CPP_FILES_ROOT"/*; do
    if [[ ! -d "$app_folder" ]]; then
        continue
    fi

    app_name="$(basename "$app_folder")"

    results_dir="$app_folder/general-structure-results"
    output_dir="$app_folder/manual-review-pack"

    report_csv="$results_dir/structure_scan_report.csv"
    report_json="$results_dir/structure_scan_report.json"
    summary_file="$results_dir/_scan_summary.txt"

    echo "------------------------------------------"
    echo "App: $app_name"

    if [[ ! -d "$results_dir" ]]; then
        echo "SKIP: No general structure results folder."
        ((skip_count++))
        echo ""
        continue
    fi

    if [[ ! -f "$report_csv" ||
          ! -f "$report_json" ||
          ! -f "$summary_file" ]]; then
        echo "SKIP: General structure scan is incomplete."
        ((skip_count++))
        echo ""
        continue
    fi

    rm -rf "$output_dir"
    mkdir -p "$output_dir"

    echo "Results dir: $results_dir"
    echo "Output dir:  $output_dir"
    echo ""

    python "$REVIEW_SCRIPT" \
        "$results_dir" \
        "$output_dir"

    exit_code=$?

    if [[ $exit_code -eq 0 ]]; then
        echo "SUCCESS: Manual review pack created for $app_name"
        ((success_count++))
    else
        echo "FAILED: Manual review pack failed for $app_name"
        ((fail_count++))
    fi

    echo ""
done

echo "=========================================="
echo "Manual review pack generation complete"
echo "=========================================="
echo "Successful: $success_count"
echo "Skipped:    $skip_count"
echo "Failed:     $fail_count"