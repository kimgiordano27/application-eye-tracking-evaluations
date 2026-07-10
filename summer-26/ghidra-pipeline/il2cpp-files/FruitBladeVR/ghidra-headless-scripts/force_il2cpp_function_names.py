# @runtime Jython
# -*- coding: utf-8 -*-

import json
import re

from ghidra.program.model.symbol import SourceType
from ghidra.util.exception import DuplicateNameException, InvalidInputException

USER_DEFINED = SourceType.USER_DEFINED

args = getScriptArgs()

if len(args) < 1:
    raise Exception("Usage: force_il2cpp_function_names.py <script.json>")

script_json_path = args[0]

fm = currentProgram.getFunctionManager()
memory = currentProgram.getMemory()
base = currentProgram.getImageBase()
addr_space = currentProgram.getAddressFactory().getDefaultAddressSpace()
symbol_table = currentProgram.getSymbolTable()

created_functions = 0
renamed_functions = 0
renamed_unique = 0
already_named = 0
missing_memory = 0
create_failed = 0
rename_failed = 0
primary_symbols_set = 0


def sanitize(value):
    if value is None:
        value = "unknown"

    value = str(value)

    if value.startswith("b'") and value.endswith("'"):
        value = value[2:-1]

    value = value.replace("\\", "_")
    value = value.replace("/", "_")
    value = value.replace("::", "_")
    value = value.replace(".", "_")
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


def contains(addr):
    if addr is None:
        return False

    try:
        return memory.contains(addr)
    except Exception:
        return False


def addr_base_plus(value):
    return base.add(value)


def addr_absolute(value):
    try:
        return addr_space.getAddress(value)
    except Exception:
        return None


def choose_address_mode(data):
    values = []

    if "ScriptMethod" in data:
        for item in data["ScriptMethod"][:3000]:
            if "Address" in item:
                values.append(item["Address"])

    if "ScriptMetadataMethod" in data:
        for item in data["ScriptMetadataMethod"][:3000]:
            if "MethodAddress" in item:
                values.append(item["MethodAddress"])
            elif "Address" in item:
                values.append(item["Address"])

    if "Addresses" in data:
        for value in data["Addresses"][:3000]:
            values.append(value)

    base_hits = 0
    absolute_hits = 0

    for value in values:
        if contains(addr_base_plus(value)):
            base_hits += 1
        if contains(addr_absolute(value)):
            absolute_hits += 1

    print("ADDRESS_MODE_COUNTS,base_plus_hits=%d,absolute_hits=%d,total_sample=%d" % (
        base_hits,
        absolute_hits,
        len(values)
    ))

    if absolute_hits > base_hits:
        print("ADDRESS_MODE_SELECTED,absolute")
        return "absolute"

    print("ADDRESS_MODE_SELECTED,base_plus")
    return "base_plus"


def resolve_addr(value, mode):
    if mode == "absolute":
        return addr_absolute(value)

    return addr_base_plus(value)


def ensure_function_at(addr):
    global created_functions
    global create_failed

    fn = fm.getFunctionAt(addr)

    if fn is not None:
        return fn

    try:
        createFunction(addr, None)
        fn = fm.getFunctionAt(addr)

        if fn is not None:
            created_functions += 1
            return fn

    except Exception as e:
        create_failed += 1
        if create_failed <= 20:
            print("CREATE_FUNCTION_FAILED,%s,%s" % (str(addr), str(e)))

    return fm.getFunctionAt(addr)


def set_primary_symbol_at(addr, safe):
    global primary_symbols_set

    try:
        syms = symbol_table.getSymbols(addr)

        for sym in syms:
            if sym.getName() == safe:
                sym.setPrimary()
                primary_symbols_set += 1
                return True

    except Exception:
        pass

    return False


def apply_label_comment_primary(addr, raw_name):
    safe = sanitize(raw_name)

    try:
        createLabel(addr, safe, True, USER_DEFINED)
    except Exception:
        pass

    try:
        setEOLComment(addr, str(raw_name))
    except Exception:
        pass

    set_primary_symbol_at(addr, safe)


