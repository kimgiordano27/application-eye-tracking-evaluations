# @runtime Jython
# -*- coding: utf-8 -*-

import json
import re

from ghidra.program.model.symbol import SourceType
from ghidra.util.exception import DuplicateNameException, InvalidInputException

USER_DEFINED = SourceType.USER_DEFINED

functionManager = currentProgram.getFunctionManager()
listing = currentProgram.getListing()
memory = currentProgram.getMemory()
baseAddress = currentProgram.getImageBase()

created_functions = 0
renamed_functions = 0
created_labels = 0
comments_set = 0
missing_memory = 0
rename_failed = 0
label_failed = 0


def sanitize_name(value):
    if value is None:
        value = "unknown"

    value = str(value)

    # Some Il2CppDumper names are byte-string-ish after encoding.
    if value.startswith("b'") and value.endswith("'"):
        value = value[2:-1]

    value = value.replace("::", "_")
    value = value.replace(".", "_")
    value = value.replace("/", "_")
    value = value.replace("`", "_")
    value = value.replace("<", "_")
    value = value.replace(">", "_")
    value = value.replace("[", "_")
    value = value.replace("]", "_")
    value = value.replace("(", "_")
    value = value.replace(")", "_")
    value = value.replace(",", "_")
    value = value.replace(" ", "_")

    value = re.sub(r"[^A-Za-z0-9_$]+", "_", value)
    value = re.sub(r"_+", "_", value).strip("_")

    if value == "":
        value = "unknown"

    if value[0].isdigit():
        value = "_" + value

    return value[:240]


def get_addr(addr_value):
    # Match Il2CppDumper's normal ghidra.py behavior:
    # addr is treated as an offset from the image base.
    return baseAddress.add(addr_value)


def ensure_memory(addr, label):
    global missing_memory

    if memory.contains(addr):
        return True

    missing_memory += 1

    if missing_memory <= 20:
        print("MISSING_MEMORY,%s,%s" % (label, str(addr)))

    return False


def ensure_function(addr):
    global created_functions

    func = functionManager.getFunctionAt(addr)

    if func is not None:
        return func

    try:
        created = createFunction(addr, None)
        func = functionManager.getFunctionAt(addr)

        if func is not None:
            created_functions += 1
            return func

        return created
    except Exception as e:
        print("CREATE_FUNCTION_FAILED,%s,%s" % (str(addr), str(e)))
        return functionManager.getFunctionContaining(addr)


def make_unique_name(base_name, addr):
    return "%s_%s" % (base_name, str(addr).replace(":", "_"))


def apply_label(addr, raw_name):
    global created_labels
    global label_failed

    safe = sanitize_name(raw_name)

    try:
        createLabel(addr, safe, True, USER_DEFINED)
        created_labels += 1
        return True
    except Exception as e:
        label_failed += 1

        if label_failed <= 20:
            print("CREATE_LABEL_FAILED,%s,%s,%s" % (str(addr), safe, str(e)))

        return False


def apply_comment(addr, raw_text):
    global comments_set

    try:
        setEOLComment(addr, str(raw_text))
        comments_set += 1
        return True
    except Exception as e:
        return False


def apply_function_name(addr, raw_name):
    global renamed_functions
    global rename_failed

    safe = sanitize_name(raw_name)

    if not ensure_memory(addr, safe):
        return False

    func = ensure_function(addr)

    if func is None:
        return False

    try:
        old = func.getName()

        if old != safe:
            func.setName(safe, USER_DEFINED)
            renamed_functions += 1
            print("RENAMED_FUNCTION,%s,%s,%s" % (str(addr), old, safe))

        return True

    except DuplicateNameException:
        unique = make_unique_name(safe, addr)

        try:
            func.setName(unique, USER_DEFINED)
            renamed_functions += 1
            print("RENAMED_FUNCTION_DUPLICATE_FALLBACK,%s,%s" % (str(addr), unique))
            return True
        except Exception as e:
            rename_failed += 1
            print("RENAME_FAILED,%s,%s,%s" % (str(addr), unique, str(e)))
            return False

    except InvalidInputException as e:
        rename_failed += 1
        print("RENAME_FAILED_INVALID,%s,%s,%s" % (str(addr), safe, str(e)))
        return False

    except Exception as e:
        rename_failed += 1
        print("RENAME_FAILED,%s,%s,%s" % (str(addr), safe, str(e)))
        return False


