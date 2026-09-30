/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 01a1624c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__EnqueueSubmitLayer(long param_1,float param_2,float param_3)

{
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float fVar2;
  float unaff_s10;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000068;
  
  fVar1 = *(float *)(param_1 + 8);
  if (DAT_03774e1a == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1a = '\x01';
  }
  fVar2 = (unaff_s9 + param_3) - unaff_s14;
  in_stack_00000068._4_4_ = (unaff_s8 + param_2) - in_stack_00000068._4_4_;
  fVar1 = (unaff_s10 + fVar1) - unaff_s15;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  return SQRT(fVar1 * fVar1 + in_stack_00000068._4_4_ * in_stack_00000068._4_4_ + fVar2 * fVar2);
}


