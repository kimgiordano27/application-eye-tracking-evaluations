/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 04fc8fa4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_04f10530(param_1,param_2,0);
  *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
  thunk_FUN_02dd37b4();
  uVar1 = FUN_04f10530();
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar1;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0xa0),uVar1);
  return;
}


