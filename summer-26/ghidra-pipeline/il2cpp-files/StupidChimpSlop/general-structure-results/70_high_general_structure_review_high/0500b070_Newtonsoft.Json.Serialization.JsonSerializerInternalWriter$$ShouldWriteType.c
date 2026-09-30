/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 0500b070
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType(ulong param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long unaff_x19;
  undefined2 *unaff_x21;
  
  if ((long)param_1 < 0) {
    param_1 = param_1 + 1;
  }
  param_1 = param_1 >> 1;
  *(int *)(unaff_x19 + 4) = (int)param_1;
  puVar2 = (undefined2 *)FUN_05011f14();
  puVar3 = puVar2;
  if (-1 < (int)param_1 + -1) {
    do {
      uVar1 = (int)param_1 - 1;
      param_1 = (ulong)uVar1;
      puVar2 = puVar3 + 1;
      *puVar3 = *unaff_x21;
      puVar3 = puVar2;
      unaff_x21 = unaff_x21 + 1;
    } while (uVar1 != 0);
  }
  *puVar2 = 0;
  return;
}


