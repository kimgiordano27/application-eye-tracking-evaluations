#!/usr/bin/env bash

set -uo pipefail

PIPELINE_ROOT="/c/realDesktop/manifest-evaluations/summer-26/ghidra-pipeline"
IL2CPP_FILES_ROOT="$PIPELINE_ROOT/il2cpp-files"

GHIDRA_HEADLESS="/c/Users/kimgiordano27/Downloads/ghidra_12.1.2_PUBLIC_20260605/ghidra_12.1.2_PUBLIC/support/analyzeHeadless.bat"
SCRIPT_DIR="$PIPELINE_ROOT/ghidra-export-scripts"

JAVA_SCRIPT="GeneralStructureEyePatternScan.java"

# Leave empty to scan all applications.
# Example:
# ONLY_APP="waitwhat"
ONLY_APP="DiscGolf"

# Resume from this application and continue with every app after it.
# Leave empty to start from the first application.
START_APP=""

# 35 = exports borderline + likely + high
# 50 = likely + high only
# 70 = high only
MIN_REVIEW_SCORE=70

# Set true only if you want every decompiled function exported.
EXPORT_ALL=false

to_win_path() {
    cygpath -w "$1"
}

echo "=========================================="
echo "General structure scan in Ghidra"
echo "=========================================="
echo "Pipeline root:        $PIPELINE_ROOT"
echo "IL2CPP files root:    $IL2CPP_FILES_ROOT"
echo "Ghidra headless:      $GHIDRA_HEADLESS"
echo "Script dir:           $SCRIPT_DIR"
echo "Java script:          $JAVA_SCRIPT"
echo "Only app:             ${ONLY_APP:-ALL APPS}"
echo "Start app:            ${START_APP:-FIRST APP}"
echo "Min review score:     $MIN_REVIEW_SCORE"
echo "Export all functions: $EXPORT_ALL"
echo ""

if [[ ! -f "$GHIDRA_HEADLESS" ]]; then
    echo "ERROR: analyzeHeadless.bat not found:"
    echo "$GHIDRA_HEADLESS"
    exit 1
fi

if [[ ! -f "$SCRIPT_DIR/$JAVA_SCRIPT" ]]; then
    echo "ERROR: $JAVA_SCRIPT not found:"
    echo "$SCRIPT_DIR/$JAVA_SCRIPT"
    exit 1
fi

success_count=0
skip_count=0
fail_count=0
processed_count=0

start_reached=false

if [[ -z "$START_APP" ]]; then
    start_reached=true
fi

for app_folder in "$IL2CPP_FILES_ROOT"/*; do
    if [[ ! -d "$app_folder" ]]; then
        continue
    fi

    app_name="$(basename "$app_folder")"

    # Skip applications until START_APP is reached.
    if [[ "$start_reached" == false ]]; then
        if [[ "$app_name" == "$START_APP" ]]; then
            start_reached=true
        else
            continue
        fi
    fi

    if [[ -n "$ONLY_APP" && "$app_name" != "$ONLY_APP" ]]; then
        continue
    fi

    ((processed_count++))

    ghidra_project_dir="$app_folder/ghidra-project-$app_name"
    ghidra_project_file="$ghidra_project_dir/$app_name.gpr"
    program_name="$app_name-libil2cpp.so"

    output_dir="$app_folder/general-structure-results"
    log_file="$app_folder/general-structure-ghidra.log"

    echo "------------------------------------------"
    echo "App: $app_name"

    if [[ ! -d "$ghidra_project_dir" ]]; then
        echo "SKIP: Missing Ghidra project folder:"
        echo "$ghidra_project_dir"
        ((skip_count++))
        echo ""
        continue
    fi

    if [[ ! -f "$ghidra_project_file" ]]; then
        echo "SKIP: Missing Ghidra project file:"
        echo "$ghidra_project_file"
        ((skip_count++))
        echo ""
        continue
    fi

    # Remove any partial results before rerunning the application.
    rm -rf "$output_dir"
    mkdir -p "$output_dir"

    ghidra_project_dir_win="$(to_win_path "$ghidra_project_dir")"
    script_dir_win="$(to_win_path "$SCRIPT_DIR")"
    output_dir_win="$(to_win_path "$output_dir")"
    log_file_win="$(to_win_path "$log_file")"

    echo "Project dir:   $ghidra_project_dir"
    echo "Project file:  $ghidra_project_file"
    echo "Project name:  $app_name"
    echo "Program name:  $program_name"
    echo "Output dir:    $output_dir"
    echo "Log file:      $log_file"
    echo ""

    "$GHIDRA_HEADLESS" \
        "$ghidra_project_dir_win" \
        "$app_name" \
        -process "$program_name" \
        -noanalysis \
        -scriptPath "$script_dir_win" \
        -postScript "$JAVA_SCRIPT" \
            "$output_dir_win" \
            "$MIN_REVIEW_SCORE" \
            "$EXPORT_ALL" \
        -log "$log_file_win" \
        < /dev/null

    exit_code=$?

    report_csv="$output_dir/structure_scan_report.csv"
    report_json="$output_dir/structure_scan_report.json"
    summary_file="$output_dir/_scan_summary.txt"

    if [[ -f "$report_csv" &&
          -f "$report_json" &&
          -f "$summary_file" ]]; then

        if [[ $exit_code -eq 0 ]]; then
            echo "SUCCESS: General structure scan completed for $app_name"
        else
            echo "WARNING: Ghidra returned exit code $exit_code, but output files were created."
            echo "Treating scan as completed. Check the log if results look suspicious:"
            echo "$log_file"
        fi

        date > "$app_folder/general-structure-scan-complete.txt"
        rm -f "$app_folder/general-structure-scan-failed.txt"
        ((success_count++))
    else
        echo "FAILED: General structure scan failed for $app_name"
        echo "Expected output files were not created."
        echo "Check log:"
        echo "$log_file"

        date > "$app_folder/general-structure-scan-failed.txt"
        ((fail_count++))
    fi

    echo ""
done

if [[ -n "$START_APP" && "$start_reached" == false ]]; then
    echo "ERROR: START_APP was not found:"
    echo "$START_APP"
    exit 1
fi

echo "=========================================="
echo "General structure scan complete"
echo "=========================================="
echo "Processed apps:   $processed_count"
echo "Successful scans: $success_count"
echo "Skipped apps:     $skip_count"
echo "Failed scans:     $fail_count"