/*
FUNCTION_NAME: OVRPlugin$$SetControllerLocalizedVibration
ENTRY_POINT: 07473058
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x074730a4) */

float OVRPlugin__SetControllerLocalizedVibration(undefined8 param_1)

{
  long unaff_x20;
  float fVar1;
  float fVar2;
  undefined8 unaff_d11;
  undefined8 in_stack_00000010;
  
  fVar1 = (float)FUN_03e64c4c(param_1,0);
  fVar1 = fVar1 - (float)(int)(fVar1 / 360.0) * 360.0;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  fVar2 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  if ((fVar2 < fVar1) && (unaff_d11 = param_1, ABS(fVar1 - fVar2) < ABS(360.0 - fVar1))) {
    unaff_d11 = FUN_07471f5c();
  }
  fVar1 = (float)FUN_07472170();
  return in_stack_00000010._4_4_ + (float)unaff_d11 * fVar1;
}


