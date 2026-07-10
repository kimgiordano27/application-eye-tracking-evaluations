# Ghidra/Jython script.
# Runs after Il2CppDumper's ghidra.py.
# Purpose:
#   1) Rename wrapper/holder functions that still look like FUN_*/thunk_FUN_*.
#   2) Prefer names from already-renamed callees when the holder is a simple thunk.
#   3) Fall back to internal-call string names, for Unity/OpenXR wrappers.

from ghidra.program.model.symbol import SourceType
from ghidra.util.exception import DuplicateNameException, InvalidInputException
import re

fm = currentProgram.getFunctionManager()
listing = currentProgram.getListing()

GENERIC_PREFIXES = ("FUN_", "thunk_FUN_", "switchD_", "caseD_")
INTERESTING_INTERNAL_CALL_HINTS = (
    "UnityEngine.",
    "UnityEngine::",
    "UnityEngine_",
    "Unity.XR.",
    "UnityOpenXR",
    "Oculus",
    "OVR",
    "OpenXR",
    "XR_",
    "System.Array::UnsafeMov",
    "MonoPInvokeCallback",
)


def is_generic_name(name):
    if name is None:
        return False
    for p in GENERIC_PREFIXES:
        if name.startswith(p):
            return True
    return False


def has_good_name(fn):
    if fn is None:
        return False
    name = fn.getName()
    return name is not None and not is_generic_name(name) and not name.startswith("SUB_")


def sanitize_name(value, prefix):
    if value is None:
        value = "unknown"
    value = str(value)
    if "(" in value:
        value = value[:value.index("(")]
    value = value.replace("::", "_")
    value = value.replace(".", "_")
    value = value.replace("`", "_")
    value = value.replace("/", "_")
    value = re.sub(r"[^A-Za-z0-9_$]+", "_", value)
    value = re.sub(r"_+", "_", value).strip("_")
    if value == "":
        value = "unknown"
    if value[0].isdigit():
        value = "_" + value
    return (prefix + value)[:240]


def unique_name(base, fn):
    base = sanitize_name(base, "")
    if base == "":
        base = "renamed_holder"
    return "%s_%s" % (base, str(fn.getEntryPoint()).replace(":", "_"))


def rename_function(fn, new_name, reason):
    old = fn.getName()
    if not is_generic_name(old):
        return False
    new_name = sanitize_name(new_name, "")
    if old == new_name:
        return False
    try:
        fn.setName(new_name, SourceType.USER_DEFINED)
        print("RENAMED_HOLDER,%s,%s,%s" % (old, new_name, reason))
        return True
    except DuplicateNameException:
        fallback = unique_name(new_name, fn)
        try:
            fn.setName(fallback, SourceType.USER_DEFINED)
            print("RENAMED_HOLDER,%s,%s,%s_duplicate_fallback" % (old, fallback, reason))
            return True
        except Exception as e:
            print("RENAME_FAILED,%s,%s,%s" % (old, fallback, str(e)))
            return False
    except InvalidInputException as e:
        print("RENAME_FAILED,%s,%s,%s" % (old, new_name, str(e)))
        return False
    except Exception as e:
        print("RENAME_FAILED,%s,%s,%s" % (old, new_name, str(e)))
        return False


def get_string_value_at(addr):
    if addr is None:
        return None
    data = listing.getDataAt(addr)
    if data is None:
        data = listing.getDataContaining(addr)
    if data is None:
        return None
    try:
        value = data.getValue()
        if value is None:
            return None
        s = str(value)
        if len(s) < 4:
            return None
        return s
    except Exception:
        return None


def strings_referenced_by_function(fn):
    results = []
    try:
        instrs = listing.getInstructions(fn.getBody(), True)
        while instrs.hasNext() and not monitor.isCancelled():
            instr = instrs.next()
            for ref in instr.getReferencesFrom():
                s = get_string_value_at(ref.getToAddress())
                if s is None:
                    continue
                for hint in INTERESTING_INTERNAL_CALL_HINTS:
                    if hint in s:
                        results.append(s)
                        break
    except Exception as e:
        print("STRING_SCAN_FAILED,%s,%s" % (fn.getName(), str(e)))
    return results


def meaningful_callees(fn):
    callees = []
    seen = set()
    try:
        instrs = listing.getInstructions(fn.getBody(), True)
        while instrs.hasNext() and not monitor.isCancelled():
            instr = instrs.next()
            for ref in instr.getReferencesFrom():
                try:
                    if not ref.getReferenceType().isCall():
                        continue
                except Exception:
                    continue
                callee = fm.getFunctionAt(ref.getToAddress())
                if callee is None:
                    callee = fm.getFunctionContaining(ref.getToAddress())
                if callee is None or callee == fn:
                    continue
                if has_good_name(callee):
                    nm = callee.getName()
                    if nm not in seen:
                        seen.add(nm)
                        callees.append(nm)
    except Exception as e:
        print("CALL_SCAN_FAILED,%s,%s" % (fn.getName(), str(e)))
    return callees


def choose_best_internal_string(strings):
    if not strings:
        return None
    for s in strings:
        if "::" in s and ("Injected" in s or "Internal_" in s):
            return s
    for s in strings:
        if "Oculus" in s or "UnityOpenXR" in s or "OVR" in s or "OpenXR" in s:
            return s
    return strings[0]


def main():
    total_generic = 0
    renamed_by_callee = 0
    renamed_by_string = 0

    funcs = fm.getFunctions(True)
    while funcs.hasNext() and not monitor.isCancelled():
        fn = funcs.next()
        if fn is None:
            continue
        name = fn.getName()
        if not is_generic_name(name):
            continue
        total_generic += 1

        callees = meaningful_callees(fn)
        if len(callees) == 1:
            new_name = sanitize_name(callees[0], "holder_")
            if rename_function(fn, new_name, "single_meaningful_callee"):
                renamed_by_callee += 1
                continue

        strings = strings_referenced_by_function(fn)
        best = choose_best_internal_string(strings)
        if best is not None:
            prefix = "holder_"
            if "UnityEngine" in best:
                prefix = "unity_holder_"
            elif "Oculus" in best or "OpenXR" in best or "OVR" in best or "UnityOpenXR" in best:
                prefix = "xr_holder_"
            elif "System.Array::UnsafeMov" in best:
                prefix = "il2cpp_holder_"
            elif "MonoPInvokeCallback" in best:
                prefix = "il2cpp_holder_"
            new_name = sanitize_name(best, prefix)
            if rename_function(fn, new_name, "referenced_internal_string"):
                renamed_by_string += 1

    print("HOLDER_RENAME_SUMMARY,total_generic=%d,renamed_by_callee=%d,renamed_by_string=%d" % (
        total_generic, renamed_by_callee, renamed_by_string
    ))

main()
