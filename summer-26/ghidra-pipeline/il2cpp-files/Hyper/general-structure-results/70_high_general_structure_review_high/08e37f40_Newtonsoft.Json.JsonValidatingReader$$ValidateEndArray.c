/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 08e37f40
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  uVar1 = FUN_08bda228();
  uVar1 = FUN_08bda228(uVar1,*unaff_x23,*(undefined8 *)(unaff_x19 + 0x68),*unaff_x22,0);
                    /* try { // try from 08e37f58 to 08f37f6b has its CatchHandler @ 08e381b4 */
  FUN_08bda228(uVar1,*unaff_x21,*(undefined8 *)(unaff_x19 + 0x70),*unaff_x22,0);
  return;
}


