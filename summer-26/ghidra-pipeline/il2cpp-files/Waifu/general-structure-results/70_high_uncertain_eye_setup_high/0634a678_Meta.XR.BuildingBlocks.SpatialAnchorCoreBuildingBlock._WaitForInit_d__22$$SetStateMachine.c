/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<WaitForInit>d__22$$SetStateMachine
ENTRY_POINT: 0634a678
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


void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22__SetStateMachine(void)

{
  float *pfVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int in_w8;
  long lVar8;
  long in_x10;
  undefined8 *puVar9;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  float unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  double dVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000078;
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
    pfVar1 = (float *)(in_x10 + (long)in_w8 * 0x10);
    puVar9 = (undefined8 *)(in_x11 + unaff_x20 * unaff_x27);
    uVar21 = *puVar9;
    fVar23 = *(float *)(puVar9 + 1);
    puVar9 = (undefined8 *)(in_x11 + (long)in_w8 * (long)(int)unaff_x27);
    uStack0000000000000098 = *puVar9;
    fVar24 = *(float *)(puVar9 + 1);
    fVar29 = *pfVar1;
    fVar27 = pfVar1[1];
    fVar28 = pfVar1[2];
    fVar26 = pfVar1[3];
    uVar20 = *(undefined4 *)(*(long *)(unaff_x19 + 0x58) + unaff_x20 * 4);
    if (*(char *)(unaff_x24 + 0xcb) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcb) = 1;
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
      cVar7 = *(char *)(unaff_x24 + 0xcb);
    }
    else {
      cVar7 = '\x01';
    }
    fVar25 = (float)uVar21;
    fVar10 = (float)uStack0000000000000098 - fVar25;
    fVar22 = (float)((ulong)uVar21 >> 0x20);
    fVar13 = (float)((ulong)uStack0000000000000098 >> 0x20) - fVar22;
    fVar13 = SQRT((fVar24 - fVar23) * (fVar24 - fVar23) + fVar10 * fVar10 + fVar13 * fVar13);
    fVar10 = *(float *)(*(long *)(unaff_x19 + 0xb8) + unaff_x28 * 4) * in_stack_00000010._4_4_;
    if (fVar13 <= fVar10 && (uint)ABS(fVar13) <= (uint)unaff_w23) {
      fVar10 = fVar13;
    }
    bVar4 = true;
    if (((uint)ABS(fVar10) <= (uint)unaff_w23) && (bVar4 = false, !NAN(fVar10))) {
      bVar4 = fVar10 < 0.0;
    }
    fVar13 = 0.0;
    if (!bVar4) {
      fVar13 = fVar10;
    }
    if (cVar7 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcb) = 1;
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar15 = fVar23 - fVar24;
    fVar10 = fVar25 - (float)uStack0000000000000098;
    fVar14 = fVar22 - (float)((ulong)uStack0000000000000098 >> 0x20);
    fVar16 = 1.0 / SQRT(fVar15 * fVar15 + fVar10 * fVar10 + fVar14 * fVar14);
    in_stack_000000a0 = CONCAT44(fVar14 * fVar16,fVar10 * fVar16);
    in_stack_000000a8 = fVar15 * fVar16;
    fVar11 = (float)FUN_06358bac(uVar20,in_stack_00000018,0);
    if (DAT_086de4d6 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086de4d6 = '\x01';
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fStack0000000000000084 = fStack000000000000003c * fStack0000000000000084;
    fStack0000000000000080 = fStack0000000000000038 * fStack0000000000000080;
    in_stack_00000078._4_4_ = fStack0000000000000034 * in_stack_00000078._4_4_;
    fVar17 = fStack0000000000000080 * fVar29 - fStack0000000000000084 * fVar27;
    fVar18 = in_stack_00000078._4_4_ * fVar27 - fStack0000000000000080 * fVar28;
    fVar19 = fStack0000000000000084 * fVar28 - in_stack_00000078._4_4_ * fVar29;
    fVar18 = fVar18 + fVar18;
    fVar19 = fVar19 + fVar19;
    fVar17 = fVar17 + fVar17;
    fVar30 = fStack0000000000000084 + fVar26 * fVar18 + (fVar27 * fVar17 - fVar28 * fVar19);
    fVar31 = fStack0000000000000080 + fVar26 * fVar19 + (fVar28 * fVar18 - fVar29 * fVar17);
    fVar17 = in_stack_00000078._4_4_ + fVar26 * fVar17 + (fVar29 * fVar19 - fVar27 * fVar18);
    if ((unaff_w21 & 6) == 0) {
      fVar11 = fVar11 * DAT_012edabc;
      dVar12 = acos((double)(fVar15 * fVar16 * fVar17 +
                            fVar30 * fVar10 * fVar16 + fVar31 * fVar14 * fVar16));
      if (fVar11 < (float)dVar12) {
        FUN_0638db74(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,in_stack_000000a8,fVar30
                     ,fVar31,fVar17,fVar11,&stack0x000000a0,0);
      }
      fVar10 = in_stack_000000a8;
      uVar3 = in_stack_000000a0;
      fVar11 = *(float *)(unaff_x19 + 4);
      if (*(char *)(unaff_x24 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x24 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar14 = ((float)uStack0000000000000098 + (float)uVar3 * fVar13) - fVar25;
      fVar15 = ((float)((ulong)uStack0000000000000098 >> 0x20) + (float)(uVar3 >> 0x20) * fVar13) -
               fVar22;
      fVar10 = (fVar24 + fVar13 * fVar10) - fVar23;
      fVar13 = SQRT(fVar10 * fVar10 + fVar14 * fVar14 + fVar15 * fVar15);
      if ((DAT_012edc5c < fVar13) && (fVar11 < fVar13)) {
        fVar11 = fVar11 / fVar13;
        fVar14 = fVar14 * fVar11;
        fVar15 = fVar15 * fVar11;
        fVar10 = fVar10 * fVar11;
      }
      fVar13 = *(float *)(*(long *)(unaff_x19 + 0x78) + unaff_x20 * 4) * -0.5 + 1.0;
      bVar4 = false;
      bVar5 = false;
      bVar6 = false;
      if ((uint)ABS(fVar13) <= (uint)unaff_w23) {
        bVar4 = false;
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar13)) {
          bVar4 = fVar13 < 1.0;
          bVar5 = fVar13 == 1.0;
          bVar6 = false;
        }
      }
      fVar11 = 1.0;
      if (bVar5 || bVar4 != bVar6) {
        fVar11 = fVar13;
      }
      bVar4 = true;
      if (((uint)ABS(fVar11) <= (uint)unaff_w23) && (bVar4 = false, !NAN(fVar11))) {
        bVar4 = fVar11 < 0.0;
      }
      fVar13 = 0.0;
      if (!bVar4) {
        fVar13 = fVar11;
      }
      puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + unaff_x20 * unaff_x27);
      fVar11 = fVar25 + ((fVar25 + fVar14) - fVar25) * fVar13;
      fVar14 = fVar22 + ((fVar22 + fVar15) - fVar22) * fVar13;
      fVar10 = fVar23 + ((fVar23 + fVar10) - fVar23) * fVar13;
      *puVar9 = CONCAT44(fVar14,fVar11);
      *(float *)(puVar9 + 1) = fVar10;
      if (*(char *)(unaff_x24 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x24 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar13 = fVar11 - (float)uStack0000000000000098;
      fVar15 = fVar14 - (float)((ulong)uStack0000000000000098 >> 0x20);
      fVar24 = fVar10 - fVar24;
      in_stack_000000a8 = 1.0 / SQRT(fVar24 * fVar24 + fVar13 * fVar13 + fVar15 * fVar15);
      in_stack_000000a0 = CONCAT44(fVar15 * in_stack_000000a8,fVar13 * in_stack_000000a8);
      in_stack_000000a8 = fVar24 * in_stack_000000a8;
      puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + unaff_x20 * unaff_x27);
      fVar24 = 1.0 - in_stack_000000c8;
      *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) + (fVar14 - fVar22) * fVar24,
                         (float)*puVar9 + (fVar11 - fVar25) * fVar24);
      *(float *)(puVar9 + 1) = (fVar10 - fVar23) * fVar24 + *(float *)(puVar9 + 1);
    }
    fStack0000000000000094 = fStack0000000000000030 * fStack0000000000000094;
    fStack0000000000000090 = fStack000000000000002c * fStack0000000000000090;
    fStack000000000000008c = fStack0000000000000028 * fStack000000000000008c;
    fStack0000000000000088 = in_stack_00000020._4_4_ * fStack0000000000000088;
    fVar23 = (float)in_stack_000000a0;
    fVar10 = (fStack0000000000000088 * fVar29 + fStack000000000000008c * fVar27 +
             fStack0000000000000094 * fVar26) - fStack0000000000000090 * fVar28;
    fVar13 = (fStack000000000000008c * fVar26 +
             fStack0000000000000090 * fVar29 + fStack0000000000000088 * fVar28) -
             fStack0000000000000094 * fVar27;
    fVar25 = (fStack0000000000000088 * fVar26 -
             (fStack0000000000000094 * fVar29 + fStack0000000000000090 * fVar27)) -
             fStack000000000000008c * fVar28;
    fVar26 = (fStack0000000000000090 * fVar26 +
             fStack0000000000000088 * fVar27 + fStack0000000000000094 * fVar28) -
             fStack000000000000008c * fVar29;
    fVar24 = (float)FUN_0638dfac(fVar30,0);
    pfVar1 = (float *)(*(long *)(unaff_x19 + 0x98) + unaff_x20 * 0x10);
    *pfVar1 = (fVar10 * fVar23 + fVar25 * fVar24 + fVar13 * fVar31) - fVar26 * fVar17;
    pfVar1[1] = (fVar26 * fVar23 + fVar25 * fVar31 + fVar10 * fVar17) - fVar13 * fVar24;
    pfVar1[2] = (fVar13 * fVar23 + fVar25 * fVar17 + fVar26 * fVar24) - fVar10 * fVar31;
    pfVar1[3] = (fVar25 * fVar23 - (fVar10 * fVar24 + fVar26 * fVar31)) - fVar13 * fVar17;
    do {
      do {
        unaff_x29 = unaff_x29 + -1;
        iVar2 = (int)unaff_x28 + 1;
        if (unaff_x29 == 0) {
          return;
        }
        unaff_x28 = (long)iVar2;
        lVar8 = *(long *)(unaff_x19 + 8) + (long)iVar2 * (long)(int)unaff_x26;
      } while (*(int *)(lVar8 + 4) < 0);
      iVar2 = *(int *)(*(long *)(unaff_x19 + 8) + unaff_x28 * unaff_x26) + unaff_w22;
      unaff_w21 = *(uint *)(*(long *)(unaff_x19 + 0x68) + (long)iVar2 * 4);
    } while ((unaff_w21 & 1) == 0);
    fStack0000000000000084 = *(float *)(lVar8 + 8);
    fStack0000000000000080 = *(float *)(lVar8 + 0xc);
    in_x11 = *(long *)(unaff_x19 + 0x88);
    unaff_x20 = (long)iVar2;
    in_w8 = *(int *)(lVar8 + 4) + unaff_w22;
    in_stack_00000078._4_4_ = *(float *)(lVar8 + 0x10);
    fStack0000000000000094 = *(float *)(lVar8 + 0x14);
    fStack0000000000000090 = *(float *)(lVar8 + 0x18);
    fStack000000000000008c = *(float *)(lVar8 + 0x1c);
    fStack0000000000000088 = *(float *)(lVar8 + 0x20);
    in_x10 = *(long *)(unaff_x19 + 0x98);
  } while( true );
}


