#!/usr/bin/env bash

set -euo pipefail

# Source decoded APK folder
DECODED_APKS_ROOT="/c/realDesktop/manifest-evaluations/fall-25-spring-26/shared-object-analyzation/decoded-apks"

# Destination folder: app folders will go inside ghidra-pipeline/il2cpp-files
OUTPUT_ROOT="/c/realDesktop/manifest-evaluations/summer-26/ghidra-pipeline/il2cpp-files"

mkdir -p "$OUTPUT_ROOT"

for decoded_folder in "$DECODED_APKS_ROOT"/*-decoded; do
    if [[ ! -d "$decoded_folder" ]]; then
        continue
    fi

    decoded_name="$(basename "$decoded_folder")"

    # Remove "-decoded"
    base_name="${decoded_name%-decoded}"

    # Get everything after the last underscore
    # Example: com_XRHorizon_FruitBladeVR -> FruitBladeVR
    app_name="${base_name##*_}"

    if [[ -z "$app_name" ]]; then
        echo "WARNING: Could not determine app name from: $decoded_name"
        continue
    fi

    source_lib="$decoded_folder/lib/arm64-v8a/libil2cpp.so"
    source_metadata="$decoded_folder/assets/bin/Data/Managed/Metadata/global-metadata.dat"

    app_output_folder="$OUTPUT_ROOT/$app_name"

    dest_lib="$app_output_folder/$app_name-libil2cpp.so"
    dest_metadata="$app_output_folder/$app_name-global-metadata.dat"

    mkdir -p "$app_output_folder"

    echo ""
    echo "Processing: $decoded_name"
    echo "App name:   $app_name"

    if [[ -f "$source_lib" ]]; then
        cp -f "$source_lib" "$dest_lib"
        echo "Copied:     libil2cpp.so -> $dest_lib"
    else
        echo "WARNING: Missing libil2cpp.so: $source_lib"
    fi

    if [[ -f "$source_metadata" ]]; then
        cp -f "$source_metadata" "$dest_metadata"
        echo "Copied:     global-metadata.dat -> $dest_metadata"
    else
        echo "WARNING: Missing global-metadata.dat: $source_metadata"
    fi
done

echo ""
echo "Done. Files copied into:"
echo "$OUTPUT_ROOT"