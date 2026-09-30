/*
FUNCTION_NAME: OVRPlugin$$GetExternalCameraCount
ENTRY_POINT: 07a39aa8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetExternalCameraCount(long param_1,float param_2,float param_3)

{
  float fVar1;
  float unaff_s11;
  float unaff_s14;
  undefined8 in_stack_00000020;
  
  param_2 = param_2 - (float)(int)(param_2 / param_3) * param_3;
  if (param_2 <= param_3) {
    param_3 = param_2;
  }
  fVar1 = 0.0;
  if (0.0 <= param_2) {
    fVar1 = param_3;
  }
  if (param_1 != 0) {
    if ((*(float *)(param_1 + 0x2c) < fVar1) &&
       (unaff_s11 = unaff_s14, ABS(fVar1 - *(float *)(param_1 + 0x2c)) < ABS(360.0 - fVar1))) {
      unaff_s11 = (float)FUN_07a38980();
    }
    fVar1 = (float)FUN_07a38b94();
    return in_stack_00000020._4_4_ + unaff_s11 * fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


