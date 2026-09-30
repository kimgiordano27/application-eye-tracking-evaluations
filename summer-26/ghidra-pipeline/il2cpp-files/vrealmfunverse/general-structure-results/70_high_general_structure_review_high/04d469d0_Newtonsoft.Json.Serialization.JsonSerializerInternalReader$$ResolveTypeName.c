/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 04d469d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName
               (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int in_w9;
  undefined8 uVar3;
  long *unaff_x25;
  
  if (in_w9 == 0) {
    thunk_FUN_02b9ad44();
    param_1 = *(undefined8 **)(*unaff_x25 + 0xb8);
  }
  uVar3 = *param_1;
  uVar1 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063325c8);
  FUN_049c6950(uVar1,uVar3,*(undefined8 *)PTR_DAT_063325f0,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x28);
  *puVar2 = uVar1;
  thunk_FUN_02bb0e9c(puVar2,uVar1);
  FUN_02e769bc();
  return;
}


