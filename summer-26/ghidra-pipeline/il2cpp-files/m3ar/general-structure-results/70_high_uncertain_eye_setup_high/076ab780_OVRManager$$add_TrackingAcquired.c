/*
FUNCTION_NAME: OVRManager$$add_TrackingAcquired
ENTRY_POINT: 076ab780
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


uint OVRManager__add_TrackingAcquired
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  undefined8 uVar1;
  float *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  uStack0000000000000010 = *param_1;
  fVar8 = *(float *)(param_1 + 1);
  uStack0000000000000018 = 0;
  uVar1 = FUN_085849e0();
  FUN_076b6d64(&stack0x00000040,uVar1,0,0);
  in_stack_00000028 = uStack0000000000000048;
  in_stack_00000020 = in_stack_00000040;
  uStack0000000000000034 = uStack0000000000000054;
  in_stack_00000030 = uStack0000000000000050;
  fVar7 = fStack000000000000004c;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar2 = (float)FUN_08596ab0(&stack0x00000020,0);
  if (DAT_09539f9e == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539f9e = '\x01';
  }
  fVar6 = (float)((ulong)uStack0000000000000010 >> 0x20);
  fVar3 = (float)uStack0000000000000010;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar5 = 0.0;
  fVar3 = SQRT((fVar8 * fVar8 + fVar3 * fVar3 + fVar6 * fVar6) *
               (param_4 * param_4 + fVar2 * fVar2 + fVar7 * fVar7));
  if (DAT_01a2e770 <= fVar3) {
    fVar3 = (fVar8 * param_4 + (float)uStack0000000000000010 * fVar2 + fVar6 * fVar7) / fVar3;
    fVar7 = 1.0;
    if (fVar3 <= 1.0) {
      fVar7 = fVar3;
    }
    fVar8 = -1.0;
    if (-1.0 <= fVar3) {
      fVar8 = fVar7;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    dVar4 = acos((double)fVar8);
    fVar5 = (float)dVar4 * DAT_01a2eb64;
  }
  fVar5 = fVar5 / *(float *)(unaff_x20 + 0x2c);
  fVar7 = 1.0;
  if (fVar5 <= 1.0) {
    fVar7 = fVar5;
  }
  fVar8 = 1.0;
  if (0.0 <= fVar5) {
    fVar8 = 1.0 - fVar7;
  }
  *unaff_x19 = fVar8;
  return unaff_w21 & 1;
}