args = getScriptArgs()

if len(args) < 1:
    raise Exception("Usage: apply_il2cpp_names_strong.py <script.json>")

script_json_path = args[0]

print("STRONG_IL2CPP_APPLY_START")
print("Program: " + currentProgram.getName())
print("Image base: " + str(baseAddress))
print("script.json: " + script_json_path)

data = json.loads(open(script_json_path, "rb").read().decode("utf-8"))

# Step 1: create function boundaries first.
if "Addresses" in data:
    addresses = data["Addresses"]
    print("ADDRESS_COUNT,%d" % len(addresses))
    monitor.initialize(len(addresses))
    monitor.setMessage("Creating functions from Il2CppDumper Addresses")

    for index in range(len(addresses)):
        addr = get_addr(addresses[index])

        if ensure_memory(addr, "Addresses"):
            ensure_function(addr)

        monitor.incrementProgress(1)

# Step 2: apply ScriptMethod names directly to functions.
if "ScriptMethod" in data:
    scriptMethods = data["ScriptMethod"]
    print("SCRIPT_METHOD_COUNT,%d" % len(scriptMethods))
    monitor.initialize(len(scriptMethods))
    monitor.setMessage("Applying ScriptMethod names")

    for scriptMethod in scriptMethods:
        addr = get_addr(scriptMethod["Address"])
        name = scriptMethod["Name"]

        apply_function_name(addr, name)
        apply_label(addr, name)
        apply_comment(addr, name)

        monitor.incrementProgress(1)

# Step 3: apply ScriptMetadata labels/comments.
if "ScriptMetadata" in data:
    scriptMetadatas = data["ScriptMetadata"]
    print("SCRIPT_METADATA_COUNT,%d" % len(scriptMetadatas))
    monitor.initialize(len(scriptMetadatas))
    monitor.setMessage("Applying ScriptMetadata labels")

    for scriptMetadata in scriptMetadatas:
        addr = get_addr(scriptMetadata["Address"])
        name = scriptMetadata["Name"]

        if ensure_memory(addr, name):
            apply_label(addr, name)
            apply_comment(addr, name)

        monitor.incrementProgress(1)

# Step 4: apply ScriptMetadataMethod names.
if "ScriptMetadataMethod" in data:
    scriptMetadataMethods = data["ScriptMetadataMethod"]
    print("SCRIPT_METADATA_METHOD_COUNT,%d" % len(scriptMetadataMethods))
    monitor.initialize(len(scriptMetadataMethods))
    monitor.setMessage("Applying ScriptMetadataMethod names")

    for scriptMetadataMethod in scriptMetadataMethods:
        addr = get_addr(scriptMetadataMethod["Address"])
        name = scriptMetadataMethod["Name"]

        if ensure_memory(addr, name):
            apply_label(addr, name)
            apply_comment(addr, name)

        if "MethodAddress" in scriptMetadataMethod:
            method_addr = get_addr(scriptMetadataMethod["MethodAddress"])
            apply_function_name(method_addr, name)
            apply_label(method_addr, name)
            apply_comment(method_addr, name)

        monitor.incrementProgress(1)

# Step 5: apply ScriptString labels/comments.
if "ScriptString" in data:
    scriptStrings = data["ScriptString"]
    print("SCRIPT_STRING_COUNT,%d" % len(scriptStrings))
    monitor.initialize(len(scriptStrings))
    monitor.setMessage("Applying ScriptString comments")

    index = 1
    for scriptString in scriptStrings:
        addr = get_addr(scriptString["Address"])
        value = scriptString["Value"]
        label = "StringLiteral_" + str(index)

        if ensure_memory(addr, label):
            apply_label(addr, label)
            apply_comment(addr, value)

        index += 1
        monitor.incrementProgress(1)

print("STRONG_IL2CPP_APPLY_SUMMARY,created_functions=%d,renamed_functions=%d,created_labels=%d,comments_set=%d,missing_memory=%d,rename_failed=%d,label_failed=%d" % (
    created_functions,
    renamed_functions,
    created_labels,
    comments_set,
    missing_memory,
    rename_failed,
    label_failed
))

print("STRONG_IL2CPP_APPLY_DONE")
