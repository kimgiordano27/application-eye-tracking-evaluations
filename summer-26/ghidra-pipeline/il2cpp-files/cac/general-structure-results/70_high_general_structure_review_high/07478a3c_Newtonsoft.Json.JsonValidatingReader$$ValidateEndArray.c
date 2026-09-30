/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 07478a3c
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_091284a8;
  if ((DAT_0968e1c0 & 1) == 0) {
    FUN_03f13384(PTR_DAT_091284a8);
    DAT_0968e1c0 = 1;
  }
  uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
  FUN_074853f8(uVar2,param_1,4,2,0,0x1000,0,0);
  return uVar2;
}


