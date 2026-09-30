/*
FUNCTION_NAME: OVRManager$$remove_AudioOutChanged
ENTRY_POINT: 076ab4ec
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__remove_AudioOutChanged
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar12;
  double dVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  puVar2 = PTR_DAT_08f70528;
  uStack0000000000000020 = 0;
  fStack0000000000000028 = 0.0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  if (unaff_x21 != 0) {
    FUN_0861a62c(&stack0x00000040);
    fVar12 = fStack0000000000000048;
    uVar7 = in_stack_00000040;
    uVar4 = FUN_085849e0();
    FUN_076b6d64(&stack0x00000040,uVar4,0,0);
    fVar14 = fStack0000000000000048;
    uVar4 = in_stack_00000040;
    uVar5 = FUN_085849e0();
    FUN_076b6d64(&stack0x00000040,uVar5,0,0);
    fVar16 = fStack0000000000000048;
    uVar5 = in_stack_00000040;
    uVar6 = FUN_085849e0();
    FUN_076b6d64(&stack0x00000040,uVar6,0,0);
    fStack0000000000000028 = fStack0000000000000048;
    uStack0000000000000020 = in_stack_00000040;
    uStack0000000000000034 = (undefined4)uStack0000000000000054;
    uStack0000000000000038 = SUB84(uStack0000000000000054,4);
    uStack0000000000000030 = uStack0000000000000050;
    fVar17 = fStack000000000000004c;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar8 = (float)FUN_08596ab0(&stack0x00000020,0);
    if (DAT_0953c2f4 == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_0953c2f4 = '\x01';
    }
    fVar15 = param_3 * param_3 + fVar8 * fVar8 + fVar17 * fVar17;
    if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar15) {
      fVar16 = (fVar12 - fVar16) * param_3 +
               ((float)uVar7 - (float)uVar5) * fVar8 +
               ((float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar5 >> 0x20)) * fVar17;
      fVar12 = (fVar17 * fVar16) / fVar15;
      fVar15 = (param_3 * fVar16) / fVar15;
    }
    else {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      fVar12 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
      fVar15 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    fVar12 = (float)((ulong)uVar4 >> 0x20) + fVar12;
    fVar14 = fVar14 + fVar15;
    uVar9 = FUN_0861ab6c();
    *(undefined4 *)unaff_x22 = uVar9;
    *(float *)((long)unaff_x22 + 4) = fVar12;
    *(float *)(unaff_x22 + 1) = fVar14;
    uVar3 = FUN_076ab170();
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0.0;
    }
    else {
      fVar16 = *(float *)(unaff_x22 + 1);
      uVar4 = *unaff_x22;
      uVar7 = FUN_085849e0();
      FUN_076b6d64(&stack0x00000040,uVar7,0,0);
      fVar12 = fStack0000000000000048;
      uVar7 = in_stack_00000040;
      if (DAT_09539e18 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e18 = '\x01';
      }
      puVar1 = PTR_DAT_08f65580;
      fVar17 = (float)uVar4 - (float)uVar7;
      fVar8 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
      fVar16 = fVar16 - fVar12;
      if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar12 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar8 * fVar8);
      if (fVar12 <= DAT_01a2ef28) {
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(PTR_DAT_08f65568);
          DAT_09539c10 = '\x01';
        }
        uStack0000000000000010 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
        fVar16 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
      }
      else {
        fVar16 = fVar16 / fVar12;
        uStack0000000000000010 = CONCAT44(fVar8 / fVar12,fVar17 / fVar12);
      }
      uVar7 = FUN_085849e0();
      FUN_076b6d64(&stack0x00000040,uVar7,0,0);
      fStack0000000000000028 = fStack0000000000000048;
      uStack0000000000000020 = in_stack_00000040;
      uStack0000000000000034 = (undefined4)uStack0000000000000054;
      uStack0000000000000038 = SUB84(uStack0000000000000054,4);
      uStack0000000000000030 = uStack0000000000000050;
      fVar12 = fStack000000000000004c;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar17 = (float)FUN_08596ab0(&stack0x00000020,0);
      if (DAT_09539f9e == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539f9e = '\x01';
      }
      fVar15 = (float)((ulong)uStack0000000000000010 >> 0x20);
      fVar8 = (float)uStack0000000000000010;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar13 = 0.0;
      fVar10 = SQRT((fVar16 * fVar16 + fVar8 * fVar8 + fVar15 * fVar15) *
                    (fVar14 * fVar14 + fVar17 * fVar17 + fVar12 * fVar12));
      if (DAT_01a2e770 <= fVar10) {
        fVar10 = (fVar16 * fVar14 + fVar8 * fVar17 + fVar15 * fVar12) / fVar10;
        fVar12 = 1.0;
        if (fVar10 <= 1.0) {
          fVar12 = fVar10;
        }
        fVar14 = -1.0;
        if (-1.0 <= fVar10) {
          fVar14 = fVar12;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        dVar11 = acos((double)fVar14);
        fVar13 = (float)dVar11 * DAT_01a2eb64;
      }
      fVar13 = fVar13 / *(float *)(unaff_x20 + 0x2c);
      fVar12 = 1.0;
      if (fVar13 <= 1.0) {
        fVar12 = fVar13;
      }
      fVar14 = 1.0;
      if (0.0 <= fVar13) {
        fVar14 = 1.0 - fVar12;
      }
      *unaff_x19 = fVar14;
    }
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