def rename_function(addr, raw_name, source):
    global renamed_functions
    global renamed_unique
    global already_named
    global missing_memory
    global rename_failed

    if not contains(addr):
        missing_memory += 1
        if missing_memory <= 25:
            print("MISSING_MEMORY,%s,%s,%s" % (source, str(addr), sanitize(raw_name)))
        return False

    apply_label_comment_primary(addr, raw_name)

    fn = ensure_function_at(addr)

    if fn is None:
        return False

    safe = sanitize(raw_name)
    old = fn.getName()

    if old == safe:
        already_named += 1
        return True

    try:
        fn.setName(safe, USER_DEFINED)
        renamed_functions += 1

        if renamed_functions <= 80:
            print("RENAMED_FUNCTION,%s,%s,%s,%s" % (
                source,
                str(addr),
                old,
                safe
            ))

        return True

    except DuplicateNameException:
        fallback = "%s_%s" % (safe, str(addr).replace(":", "_"))

        try:
            fn.setName(fallback, USER_DEFINED)
            renamed_unique += 1

            if renamed_unique <= 80:
                print("RENAMED_FUNCTION_UNIQUE,%s,%s,%s,%s" % (
                    source,
                    str(addr),
                    old,
                    fallback
                ))

            return True

        except Exception as e:
            rename_failed += 1
            if rename_failed <= 25:
                print("RENAME_FAILED_DUPLICATE,%s,%s,%s" % (
                    str(addr),
                    fallback,
                    str(e)
                ))
            return False

    except InvalidInputException as e:
        rename_failed += 1
        if rename_failed <= 25:
            print("RENAME_FAILED_INVALID,%s,%s,%s" % (
                str(addr),
                safe,
                str(e)
            ))
        return False

    except Exception as e:
        rename_failed += 1
        if rename_failed <= 25:
            print("RENAME_FAILED,%s,%s,%s" % (
                str(addr),
                safe,
                str(e)
            ))
        return False


print("FORCE_RENAME_START")
print("CURRENT_PROGRAM_NAME=" + currentProgram.getName())
print("CURRENT_PROGRAM_IMAGE_BASE=" + str(base))
print("SCRIPT_JSON=" + script_json_path)

try:
    df = currentProgram.getDomainFile()
    print("CURRENT_DOMAIN_FILE_NAME=" + df.getName())
    print("CURRENT_DOMAIN_FILE_PATH=" + df.getPathname())
except Exception as e:
    print("CURRENT_DOMAIN_FILE_INFO_FAILED=" + str(e))

data = json.loads(open(script_json_path, "rb").read().decode("utf-8"))

mode = choose_address_mode(data)

if "Addresses" in data:
    addresses = data["Addresses"]
    print("ADDRESSES_TOTAL,%d" % len(addresses))
    monitor.initialize(len(addresses))
    monitor.setMessage("Creating functions from script.json Addresses")

    for value in addresses:
        addr = resolve_addr(value, mode)
        if contains(addr):
            ensure_function_at(addr)
        monitor.incrementProgress(1)

if "ScriptMethod" in data:
    methods = data["ScriptMethod"]
    print("SCRIPT_METHOD_TOTAL,%d" % len(methods))
    monitor.initialize(len(methods))
    monitor.setMessage("Renaming ScriptMethod functions")

    for item in methods:
        if "Address" in item and "Name" in item:
            addr = resolve_addr(item["Address"], mode)
            rename_function(addr, item["Name"], "ScriptMethod")

        monitor.incrementProgress(1)

if "ScriptMetadataMethod" in data:
    methods = data["ScriptMetadataMethod"]
    print("SCRIPT_METADATA_METHOD_TOTAL,%d" % len(methods))
    monitor.initialize(len(methods))
    monitor.setMessage("Renaming ScriptMetadataMethod functions")

    for item in methods:
        name = item.get("Name", "unknown")

        if "MethodAddress" in item:
            addr = resolve_addr(item["MethodAddress"], mode)
            rename_function(addr, name, "ScriptMetadataMethod.MethodAddress")

        monitor.incrementProgress(1)

print("FORCE_RENAME_SUMMARY,mode=%s,created_functions=%d,renamed_functions=%d,renamed_unique=%d,already_named=%d,missing_memory=%d,create_failed=%d,rename_failed=%d,primary_symbols_set=%d" % (
    mode,
    created_functions,
    renamed_functions,
    renamed_unique,
    already_named,
    missing_memory,
    create_failed,
    rename_failed,
    primary_symbols_set
))

print("FORCE_RENAME_DONE")
