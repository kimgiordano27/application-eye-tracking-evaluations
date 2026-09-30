/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 054b945c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_06dbad01 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a18a98);
    DAT_06dbad01 = 1;
  }
  puVar1 = PTR_DAT_06a18a98;
  if (param_1 != 0) {
    iVar2 = thunk_FUN_02da2370(0);
    param_1 = param_1 + iVar2;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_02d9f164(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


