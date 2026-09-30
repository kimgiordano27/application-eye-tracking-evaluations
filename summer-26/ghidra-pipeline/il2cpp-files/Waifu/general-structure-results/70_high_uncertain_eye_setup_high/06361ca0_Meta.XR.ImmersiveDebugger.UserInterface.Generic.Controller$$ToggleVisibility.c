/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$ToggleVisibility
ENTRY_POINT: 06361ca0
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__ToggleVisibility
               (undefined8 param_1,float param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int in_w8;
  undefined8 *puVar6;
  float *pfVar7;
  long in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack0000000000000000;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 uStack0000000000000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  float fStack0000000000000088;
  undefined8 in_stack_000000c0;
  float in_stack_000000e0;
  float in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  float in_stack_00000128;
  undefined8 in_stack_00000138;
  undefined1 in_stack_00000140 [16];
  int iStack0000000000000150;
  float fStack0000000000000154;
  undefined8 in_stack_00000158;
  
  puVar6 = (undefined8 *)(in_x11 + in_x9 * 4);
  puVar1 = (undefined8 *)(in_x12 + in_x9 * 4);
  fStack0000000000000068 = *(float *)(in_x10 + 8);
  pfVar7 = (float *)(*(long *)(unaff_x19 + 0x58) + unaff_x21 * 0x10);
  uVar20 = *puVar6;
  fStack0000000000000038 = *pfVar7;
  fStack000000000000003c = pfVar7[1];
  puVar2 = (undefined4 *)(*(long *)(unaff_x19 + 0x3c) + unaff_x21 * 0x10);
  fVar13 = (float)puVar2[2];
  fVar14 = (float)puVar2[3];
  fVar21 = *(float *)(puVar6 + 1);
  fVar8 = pfVar7[2];
  fVar9 = pfVar7[3];
  fVar11 = (float)puVar2[1];
  fStack0000000000000088 = *(float *)(puVar1 + 1);
  uStack0000000000000080 = *puVar1;
  fVar25 = in_stack_00000110._4_4_ - *unaff_x19;
  fVar26 = in_stack_00000100 - fVar25;
  fStack0000000000000000 = 0.0;
  if (DAT_012edc5c <= fVar26) {
    fVar26 = ((in_stack_00000110._4_4_ + *unaff_x19 * (float)in_w8) - fVar25) / fVar26;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    if ((uint)ABS(fVar26) < 0x7f800001) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar26)) {
        bVar3 = fVar26 < 1.0;
        bVar4 = fVar26 == 1.0;
        bVar5 = false;
      }
    }
    fVar25 = 1.0;
    if (bVar4 || bVar3 != bVar5) {
      fVar25 = fVar26;
    }
    bVar3 = true;
    if (((uint)ABS(fVar25) < 0x7f800001) && (bVar3 = false, !NAN(fVar25))) {
      bVar3 = fVar25 < 0.0;
    }
    fStack0000000000000000 = 0.0;
    if (!bVar3) {
      fStack0000000000000000 = fVar25;
    }
  }
  fVar25 = (float)uVar20;
  fVar15 = (float)((ulong)uVar20 >> 0x20);
  fVar22 = ((float)uStack0000000000000080 - fVar25) * fStack0000000000000000;
  fVar23 = ((float)((ulong)uStack0000000000000080 >> 0x20) - fVar15) * fStack0000000000000000;
  fVar24 = fStack0000000000000000 * (fStack0000000000000088 - fVar21);
  uStack0000000000000060 = param_1;
  fStack000000000000006c = param_2;
  fVar26 = (float)FUN_062cd628(*puVar2,0);
  if (DAT_086d90cb == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d90cb = '\x01';
  }
  fVar25 = fVar25 + fVar22;
  fVar15 = fVar15 + fVar23;
  uVar20 = CONCAT44(fVar15,fVar25);
  fVar21 = fVar21 + fVar24;
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x21 * 0xc);
  *puVar6 = uVar20;
  *(float *)(puVar6 + 1) = fVar21;
  fVar22 = 1.0 / SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar26 * fVar26 + fVar11 * fVar11);
  fVar26 = fVar26 * fVar22;
  fVar11 = fVar11 * fVar22;
  fVar13 = fVar13 * fVar22;
  fVar14 = fVar14 * fVar22;
  pfVar7 = (float *)(*(long *)(unaff_x19 + 0x34) + unaff_x21 * 0x10);
  *pfVar7 = fVar26;
  pfVar7[1] = fVar11;
  pfVar7[2] = fVar13;
  pfVar7[3] = fVar14;
  if ((unaff_w23 & 6) != 0) {
    puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x40) + unaff_x21 * 0xc);
    pfVar7 = (float *)(*(long *)(unaff_x19 + 0x44) + unaff_x21 * 0x10);
    uVar17 = *puVar6;
    fStack0000000000000068 = *(float *)(puVar6 + 1);
    fVar23 = *pfVar7;
    fVar22 = pfVar7[1];
    fVar8 = pfVar7[2];
    fVar9 = pfVar7[3];
    if (((unaff_w23 >> 4 & 1) != 0) && ((int)unaff_x20 == 0)) {
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      fVar16 = (float)uVar17 - fVar25;
      fVar18 = (float)((ulong)uVar17 >> 0x20) - fVar15;
      fVar24 = fStack0000000000000068 - fVar21;
      uStack0000000000000060 = uVar17;
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar12 = SQRT(fVar24 * fVar24 + fVar16 * fVar16 + fVar18 * fVar18);
      if (DAT_012edda4 < fVar12) {
        fVar12 = DAT_012edda4 / fVar12;
        uStack0000000000000060 = CONCAT44(fVar15 + fVar18 * fVar12,fVar25 + fVar16 * fVar12);
        fStack0000000000000068 = fVar21 + fVar24 * fVar12;
      }
      fVar25 = fVar14 * fVar9 + fVar13 * fVar8 + fVar26 * fVar23 + fVar11 * fVar22;
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if ((uint)ABS(fVar25) < 0x7f800001) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar25)) {
          bVar3 = fVar25 < 1.0;
          bVar4 = fVar25 == 1.0;
          bVar5 = false;
        }
      }
      fVar15 = 1.0;
      if (bVar4 || bVar3 != bVar5) {
        fVar15 = fVar25;
      }
      if (DAT_086de4d6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de4d6 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      bVar3 = true;
      if (((uint)ABS(fVar15) < 0x7f800001) && (bVar3 = false, !NAN(fVar15))) {
        bVar3 = fVar15 < -1.0;
      }
      dVar10 = -1.0;
      if (!bVar3) {
        dVar10 = (double)fVar15;
      }
      dVar10 = acos(dVar10);
      fVar25 = (float)dVar10 + (float)dVar10;
      fStack0000000000000000 = DAT_012eda34 - fVar25;
      if (fVar25 <= DAT_012ed918) {
        fStack0000000000000000 = fVar25;
      }
      uVar17 = uStack0000000000000060;
      if (DAT_012edb30 < fStack0000000000000000) {
        fStack0000000000000000 = DAT_012edb30 / fStack0000000000000000;
        fVar22 = fVar11;
        fVar9 = fVar14;
        fVar8 = fVar13;
        fVar23 = (float)FUN_062cd628(fVar26,0);
        uVar17 = uStack0000000000000060;
      }
    }
    goto LAB_06362348;
  }
  puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x10) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar6[1];
  in_stack_00000070 = *puVar6;
  uVar19 = *(undefined4 *)(*(long *)(unaff_x19 + 0x24) + unaff_x21 * 4);
  fVar11 = (float)FUN_06358bac(uVar19,&stack0x00000070);
  puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0xc) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar6[1];
  in_stack_00000070 = *puVar6;
  fVar13 = (float)FUN_06358bac(uVar19,&stack0x00000070);
  puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 8) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar6[1];
  in_stack_00000070 = *puVar6;
  fVar14 = (float)FUN_06358bac(uVar19,&stack0x00000070);
  puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x14) + unaff_x20 * 0x10);
  in_stack_00000078 = puVar6[1];
  in_stack_00000070 = *puVar6;
  fVar21 = (float)FUN_06358bac(uVar19,&stack0x00000070);
  pfVar7 = (float *)(*(long *)(unaff_x19 + 0x5c) + unaff_x21 * 0xc);
  fVar26 = *pfVar7;
  fVar15 = pfVar7[1];
  fVar25 = pfVar7[2];
  fVar22 = unaff_x19[1];
  if (DAT_086de61e == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086de61e = '\x01';
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  dVar10 = (double)FUN_033a3c74((double)(1.0 - fVar11),(double)fVar22);
  fVar22 = fStack000000000000003c;
  fVar11 = (float)dVar10;
  fVar23 = fVar26 * in_stack_00000138._4_4_ * fVar11;
  fVar13 = fVar13 * fVar14;
  fVar15 = fVar15 * in_stack_00000138._4_4_ * fVar11;
  fVar11 = fVar25 * in_stack_00000138._4_4_ * fVar11;
  fVar26 = 0.0;
  if (iStack0000000000000150 < 3) {
    fVar25 = (float)((ulong)in_stack_00000158 >> 0x20);
    if (iStack0000000000000150 == 1) {
      fVar24 = fStack0000000000000154 + 0.0;
      uVar20 = NEON_rev64(CONCAT44(fVar25 + 0.0,(float)in_stack_00000158 + 0.0),4);
    }
    else {
      fVar24 = 0.0;
      uVar20 = 0;
      if (iStack0000000000000150 == 2) {
        uVar20 = NEON_rev64(CONCAT44(fVar25 + 0.0,(float)in_stack_00000158 + 0.0),4);
        goto LAB_06362228;
      }
    }
  }
  else if (iStack0000000000000150 == 10) {
    uVar20 = NEON_rev64(in_stack_00000158,4);
    fVar24 = fVar14 * fStack0000000000000154 + 0.0;
    uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar14 + 0.0,(float)uVar20 * fVar14 + 0.0);
  }
  else {
    fVar24 = 0.0;
    uVar20 = 0;
    if (iStack0000000000000150 == 0xb) {
      uVar20 = NEON_rev64(in_stack_00000158,4);
      fStack0000000000000154 = fVar14 * fStack0000000000000154;
      uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar14 + 0.0,(float)uVar20 * fVar14 + 0.0);
LAB_06362228:
      fVar24 = fStack0000000000000154 + 0.0;
      fVar15 = 0.0;
      fVar23 = 0.0;
      fVar11 = 0.0;
    }
  }
  fVar24 = fVar24 + (float)in_stack_00000120;
  fVar16 = (float)((ulong)uVar20 >> 0x20) + (float)((ulong)in_stack_00000120 >> 0x20);
  fVar25 = (float)uVar20 + in_stack_00000128;
  if ((in_stack_000000c0._2_1_ >> 4 & 1) != 0) {
    fVar18 = (float)FUN_063623ec();
    fVar24 = fVar24 + fVar14 * fVar18;
    fVar16 = fVar16 + fVar14 * fVar26;
    fVar25 = fVar25 + fVar14 * (float)in_stack_00000120;
  }
  fVar26 = *unaff_x19;
  uVar20 = CONCAT44((float)((ulong)uStack0000000000000060 >> 0x20) +
                    (fVar15 + (((SUB84(in_stack_00000140._4_8_,4) * fVar13 + 0.0 + fVar16 * fVar21)
                               * in_stack_000000e0) / fVar14) * fVar26) * fVar26,
                    (float)uStack0000000000000060 +
                    (fVar23 + ((((float)in_stack_00000140._4_8_ * fVar13 + 0.0 + fVar24 * fVar21) *
                               in_stack_000000e0) / fVar14) * fVar26) * fVar26);
  fVar21 = fStack0000000000000068 +
           fVar26 * (fVar11 + fVar26 * ((((float)in_stack_00000140._12_4_ * fVar13 + 0.0 +
                                         fVar21 * fVar25) * in_stack_000000e0) / fVar14));
  uVar17 = uStack0000000000000060;
  fVar23 = fStack0000000000000038;
  fVar26 = fStack0000000000000038;
  fVar11 = fVar22;
  fVar13 = fVar8;
  fVar14 = fVar9;
LAB_06362348:
  *(float *)(*(long *)(unaff_x19 + 0x48) + unaff_x21 * 4) = fStack000000000000006c * DAT_012eda64;
  puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x4c) + unaff_x21 * 0xc);
  *puVar6 = uVar17;
  *(float *)(puVar6 + 1) = fStack0000000000000068;
  pfVar7 = (float *)(*(long *)(unaff_x19 + 0x50) + unaff_x21 * 0x10);
  *pfVar7 = fVar23;
  pfVar7[1] = fVar22;
  pfVar7[2] = fVar8;
  pfVar7[3] = fVar9;
  puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x40) + unaff_x21 * 0xc);
  *puVar6 = uVar20;
  *(float *)(puVar6 + 1) = fVar21;
  pfVar7 = (float *)(*(long *)(unaff_x19 + 0x44) + unaff_x21 * 0x10);
  *pfVar7 = fVar26;
  pfVar7[1] = fVar11;
  pfVar7[2] = fVar13;
  pfVar7[3] = fVar14;
  return;
}


