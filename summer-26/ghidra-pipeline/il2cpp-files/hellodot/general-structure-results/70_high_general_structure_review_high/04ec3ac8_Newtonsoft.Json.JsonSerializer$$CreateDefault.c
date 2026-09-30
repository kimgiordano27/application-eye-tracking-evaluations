/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 04ec3ac8
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ec3ba0) */

undefined8
Newtonsoft_Json_JsonSerializer__CreateDefault(ulong param_1,long param_2,undefined8 param_3)

{
  long unaff_x21;
  undefined8 uVar1;
  char cStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1670);
    *(undefined1 *)(unaff_x21 + 0x267) = 1;
  }
  cStack000000000000000c = '\0';
  if (param_2 != 0) {
    FUN_04e56180(param_2,&stack0x0000000c,0);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar1 = thunk_FUN_02cb246c(uVar1,param_3);
    if (cStack000000000000000c != '\0') {
      FUN_04e562ec(param_2,0);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


