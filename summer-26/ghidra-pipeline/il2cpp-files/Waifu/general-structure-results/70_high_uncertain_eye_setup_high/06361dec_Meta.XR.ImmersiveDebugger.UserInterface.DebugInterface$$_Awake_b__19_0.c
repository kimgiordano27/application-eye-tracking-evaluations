/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$<Awake>b__19_0
ENTRY_POINT: 06361dec
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__<Awake>b__19_0(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float in_s4;
  undefined8 in_d5;
  undefined8 uVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  float fVar14;
  float unaff_s9;
  float unaff_s10;
  undefined4 uVar15;
  float unaff_s11;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  float in_stack_00000050;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000c0;
  float in_stack_000000e0;
  undefined8 in_stack_00000120;
  float in_stack_00000128;
  undefined8 in_stack_00000138;
  undefined1 in_stack_00000140 [16];
  int iStack0000000000000150;
  float fStack0000000000000154;
  undefined8 in_stack_00000158;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    FUN_033b9870();
  }
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x21 * 0xc);
  *puVar4 = in_d5;
  *(float *)(puVar4 + 1) = in_s4;
  fVar6 = 1.0 / SQRT(unaff_s11 * unaff_s11 +
                     unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  fVar16 = unaff_s8 * fVar6;
  fVar18 = unaff_s9 * fVar6;
  fVar19 = unaff_s10 * fVar6;
  fVar6 = unaff_s11 * fVar6;
  pfVar5 = (float *)(*(long *)(unaff_x19 + 0x34) + unaff_x21 * 0x10);
  *pfVar5 = fVar16;
  pfVar5[1] = fVar18;
  pfVar5[2] = fVar19;
  pfVar5[3] = fVar6;
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
      if (*(char *)(unaff_x24 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x24 + 0xcb) = 1;
      }
      fVar13 = (float)in_stack_00000060 - (float)in_d5;
      fVar7 = (float)((ulong)in_d5 >> 0x20);
      fVar14 = (float)((ulong)in_stack_00000060 >> 0x20) - fVar7;
      fVar12 = fStack0000000000000068 - in_s4;
      if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar10 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14);
      if (DAT_012edda4 < fVar10) {
        fVar10 = DAT_012edda4 / fVar10;
        in_stack_00000060 = CONCAT44(fVar7 + fVar14 * fVar10,(float)in_d5 + fVar13 * fVar10);
        fStack0000000000000068 = in_s4 + fVar12 * fVar10;
      }
      fVar7 = fVar6 * in_stack_00000050 +
              fVar19 * in_stack_00000040 +
              fVar16 * fStack0000000000000038 + fVar18 * fStack000000000000003c;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if ((uint)ABS(fVar7) < 0x7f800001) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar7)) {
          bVar1 = fVar7 < 1.0;
          bVar2 = fVar7 == 1.0;
          bVar3 = false;
        }
      }
      fVar12 = 1.0;
      if (bVar2 || bVar1 != bVar3) {
        fVar12 = fVar7;
      }
      if (DAT_086de4d6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de4d6 = '\x01';
      }
      if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      bVar1 = true;
      if (((uint)ABS(fVar12) < 0x7f800001) && (bVar1 = false, !NAN(fVar12))) {
        bVar1 = fVar12 < -1.0;
      }
      dVar9 = -1.0;
      if (!bVar1) {
        dVar9 = (double)fVar12;
      }
      dVar9 = acos(dVar9);
      fVar12 = (float)dVar9 + (float)dVar9;
      fVar7 = DAT_012eda34 - fVar12;
      if (fVar12 <= DAT_012ed918) {
        fVar7 = fVar12;
      }
      if (DAT_012edb30 < fVar7) {
        fStack000000000000003c = fVar18;
        in_stack_00000050 = fVar6;
        in_stack_00000040 = fVar19;
        fStack0000000000000038 = (float)FUN_062cd628(fVar16,0);
      }
    }
    goto LAB_06362348;
  }
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x10) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar4[1];
  in_stack_00000070 = *puVar4;
  uVar15 = *(undefined4 *)(*(long *)(unaff_x19 + 0x24) + unaff_x21 * 4);
  fVar16 = (float)FUN_06358bac(uVar15,&stack0x00000070);
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0xc) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar4[1];
  in_stack_00000070 = *puVar4;
  fVar18 = (float)FUN_06358bac(uVar15,&stack0x00000070);
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 8) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar4[1];
  in_stack_00000070 = *puVar4;
  fVar19 = (float)FUN_06358bac(uVar15,&stack0x00000070);
  puVar4 = (undefined8 *)(*(long *)(unaff_x19 + 0x14) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar4[1];
  in_stack_00000070 = *puVar4;
  fVar6 = (float)FUN_06358bac(uVar15,&stack0x00000070);
  pfVar5 = (float *)(*(long *)(unaff_x19 + 0x5c) + unaff_x21 * 0xc);
  fVar7 = *pfVar5;
  fVar13 = pfVar5[1];
  fVar12 = pfVar5[2];
  fVar14 = unaff_x19[1];
  if (DAT_086de61e == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086de61e = '\x01';
  }
  if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  dVar9 = (double)FUN_033a3c74((double)(1.0 - fVar16),(double)fVar14);
  fVar16 = (float)dVar9;
  fVar14 = fVar7 * in_stack_00000138._4_4_ * fVar16;
  fVar18 = fVar18 * fVar19;
  fVar13 = fVar13 * in_stack_00000138._4_4_ * fVar16;
  fVar16 = fVar12 * in_stack_00000138._4_4_ * fVar16;
  fVar7 = 0.0;
  if (iStack0000000000000150 < 3) {
    fVar12 = (float)((ulong)in_stack_00000158 >> 0x20);
    if (iStack0000000000000150 == 1) {
      fVar10 = fStack0000000000000154 + 0.0;
      uVar11 = NEON_rev64(CONCAT44(fVar12 + 0.0,(float)in_stack_00000158 + 0.0),4);
    }
    else {
      fVar10 = 0.0;
      uVar11 = 0;
      if (iStack0000000000000150 == 2) {
        uVar11 = NEON_rev64(CONCAT44(fVar12 + 0.0,(float)in_stack_00000158 + 0.0),4);
        goto LAB_06362228;
      }
    }
  }
  else if (iStack0000000000000150 == 10) {
    uVar11 = NEON_rev64(in_stack_00000158,4);
    fVar10 = fVar19 * fStack0000000000000154 + 0.0;
    uVar11 = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar19 + 0.0,(float)uVar11 * fVar19 + 0.0);
  }
  else {
    fVar10 = 0.0;
    uVar11 = 0;
    if (iStack0000000000000150 == 0xb) {
      uVar11 = NEON_rev64(in_stack_00000158,4);
      fStack0000000000000154 = fVar19 * fStack0000000000000154;
      uVar11 = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar19 + 0.0,(float)uVar11 * fVar19 + 0.0);
LAB_06362228:
      fVar10 = fStack0000000000000154 + 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar16 = 0.0;
    }
  }
  fVar10 = fVar10 + (float)in_stack_00000120;
  fVar17 = (float)((ulong)uVar11 >> 0x20) + (float)((ulong)in_stack_00000120 >> 0x20);
  fVar12 = (float)uVar11 + in_stack_00000128;
  if ((in_stack_000000c0._2_1_ >> 4 & 1) != 0) {
    fVar8 = (float)FUN_063623ec();
    fVar10 = fVar10 + fVar19 * fVar8;
    fVar17 = fVar17 + fVar19 * fVar7;
    fVar12 = fVar12 + fVar19 * (float)in_stack_00000120;
  }
  fVar7 = *unaff_x19;
  in_d5 = CONCAT44((float)((ulong)in_stack_00000060 >> 0x20) +
                   (fVar13 + (((SUB84(in_stack_00000140._4_8_,4) * fVar18 + 0.0 + fVar17 * fVar6) *
                              in_stack_000000e0) / fVar19) * fVar7) * fVar7,
                   (float)in_stack_00000060 +
                   (fVar14 + ((((float)in_stack_00000140._4_8_ * fVar18 + 0.0 + fVar10 * fVar6) *
                              in_stack_000000e0) / fVar19) * fVar7) * fVar7);
  in_s4 = fStack0000000000000068 +
          fVar7 * (fVar16 + fVar7 * ((((float)in_stack_00000140._12_4_ * fVar18 + 0.0 +
                                      fVar6 * fVar12) * in_stack_000000e0) / fVar19));
  fVar16 = fStack0000000000000038;
  fVar18 = fStack000000000000003c;
  fVar19 = in_stack_00000040;
  fVar6 = in_stack_00000050;
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
  *puVar4 = in_d5;
  *(float *)(puVar4 + 1) = in_s4;
  pfVar5 = (float *)(*(long *)(unaff_x19 + 0x44) + unaff_x21 * 0x10);
  *pfVar5 = fVar16;
  pfVar5[1] = fVar18;
  pfVar5[2] = fVar19;
  pfVar5[3] = fVar6;
  return;
}


