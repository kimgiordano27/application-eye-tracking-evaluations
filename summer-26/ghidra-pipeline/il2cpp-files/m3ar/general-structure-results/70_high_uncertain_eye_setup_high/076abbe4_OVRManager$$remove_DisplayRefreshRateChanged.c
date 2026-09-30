/*
FUNCTION_NAME: OVRManager$$remove_DisplayRefreshRateChanged
ENTRY_POINT: 076abbe4
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRManager__remove_DisplayRefreshRateChanged
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined8 uVar1;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  undefined4 unaff_s9;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  uStack0000000000000010 = unaff_s9;
  uVar1 = FUN_085849e0();
  FUN_076b6d64(&stack0x00000060,uVar1,0,0);
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = in_stack_00000060;
  uStack0000000000000054 = uStack0000000000000074;
  in_stack_00000050 = uStack0000000000000070;
  fVar6 = fStack000000000000006c;
  fVar2 = (float)FUN_08596ab0(&stack0x00000040,0);
  if (DAT_09539f9e == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539f9e = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar5 = 0.0;
  fVar3 = SQRT((unaff_s8 * unaff_s8 + unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15) *
               (param_3 * param_3 + fVar2 * fVar2 + fVar6 * fVar6));
  if (DAT_01a2e770 <= fVar3) {
    fVar3 = (unaff_s8 * param_3 + unaff_s14 * fVar2 + unaff_s15 * fVar6) / fVar3;
    fVar6 = 1.0;
    if (fVar3 <= 1.0) {
      fVar6 = fVar3;
    }
    fVar2 = -1.0;
    if (-1.0 <= fVar3) {
      fVar2 = fVar6;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    dVar4 = acos((double)fVar2);
    fVar5 = (float)dVar4 * DAT_01a2eb64;
  }
  fVar5 = fVar5 / *(float *)(unaff_x20 + 0x2c);
  fVar6 = 1.0;
  if (fVar5 <= 1.0) {
    fVar6 = fVar5;
  }
  fVar2 = 1.0;
  if (0.0 <= fVar5) {
    fVar2 = 1.0 - fVar6;
  }
  *unaff_x19 = fVar2;
  return uStack0000000000000010;
}


