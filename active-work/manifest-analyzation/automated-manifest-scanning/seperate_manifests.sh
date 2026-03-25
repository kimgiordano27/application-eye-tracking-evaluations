#!/usr/bin/env bash
set -euo pipefail

# makes paths for the directory storing the apks and where to copy the manifests
BASE_DIR="$(cd "$(dirname "$0")" && pwd)"
SRC_DIR="$BASE_DIR/../decoded-apks"
DEST_DIR="$BASE_DIR/../manifests"

echo "Source: $SRC_DIR"
echo "Destination: $DEST_DIR"

mkdir -p "$DEST_DIR"

# goes over all of the decoded APKS
for app_dir in "$SRC_DIR"/*; do
    [[ -d "$app_dir" ]] || continue
    app_name="$(basename "$app_dir")"
    echo "==> Processing $app_name"

    out_dir="$DEST_DIR/$app_name"
     mkdir -p "$out_dir"

    cp "$app_dir/AndroidManifest.xml" "$out_dir/AndroidManifest.xml"
    echo "    Copied: $app_dir/AndroidManifest.xml -> $out_dir/AndroidManifest.xml"

done

echo "Done."