/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 06afb944
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(void)

{
  int in_w8;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x24;
  
  while( true ) {
    if (in_w8 == 0) {
      FUN_033b9870();
    }
    FUN_06afba34();
    FUN_06afbaa0();
    if (unaff_x20 == 0) break;
    FUN_05db00ac();
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w21 == unaff_w22) {
      return;
    }
    in_w8 = *(int *)(*(long *)(unaff_x24 + 0x548) + 0xe0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


