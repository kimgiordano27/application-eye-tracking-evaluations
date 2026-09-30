/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 074a5870
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0xe0);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar1 = FUN_074a595c();
  FUN_074931e4(uVar1,0);
  uVar2 = thunk_FUN_0406deb8(*puVar3);
  FUN_074a6ef8();
  FUN_074a6f6c(uVar2,uVar1,0,0,0);
  return uVar2;
}


