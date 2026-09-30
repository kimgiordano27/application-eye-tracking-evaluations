/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 06109e3c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(undefined8 param_1)

{
  code *pcVar1;
  undefined4 unaff_w19;
  long unaff_x21;
  
  pcVar1 = *(code **)(unaff_x21 + 0x4b8);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = (code *)thunk_FUN_036800c0();
    *(code **)(unaff_x21 + 0x4b8) = pcVar1;
  }
  (*pcVar1)(param_1,unaff_w19);
  return;
}


