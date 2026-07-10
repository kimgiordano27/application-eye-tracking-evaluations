# @runtime Jython
# -*- coding: utf-8 -*-
import json
import sys

processFields = [
    "ScriptMethod",
    "ScriptString",
    "ScriptMetadata",
    "ScriptMetadataMethod",
    "Addresses",
]

functionManager = currentProgram.getFunctionManager()
USER_DEFINED = ghidra.program.model.symbol.SourceType.USER_DEFINED

# --- REVISED HEADLESS ADDRESS RESOLUTION ---
# Look up the actual physical memory block where instructions live
text_block = currentProgram.getMemory().getBlock(".text")
if text_block is not None:
    # Most Android/Linux .so structures use this start address as the calculation floor
    baseAddress = text_block.getStart()
    print "System Headless Alert: Calculating offsets using .text section base: " + str(baseAddress)
else:
    baseAddress = currentProgram.getImageBase()
    print "System Headless Alert: Fallback to program image base: " + str(baseAddress)

def get_addr(addr):
    # If the JSON already gives an absolute address higher than the base, use it directly
    try:
        return baseAddress.getNewAddress(addr)
    except:
        return baseAddress.add(addr)

def set_name(addr, name):
    if addr is None:
        return
    name = name.replace(' ', '-')
    try:
        createLabel(addr, name, True, USER_DEFINED)
        # Force function renaming if a function object exists at this target address
        func = getFunctionAt(addr)
        if func is not None:
            func.setName(name, USER_DEFINED)
    except Exception as e:
        # Catch and print any invalid addresses to debug output
        print "Skipping name assignment at address " + str(addr) + " - Reason: " + str(e)

def make_function(start):
    if start is None:
        return
    func = getFunctionAt(start)
    if func is None:
        createFunction(start, None)

# Headless modification: Read file path from arguments
args = getScriptArgs()
if len(args) < 1:
    raise RuntimeError("Missing argument: Path to script.json must be provided.")

json_path = args[0] # Grab first index safely from argument tuple
print "Loading JSON file from: " + str(json_path)

with open(json_path, 'rb') as f:
    data = json.loads(f.read().decode('utf-8'))

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
        if addr is not None:
            value = scriptString["Value"].encode("utf-8")
            name = "StringLiteral_" + str(index)
            try:
                createLabel(addr, name, True, USER_DEFINED)
                setEOLComment(addr, value)
            except:
                pass
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
        if addr is not None:
            try: setEOLComment(addr, name)
            except: pass
        monitor.incrementProgress(1)

if "ScriptMetadataMethod" in data and "ScriptMetadataMethod" in processFields:
    scriptMetadataMethods = data["ScriptMetadataMethod"]
    monitor.initialize(len(scriptMetadataMethods))
    monitor.setMessage("Metadata Methods")
    for scriptMetadataMethod in scriptMetadataMethods:
        addr = get_addr(scriptMetadataMethod["Address"])
        name = scriptMetadataMethod["Name"].encode("utf-8")
        set_name(addr, name)
        if addr is not None:
            try: setEOLComment(addr, name)
            except: pass
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
