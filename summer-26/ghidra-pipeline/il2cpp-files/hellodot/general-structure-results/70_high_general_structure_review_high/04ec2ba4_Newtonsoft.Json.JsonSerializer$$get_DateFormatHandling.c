/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatHandling
ENTRY_POINT: 04ec2ba4
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


void Newtonsoft_Json_JsonSerializer__get_DateFormatHandling
               (ulong param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 unaff_w20;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1670);
    *(undefined1 *)(unaff_x25 + 0x262) = 1;
  }
  puVar1 = PTR_DAT_065f1670;
  if (param_2 != 0) {
    iVar2 = thunk_FUN_02c8538c(0);
    param_2 = param_2 + iVar2;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_02ccbb78(param_2,param_3,param_4,param_5,unaff_w20);
  return;
}


