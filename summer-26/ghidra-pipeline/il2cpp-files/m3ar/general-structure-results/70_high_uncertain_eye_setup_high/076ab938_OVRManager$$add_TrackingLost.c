/*
FUNCTION_NAME: OVRManager$$add_TrackingLost
ENTRY_POINT: 076ab938
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


float OVRManager__add_TrackingLost
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *unaff_x19;
  long unaff_x22;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  double dVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 in_stack_00000020 [16];
  float in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  float fStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  float fStack00000000000000cc;
  
  if ((*(byte *)(unaff_x22 + 0x5c) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f70528);
    *(undefined1 *)(unaff_x22 + 0x5c) = 1;
  }
  puVar1 = PTR_DAT_08f70528;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0.0;
  fStack000000000000004c = 0.0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  if (param_5 != 0) {
    FUN_0861a62c(&stack0x00000060,param_5,0);
    fVar7 = fStack0000000000000068;
    fVar17 = fStack0000000000000064;
    fVar16 = fStack0000000000000060;
    uVar3 = FUN_085849e0(param_4,0);
    FUN_076b6d64(&stack0x00000060,uVar3,0,0);
    fVar13 = fStack0000000000000068;
    fVar11 = fStack0000000000000064;
    uVar3 = FUN_085849e0(param_4,0);
    FUN_076b6d64(&stack0x00000060,uVar3,0,0);
    fVar9 = fStack0000000000000068;
    fVar14 = fStack0000000000000064;
    fVar8 = fStack0000000000000060;
    uVar3 = FUN_085849e0(param_4,0);
    FUN_076b6d64(&stack0x00000020 + 4,uVar3,0,0);
    in_stack_00000040 = in_stack_00000020._4_8_;
    uStack0000000000000054 = (undefined4)in_stack_00000038;
    in_stack_00000058 = (undefined4)((ulong)in_stack_00000038 >> 0x20);
    fStack000000000000004c = in_stack_00000030;
    fVar12 = in_stack_00000030;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar6 = (float)FUN_08596ab0(&stack0x00000040,0);
    if (DAT_0953c2f4 == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_0953c2f4 = '\x01';
    }
    puVar1 = PTR_DAT_08f65568;
    fVar15 = param_3 * param_3 + fVar6 * fVar6 + fVar12 * fVar12;
    if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar15) {
      fVar8 = (fVar7 - fVar9) * param_3 + (fVar16 - fVar8) * fVar6 + (fVar17 - fVar14) * fVar12;
      fVar16 = (fVar12 * fVar8) / fVar15;
      fVar15 = (param_3 * fVar8) / fVar15;
    }
    else {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      fVar16 = (float)((ulong)*puVar4 >> 0x20);
      fVar15 = *(float *)(puVar4 + 1);
    }
    fVar11 = fVar11 + fVar16;
    fVar13 = fVar13 + fVar15;
    fVar7 = (float)FUN_0861ab6c(param_5,0);
    fVar14 = fVar13;
    uVar3 = FUN_085849e0(param_4,0);
    FUN_076b6d64(&stack0x00000060,uVar3,0,0);
    fVar17 = fStack0000000000000068;
    fVar8 = fStack0000000000000064;
    fVar16 = fStack0000000000000060;
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    puVar2 = PTR_DAT_08f65580;
    fVar16 = fVar7 - fVar16;
    fVar11 = fVar11 - fVar8;
    fVar17 = fVar13 - fVar17;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar8 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar11 * fVar11);
    fStack00000000000000cc = fVar13;
    if (fVar8 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar16 = *pfVar5;
      fVar11 = pfVar5[1];
      fVar17 = pfVar5[2];
    }
    else {
      fVar16 = fVar16 / fVar8;
      fVar11 = fVar11 / fVar8;
      fVar17 = fVar17 / fVar8;
    }
    uVar3 = FUN_085849e0(param_4,0);
    FUN_076b6d64(&stack0x00000060,uVar3,0,0);
    in_stack_00000040 = CONCAT44(fStack0000000000000064,fStack0000000000000060);
    in_stack_00000048 = fStack0000000000000068;
    uStack0000000000000054 = (undefined4)uStack0000000000000074;
    in_stack_00000058 = SUB84(uStack0000000000000074,4);
    in_stack_00000050 = uStack0000000000000070;
    fVar8 = fStack000000000000006c;
    fVar13 = (float)FUN_08596ab0(&stack0x00000040,0);
    if (DAT_09539f9e == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539f9e = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar12 = 0.0;
    fVar9 = SQRT((fVar17 * fVar17 + fVar16 * fVar16 + fVar11 * fVar11) *
                 (fVar14 * fVar14 + fVar13 * fVar13 + fVar8 * fVar8));
    if (DAT_01a2e770 <= fVar9) {
      fVar9 = (fVar17 * fVar14 + fVar16 * fVar13 + fVar11 * fVar8) / fVar9;
      fVar16 = 1.0;
      if (fVar9 <= 1.0) {
        fVar16 = fVar9;
      }
      fVar8 = -1.0;
      if (-1.0 <= fVar9) {
        fVar8 = fVar16;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      dVar10 = acos((double)fVar8);
      fVar12 = (float)dVar10 * DAT_01a2eb64;
    }
    fVar12 = fVar12 / *(float *)(param_4 + 0x2c);
    fVar16 = 1.0;
    if (fVar12 <= 1.0) {
      fVar16 = fVar12;
    }
    fVar8 = 1.0;
    if (0.0 <= fVar12) {
      fVar8 = 1.0 - fVar16;
    }
    *unaff_x19 = fVar8;
    return fVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


