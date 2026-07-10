#!/usr/bin/env bash

set -uo pipefail

# refresh-ghidra-py-for-all-apps.sh
#
# This does NOT run Ghidra.
# It only fixes each app's ghidra-headless-scripts folder:
#   - removes ghidra_headless.py
#   - writes the correct ghidra.py
#
# Use this if old app folders already contain the wrong script.

PIPELINE_ROOT="/c/realDesktop/manifest-evaluations/summer-26/ghidra-pipeline"
IL2CPP_FILES_ROOT="$PIPELINE_ROOT/il2cpp-files"

ONLY_APP="${ONLY_APP:-}"

write_headless_ghidra_py() {
    local output_script="$1"

    cat > "$output_script" <<'GHIDRA_PY'
# @runtime Jython
# -*- coding: utf-8 -*-

import json

processFields = [
    "ScriptMethod",
    "ScriptString",
    "ScriptMetadata",
    "ScriptMetadataMethod",
    "Addresses",
]

functionManager = currentProgram.getFunctionManager()
baseAddress = currentProgram.getImageBase()
USER_DEFINED = ghidra.program.model.symbol.SourceType.USER_DEFINED

def get_addr(addr):
    return baseAddress.add(addr)

def set_name(addr, name):
    name = name.replace(' ', '-')
    createLabel(addr, name, True, USER_DEFINED)

def make_function(start):
    func = getFunctionAt(start)
    if func is None:
        createFunction(start, None)

args = getScriptArgs()

if len(args) < 1:
    raise Exception("Usage: ghidra.py <script.json>")

script_json_path = args[0]
print 'Using script.json: ' + script_json_path

data = json.loads(open(script_json_path, 'rb').read().decode('utf-8'))

if "ScriptMethod" in data and "ScriptMethod" in processFields:
    scriptMethods = data["ScriptMethod"]
    monitor.initialize(len(scriptMethods))
    monitor.setMessage("Methods")
    for scriptMethod in scriptMethods:
        addr = get_addr(scriptMethod["Address"])
        name = scriptMethod["Name"].encode("utf-8")
        set_name(addr, name)
        monitor.incrementProgress(1)

if "ScriptString" in data and "ScriptString" in processFields:
    index = 1
    scriptStrings = data["ScriptString"]
    monitor.initialize(len(scriptStrings))
    monitor.setMessage("Strings")
    for scriptString in scriptStrings:
        addr = get_addr(scriptString["Address"])
        value = scriptString["Value"].encode("utf-8")
        name = "StringLiteral_" + str(index)
        createLabel(addr, name, True, USER_DEFINED)
        setEOLComment(addr, value)
        index += 1
        monitor.incrementProgress(1)

if "ScriptMetadata" in data and "ScriptMetadata" in processFields:
    scriptMetadatas = data["ScriptMetadata"]
    monitor.initialize(len(scriptMetadatas))
    monitor.setMessage("Metadata")
    for scriptMetadata in scriptMetadatas:
        addr = get_addr(scriptMetadata["Address"])
        name = scriptMetadata["Name"].encode("utf-8")
        set_name(addr, name)
        setEOLComment(addr, name)
        monitor.incrementProgress(1)

if "ScriptMetadataMethod" in data and "ScriptMetadataMethod" in processFields:
    scriptMetadataMethods = data["ScriptMetadataMethod"]
    monitor.initialize(len(scriptMetadataMethods))
    monitor.setMessage("Metadata Methods")
    for scriptMetadataMethod in scriptMetadataMethods:
        addr = get_addr(scriptMetadataMethod["Address"])
        name = scriptMetadataMethod["Name"].encode("utf-8")
        methodAddr = get_addr(scriptMetadataMethod["MethodAddress"])
        set_name(addr, name)
        setEOLComment(addr, name)
        monitor.incrementProgress(1)

if "Addresses" in data and "Addresses" in processFields:
    addresses = data["Addresses"]
    monitor.initialize(len(addresses))
    monitor.setMessage("Addresses")
    for index in range(len(addresses) - 1):
        start = get_addr(addresses[index])
        make_function(start)
        monitor.incrementProgress(1)

print 'Script finished!'
GHIDRA_PY
}

echo "=========================================="
echo "Refreshing ghidra.py for app folders"
echo "=========================================="
echo "IL2CPP files root: $IL2CPP_FILES_ROOT"
echo "Only app:          ${ONLY_APP:-ALL APPS}"
echo ""

if [[ ! -d "$IL2CPP_FILES_ROOT" ]]; then
    echo "ERROR: il2cpp-files folder not found:"
    echo "$IL2CPP_FILES_ROOT"
    exit 1
fi

count=0

for app_folder in "$IL2CPP_FILES_ROOT"/*; do
    if [[ ! -d "$app_folder" ]]; then
        continue
    fi

    app_name="$(basename "$app_folder")"

    if [[ -n "$ONLY_APP" && "$app_name" != "$ONLY_APP" ]]; then
        continue
    fi

    script_dir="$app_folder/ghidra-headless-scripts"
    mkdir -p "$script_dir"

    rm -f "$script_dir/ghidra_headless.py"

    write_headless_ghidra_py "$script_dir/ghidra.py"

    echo "Updated: $app_name"
    echo "  $script_dir/ghidra.py"

    ((count++))
done

echo ""
echo "Done. Updated $count app folder(s)."
