/*
FUNCTION_NAME: OVRManager$$add_AudioInChanged
ENTRY_POINT: 076ab5c8
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


uint OVRManager__add_AudioInChanged(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  float *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined4 uVar4;
  float fVar5;
  float fVar7;
  double dVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  float unaff_s9;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 unaff_d10;
  float unaff_s11;
  undefined8 unaff_d12;
  float unaff_s13;
  undefined8 unaff_d14;
  float in_stack_00000000;
  float in_stack_00000010;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x24 + 0x2f4) = 1;
  fVar10 = unaff_s8 * unaff_s8 +
           in_stack_00000010 * in_stack_00000010 + in_stack_00000000 * in_stack_00000000;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar10) {
    fVar11 = (unaff_s11 - unaff_s13) * unaff_s8 +
             ((float)unaff_d12 - (float)unaff_d14) * in_stack_00000010 +
             ((float)((ulong)unaff_d12 >> 0x20) - (float)((ulong)unaff_d14 >> 0x20)) *
             in_stack_00000000;
    fVar7 = (in_stack_00000000 * fVar11) / fVar10;
    fVar10 = (unaff_s8 * fVar11) / fVar10;
  }
  else {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    fVar7 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
    fVar10 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  }
  fVar7 = (float)((ulong)unaff_d10 >> 0x20) + fVar7;
  fVar10 = unaff_s9 + fVar10;
  uVar4 = FUN_0861ab6c();
  *(undefined4 *)unaff_x22 = uVar4;
  *(float *)((long)unaff_x22 + 4) = fVar7;
  *(float *)(unaff_x22 + 1) = fVar10;
  uVar2 = FUN_076ab170();
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0.0;
  }
  else {
    fVar11 = *(float *)(unaff_x22 + 1);
    uVar13 = *unaff_x22;
    uVar3 = FUN_085849e0();
    FUN_076b6d64(&stack0x00000040,uVar3,0,0);
    fVar7 = fStack0000000000000048;
    uVar3 = in_stack_00000040;
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    puVar1 = PTR_DAT_08f65580;
    fVar12 = (float)uVar13 - (float)uVar3;
    fVar14 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar3 >> 0x20);
    fVar11 = fVar11 - fVar7;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar7 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar14 * fVar14);
    if (fVar7 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      _in_stack_00000010 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fVar11 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fVar11 = fVar11 / fVar7;
      _in_stack_00000010 = CONCAT44(fVar14 / fVar7,fVar12 / fVar7);
    }
    uVar3 = FUN_085849e0();
    FUN_076b6d64(&stack0x00000040,uVar3,0,0);
    in_stack_00000028 = fStack0000000000000048;
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000034 = uStack0000000000000054;
    in_stack_00000030 = uStack0000000000000050;
    fVar7 = fStack000000000000004c;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar12 = (float)FUN_08596ab0(&stack0x00000020,0);
    if (DAT_09539f9e == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539f9e = '\x01';
    }
    fVar9 = (float)((ulong)_in_stack_00000010 >> 0x20);
    fVar14 = (float)_in_stack_00000010;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar8 = 0.0;
    fVar5 = SQRT((fVar11 * fVar11 + fVar14 * fVar14 + fVar9 * fVar9) *
                 (fVar10 * fVar10 + fVar12 * fVar12 + fVar7 * fVar7));
    if (DAT_01a2e770 <= fVar5) {
      fVar5 = (fVar11 * fVar10 + fVar14 * fVar12 + fVar9 * fVar7) / fVar5;
      fVar10 = 1.0;
      if (fVar5 <= 1.0) {
        fVar10 = fVar5;
      }
      fVar7 = -1.0;
      if (-1.0 <= fVar5) {
        fVar7 = fVar10;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      dVar6 = acos((double)fVar7);
      fVar8 = (float)dVar6 * DAT_01a2eb64;
    }
    fVar8 = fVar8 / *(float *)(unaff_x20 + 0x2c);
    fVar10 = 1.0;
    if (fVar8 <= 1.0) {
      fVar10 = fVar8;
    }
    fVar7 = 1.0;
    if (0.0 <= fVar8) {
      fVar7 = 1.0 - fVar10;
    }
    *unaff_x19 = fVar7;
  }
  return uVar2 & 1;
}


