/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 036a051c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(void)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x160) == '\0') {
    FUN_036673a4(unaff_x20 + 0x108,unaff_x19 + 0x14,0);
    *(undefined1 *)(unaff_x20 + 0x160) = 1;
  }
  FUN_036a0580();
  FUN_036a0c00();
  *(undefined4 *)(unaff_x19 + 0x30) = 3;
  return;
}


