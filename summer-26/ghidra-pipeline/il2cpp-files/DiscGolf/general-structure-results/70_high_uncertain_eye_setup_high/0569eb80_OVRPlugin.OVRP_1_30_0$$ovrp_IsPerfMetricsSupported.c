/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_IsPerfMetricsSupported
ENTRY_POINT: 0569eb80
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_30_0__ovrp_IsPerfMetricsSupported(void)

{
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x19 + 0x20);
  OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose();
  return;
}


