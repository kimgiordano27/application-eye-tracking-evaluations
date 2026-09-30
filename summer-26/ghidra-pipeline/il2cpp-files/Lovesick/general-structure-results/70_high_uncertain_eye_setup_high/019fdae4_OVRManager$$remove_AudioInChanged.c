/*
FUNCTION_NAME: OVRManager$$remove_AudioInChanged
ENTRY_POINT: 019fdae4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_AudioInChanged(float param_1)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float fVar4;
  float unaff_s10;
  float fVar5;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000008;
  float fStack000000000000000c;
  
  fVar2 = unaff_s12 * unaff_s10 + unaff_s14 * unaff_s9 + unaff_s15 * unaff_s8;
  fVar3 = unaff_s9 * fVar2;
  fVar4 = fVar3 / param_1;
  fVar5 = (unaff_s8 * fVar2) / param_1;
  param_1 = (unaff_s10 * fVar2) / param_1;
  if (DAT_03774e1b == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1b = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  param_1 = param_1 * param_1;
  fVar4 = fVar4 * fVar4 + fVar5 * fVar5 + param_1;
  fVar5 = (float)FUN_02666efc();
  fVar2 = 1.0;
  if (unaff_s12 * fVar3 + unaff_s14 * fVar5 + unaff_s15 * param_1 < 0.0) {
    fVar2 = -1.0;
  }
  fVar2 = SQRT(fVar4) * fVar2;
  fVar3 = 1.0;
  if (fVar2 < 0.0) {
    fVar3 = -1.0;
  }
  *(float *)(unaff_x19 + 0x158) = fVar2;
  if (in_stack_00000008 != fVar3) {
    lVar1 = *(long *)(unaff_x19 + 0x160);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fStack000000000000000c = in_stack_00000008;
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),&stack0x0000000c,*(undefined8 *)(lVar1 + 0x28));
  }
  return;
}


