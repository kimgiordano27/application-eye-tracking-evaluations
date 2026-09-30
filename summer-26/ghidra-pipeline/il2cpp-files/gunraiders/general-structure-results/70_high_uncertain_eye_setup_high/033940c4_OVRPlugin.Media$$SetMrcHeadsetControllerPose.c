/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 033940c4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcHeadsetControllerPose(void)

{
  long lVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xf1) == '\0') {
    lVar1 = thunk_FUN_01c495e4();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
  }
  else {
    lVar1 = FUN_0338eda8();
  }
  if (unaff_x20 != 0) {
    FUN_03394440();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4(lVar1,lVar1);
}


