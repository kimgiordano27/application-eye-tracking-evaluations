#!/usr/bin/env bash
set -euo pipefail

APK_DIR="C:\realDesktop\manifest-evaluations\summer-26\custom-app-evaluation\apks"
DEC_DIR="C:\realDesktop\manifest-evaluations\summer-26\custom-app-evaluation\decoded-apks"
mkdir -p "$APK_DIR" "$DEC_DIR"

PKG_LIST_DEFAULT="C:\realDesktop\manifest-evaluations\summer-26\custom-app-evaluation\packages-to-pull.txt"
PKG_LIST="${PKG_LIST:-$PKG_LIST_DEFAULT}"

if [[ ! -f "$PKG_LIST" ]]; then
  echo "ERROR: Package list not found: $PKG_LIST"
  exit 1
fi

command -v adb >/dev/null || { echo "ERROR: adb not found on PATH"; exit 1; }

APKTOOL="/c/Windows/APKTool/apktool.bat"
if [[ ! -f "$APKTOOL" ]]; then
  echo "ERROR: APKTool batch file not found: $APKTOOL"
  exit 1
fi

if ! adb devices | awk 'NR>1 && $2=="device"{found=1} END{exit found?0:1}'; then
  echo "ERROR: No authorized device detected."
  exit 1
fi

pkg_to_file() {
  local pkg="$1"
  echo "${pkg//./_}"
}

exec 3< "$PKG_LIST"
while IFS= read -r pkg <&3 || [[ -n "$pkg" ]]; do
  pkg="${pkg//$'\r'/}"
  pkg="$(echo "$pkg" | sed 's/^[[:space:]]*//; s/[[:space:]]*$//')"
  [[ -z "$pkg" ]] && continue
  [[ "$pkg" =~ ^# ]] && continue

  echo "==> $pkg"

  apk_path="$(
    adb shell pm path "$pkg" </dev/null 2>/dev/null \
      | tr -d '\r' \
      | head -n 1 \
      | sed 's/^package://'
  )"

  if [[ -z "$apk_path" ]]; then
    echo "  ! Package not found (pm path returned nothing)"
    continue
  fi

  file_base="$(pkg_to_file "$pkg")"
  apk_out="$APK_DIR/${file_base}.apk"
  dec_out="$DEC_DIR/${file_base}-decoded"

  echo "  pm path: $apk_path"
  echo "  pull:    adb pull \"$apk_path\" \"$apk_out\""
  adb pull "$apk_path" "$apk_out" </dev/null >/dev/null

  echo "  decode:  $APKTOOL d -f \"$apk_out\" -o \"$dec_out\""
  rm -rf "$dec_out"
  "$APKTOOL" d -f "$apk_out" -o "$dec_out" </dev/null >/dev/null

  echo "  OK -> $apk_out"
done
exec 3<&-

echo "All done."
echo "APKs:     $APK_DIR"
echo "Decoded:  $DEC_DIR"