/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 05ba5308
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__set_headPoseRelativeOffsetRotation
               (long param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
               float param_5,undefined1 param_6 [16],undefined1 param_7 [16])

{
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  FUN_069e7098(param_2._0_4_ + (float)*(undefined8 *)(param_1 + 0x18) * param_5 * param_7._0_4_,
               param_2._4_4_ +
               (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * param_5 * param_7._4_4_,
               unaff_s8 + param_5 * *(float *)(param_1 + 0x20) * param_3);
  FUN_05ba4f84();
  return unaff_s9 < unaff_s10;
}


