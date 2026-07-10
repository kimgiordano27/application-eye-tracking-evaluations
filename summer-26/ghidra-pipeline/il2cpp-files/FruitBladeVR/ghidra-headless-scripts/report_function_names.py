# @runtime Jython
# -*- coding: utf-8 -*-

import os
import re

args = getScriptArgs()

if len(args) < 2:
    raise Exception("Usage: report_function_names.py <phase> <out_dir>")

phase = args[0]
out_dir = args[1]

fm = currentProgram.getFunctionManager()

generic_prefixes = ("FUN_", "thunk_FUN_", "switchD_", "caseD_", "SUB_")

def is_generic(name):
    if name is None:
        return False
    for p in generic_prefixes:
        if name.startswith(p):
            return True
    return False

def looks_il2cpp(name):
    if name is None:
        return False
    return ("$$" in name) or ("_" in name and ("Unity" in name or "System" in name or "Meta" in name or "Oculus" in name or "OVR" in name or "Eye" in name or "Gaze" in name))

try:
    os.makedirs(out_dir)
except Exception:
    pass

name_file = os.path.join(out_dir, phase + "_function_names.txt")
summary_file = os.path.join(out_dir, phase + "_summary.txt")

total = 0
generic = 0
nongeneric = 0
il2cppish = 0
eye_related = 0

examples_generic = []
examples_named = []
examples_eye = []

f = open(name_file, "w")

funcs = fm.getFunctions(True)

while funcs.hasNext():
    fn = funcs.next()
    total += 1

    name = fn.getName()
    entry = str(fn.getEntryPoint())

    f.write(entry + "," + name + "\n")

    if is_generic(name):
        generic += 1
        if len(examples_generic) < 20:
            examples_generic.append(entry + " " + name)
    else:
        nongeneric += 1
        if len(examples_named) < 20:
            examples_named.append(entry + " " + name)

    if looks_il2cpp(name):
        il2cppish += 1

    low = name.lower()
    if "eye" in low or "gaze" in low or "ovr" in low or "oculus" in low or "openxr" in low:
        eye_related += 1
        if len(examples_eye) < 40:
            examples_eye.append(entry + " " + name)

f.close()

s = open(summary_file, "w")
s.write("PHASE=" + phase + "\n")
s.write("CURRENT_PROGRAM_NAME=" + currentProgram.getName() + "\n")
s.write("CURRENT_PROGRAM_IMAGE_BASE=" + str(currentProgram.getImageBase()) + "\n")

try:
    df = currentProgram.getDomainFile()
    s.write("CURRENT_DOMAIN_FILE_NAME=" + df.getName() + "\n")
    s.write("CURRENT_DOMAIN_FILE_PATH=" + df.getPathname() + "\n")
except Exception as e:
    s.write("CURRENT_DOMAIN_FILE_INFO_FAILED=" + str(e) + "\n")

s.write("TOTAL_FUNCTIONS=" + str(total) + "\n")
s.write("GENERIC_FUNCTIONS=" + str(generic) + "\n")
s.write("NONGENERIC_FUNCTIONS=" + str(nongeneric) + "\n")
s.write("IL2CPPISH_FUNCTIONS=" + str(il2cppish) + "\n")
s.write("EYE_RELATED_FUNCTIONS=" + str(eye_related) + "\n")

s.write("\nEXAMPLES_GENERIC:\n")
for x in examples_generic:
    s.write(x + "\n")

s.write("\nEXAMPLES_NAMED:\n")
for x in examples_named:
    s.write(x + "\n")

s.write("\nEXAMPLES_EYE_RELATED:\n")
for x in examples_eye:
    s.write(x + "\n")

s.close()

print("FUNCTION_REPORT_DONE," + phase + "," + summary_file)
print("FUNCTION_REPORT_COUNTS,phase=%s,total=%d,generic=%d,nongeneric=%d,il2cppish=%d,eye_related=%d" % (
    phase,
    total,
    generic,
    nongeneric,
    il2cppish,
    eye_related
))
