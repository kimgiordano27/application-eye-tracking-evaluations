/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetControllerHaptics
ENTRY_POINT: 0316c4e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetControllerHaptics(void)

{
  long unaff_x19;
  
  thunk_FUN_038fd510();
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    FUN_03120f88(*(long *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_03120f88(*(long *)(unaff_x19 + 0x88),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


