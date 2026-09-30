/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 06259074
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag
                (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  int in_w9;
  
  if (in_w9 != 0) {
    if (*(int *)(param_3 + 0x10) == *(int *)(param_1 + 0x10)) {
      iVar1 = FUN_060be3d8(param_3,param_1,5,0);
      uVar2 = (ulong)(iVar1 == 0);
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = FUN_060bf398(param_3,param_1,0);
  return uVar2;
}


