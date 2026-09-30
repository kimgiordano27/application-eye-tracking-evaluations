/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 06259080
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int in_w9;
  int in_w10;
  
  if (in_w9 == in_w10) {
    iVar2 = FUN_060be3d8(param_3,param_1,5,0);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


