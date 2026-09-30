/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.InstallationRoutineCheckpoint$$.ctor
ENTRY_POINT: 0634ac00
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_InstallationRoutineCheckpoint___ctor
               (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  float unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  double dVar14;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  undefined8 uStack0000000000000098;
  ulong in_stack_000000a0;
  float in_stack_000000a8;
  float in_stack_000000c8;
  
  do {
    pfVar2 = (float *)(param_1 + unaff_x20 * 0x10);
    *pfVar2 = (param_6 + param_9) - in_s23;
    pfVar2[1] = (param_7 + in_s16) - param_2;
    pfVar2[2] = (param_8 + in_s17) - param_3;
    pfVar2[3] = (param_5 - in_s18) - param_4;
    do {
      do {
        unaff_x29 = unaff_x29 + -1;
        iVar1 = (int)unaff_x28 + 1;
        if (unaff_x29 == 0) {
          return;
        }
        unaff_x28 = (long)iVar1;
        lVar9 = *(long *)(unaff_x19 + 8) + (long)iVar1 * (long)(int)unaff_x26;
      } while (*(int *)(lVar9 + 4) < 0);
      iVar1 = *(int *)(*(long *)(unaff_x19 + 8) + unaff_x28 * unaff_x26) + unaff_w22;
      uVar3 = *(uint *)(*(long *)(unaff_x19 + 0x68) + (long)iVar1 * 4);
    } while ((uVar3 & 1) == 0);
    fStack0000000000000084 = *(float *)(lVar9 + 8);
    fStack0000000000000080 = *(float *)(lVar9 + 0xc);
    unaff_x20 = (long)iVar1;
    iVar1 = *(int *)(lVar9 + 4) + unaff_w22;
    fStack000000000000007c = *(float *)(lVar9 + 0x10);
    fStack0000000000000094 = *(float *)(lVar9 + 0x14);
    fStack0000000000000090 = *(float *)(lVar9 + 0x18);
    fStack000000000000008c = *(float *)(lVar9 + 0x1c);
    fStack0000000000000088 = *(float *)(lVar9 + 0x20);
    pfVar2 = (float *)(*(long *)(unaff_x19 + 0x98) + (long)iVar1 * 0x10);
    puVar10 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + unaff_x20 * unaff_x27);
    uVar25 = *puVar10;
    fVar27 = *(float *)(puVar10 + 1);
    puVar10 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + (long)iVar1 * (long)(int)unaff_x27);
    uStack0000000000000098 = *puVar10;
    fVar28 = *(float *)(puVar10 + 1);
    fVar33 = *pfVar2;
    fVar31 = pfVar2[1];
    fVar32 = pfVar2[2];
    fVar30 = pfVar2[3];
    uVar24 = *(undefined4 *)(*(long *)(unaff_x19 + 0x58) + unaff_x20 * 4);
    if (*(char *)(unaff_x24 + 0xcb) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcb) = 1;
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
      cVar8 = *(char *)(unaff_x24 + 0xcb);
    }
    else {
      cVar8 = '\x01';
    }
    fVar29 = (float)uVar25;
    fVar11 = (float)uStack0000000000000098 - fVar29;
    fVar26 = (float)((ulong)uVar25 >> 0x20);
    fVar15 = (float)((ulong)uStack0000000000000098 >> 0x20) - fVar26;
    fVar15 = SQRT((fVar28 - fVar27) * (fVar28 - fVar27) + fVar11 * fVar11 + fVar15 * fVar15);
    fVar11 = *(float *)(*(long *)(unaff_x19 + 0xb8) + unaff_x28 * 4) * in_stack_00000010._4_4_;
    if (fVar15 <= fVar11 && (uint)ABS(fVar15) <= (uint)unaff_w23) {
      fVar11 = fVar15;
    }
    bVar5 = true;
    if (((uint)ABS(fVar11) <= (uint)unaff_w23) && (bVar5 = false, !NAN(fVar11))) {
      bVar5 = fVar11 < 0.0;
    }
    fVar15 = 0.0;
    if (!bVar5) {
      fVar15 = fVar11;
    }
    if (cVar8 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcb) = 1;
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar17 = fVar27 - fVar28;
    fVar11 = fVar29 - (float)uStack0000000000000098;
    fVar16 = fVar26 - (float)((ulong)uStack0000000000000098 >> 0x20);
    fVar19 = 1.0 / SQRT(fVar17 * fVar17 + fVar11 * fVar11 + fVar16 * fVar16);
    in_stack_000000a0 = CONCAT44(fVar16 * fVar19,fVar11 * fVar19);
    in_stack_000000a8 = fVar17 * fVar19;
    fVar12 = (float)FUN_06358bac(uVar24,in_stack_00000018,0);
    if (DAT_086de4d6 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086de4d6 = '\x01';
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar13 = fStack000000000000003c * fStack0000000000000084;
    fVar18 = fStack0000000000000038 * fStack0000000000000080;
    fVar20 = fStack0000000000000034 * fStack000000000000007c;
    fVar21 = fVar18 * fVar33 - fVar13 * fVar31;
    fVar22 = fVar20 * fVar31 - fVar18 * fVar32;
    fVar23 = fVar13 * fVar32 - fVar20 * fVar33;
    fVar22 = fVar22 + fVar22;
    fVar23 = fVar23 + fVar23;
    fVar21 = fVar21 + fVar21;
    fVar13 = fVar13 + fVar30 * fVar22 + (fVar31 * fVar21 - fVar32 * fVar23);
    fVar18 = fVar18 + fVar30 * fVar23 + (fVar32 * fVar22 - fVar33 * fVar21);
    fVar20 = fVar20 + fVar30 * fVar21 + (fVar33 * fVar23 - fVar31 * fVar22);
    if ((uVar3 & 6) == 0) {
      fVar12 = fVar12 * DAT_012edabc;
      fStack000000000000007c = fVar20;
      fStack0000000000000080 = fVar18;
      fStack0000000000000084 = fVar13;
      dVar14 = acos((double)(fVar17 * fVar19 * fVar20 +
                            fVar13 * fVar11 * fVar19 + fVar18 * fVar16 * fVar19));
      if (fVar12 < (float)dVar14) {
        FUN_0638db74(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,in_stack_000000a8,
                     fStack0000000000000084,fStack0000000000000080,fStack000000000000007c,fVar12,
                     &stack0x000000a0,0);
      }
      fVar11 = in_stack_000000a8;
      uVar4 = in_stack_000000a0;
      fVar12 = *(float *)(unaff_x19 + 4);
      if (*(char *)(unaff_x24 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x24 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar16 = ((float)uStack0000000000000098 + (float)uVar4 * fVar15) - fVar29;
      fVar17 = ((float)((ulong)uStack0000000000000098 >> 0x20) + (float)(uVar4 >> 0x20) * fVar15) -
               fVar26;
      fVar11 = (fVar28 + fVar15 * fVar11) - fVar27;
      fVar15 = SQRT(fVar11 * fVar11 + fVar16 * fVar16 + fVar17 * fVar17);
      if ((DAT_012edc5c < fVar15) && (fVar12 < fVar15)) {
        fVar12 = fVar12 / fVar15;
        fVar16 = fVar16 * fVar12;
        fVar17 = fVar17 * fVar12;
        fVar11 = fVar11 * fVar12;
      }
      fVar15 = *(float *)(*(long *)(unaff_x19 + 0x78) + unaff_x20 * 4) * -0.5 + 1.0;
      bVar5 = false;
      bVar6 = false;
      bVar7 = false;
      if ((uint)ABS(fVar15) <= (uint)unaff_w23) {
        bVar5 = false;
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar15)) {
          bVar5 = fVar15 < 1.0;
          bVar6 = fVar15 == 1.0;
          bVar7 = false;
        }
      }
      fVar12 = 1.0;
      if (bVar6 || bVar5 != bVar7) {
        fVar12 = fVar15;
      }
      bVar5 = true;
      if (((uint)ABS(fVar12) <= (uint)unaff_w23) && (bVar5 = false, !NAN(fVar12))) {
        bVar5 = fVar12 < 0.0;
      }
      fVar15 = 0.0;
      if (!bVar5) {
        fVar15 = fVar12;
      }
      puVar10 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + unaff_x20 * unaff_x27);
      fVar12 = fVar29 + ((fVar29 + fVar16) - fVar29) * fVar15;
      fVar16 = fVar26 + ((fVar26 + fVar17) - fVar26) * fVar15;
      fVar11 = fVar27 + ((fVar27 + fVar11) - fVar27) * fVar15;
      *puVar10 = CONCAT44(fVar16,fVar12);
      *(float *)(puVar10 + 1) = fVar11;
      if (*(char *)(unaff_x24 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x24 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar15 = fVar12 - (float)uStack0000000000000098;
      fVar17 = fVar16 - (float)((ulong)uStack0000000000000098 >> 0x20);
      fVar28 = fVar11 - fVar28;
      in_stack_000000a8 = 1.0 / SQRT(fVar28 * fVar28 + fVar15 * fVar15 + fVar17 * fVar17);
      in_stack_000000a0 = CONCAT44(fVar17 * in_stack_000000a8,fVar15 * in_stack_000000a8);
      in_stack_000000a8 = fVar28 * in_stack_000000a8;
      puVar10 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + unaff_x20 * unaff_x27);
      fVar28 = 1.0 - in_stack_000000c8;
      *puVar10 = CONCAT44((float)((ulong)*puVar10 >> 0x20) + (fVar16 - fVar26) * fVar28,
                          (float)*puVar10 + (fVar12 - fVar29) * fVar28);
      *(float *)(puVar10 + 1) = (fVar11 - fVar27) * fVar28 + *(float *)(puVar10 + 1);
      fVar13 = fStack0000000000000084;
      fVar18 = fStack0000000000000080;
      fVar20 = fStack000000000000007c;
    }
    fVar28 = fStack0000000000000030 * fStack0000000000000094;
    fVar27 = fStack000000000000002c * fStack0000000000000090;
    fVar11 = fStack0000000000000028 * fStack000000000000008c;
    fVar15 = in_stack_00000020._4_4_ * fStack0000000000000088;
    param_5 = (float)in_stack_000000a0;
    param_3 = (fVar15 * fVar33 + fVar11 * fVar31 + fVar28 * fVar30) - fVar27 * fVar32;
    param_4 = (fVar11 * fVar30 + fVar27 * fVar33 + fVar15 * fVar32) - fVar28 * fVar31;
    fVar29 = (fVar15 * fVar30 - (fVar28 * fVar33 + fVar27 * fVar31)) - fVar11 * fVar32;
    fVar28 = (fVar27 * fVar30 + fVar15 * fVar31 + fVar28 * fVar32) - fVar11 * fVar33;
    param_2 = (float)FUN_0638dfac(fVar13,0);
    param_1 = *(long *)(unaff_x19 + 0x98);
    param_6 = param_3 * param_5;
    param_7 = fVar28 * param_5;
    param_8 = param_4 * param_5;
    param_5 = fVar29 * param_5;
    param_9 = fVar29 * param_2 + param_4 * fVar18;
    in_s16 = fVar29 * fVar18 + param_3 * fVar20;
    in_s17 = fVar29 * fVar20 + fVar28 * param_2;
    in_s18 = param_3 * param_2 + fVar28 * fVar18;
    in_s23 = fVar28 * fVar20;
    param_2 = param_4 * param_2;
    param_3 = param_3 * fVar18;
    param_4 = param_4 * fVar20;
  } while( true );
}


