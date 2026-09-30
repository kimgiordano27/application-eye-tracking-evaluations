/*
FUNCTION_NAME: OVRPlugin$$GetControllerIsInHand
ENTRY_POINT: 01a1802c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetControllerIsInHand(float param_1,float param_2,float param_3)

{
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  
  FUN_01a17f28();
  if (DAT_03774e1a == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1a = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  return SQRT((param_3 - in_stack_00000008) * (param_3 - in_stack_00000008) +
              (param_1 - fStack0000000000000000) * (param_1 - fStack0000000000000000) +
              (param_2 - fStack0000000000000004) * (param_2 - fStack0000000000000004));
}


