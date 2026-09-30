/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 02c519f8
PROGRAM: sharks-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(ulong param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380cb40);
    *(undefined1 *)(unaff_x21 + 0x133) = 1;
  }
  if (unaff_x19 != 0) {
    FUN_02ae137c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


