#!/usr/bin/env bash

set -uo pipefail

# Main pipeline folder
PIPELINE_ROOT="/c/realDesktop/manifest-evaluations/summer-26/ghidra-pipeline"

# Folder containing one folder per app
IL2CPP_FILES_ROOT="$PIPELINE_ROOT/il2cpp-files"

# Change this to wherever your Il2CppDumper.exe is located
# Example:
# DUMPER_EXE="/c/realDesktop/manifest-evaluations/summer-26/ghidra-pipeline/tools/Il2CppDumper/Il2CppDumper.exe"
DUMPER_EXE="/c/Users/kimgiordano27/Downloads/Il2CppDumper-net6-win-v6.7.46/Il2CppDumper.exe"
echo "=========================================="
echo "Running Il2CppDumper automation"
echo "=========================================="
echo "Pipeline root:     $PIPELINE_ROOT"
echo "IL2CPP files root: $IL2CPP_FILES_ROOT"
echo "Dumper path:       $DUMPER_EXE"
echo ""

if [[ ! -f "$DUMPER_EXE" ]]; then
    echo "ERROR: Il2CppDumper.exe was not found at:"
    echo "$DUMPER_EXE"
    echo ""
    echo "Edit the DUMPER_EXE path near the top of this script."
    exit 1
fi

if [[ ! -d "$IL2CPP_FILES_ROOT" ]]; then
    echo "ERROR: il2cpp-files folder was not found:"
    echo "$IL2CPP_FILES_ROOT"
    exit 1
fi

success_count=0
fail_count=0
skip_count=0

for app_folder in "$IL2CPP_FILES_ROOT"/*; do
    if [[ ! -d "$app_folder" ]]; then
        continue
    fi

    app_name="$(basename "$app_folder")"

    lib_file="$app_folder/$app_name-libil2cpp.so"
    metadata_file="$app_folder/$app_name-global-metadata.dat"

    dump_dir="$app_folder/dump"

    echo "------------------------------------------"
    echo "App: $app_name"
    echo "Folder: $app_folder"

    if [[ ! -f "$lib_file" ]]; then
        echo "SKIP: Missing libil2cpp file:"
        echo "$lib_file"
        ((skip_count++))
        continue
    fi

    if [[ ! -f "$metadata_file" ]]; then
        echo "SKIP: Missing global-metadata file:"
        echo "$metadata_file"
        ((skip_count++))
        continue
    fi

    # Start fresh each time so old dump files do not mix with new ones
    if [[ -d "$dump_dir" ]]; then
        echo "Removing old dump folder..."
        rm -rf "$dump_dir"
    fi

    mkdir -p "$dump_dir"

    echo "Running Il2CppDumper..."
    echo "libil2cpp:        $lib_file"
    echo "global-metadata:  $metadata_file"
    echo "dump output:      $dump_dir"
    echo ""

    "$DUMPER_EXE" "$lib_file" "$metadata_file" "$dump_dir"

    exit_code=$?

    if [[ $exit_code -eq 0 ]]; then
        echo "SUCCESS: Dump generated for $app_name"

        if [[ -f "$dump_dir/script.json" ]]; then
            echo "Found: script.json"
        else
            echo "WARNING: script.json not found in dump output"
        fi

        if [[ -f "$dump_dir/il2cpp.h" ]]; then
            echo "Found: il2cpp.h"
        else
            echo "WARNING: il2cpp.h not found in dump output"
        fi

        if [[ -f "$dump_dir/ghidra.py" ]]; then
            echo "Found: ghidra.py"
        else
            echo "WARNING: ghidra.py not found in dump output"
        fi

        ((success_count++))
    else
        echo "FAILED: Il2CppDumper failed for $app_name"
        echo "Exit code: $exit_code"
        ((fail_count++))
    fi

    echo ""
done

echo "=========================================="
echo "Il2CppDumper automation complete"
echo "=========================================="
echo "Successful dumps: $success_count"
echo "Skipped apps:     $skip_count"
echo "Failed dumps:     $fail_count"
echo "Output location:  $IL2CPP_FILES_ROOT"