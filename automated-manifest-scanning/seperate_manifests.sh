#!/usr/bin/env bash
set -euo pipefail

# Absolute paths (adjust if needed)
BASE_DIR="$(cd "$(dirname "$0")" && pwd)"
SRC_DIR="$BASE_DIR/../decoded-apks"
DEST_DIR="$BASE_DIR/../manifests"

echo "Source: $SRC_DIR"
echo "Destination: $DEST_DIR"

mkdir -p "$DEST_DIR"

# Loop over each decoded APK directory
for app_dir in "$SRC_DIR"/*; do
    if [[ -d "$app_dir" ]]; then
        app_name="$(basename "$app_dir")"
        echo "==> Processing $app_name"

        # Create destination subdirectory
        mkdir -p "$DEST_DIR/$app_name"

        # Find and copy all XML files recursively
        find "$app_dir" -type f -name "AndroidManifest.xml" -exec cp {} "$DEST_DIR/$app_name/" \;

        echo "    Copied XML files for $app_name"
    fi
done

echo "Done."