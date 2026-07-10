#!/usr/bin/env bash

set -uo pipefail

# ============================================================
# Main paths
# ============================================================

PIPELINE_ROOT="/c/realDesktop/manifest-evaluations/summer-26/ghidra-pipeline"
IL2CPP_FILES_ROOT="$PIPELINE_ROOT/il2cpp-files"

GHIDRA_HEADLESS="/c/Users/kimgiordano27/Downloads/ghidra_12.1.2_PUBLIC_20260605/ghidra_12.1.2_PUBLIC/support/analyzeHeadless.bat"

IL2CPP_DUMPER_ROOT="/c/Users/kimgiordano27/Downloads/Il2CppDumper-net6-win-v6.7.46"

# Set to one exact app folder name for testing.
# Set to "" to run all apps.
ONLY_APP=""

# Clean old partial projects before rerun.
# Keep this 1 while debugging.
CLEAN_PROJECT_BEFORE_RUN=1

# Rerun even if SUCCESS.txt already exists.
# Keep this 1 while debugging.
FORCE_RERUN_SUCCESS=1

# Keep this 0 for your intended workflow.
# If set to 1, Ghidra imports but does NOT analyze.
NO_ANALYSIS_TEST_MODE=0

# ============================================================
# Outer timeout settings only
# ============================================================
# These protect the whole Ghidra command.
# There is intentionally NO -analysisTimeoutPerFile in this script.

SMALL_APP_TIMEOUT=1800         # <100 MB: 30 min
MEDIUM_APP_TIMEOUT=7200        # 100-299 MB: 2 hours
LARGE_APP_TIMEOUT=10800        # 300-699 MB: 3 hours
HUGE_APP_TIMEOUT=14400         # 700+ MB: 4 hours

# ============================================================
# Helper functions
# ============================================================

to_win_path() {
    cygpath -w "$1"
}

