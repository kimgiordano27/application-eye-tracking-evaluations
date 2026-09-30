/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 07caace4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(void)

{
  int iVar1;
  long unaff_x19;
  ulong unaff_x20;
  
  iVar1 = 0;
  if (*(int *)(unaff_x19 + 0x28) + 1 < *(int *)(unaff_x19 + 0x2c)) {
    iVar1 = *(int *)(unaff_x19 + 0x28) + 1;
  }
  *(int *)(unaff_x19 + 0x28) = iVar1;
  FUN_07caadec();
  if (((unaff_x20 & 1) != 0) && (*(char *)(unaff_x19 + 0x30) == '\0')) {
    iVar1 = *(int *)(unaff_x19 + 0x28) + -1;
    *(int *)(unaff_x19 + 0x28) = iVar1;
    if (iVar1 < 0) {
      *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x2c) + -1;
    }
    FUN_07caadec();
  }
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  return;
}


