# @runtime Jython
# -*- coding: utf-8 -*-

# Runs the original Il2CppDumper ghidra.py headlessly.
# It intercepts askFile(...) so the original script receives script.json.
# Do not call currentProgram.save() here; HeadlessAnalyzer saves after scripts.

args = getScriptArgs()

if len(args) < 2:
    raise Exception("Usage: run_original_ghidra_py_wrapper.py <original_ghidra.py> <script.json>")

original_ghidra_py = args[0]
script_json_path = args[1]

print("ORIGINAL_GHIDRA_WRAPPER_START")
print("CURRENT_PROGRAM_NAME=" + currentProgram.getName())
print("CURRENT_PROGRAM_IMAGE_BASE=" + str(currentProgram.getImageBase()))

try:
    df = currentProgram.getDomainFile()
    print("CURRENT_DOMAIN_FILE_NAME=" + df.getName())
    print("CURRENT_DOMAIN_FILE_PATH=" + df.getPathname())
except Exception as e:
    print("CURRENT_DOMAIN_FILE_INFO_FAILED=" + str(e))

print("ORIGINAL_GHIDRA_PY=" + original_ghidra_py)
print("SCRIPT_JSON=" + script_json_path)


class FakeFile(object):
    def __init__(self, path):
        self.absolutePath = path

    def getAbsolutePath(self):
        return self.absolutePath

    def __str__(self):
        return self.absolutePath


def askFile(title, action):
    print("ASKFILE_INTERCEPTED,title=%s,action=%s,returning=%s" % (str(title), str(action), script_json_path))
    return FakeFile(script_json_path)


globals()["askFile"] = askFile

print("EXECFILE_START")
execfile(original_ghidra_py)
print("EXECFILE_DONE")

try:
    currentProgram.flushEvents()
    print("FLUSH_EVENTS_DONE")
except Exception as e:
    print("FLUSH_EVENTS_WARNING=" + str(e))

print("ORIGINAL_GHIDRA_WRAPPER_DONE")
