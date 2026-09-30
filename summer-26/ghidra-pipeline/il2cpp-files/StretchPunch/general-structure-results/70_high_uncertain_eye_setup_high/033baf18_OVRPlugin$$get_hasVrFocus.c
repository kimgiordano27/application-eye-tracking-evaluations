/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 033baf18
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasVrFocus(undefined8 param_1)

{
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_01dccd6c();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01e7f0d0(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db68();
}


