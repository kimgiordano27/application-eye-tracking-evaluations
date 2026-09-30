/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 063b6884
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(void)

{
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x74d) = 1;
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    FUN_07579cdc(*(long *)(unaff_x19 + 0x90),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


