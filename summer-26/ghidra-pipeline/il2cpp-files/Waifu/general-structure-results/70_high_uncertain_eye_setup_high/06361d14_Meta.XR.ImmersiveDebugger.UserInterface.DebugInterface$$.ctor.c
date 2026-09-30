/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$.ctor
ENTRY_POINT: 06361d14
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface___ctor
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int in_w8;
  undefined8 *puVar4;
  float *pfVar5;
  long in_x10;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 unaff_d12;
  float fVar15;
  float unaff_s13;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_s16;
  float in_s17;
  float in_s18;
  float fVar19;
  float fStack0000000000000000;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  float in_stack_00000050;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  float in_stack_00000088;
  undefined8 in_stack_000000c0;
  float in_stack_000000e0;
  undefined8 in_stack_00000120;
  float in_stack_00000128;
  undefined8 in_stack_00000138;
  undefined1 in_stack_00000140 [16];
  int iStack0000000000000150;
  float fStack0000000000000154;
  undefined8 in_stack_00000158;
  
  fVar19 = in_s17 - (in_s16 - in_s18);
  fStack0000000000000000 = 0.0;
  if (*(float *)(in_x10 + 0xc5c) <= fVar19) {
    fVar19 = ((in_s16 + in_s18 * (float)in_w8) - (in_s16 - in_s18)) / fVar19;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if ((uint)ABS(fVar19) < 0x7f800001) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar19)) {
        bVar1 = fVar19 < 1.0;
        bVar2 = fVar19 == 1.0;
        bVar3 = false;
      }
    }
    fVar18 = 1.0;
    if (bVar2 || bVar1 != bVar3) {
      fVar18 = fVar19;
    }
    bVar1 = true;
    if (((uint)ABS(fVar18) < 0x7f800001) && (bVar1 = false, !NAN(fVar18))) {
      bVar1 = fVar18 < 0.0;
    }
    fStack0000000000000000 = 0.0;
    if (!bVar1) {
      fStack0000000000000000 = fVar18;
    }
  }
  fVar11 = (float)((ulong)unaff_d12 >> 0x20);
  fVar16 = ((float)in_stack_00000080 - (float)unaff_d12) * fStack0000000000000000;
  fVar17 = ((float)((ulong)in_stack_00000080 >> 0x20) - fVar11) * fStack0000000000000000;
  fVar18 = fStack0000000000000000 * (in_stack_00000088 - unaff_s13);
  fVar19 = (float)FUN_062cd628(0);
  if (DAT_086d90cb == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d90cb = '\x01';
  }
  fVar16 = (float)unaff_d12 + fVar16;
  fVar11 = fVar11 + fVar17;
  uVar10 = CONCAT44(fVar11,fVar16);
  fVar18 = unaff_s13 + fVar18;
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x21 * 0xc);
  *puVar4 = uVar10;
  *(float *)(puVar4 + 1) = fVar18;
  fVar17 = 1.0 / SQRT(param_4 * param_4 + param_3 * param_3 + fVar19 * fVar19 + param_2 * param_2);
  fVar19 = fVar19 * fVar17;
  param_2 = param_2 * fVar17;
  param_3 = param_3 * fVar17;
  param_4 = param_4 * fVar17;
  pfVar5 = (float *)(*(long *)(unaff_x19 + 0x34) + unaff_x21 * 0x10);
  *pfVar5 = fVar19;
  pfVar5[1] = param_2;
  pfVar5[2] = param_3;
  pfVar5[3] = param_4;
  if ((unaff_w23 & 6) != 0) {
    puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x40) + unaff_x21 * 0xc);
    pfVar5 = (float *)(*(long *)(unaff_x19 + 0x44) + unaff_x21 * 0x10);
    in_stack_00000060 = *puVar4;
    fStack0000000000000068 = *(float *)(puVar4 + 1);
    fStack0000000000000038 = *pfVar5;
    fStack000000000000003c = pfVar5[1];
    in_stack_00000040 = pfVar5[2];
    in_stack_00000050 = pfVar5[3];
    if (((unaff_w23 >> 4 & 1) != 0) && ((int)unaff_x20 == 0)) {
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      fVar12 = (float)in_stack_00000060 - fVar16;
      fVar13 = (float)((ulong)in_stack_00000060 >> 0x20) - fVar11;
      fVar17 = fStack0000000000000068 - fVar18;
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar8 = SQRT(fVar17 * fVar17 + fVar12 * fVar12 + fVar13 * fVar13);
      if (DAT_012edda4 < fVar8) {
        fVar8 = DAT_012edda4 / fVar8;
        in_stack_00000060 = CONCAT44(fVar11 + fVar13 * fVar8,fVar16 + fVar12 * fVar8);
        fStack0000000000000068 = fVar18 + fVar17 * fVar8;
      }
      fVar16 = param_4 * in_stack_00000050 +
               param_3 * in_stack_00000040 +
               fVar19 * fStack0000000000000038 + param_2 * fStack000000000000003c;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if ((uint)ABS(fVar16) < 0x7f800001) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar16)) {
          bVar1 = fVar16 < 1.0;
          bVar2 = fVar16 == 1.0;
          bVar3 = false;
        }
      }
      fVar11 = 1.0;
      if (bVar2 || bVar1 != bVar3) {
        fVar11 = fVar16;
      }
      if (DAT_086de4d6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de4d6 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      bVar1 = true;
      if (((uint)ABS(fVar11) < 0x7f800001) && (bVar1 = false, !NAN(fVar11))) {
        bVar1 = fVar11 < -1.0;
      }
      dVar7 = -1.0;
      if (!bVar1) {
        dVar7 = (double)fVar11;
      }
      dVar7 = acos(dVar7);
      fVar16 = (float)dVar7 + (float)dVar7;
      fStack0000000000000000 = DAT_012eda34 - fVar16;
      if (fVar16 <= DAT_012ed918) {
        fStack0000000000000000 = fVar16;
      }
      if (DAT_012edb30 < fStack0000000000000000) {
        fStack0000000000000000 = DAT_012edb30 / fStack0000000000000000;
        fStack000000000000003c = param_2;
        in_stack_00000050 = param_4;
        in_stack_00000040 = param_3;
        fStack0000000000000038 = (float)FUN_062cd628(fVar19,0);
      }
    }
    goto LAB_06362348;
  }
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x10) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar4[1];
  in_stack_00000070 = *puVar4;
  uVar14 = *(undefined4 *)(*(long *)(unaff_x19 + 0x24) + unaff_x21 * 4);
  fVar19 = (float)FUN_06358bac(uVar14,&stack0x00000070);
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xc) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar4[1];
  in_stack_00000070 = *puVar4;
  fVar18 = (float)FUN_06358bac(uVar14,&stack0x00000070);
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 8) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar4[1];
  in_stack_00000070 = *puVar4;
  fVar16 = (float)FUN_06358bac(uVar14,&stack0x00000070);
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x14) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar4[1];
  in_stack_00000070 = *puVar4;
  fVar11 = (float)FUN_06358bac(uVar14,&stack0x00000070);
  pfVar5 = (float *)(*(long *)(unaff_x19 + 0x5c) + unaff_x21 * 0xc);
  fVar17 = *pfVar5;
  fVar13 = pfVar5[1];
  fVar12 = pfVar5[2];
  fVar8 = unaff_x19[1];
  if (DAT_086de61e == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086de61e = '\x01';
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  dVar7 = (double)FUN_033a3c74((double)(1.0 - fVar19),(double)fVar8);
  fVar19 = (float)dVar7;
  fVar8 = fVar17 * in_stack_00000138._4_4_ * fVar19;
  fVar18 = fVar18 * fVar16;
  fVar13 = fVar13 * in_stack_00000138._4_4_ * fVar19;
  fVar19 = fVar12 * in_stack_00000138._4_4_ * fVar19;
  fVar17 = 0.0;
  if (iStack0000000000000150 < 3) {
    fVar12 = (float)((ulong)in_stack_00000158 >> 0x20);
    if (iStack0000000000000150 == 1) {
      fVar9 = fStack0000000000000154 + 0.0;
      uVar10 = NEON_rev64(CONCAT44(fVar12 + 0.0,(float)in_stack_00000158 + 0.0),4);
    }
    else {
      fVar9 = 0.0;
      uVar10 = 0;
      if (iStack0000000000000150 == 2) {
        uVar10 = NEON_rev64(CONCAT44(fVar12 + 0.0,(float)in_stack_00000158 + 0.0),4);
        goto LAB_06362228;
      }
    }
  }
  else if (iStack0000000000000150 == 10) {
    uVar10 = NEON_rev64(in_stack_00000158,4);
    fVar9 = fVar16 * fStack0000000000000154 + 0.0;
    uVar10 = CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar16 + 0.0,(float)uVar10 * fVar16 + 0.0);
  }
  else {
    fVar9 = 0.0;
    uVar10 = 0;
    if (iStack0000000000000150 == 0xb) {
      uVar10 = NEON_rev64(in_stack_00000158,4);
      fStack0000000000000154 = fVar16 * fStack0000000000000154;
      uVar10 = CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar16 + 0.0,(float)uVar10 * fVar16 + 0.0);
LAB_06362228:
      fVar9 = fStack0000000000000154 + 0.0;
      fVar13 = 0.0;
      fVar8 = 0.0;
      fVar19 = 0.0;
    }
  }
  fVar9 = fVar9 + (float)in_stack_00000120;
  fVar15 = (float)((ulong)uVar10 >> 0x20) + (float)((ulong)in_stack_00000120 >> 0x20);
  fVar12 = (float)uVar10 + in_stack_00000128;
  if ((in_stack_000000c0._2_1_ >> 4 & 1) != 0) {
    fVar6 = (float)FUN_063623ec();
    fVar9 = fVar9 + fVar16 * fVar6;
    fVar15 = fVar15 + fVar16 * fVar17;
    fVar12 = fVar12 + fVar16 * (float)in_stack_00000120;
  }
  fVar17 = *unaff_x19;
  uVar10 = CONCAT44((float)((ulong)in_stack_00000060 >> 0x20) +
                    (fVar13 + (((SUB84(in_stack_00000140._4_8_,4) * fVar18 + 0.0 + fVar15 * fVar11)
                               * in_stack_000000e0) / fVar16) * fVar17) * fVar17,
                    (float)in_stack_00000060 +
                    (fVar8 + ((((float)in_stack_00000140._4_8_ * fVar18 + 0.0 + fVar9 * fVar11) *
                              in_stack_000000e0) / fVar16) * fVar17) * fVar17);
  fVar18 = fStack0000000000000068 +
           fVar17 * (fVar19 + fVar17 * ((((float)in_stack_00000140._12_4_ * fVar18 + 0.0 +
                                         fVar11 * fVar12) * in_stack_000000e0) / fVar16));
  fVar19 = fStack0000000000000038;
  param_2 = fStack000000000000003c;
  param_3 = in_stack_00000040;
  param_4 = in_stack_00000050;
LAB_06362348:
  *(float *)(*(long *)(unaff_x19 + 0x48) + unaff_x21 * 4) = fStack000000000000006c * DAT_012eda64;
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x4c) + unaff_x21 * 0xc);
  *puVar4 = in_stack_00000060;
  *(float *)(puVar4 + 1) = fStack0000000000000068;
  pfVar5 = (float *)(*(long *)(unaff_x19 + 0x50) + unaff_x21 * 0x10);
  *pfVar5 = fStack0000000000000038;
  pfVar5[1] = fStack000000000000003c;
  pfVar5[2] = in_stack_00000040;
  pfVar5[3] = in_stack_00000050;
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x40) + unaff_x21 * 0xc);
  *puVar4 = uVar10;
  *(float *)(puVar4 + 1) = fVar18;
  pfVar5 = (float *)(*(long *)(unaff_x19 + 0x44) + unaff_x21 * 0x10);
  *pfVar5 = fVar19;
  pfVar5[1] = param_2;
  pfVar5[2] = param_3;
  pfVar5[3] = param_4;
  return;
}