print_available_apps() {
    echo "Available app folders:"
    local found=0

    for d in "$IL2CPP_FILES_ROOT"/*; do
        if [[ -d "$d" ]]; then
            found=1
            echo "  $(basename "$d")"
        fi
    done

    if [[ "$found" -eq 0 ]]; then
        echo ""
        echo "ERROR: No app folders found inside:"
        echo "$IL2CPP_FILES_ROOT"
        exit 1
    fi
}

append_summary() {
    local app="$1"
    local status="$2"
    local exit_code="$3"
    local lib="$4"
    local script="$5"
    local log="$6"
    local scriptlog="$7"
    local stdoutlog="$8"
    local stderrlog="$9"

    echo "$app,$status,$exit_code,$lib,$script,$log,$scriptlog,$stdoutlog,$stderrlog" >> "$summary_csv"
}

patch_ghidra_script() {
    local original_script="$1"
    local patched_script="$2"

    python - "$original_script" "$patched_script" <<'PY'
import sys
from pathlib import Path

src = Path(sys.argv[1])
dst = Path(sys.argv[2])

text = src.read_text(errors="ignore")
lines = text.splitlines()

out = []
patched = False
skip_next_data_line = False

replacement = [
    'args = getScriptArgs()',
    'if len(args) > 0:',
    '    script_json_path = args[0]',
    'else:',
    '    f = askFile("script.json from Il2cppdumper", "Open")',
    '    script_json_path = f.absolutePath',
    "data = json.loads(open(script_json_path, 'rb').read().decode('utf-8'))",
]

for line in lines:
    if "askFile" in line and "script.json" in line:
        out.extend(replacement)
        patched = True
        skip_next_data_line = True
        continue

    if skip_next_data_line and "f.absolutePath" in line and "json.loads" in line:
        skip_next_data_line = False
        continue

    skip_next_data_line = False
    out.append(line)

dst.write_text("\n".join(out) + "\n")

if patched:
    print(f"Patched script for headless use: {dst}")
else:
    print(f"WARNING: Did not find askFile script.json line in {src}. Copied script anyway.")
PY
}

find_libil2cpp_file() {
    local app_folder="$1"
    local app_name="$2"

    local expected="$app_folder/$app_name-libil2cpp.so"

    if [[ -f "$expected" ]]; then
        echo "$expected"
        return 0
    fi

    local found
    found="$(find "$app_folder" -maxdepth 3 -type f \( -name "$app_name-libil2cpp.so" -o -name "*libil2cpp.so" -o -name "libil2cpp.so" \) | head -n 1)"

    if [[ -n "$found" && -f "$found" ]]; then
        echo "$found"
        return 0
    fi

    return 1
}

find_script_json_file() {
    local app_folder="$1"

    local expected="$app_folder/dump/script.json"

    if [[ -f "$expected" ]]; then
        echo "$expected"
        return 0
    fi

    local found
    found="$(find "$app_folder" -maxdepth 4 -type f -name "script.json" | head -n 1)"

    if [[ -n "$found" && -f "$found" ]]; then
        echo "$found"
        return 0
    fi

    return 1
}

choose_outer_timeout_for_lib() {
    local lib_file="$1"

    lib_size_mb=$(du -m "$lib_file" | cut -f1)

    if (( lib_size_mb < 100 )); then
        app_timeout_seconds="$SMALL_APP_TIMEOUT"
    elif (( lib_size_mb < 300 )); then
        app_timeout_seconds="$MEDIUM_APP_TIMEOUT"
    elif (( lib_size_mb < 700 )); then
        app_timeout_seconds="$LARGE_APP_TIMEOUT"
    else
        app_timeout_seconds="$HUGE_APP_TIMEOUT"
    fi
}

# ============================================================
# Startup checks
# ============================================================

echo "=========================================="
echo "Running Ghidra headless automation"
echo "=========================================="
echo "Pipeline root:      $PIPELINE_ROOT"
echo "IL2CPP files root:  $IL2CPP_FILES_ROOT"
echo "Ghidra headless:    $GHIDRA_HEADLESS"
echo "Il2CppDumper root:  $IL2CPP_DUMPER_ROOT"
echo "Only app:           ${ONLY_APP:-ALL APPS}"
echo "Clean project:      $CLEAN_PROJECT_BEFORE_RUN"
echo "Force rerun:        $FORCE_RERUN_SUCCESS"
echo "No-analysis mode:   $NO_ANALYSIS_TEST_MODE"
echo "Internal timeout:   DISABLED"
echo ""

if [[ ! -d "$IL2CPP_FILES_ROOT" ]]; then
    echo "ERROR: il2cpp-files folder not found:"
    echo "$IL2CPP_FILES_ROOT"
    exit 1
fi

if [[ ! -f "$GHIDRA_HEADLESS" ]]; then
    echo "ERROR: analyzeHeadless.bat was not found at:"
    echo "$GHIDRA_HEADLESS"
    exit 1
fi

if [[ ! -d "$IL2CPP_DUMPER_ROOT" ]]; then
    echo "ERROR: Il2CppDumper folder was not found at:"
    echo "$IL2CPP_DUMPER_ROOT"
    exit 1
fi

if [[ ! -f "$IL2CPP_DUMPER_ROOT/ghidra.py" && ! -f "$IL2CPP_DUMPER_ROOT/ghidra_with_struct.py" ]]; then
    echo "ERROR: Could not find ghidra.py or ghidra_with_struct.py in:"
    echo "$IL2CPP_DUMPER_ROOT"
    exit 1
fi

if ! command -v cygpath >/dev/null 2>&1; then
    echo "ERROR: cygpath command not found."
    echo "Run this from Git Bash/MSYS."
    exit 1
fi

if ! command -v timeout >/dev/null 2>&1; then
    echo "ERROR: timeout command not found."
    echo "Run this from Git Bash or another shell that has GNU timeout."
    exit 1
fi

if ! command -v cmd.exe >/dev/null 2>&1; then
    echo "ERROR: cmd.exe not found from this shell."
    echo "Run this from Git Bash on Windows."
    exit 1
fi

print_available_apps

if [[ -n "$ONLY_APP" && ! -d "$IL2CPP_FILES_ROOT/$ONLY_APP" ]]; then
    echo ""
    echo "ERROR: ONLY_APP is set to '$ONLY_APP', but no exact matching folder exists."
    echo "Use one of the folder names listed above, or set ONLY_APP=\"\" to run all apps."
    exit 1
fi

summary_csv="$PIPELINE_ROOT/ghidra-headless-summary.csv"

if [[ ! -f "$summary_csv" ]]; then
    echo "app,status,exit_code,lib_file,script_json,log_file,script_log_file,stdout_file,stderr_file" > "$summary_csv"
fi

success_count=0
fail_count=0
skip_count=0
timeout_count=0

# ============================================================
# Main loop
# ============================================================

for app_folder in "$IL2CPP_FILES_ROOT"/*; do
    if [[ ! -d "$app_folder" ]]; then
        continue
    fi

    app_name="$(basename "$app_folder")"
    safe_app_name="${app_name//[^A-Za-z0-9._-]/_}"

    if [[ -n "$ONLY_APP" && "$app_name" != "$ONLY_APP" ]]; then
        continue
    fi

    ghidra_project_dir="$app_folder/ghidra-project-$safe_app_name"
    ghidra_script_dir="$app_folder/ghidra-headless-scripts"
    patched_ghidra_py="$ghidra_script_dir/ghidra_headless.py"

    status_dir="$app_folder/ghidra-status"
    log_dir="$app_folder/ghidra-logs"

    log_file="$log_dir/ghidra-headless.log"
    script_log_file="$log_dir/ghidra-script.log"
    stdout_file="$log_dir/ghidra-stdout.log"
    stderr_file="$log_dir/ghidra-stderr.log"

    echo "------------------------------------------"
    echo "App: $app_name"
    echo "Folder: $app_folder"

    mkdir -p "$status_dir" "$log_dir"

    if [[ "$FORCE_RERUN_SUCCESS" -ne 1 && -f "$status_dir/SUCCESS.txt" ]]; then
        echo "SKIP: Already completed successfully."
        ((skip_count++))
        continue
    fi

    if ! lib_file="$(find_libil2cpp_file "$app_folder" "$app_name")"; then
        echo "SKIP: Missing libil2cpp file."
        echo "Missing libil2cpp: $(date)" > "$status_dir/SKIPPED_MISSING_LIBIL2CPP.txt"
        append_summary "$app_name" "SKIPPED_MISSING_LIBIL2CPP" "0" "" "" "" "" "" ""
        ((skip_count++))
        continue
    fi

    if ! script_json="$(find_script_json_file "$app_folder")"; then
        echo "SKIP: Missing script.json."
        echo "Missing script.json: $(date)" > "$status_dir/SKIPPED_MISSING_SCRIPT_JSON.txt"
        append_summary "$app_name" "SKIPPED_MISSING_SCRIPT_JSON" "0" "$lib_file" "" "" "" "" ""
        ((skip_count++))
        continue
    fi

    dump_dir="$(dirname "$script_json")"

    choose_outer_timeout_for_lib "$lib_file"

    echo "libil2cpp file:  $lib_file"
    echo "script.json:     $script_json"
    echo "libil2cpp size:  ${lib_size_mb} MB"
    echo "Outer timeout:   ${app_timeout_seconds} seconds"
    echo "Ghidra internal analysis timeout: DISABLED"

    original_ghidra_py=""

    for candidate in \
        "$dump_dir/ghidra.py" \
        "$IL2CPP_DUMPER_ROOT/ghidra.py" \
        "$dump_dir/ghidra_with_struct.py" \
        "$IL2CPP_DUMPER_ROOT/ghidra_with_struct.py"
    do
        if [[ -f "$candidate" ]]; then
            original_ghidra_py="$candidate"
            break
        fi
    done

    if [[ -z "$original_ghidra_py" || ! -f "$original_ghidra_py" ]]; then
        echo "SKIP: Missing Ghidra Il2CppDumper script."
        echo "Missing Ghidra Il2CppDumper script: $(date)" > "$status_dir/SKIPPED_MISSING_GHIDRA_SCRIPT.txt"
        append_summary "$app_name" "SKIPPED_MISSING_GHIDRA_SCRIPT" "0" "$lib_file" "$script_json" "" "" "" ""
        ((skip_count++))
        continue
    fi

    mkdir -p "$ghidra_script_dir"

    if [[ "$CLEAN_PROJECT_BEFORE_RUN" -eq 1 ]]; then
        echo "Cleaning previous Ghidra project for this app..."
        rm -rf "$ghidra_project_dir"
    fi

    mkdir -p "$ghidra_project_dir"

    echo "Using metadata script:"
    echo "$original_ghidra_py"
    echo "Patching $(basename "$original_ghidra_py") for headless mode..."

    patch_ghidra_script "$original_ghidra_py" "$patched_ghidra_py"

    ghidra_headless_win="$(to_win_path "$GHIDRA_HEADLESS")"
    ghidra_project_dir_win="$(to_win_path "$ghidra_project_dir")"
    lib_file_win="$(to_win_path "$lib_file")"
    script_json_win="$(to_win_path "$script_json")"
    ghidra_script_dir_win="$(to_win_path "$ghidra_script_dir")"
    log_file_win="$(to_win_path "$log_file")"
    script_log_file_win="$(to_win_path "$script_log_file")"

    script_path_win="$ghidra_script_dir_win"

    rm -f "$status_dir/SUCCESS.txt" \
          "$status_dir/FAILED.txt" \
          "$status_dir/TIMEOUT.txt" \
          "$status_dir/STARTED.txt"

    echo "Started: $(date)" > "$status_dir/STARTED.txt"

    echo "Running Ghidra headless..."
    echo "Project dir:     $ghidra_project_dir"
    echo "Program:         $lib_file"
    echo "script.json:     $script_json"
    echo "Ghidra log:      $log_file"
    echo "Script log:      $script_log_file"
    echo "stdout:          $stdout_file"
    echo "stderr:          $stderr_file"
    echo ""

    ghidra_cmd=(
        cmd.exe
        //d
        //c
        "$ghidra_headless_win"
        "$ghidra_project_dir_win"
        "$safe_app_name"
        -import "$lib_file_win"
        -overwrite
    )

    if [[ "$NO_ANALYSIS_TEST_MODE" -eq 1 ]]; then
        ghidra_cmd+=(
            -noanalysis
        )
    fi

    ghidra_cmd+=(
        -scriptPath "$script_path_win"
        -preScript "ghidra_headless.py" "$script_json_win"
        -log "$log_file_win"
        -scriptlog "$script_log_file_win"
    )

    echo "Command preview:"
    printf '  %q' "${ghidra_cmd[@]}"
    echo ""
    echo ""

    timeout --kill-after=60s "$app_timeout_seconds" \
        "${ghidra_cmd[@]}" \
        > "$stdout_file" \
        2> "$stderr_file"

    exit_code=$?

    if [[ $exit_code -eq 0 ]]; then
        echo "SUCCESS: $(date)" > "$status_dir/SUCCESS.txt"
        echo "SUCCESS: Ghidra completed for $app_name"
        append_summary "$app_name" "SUCCESS" "$exit_code" "$lib_file" "$script_json" "$log_file" "$script_log_file" "$stdout_file" "$stderr_file"
        ((success_count++))

    elif [[ $exit_code -eq 124 || $exit_code -eq 137 ]]; then
        echo "TIMEOUT: $(date)" > "$status_dir/TIMEOUT.txt"
        echo "Exit code: $exit_code" >> "$status_dir/TIMEOUT.txt"
        echo "TIMEOUT: Ghidra stalled or exceeded outer limit for $app_name"
        echo "Exit code: $exit_code"
        echo "Check logs:"
        echo "$log_file"
        echo "$script_log_file"
        echo "$stdout_file"
        echo "$stderr_file"
        append_summary "$app_name" "TIMEOUT" "$exit_code" "$lib_file" "$script_json" "$log_file" "$script_log_file" "$stdout_file" "$stderr_file"
        ((timeout_count++))

    else
        echo "FAILED: $(date)" > "$status_dir/FAILED.txt"
        echo "Exit code: $exit_code" >> "$status_dir/FAILED.txt"
        echo "FAILED: Ghidra failed for $app_name"
        echo "Exit code: $exit_code"
        echo "Check logs:"
        echo "$log_file"
        echo "$script_log_file"
        echo "$stdout_file"
        echo "$stderr_file"
        append_summary "$app_name" "FAILED" "$exit_code" "$lib_file" "$script_json" "$log_file" "$script_log_file" "$stdout_file" "$stderr_file"
        ((fail_count++))
    fi

    echo ""
done

echo "=========================================="
echo "Ghidra headless automation complete"
echo "=========================================="
echo "Successful analyses: $success_count"
echo "Skipped apps:         $skip_count"
echo "Timed out analyses:   $timeout_count"
echo "Failed analyses:      $fail_count"
echo "Summary CSV:          $summary_csv"
echo "Output location:      $IL2CPP_FILES_ROOT"