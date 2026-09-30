/*
FUNCTION_NAME: OVRPlugin$$get_chromatic
ENTRY_POINT: 01a13ef8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_chromatic(void)

{
  undefined *puVar1;
  bool bVar2;
  float *unaff_x19;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  if (DAT_03774e1b == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1b = '\x01';
  }
  puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
    bVar2 = DAT_03774e1b == '\0';
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1b = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (SQRT(unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10) <= SQRT(unaff_s11)) {
    fVar3 = unaff_s8 + *unaff_x19;
  }
  else {
    fVar3 = unaff_x19[3];
  }
  return fVar3;
}


