/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$EndInvoke
ENTRY_POINT: 090c5100
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__EndInvoke(undefined4 param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x20 != 0) {
    *(undefined4 *)(unaff_x20 + 0x70) = param_1;
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


