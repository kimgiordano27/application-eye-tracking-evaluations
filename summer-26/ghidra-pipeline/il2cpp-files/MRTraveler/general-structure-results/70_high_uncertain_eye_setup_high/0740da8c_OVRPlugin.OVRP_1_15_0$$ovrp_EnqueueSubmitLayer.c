/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 0740da8c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(long param_1)

{
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
    param_1 = *unaff_x22;
  }
  if (**(long **)(param_1 + 0xb8) != 0) {
    FUN_06b03abc(**(long **)(param_1 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                 *(undefined8 *)PTR_DAT_08eb64e8);
    if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb28();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


