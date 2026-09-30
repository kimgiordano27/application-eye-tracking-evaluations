/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 01f5eb7c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetRotation(undefined8 *param_1,undefined8 param_2)

{
  undefined4 in_w8;
  undefined4 in_register_00004044;
  undefined8 in_x9;
  
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(in_register_00004044,in_w8);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(in_register_00004044,in_w8);
  *(undefined4 *)((long)param_1 + 0x1c) = in_w8;
  param_1[4] = in_x9;
  *param_1 = param_2;
  return;
}


