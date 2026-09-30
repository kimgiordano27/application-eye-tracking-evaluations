/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 04f2ec04
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_06a6f62d & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f73a8);
    DAT_06a6f62d = 1;
  }
  FUN_04ee8c10(param_2,0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(0x30,0);
  }
  if (DAT_06a6cef9 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e23a8);
    DAT_06a6cef9 = '\x01';
  }
  puVar1 = PTR_DAT_065f73a8;
  if (param_1 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_04db75ac(param_1,0);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  uVar3 = FUN_04ee855c(param_3,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar1);
  }
  FUN_04f2da84(uVar2,uVar4,param_2,uVar3);
  return;
}


