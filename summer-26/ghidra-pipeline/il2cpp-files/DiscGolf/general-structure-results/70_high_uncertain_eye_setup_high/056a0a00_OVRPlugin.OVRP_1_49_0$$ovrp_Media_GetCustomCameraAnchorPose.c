/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCustomCameraAnchorPose
ENTRY_POINT: 056a0a00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose(ulong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 & 1) != 0) {
    uVar1 = FUN_06648724(0);
    return uVar1;
  }
  return 0;
}


