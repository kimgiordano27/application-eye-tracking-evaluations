/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 06942fb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetActionStatePose(void)

{
  long unaff_x19;
  uint unaff_w20;
  
  if (*(char *)(unaff_x19 + 0xc0) != '\0') {
    FUN_06942fd0();
  }
  return unaff_w20 & 1;
}


