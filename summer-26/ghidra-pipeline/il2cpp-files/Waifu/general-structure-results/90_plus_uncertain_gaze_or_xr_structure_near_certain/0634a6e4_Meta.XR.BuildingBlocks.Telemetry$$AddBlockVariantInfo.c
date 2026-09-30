/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 0634a6e4
PROGRAM: Waifu-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo(void)

{
  int iVar1;
  float *pfVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  long lVar9;
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
  double dVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float unaff_s10;
  float fVar21;
  float unaff_s11;
  float fVar22;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  ulong uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  float in_stack_000000a8;
  float in_stack_000000c8;
  
  do {
    cVar7 = *(char *)(unaff_x24 + 0xcb);
    while( true ) {
      fVar11 = (float)in_stack_00000098;
      fVar14 = (float)((ulong)in_stack_00000098 >> 0x20);
      fVar21 = (float)unaff_d9;
      fVar22 = (float)((ulong)unaff_d9 >> 0x20);
      fVar10 = SQRT((unaff_s11 - unaff_s10) * (unaff_s11 - unaff_s10) +
                    (fVar11 - fVar21) * (fVar11 - fVar21) + (fVar14 - fVar22) * (fVar14 - fVar22));
      fVar15 = *(float *)(*(long *)(unaff_x19 + 0xb8) + unaff_x28 * 4) * in_stack_00000010._4_4_;
      if (fVar10 <= fVar15 && (uint)ABS(fVar10) <= (uint)unaff_w23) {
        fVar15 = fVar10;
      }
      bVar4 = true;
      if (((uint)ABS(fVar15) <= (uint)unaff_w23) && (bVar4 = false, !NAN(fVar15))) {
        bVar4 = fVar15 < 0.0;
      }
      fVar10 = 0.0;
      if (!bVar4) {
        fVar10 = fVar15;
      }
      uStack0000000000000050 = (ulong)(uint)fVar10;
      uStack0000000000000058 = 0;
      if (cVar7 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x24 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar16 = unaff_s10 - unaff_s11;
      fVar15 = fVar21 - fVar11;
      fVar13 = fVar22 - fVar14;
      fVar17 = 1.0 / SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar13 * fVar13);
      in_stack_000000a0 = CONCAT44(fVar13 * fVar17,fVar15 * fVar17);
      in_stack_000000a8 = fVar16 * fVar17;
      fVar10 = (float)FUN_06358bac(unaff_d8,in_stack_00000018,0);
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
      fVar18 = fStack0000000000000080 * unaff_s15 - fStack0000000000000084 * unaff_s13;
      fVar19 = in_stack_00000078._4_4_ * unaff_s13 - fStack0000000000000080 * unaff_s14;
      fVar20 = fStack0000000000000084 * unaff_s14 - in_stack_00000078._4_4_ * unaff_s15;
      fVar19 = fVar19 + fVar19;
      fVar20 = fVar20 + fVar20;
      fVar18 = fVar18 + fVar18;
      fVar23 = fStack0000000000000084 + unaff_s12 * fVar19 +
               (unaff_s13 * fVar18 - unaff_s14 * fVar20);
      fVar24 = fStack0000000000000080 + unaff_s12 * fVar20 +
               (unaff_s14 * fVar19 - unaff_s15 * fVar18);
      fVar18 = in_stack_00000078._4_4_ + unaff_s12 * fVar18 +
               (unaff_s15 * fVar20 - unaff_s13 * fVar19);
      if ((unaff_w21 & 6) == 0) {
        fVar10 = fVar10 * DAT_012edabc;
        dVar12 = acos((double)(fVar16 * fVar17 * fVar18 +
                              fVar23 * fVar15 * fVar17 + fVar24 * fVar13 * fVar17));
        if (fVar10 < (float)dVar12) {
          FUN_0638db74(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,in_stack_000000a8,
                       fVar23,fVar24,fVar18,fVar10,&stack0x000000a0,0);
        }
        fVar15 = in_stack_000000a8;
        uVar3 = in_stack_000000a0;
        fVar10 = *(float *)(unaff_x19 + 4);
        if (*(char *)(unaff_x24 + 0xcb) == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x24 + 0xcb) = 1;
        }
        if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar13 = (float)uStack0000000000000050;
        fVar16 = (fVar11 + (float)uVar3 * fVar13) - fVar21;
        fVar17 = (fVar14 + (float)(uVar3 >> 0x20) * fVar13) - fVar22;
        fVar15 = (unaff_s11 + fVar13 * fVar15) - unaff_s10;
        fVar13 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17);
        if ((DAT_012edc5c < fVar13) && (fVar10 < fVar13)) {
          fVar10 = fVar10 / fVar13;
          fVar16 = fVar16 * fVar10;
          fVar17 = fVar17 * fVar10;
          fVar15 = fVar15 * fVar10;
        }
        fVar10 = *(float *)(*(long *)(unaff_x19 + 0x78) + unaff_x20 * 4) * -0.5 + 1.0;
        bVar4 = false;
        bVar5 = false;
        bVar6 = false;
        if ((uint)ABS(fVar10) <= (uint)unaff_w23) {
          bVar4 = false;
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar10)) {
            bVar4 = fVar10 < 1.0;
            bVar5 = fVar10 == 1.0;
            bVar6 = false;
          }
        }
        fVar13 = 1.0;
        if (bVar5 || bVar4 != bVar6) {
          fVar13 = fVar10;
        }
        bVar4 = true;
        if (((uint)ABS(fVar13) <= (uint)unaff_w23) && (bVar4 = false, !NAN(fVar13))) {
          bVar4 = fVar13 < 0.0;
        }
        fVar10 = 0.0;
        if (!bVar4) {
          fVar10 = fVar13;
        }
        puVar8 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + unaff_x20 * unaff_x27);
        fVar13 = fVar21 + ((fVar21 + fVar16) - fVar21) * fVar10;
        fVar16 = fVar22 + ((fVar22 + fVar17) - fVar22) * fVar10;
        fVar15 = unaff_s10 + ((unaff_s10 + fVar15) - unaff_s10) * fVar10;
        *puVar8 = CONCAT44(fVar16,fVar13);
        *(float *)(puVar8 + 1) = fVar15;
        if (*(char *)(unaff_x24 + 0xcb) == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x24 + 0xcb) = 1;
        }
        if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar11 = fVar13 - fVar11;
        fVar14 = fVar16 - fVar14;
        in_stack_000000a8 = fVar15 - unaff_s11;
        fVar10 = 1.0 / SQRT(in_stack_000000a8 * in_stack_000000a8 +
                            fVar11 * fVar11 + fVar14 * fVar14);
        in_stack_000000a0 = CONCAT44(fVar14 * fVar10,fVar11 * fVar10);
        in_stack_000000a8 = in_stack_000000a8 * fVar10;
        puVar8 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + unaff_x20 * unaff_x27);
        fVar10 = 1.0 - in_stack_000000c8;
        *puVar8 = CONCAT44((float)((ulong)*puVar8 >> 0x20) + (fVar16 - fVar22) * fVar10,
                           (float)*puVar8 + (fVar13 - fVar21) * fVar10);
        *(float *)(puVar8 + 1) = (fVar15 - unaff_s10) * fVar10 + *(float *)(puVar8 + 1);
      }
      fStack0000000000000094 = fStack0000000000000030 * fStack0000000000000094;
      fStack0000000000000090 = fStack000000000000002c * fStack0000000000000090;
      fStack000000000000008c = fStack0000000000000028 * fStack000000000000008c;
      fStack0000000000000088 = in_stack_00000020._4_4_ * fStack0000000000000088;
      fVar10 = (float)in_stack_000000a0;
      fVar11 = (fStack0000000000000088 * unaff_s15 + fStack000000000000008c * unaff_s13 +
               fStack0000000000000094 * unaff_s12) - fStack0000000000000090 * unaff_s14;
      fVar21 = (fStack000000000000008c * unaff_s12 +
               fStack0000000000000090 * unaff_s15 + fStack0000000000000088 * unaff_s14) -
               fStack0000000000000094 * unaff_s13;
      fVar22 = (fStack0000000000000088 * unaff_s12 -
               (fStack0000000000000094 * unaff_s15 + fStack0000000000000090 * unaff_s13)) -
               fStack000000000000008c * unaff_s14;
      fVar14 = (fStack0000000000000090 * unaff_s12 +
               fStack0000000000000088 * unaff_s13 + fStack0000000000000094 * unaff_s14) -
               fStack000000000000008c * unaff_s15;
      fVar15 = (float)FUN_0638dfac(fVar23,0);
      pfVar2 = (float *)(*(long *)(unaff_x19 + 0x98) + unaff_x20 * 0x10);
      *pfVar2 = (fVar11 * fVar10 + fVar22 * fVar15 + fVar21 * fVar24) - fVar14 * fVar18;
      pfVar2[1] = (fVar14 * fVar10 + fVar22 * fVar24 + fVar11 * fVar18) - fVar21 * fVar15;
      pfVar2[2] = (fVar21 * fVar10 + fVar22 * fVar18 + fVar14 * fVar15) - fVar11 * fVar24;
      pfVar2[3] = (fVar22 * fVar10 - (fVar11 * fVar15 + fVar14 * fVar24)) - fVar21 * fVar18;
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
        unaff_w21 = *(uint *)(*(long *)(unaff_x19 + 0x68) + (long)iVar1 * 4);
      } while ((unaff_w21 & 1) == 0);
      fStack0000000000000084 = *(float *)(lVar9 + 8);
      fStack0000000000000080 = *(float *)(lVar9 + 0xc);
      unaff_x20 = (long)iVar1;
      iVar1 = *(int *)(lVar9 + 4) + unaff_w22;
      in_stack_00000078._4_4_ = *(float *)(lVar9 + 0x10);
      fStack0000000000000094 = *(float *)(lVar9 + 0x14);
      fStack0000000000000090 = *(float *)(lVar9 + 0x18);
      fStack000000000000008c = *(float *)(lVar9 + 0x1c);
      fStack0000000000000088 = *(float *)(lVar9 + 0x20);
      pfVar2 = (float *)(*(long *)(unaff_x19 + 0x98) + (long)iVar1 * 0x10);
      puVar8 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + unaff_x20 * unaff_x27);
      unaff_d9 = *puVar8;
      unaff_s10 = *(float *)(puVar8 + 1);
      puVar8 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + (long)iVar1 * (long)(int)unaff_x27);
      in_stack_00000098 = *puVar8;
      unaff_s11 = *(float *)(puVar8 + 1);
      unaff_s15 = *pfVar2;
      unaff_s13 = pfVar2[1];
      unaff_s14 = pfVar2[2];
      unaff_s12 = pfVar2[3];
      unaff_d8 = (ulong)*(uint *)(*(long *)(unaff_x19 + 0x58) + unaff_x20 * 4);
      if (*(char *)(unaff_x24 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x24 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) break;
      cVar7 = '\x01';
    }
    FUN_033b9870();
  } while( true );
}


