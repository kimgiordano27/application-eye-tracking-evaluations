#!/usr/bin/env bash
set -euo pipefail

# ===============================
# CONFIG — absolute output paths
# ===============================
APK_DIR="/c/realDesktop/manifest-evaluations/apks"
DEC_DIR="/c/realDesktop/manifest-evaluations/decoded-apks"

mkdir -p "$APK_DIR" "$DEC_DIR"

# Package list (default)
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
PKG_LIST="${1:-$SCRIPT_DIR/packages.txt}"

# ===============================
# Sanity checks
# ===============================
command -v adb >/dev/null || { echo "ERROR: adb not found on PATH"; exit 1; }
command -v apktool >/dev/null || { echo "ERROR: apktool not found on PATH"; exit 1; }

# Confirm authorized device
if ! adb devices | awk 'NR>1 && $2=="device"{found=1} END{exit found?0:1}'; then
  echo "ERROR: No authorized device detected."
  echo "Run: adb devices"
  echo "If unauthorized, approve USB debugging inside the headset."
  exit 1
fi

# ===============================
# Main loop
# ===============================
while IFS= read -r pkg || [[ -n "$pkg" ]]; do
  # Strip CR (Windows line endings) + trim whitespace
  pkg="${pkg//$'\r'/}"
  pkg="$(echo "$pkg" | sed 's/^[[:space:]]*//; s/[[:space:]]*$//')"

  # Skip blanks/comments
  [[ -z "$pkg" ]] && continue
  [[ "$pkg" =~ ^# ]] && continue

  echo "==> $pkg"

  # Get APK path on device
  apk_path="$(adb shell pm path "$pkg" 2>/dev/null | tr -d '\r' | head -n1 | sed 's/^package://')"
  if [[ -z "$apk_path" ]]; then
    echo "  ! Package not found on device"
    continue
  fi

  apk_out="$APK_DIR/${pkg}.apk"
  dec_out="$DEC_DIR/${pkg}-decoded"

  # Pull APK
  adb pull "$apk_path" "$apk_out" >/dev/null

  # Decode
  apktool d -f "$apk_out" -o "$dec_out" >/dev/null

  echo "  OK:"
  echo "     APK     -> $apk_out"
  echo "     Decoded -> $dec_out"
done < "$PKG_LIST"

echo "All done."
