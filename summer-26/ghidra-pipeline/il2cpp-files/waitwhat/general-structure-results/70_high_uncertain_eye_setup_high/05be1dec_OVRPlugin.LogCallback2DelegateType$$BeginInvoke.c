/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$BeginInvoke
ENTRY_POINT: 05be1dec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__BeginInvoke(long param_1)

{
  long *plVar1;
  long in_x9;
  long in_x10;
  
  while( true ) {
    if (in_x9 * 8 - param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    plVar1 = (long *)(in_x10 + param_1);
    if (*plVar1 == 0) break;
    param_1 = param_1 + 8;
    *(undefined1 *)(*plVar1 + 0x1d) = 0;
    if (param_1 == 0x28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


