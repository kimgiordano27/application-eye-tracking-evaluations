# @runtime Jython
# -*- coding: utf-8 -*-

# Runs known-working Il2CppDumper ghidra.py and intercepts askFile(...)
# so it receives the app-specific script.json.

args = getScriptArgs()

if len(args) < 2:
    raise Exception("Usage: run_known_good_ghidra_py_wrapper.py <known_good_ghidra.py> <script.json>")

known_good_ghidra_py = args[0]
script_json_path = args[1]

print("KNOWN_GOOD_WRAPPER_START")
print("CURRENT_PROGRAM_NAME=" + currentProgram.getName())
print("CURRENT_PROGRAM_IMAGE_BASE=" + str(currentProgram.getImageBase()))

try:
    df = currentProgram.getDomainFile()
    print("CURRENT_DOMAIN_FILE_NAME=" + df.getName())
    print("CURRENT_DOMAIN_FILE_PATH=" + df.getPathname())
except Exception as e:
    print("CURRENT_DOMAIN_FILE_INFO_FAILED=" + str(e))

print("KNOWN_GOOD_GHIDRA_PY=" + known_good_ghidra_py)
print("APP_SCRIPT_JSON=" + script_json_path)


class FakeFile(object):
    def __init__(self, path):
        self.absolutePath = path

    def getAbsolutePath(self):
        return self.absolutePath

    def __str__(self):
        return self.absolutePath


def askFile(title, action):
    print("ASKFILE_INTERCEPTED,title=%s,action=%s,returning=%s" % (
        str(title),
        str(action),
        script_json_path
    ))
    return FakeFile(script_json_path)


globals()["askFile"] = askFile

print("EXECFILE_START")
execfile(known_good_ghidra_py)
print("EXECFILE_DONE")

try:
    currentProgram.flushEvents()
    print("FLUSH_EVENTS_DONE")
except Exception as e:
    print("FLUSH_EVENTS_WARNING=" + str(e))

print("KNOWN_GOOD_WRAPPER_DONE")
