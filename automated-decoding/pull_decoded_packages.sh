here is the script currently #!/usr/bin/env bash
set -euo pipefail

# the absolute paths to my apk files
# should change this depending on file organization
APK_DIR="/c/realDesktop/manifest-evaluations/apks"
DEC_DIR="/c/realDesktop/manifest-evaluations/decoded-apks"

# makes a new APK directory
mkdir -p "$APK_DIR" "$DEC_DIR"

# makes a package list
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
PKG_LIST="${1:-$SCRIPT_DIR/packages.txt}"

# errors if the files aren't found
command -v adb >/dev/null || { echo "ERROR: adb not found on PATH"; exit 1; }
command -v apktool >/dev/null || { echo "ERROR: apktool not found on PATH"; exit 1; }

# makes sure the device has authorization
if ! adb devices | awk 'NR>1 && $2=="device"{found=1} END{exit found?0:1}'; then
  echo "ERROR: No authorized device detected."
  echo "Run: adb devices"
  echo "If unauthorized, approve USB debugging inside the headset."
  exit 1
fi

# goes through the packages
while IFS= read -r pkg || [[ -n "$pkg" ]]; do
  # stripping unnecessary formatting
  pkg="${pkg//$'\r'/}"
  pkg="$(echo "$pkg" | sed 's/^[[:space:]]*//; s/[[:space:]]*$//')"

  # skipping blanks and comments if any
  [[ -z "$pkg" ]] && continue
  [[ "$pkg" =~ ^# ]] && continue

  echo "==> $pkg"

  # gets the apk path from the device
  apk_path="$(adb shell pm path "$pkg" 2>/dev/null | tr -d '\r' | head -n1 | sed 's/^package://')"
  if [[ -z "$apk_path" ]]; then
    echo "  ! Package not found on device"
    continue
  fi

  apk_out="$APK_DIR/${pkg}.apk"
  dec_out="$DEC_DIR/${pkg}-decoded"

  # pulls the apk from the headset
  adb pull "$apk_path" "$apk_out" >/dev/null

  # decodes the apk using APK tool
  # this needs to be set up before running, its not a default install
  apktool d -f "$apk_out" -o "$dec_out" >/dev/null

  echo "  OK:"
  echo "     APK     -> $apk_out"
  echo "     Decoded -> $dec_out"
done < "$PKG_LIST"

echo "All done."
