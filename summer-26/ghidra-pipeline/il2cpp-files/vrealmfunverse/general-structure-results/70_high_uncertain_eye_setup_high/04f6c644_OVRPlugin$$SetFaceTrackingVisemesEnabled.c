/*
FUNCTION_NAME: OVRPlugin$$SetFaceTrackingVisemesEnabled
ENTRY_POINT: 04f6c644
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetFaceTrackingVisemesEnabled(float param_1,float param_2,float param_3)

{
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s15;
  undefined8 in_stack_00000020;
  
  param_2 = param_2 - param_3;
  if (param_1 <= unaff_s8) {
    fVar1 = unaff_s10 * param_2 + unaff_s15 * unaff_s11 + unaff_s9 * unaff_s12;
    unaff_s11 = unaff_s11 - (unaff_s15 * fVar1) / unaff_s8;
    unaff_s12 = unaff_s12 - (unaff_s9 * fVar1) / unaff_s8;
    param_2 = param_2 - (unaff_s10 * fVar1) / unaff_s8;
  }
  if (*(char *)(unaff_x26 + 0xd9d) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    *(undefined1 *)(unaff_x26 + 0xd9d) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar1 = SQRT(param_2 * param_2 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar1 <= *(float *)(unaff_x25 + 0x864)) {
    if (*(char *)(unaff_x22 + 0xd97) == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      *(undefined1 *)(unaff_x22 + 0xd97) = 1;
    }
    fVar1 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fVar1 = unaff_s11 / fVar1;
  }
  fVar2 = (float)FUN_04f6b594();
  fVar3 = (float)FUN_02cdfa10(0);
  fVar3 = fVar3 - (float)(int)(fVar3 / 360.0) * 360.0;
  fVar5 = 360.0;
  if (fVar3 <= 360.0) {
    fVar5 = fVar3;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar5;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar5 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar5 < fVar4) && (fVar1 = fVar2, ABS(fVar4 - fVar5) < ABS(360.0 - fVar4))) {
      fVar1 = (float)FUN_04f6b640();
    }
    fVar5 = (float)FUN_04f6b854();
    return in_stack_00000020._4_4_ + fVar1 * fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


