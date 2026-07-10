#!/bin/bash

# ==============================================================================
# CONFIGURATION
# ==============================================================================
TEST_MODE=false
TEST_APP_NAME="FruitBladeVR"

GHIDRA_RUN="C:/Users/kimgiordano27/Downloads/ghidra_12.1.2_PUBLIC_20260605/ghidra_12.1.2_PUBLIC/support/analyzeHeadless.bat"
BASE_DIR="C:/realDesktop/manifest-evaluations/summer-26/ghidra-pipeline"
IL2CPP_DIR="$BASE_DIR/il2cpp-files"
SUCCESS_LOG="$BASE_DIR/renamed-success-log.txt"

# Force Ghidra/Java wrapper environment configurations
export GHIDRA_HEADLESS=1
# ==============================================================================

run_ghidra_pipeline() {
    local app_dir="$1"
    local app_name="$2"
    local json_path="$3"

    echo "==================================================="
    echo "Processing Application Directory: $app_name"
    echo "==================================================="

    local project_dir="$app_dir/ghidra-project-$app_name"
    local gpr_file="$project_dir/${app_name}.gpr"
    local rep_dir="$project_dir/${app_name}.rep"

    if [ ! -f "$gpr_file" ]; then
        echo "[ERROR] Ghidra project file missing at path: $gpr_file"
        return
    fi

    # DYNAMIC SEARCH FOR THE SO OBJECT INSIDE THE PROJECT METADATA
    local so_name=""
    if [ -d "$rep_dir/idata" ]; then
        local found_file
        found_file=$(find "$rep_dir/idata" -type f -name "*~" 2>/dev/null | head -n 1)
        if [ ! -z "$found_file" ]; then
            so_name=$(basename "$found_file" | tr -d '~')
        fi
    fi

    # Fallback if metadata tracking directory is empty
    if [ -z "$so_name" ]; then
        so_name="${app_name}-libil2cpp.so"
    fi

    echo "Found Ghidra Project Name: $app_name"
    echo "Found Project Location:    $project_dir"
    echo "Target Binary File Link:   $so_name"
    echo "Using Script JSON:   $json_path"
    echo "---------------------------------------------------"

    if [ ! -f "$json_path" ]; then
        echo "[WARNING] script.json not found at: $json_path"
    else
        echo "Executing Ghidra headless task..."
        
        # FIXED: Added '< /dev/null' to automatically kill any interactive pause prompts on failure
        "$GHIDRA_RUN" "$project_dir" "$app_name" \
          -process "$so_name" \
          -noanalysis \
          -scriptPath "$BASE_DIR" \
          -postScript ghidra.py "$json_path" \
          -commit < /dev/null

        # Capture the exit status code of Ghidra execution
        local exit_status=$?

        if [ $exit_status -eq 0 ]; then
            echo "[SUCCESS] Ghidra execution complete for $app_name."
            echo "$app_name" >> "$SUCCESS_LOG"
        else
            echo "[FAILURE] Ghidra exited with error code $exit_status for $app_name."
        fi
    fi
    echo ""
}

# Ensure tracking log file exists
touch "$SUCCESS_LOG"

if [ "$TEST_MODE" = true ]; then
    echo "[INFO] Running pipeline in TEST MODE for app: $TEST_APP_NAME"
    APP_PATH="$IL2CPP_DIR/$TEST_APP_NAME"
    if [ -d "$APP_PATH" ]; then
        JSON_PATH="$APP_PATH/dump/script.json"
        run_ghidra_pipeline "$APP_PATH" "$TEST_APP_NAME" "$JSON_PATH"
    fi
else
    echo "[INFO] Running pipeline in PRODUCTION MODE (Processing all applications)"
    for APP_PATH in "$IL2CPP_DIR"/*; do
        if [ -d "$APP_PATH" ]; then
            APP_NAME=$(basename "$APP_PATH")
            
            # Skip any entries already tracked in renamed-success-log.txt
            if grep -q "^${APP_NAME}$" "$SUCCESS_LOG" 2>/dev/null; then
                echo "[SKIP] $APP_NAME was already processed successfully. Skipping."
                continue
            fi

            JSON_PATH="$APP_PATH/dump/script.json"
            run_ghidra_pipeline "$APP_PATH" "$APP_NAME" "$JSON_PATH"
        fi
    done
fi

echo "Automated parsing pipeline complete."
