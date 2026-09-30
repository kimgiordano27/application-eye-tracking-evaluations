/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$Invoke
ENTRY_POINT: 060fead0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__Invoke(void)

{
  void *__ptr;
  int in_w8;
  long unaff_x21;
  long *plVar1;
  
  plVar1 = *(long **)(unaff_x21 + 0x730);
  if (in_w8 == 0) {
    thunk_FUN_036a1978();
  }
  __ptr = (void *)FUN_061019e8();
  FUN_0611c604();
  if (*(int *)(*plVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  free(__ptr);
  return;
}


