/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 0603e9a8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose(void)

{
  undefined1 uVar1;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  
  do {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar1 = FUN_05d27784();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(undefined1 *)(unaff_x20 + 0x20 + unaff_x21) = uVar1;
    unaff_x21 = unaff_x21 + 1;
  } while ((unaff_x22 & 0xffffffff) != unaff_x21);
  return;
}


