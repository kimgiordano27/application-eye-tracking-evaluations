/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 07a2b784
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpaceRotation(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 0x130) = unaff_x20;
  thunk_FUN_040ec700();
  FUN_061ccdbc();
  return;
}


