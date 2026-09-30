/*
FUNCTION_NAME: OVRManager$$remove_AudioInChanged
ENTRY_POINT: 076ab6a4
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__remove_AudioInChanged
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  float *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  fVar8 = *(float *)(unaff_x22 + 1);
  uVar10 = *unaff_x22;
  uVar2 = FUN_085849e0();
  FUN_076b6d64(&stack0x00000040,uVar2,0,0);
  fVar3 = fStack0000000000000048;
  uVar2 = in_stack_00000040;
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  puVar1 = PTR_DAT_08f65580;
  fVar9 = (float)uVar10 - (float)uVar2;
  fVar11 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar2 >> 0x20);
  fVar8 = fVar8 - fVar3;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar11 * fVar11);
  if (fVar3 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uStack0000000000000010 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar8 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  }
  else {
    fVar8 = fVar8 / fVar3;
    uStack0000000000000010 = CONCAT44(fVar11 / fVar3,fVar9 / fVar3);
  }
  uVar2 = FUN_085849e0();
  FUN_076b6d64(&stack0x00000040,uVar2,0,0);
  in_stack_00000028 = fStack0000000000000048;
  in_stack_00000020 = in_stack_00000040;
  uStack0000000000000034 = uStack0000000000000054;
  in_stack_00000030 = uStack0000000000000050;
  fVar3 = fStack000000000000004c;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar9 = (float)FUN_08596ab0(&stack0x00000020,0);
  if (DAT_09539f9e == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539f9e = '\x01';
  }
  fVar7 = (float)((ulong)uStack0000000000000010 >> 0x20);
  fVar11 = (float)uStack0000000000000010;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar6 = 0.0;
  fVar4 = SQRT((fVar8 * fVar8 + fVar11 * fVar11 + fVar7 * fVar7) *
               (param_3 * param_3 + fVar9 * fVar9 + fVar3 * fVar3));
  if (DAT_01a2e770 <= fVar4) {
    fVar4 = (fVar8 * param_3 + fVar11 * fVar9 + fVar7 * fVar3) / fVar4;
    fVar3 = 1.0;
    if (fVar4 <= 1.0) {
      fVar3 = fVar4;
    }
    fVar8 = -1.0;
    if (-1.0 <= fVar4) {
      fVar8 = fVar3;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    dVar5 = acos((double)fVar8);
    fVar6 = (float)dVar5 * DAT_01a2eb64;
  }
  fVar6 = fVar6 / *(float *)(unaff_x20 + 0x2c);
  fVar3 = 1.0;
  if (fVar6 <= 1.0) {
    fVar3 = fVar6;
  }
  fVar8 = 1.0;
  if (0.0 <= fVar6) {
    fVar8 = 1.0 - fVar3;
  }
  *unaff_x19 = fVar8;
  return unaff_w21 & 1;
}


