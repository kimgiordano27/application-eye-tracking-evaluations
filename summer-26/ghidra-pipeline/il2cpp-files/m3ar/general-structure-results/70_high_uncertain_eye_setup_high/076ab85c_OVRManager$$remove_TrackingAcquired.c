/*
FUNCTION_NAME: OVRManager$$remove_TrackingAcquired
ENTRY_POINT: 076ab85c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__remove_TrackingAcquired(float param_1)

{
  float *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float in_stack_00000010;
  
  param_1 = (unaff_s11 * unaff_s10 + in_stack_00000010 * unaff_s8 + unaff_s12 * unaff_s9) / param_1;
  fVar4 = 1.0;
  if (param_1 <= 1.0) {
    fVar4 = param_1;
  }
  fVar1 = -1.0;
  if (-1.0 <= param_1) {
    fVar1 = fVar4;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  dVar3 = acos((double)fVar1);
  fVar1 = ((float)dVar3 * DAT_01a2eb64) / *(float *)(unaff_x20 + 0x2c);
  fVar4 = 1.0;
  if (fVar1 <= 1.0) {
    fVar4 = fVar1;
  }
  fVar2 = 1.0;
  if (0.0 <= fVar1) {
    fVar2 = 1.0 - fVar4;
  }
  *unaff_x19 = fVar2;
  return unaff_w21 & 1;
}


