/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 0634aaac
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


void Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo
               (ulong param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined8 *puVar9;
  long lVar10;
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
  undefined8 uVar14;
  float fVar16;
  float fVar17;
  double dVar15;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 unaff_d9;
  float unaff_s10;
  float fVar28;
  float unaff_s11;
  float fVar29;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_s26;
  undefined4 in_register_00005344;
  float in_s27;
  float in_s28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000070;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  ulong uStack00000000000000a0;
  float fStack00000000000000a8;
  float in_stack_000000c8;
  
  do {
    fStack00000000000000a8 = param_2 * param_3;
    puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + unaff_x20 * unaff_x27);
    param_5 = param_5 - in_stack_000000c8;
    *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) +
                       ((float)((ulong)unaff_d9 >> 0x20) - (float)((ulong)in_stack_00000070 >> 0x20)
                       ) * param_5,
                       (float)*puVar9 + ((float)unaff_d9 - (float)in_stack_00000070) * param_5);
    *(float *)(puVar9 + 1) = (unaff_s11 - unaff_s10) * param_5 + *(float *)(puVar9 + 1);
    uStack00000000000000a0 = param_1;
    do {
      fStack0000000000000094 = fStack0000000000000030 * fStack0000000000000094;
      fStack0000000000000090 = fStack000000000000002c * fStack0000000000000090;
      fStack000000000000008c = fStack0000000000000028 * fStack000000000000008c;
      fStack0000000000000088 = in_stack_00000020._4_4_ * fStack0000000000000088;
      fVar11 = (float)uStack00000000000000a0;
      fVar24 = (fStack0000000000000088 * unaff_s15 + fStack000000000000008c * unaff_s13 +
               fStack0000000000000094 * unaff_s12) - fStack0000000000000090 * unaff_s14;
      fVar28 = (fStack000000000000008c * unaff_s12 +
               fStack0000000000000090 * unaff_s15 + fStack0000000000000088 * unaff_s14) -
               fStack0000000000000094 * unaff_s13;
      fVar29 = (fStack0000000000000088 * unaff_s12 -
               (fStack0000000000000094 * unaff_s15 + fStack0000000000000090 * unaff_s13)) -
               fStack000000000000008c * unaff_s14;
                    /* try { // try from 0634ab94 to 0644acf7 has its CatchHandler @ 0634ab94
                       catch() { ... } // from try @ 0634ab94 with catch @ 0634ab94
                       catch() { ... } // from try @ 0634ae3c with catch @ 0634ab94
                       catch() { ... } // from try @ 0634af54 with catch @ 0634ab94
                       catch() { ... } // from try @ 0634afb8 with catch @ 0634ab94
                       catch() { ... } // from try @ 0634b008 with catch @ 0634ab94 */
      fVar26 = (fStack0000000000000090 * unaff_s12 +
               fStack0000000000000088 * unaff_s13 + fStack0000000000000094 * unaff_s14) -
               fStack000000000000008c * unaff_s15;
      fVar13 = (float)FUN_0638dfac(CONCAT44(in_register_00005344,in_s26),0);
      pfVar2 = (float *)(*(long *)(unaff_x19 + 0x98) + unaff_x20 * 0x10);
      *pfVar2 = (fVar24 * fVar11 + fVar29 * fVar13 + fVar28 * in_s27) - fVar26 * in_s28;
      pfVar2[1] = (fVar26 * fVar11 + fVar29 * in_s27 + fVar24 * in_s28) - fVar28 * fVar13;
      pfVar2[2] = (fVar28 * fVar11 + fVar29 * in_s28 + fVar26 * fVar13) - fVar24 * in_s27;
      pfVar2[3] = (fVar29 * fVar11 - (fVar24 * fVar13 + fVar26 * in_s27)) - fVar28 * in_s28;
      do {
        do {
          unaff_x29 = unaff_x29 + -1;
          iVar1 = (int)unaff_x28 + 1;
          if (unaff_x29 == 0) {
            return;
          }
          unaff_x28 = (long)iVar1;
          lVar10 = *(long *)(unaff_x19 + 8) + (long)iVar1 * (long)(int)unaff_x26;
        } while (*(int *)(lVar10 + 4) < 0);
        iVar1 = *(int *)(*(long *)(unaff_x19 + 8) + unaff_x28 * unaff_x26) + unaff_w22;
        uVar3 = *(uint *)(*(long *)(unaff_x19 + 0x68) + (long)iVar1 * 4);
      } while ((uVar3 & 1) == 0);
      fVar24 = *(float *)(lVar10 + 8);
      fVar13 = *(float *)(lVar10 + 0xc);
      unaff_x20 = (long)iVar1;
      iVar1 = *(int *)(lVar10 + 4) + unaff_w22;
      fVar11 = *(float *)(lVar10 + 0x10);
      fStack0000000000000094 = *(float *)(lVar10 + 0x14);
      fStack0000000000000090 = *(float *)(lVar10 + 0x18);
      fStack000000000000008c = *(float *)(lVar10 + 0x1c);
      fStack0000000000000088 = *(float *)(lVar10 + 0x20);
      pfVar2 = (float *)(*(long *)(unaff_x19 + 0x98) + (long)iVar1 * 0x10);
      puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + unaff_x20 * unaff_x27);
      in_stack_00000070 = *puVar9;
      unaff_s10 = *(float *)(puVar9 + 1);
      puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + (long)iVar1 * (long)(int)unaff_x27);
      uVar14 = *puVar9;
      param_2 = *(float *)(puVar9 + 1);
      unaff_s15 = *pfVar2;
      unaff_s13 = pfVar2[1];
      unaff_s14 = pfVar2[2];
      unaff_s12 = pfVar2[3];
      uVar23 = *(undefined4 *)(*(long *)(unaff_x19 + 0x58) + unaff_x20 * 4);
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
      fVar28 = (float)uVar14;
      fVar16 = (float)((ulong)uVar14 >> 0x20);
      fVar25 = (float)in_stack_00000070;
      fVar27 = (float)((ulong)in_stack_00000070 >> 0x20);
      fVar29 = SQRT((param_2 - unaff_s10) * (param_2 - unaff_s10) +
                    (fVar28 - fVar25) * (fVar28 - fVar25) + (fVar16 - fVar27) * (fVar16 - fVar27));
      fVar26 = *(float *)(*(long *)(unaff_x19 + 0xb8) + unaff_x28 * 4) * in_stack_00000010._4_4_;
      if (fVar29 <= fVar26 && (uint)ABS(fVar29) <= (uint)unaff_w23) {
        fVar26 = fVar29;
      }
      bVar5 = true;
      if (((uint)ABS(fVar26) <= (uint)unaff_w23) && (bVar5 = false, !NAN(fVar26))) {
        bVar5 = fVar26 < 0.0;
      }
      fVar29 = 0.0;
      if (!bVar5) {
        fVar29 = fVar26;
      }
      if (cVar8 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x24 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar18 = unaff_s10 - param_2;
      fVar26 = fVar25 - fVar28;
      fVar17 = fVar27 - fVar16;
      fVar19 = 1.0 / SQRT(fVar18 * fVar18 + fVar26 * fVar26 + fVar17 * fVar17);
      uStack00000000000000a0 = CONCAT44(fVar17 * fVar19,fVar26 * fVar19);
      fStack00000000000000a8 = fVar18 * fVar19;
      fVar12 = (float)FUN_06358bac(uVar23,in_stack_00000018,0);
      if (DAT_086de4d6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de4d6 = '\x01';
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar24 = fStack000000000000003c * fVar24;
      fVar13 = fStack0000000000000038 * fVar13;
      fVar11 = fStack0000000000000034 * fVar11;
      fVar20 = fVar13 * unaff_s15 - fVar24 * unaff_s13;
      fVar21 = fVar11 * unaff_s13 - fVar13 * unaff_s14;
      fVar22 = fVar24 * unaff_s14 - fVar11 * unaff_s15;
      fVar21 = fVar21 + fVar21;
      fVar22 = fVar22 + fVar22;
      fVar20 = fVar20 + fVar20;
      in_s26 = fVar24 + unaff_s12 * fVar21 + (unaff_s13 * fVar20 - unaff_s14 * fVar22);
      in_register_00005344 = 0;
      in_s27 = fVar13 + unaff_s12 * fVar22 + (unaff_s14 * fVar21 - unaff_s15 * fVar20);
      in_s28 = fVar11 + unaff_s12 * fVar20 + (unaff_s15 * fVar22 - unaff_s13 * fVar21);
    } while ((uVar3 & 6) != 0);
    fVar12 = fVar12 * DAT_012edabc;
    dVar15 = acos((double)(fVar18 * fVar19 * in_s28 +
                          in_s26 * fVar26 * fVar19 + in_s27 * fVar17 * fVar19));
    if (fVar12 < (float)dVar15) {
      FUN_0638db74(uStack00000000000000a0 & 0xffffffff,uStack00000000000000a0._4_4_,
                   fStack00000000000000a8,in_s26,in_s27,in_s28,fVar12,&stack0x000000a0,0);
    }
    fVar13 = fStack00000000000000a8;
    uVar4 = uStack00000000000000a0;
    fVar11 = *(float *)(unaff_x19 + 4);
    if (*(char *)(unaff_x24 + 0xcb) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcb) = 1;
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar24 = (fVar28 + (float)uVar4 * fVar29) - fVar25;
    fVar26 = (fVar16 + (float)(uVar4 >> 0x20) * fVar29) - fVar27;
    fVar13 = (param_2 + fVar29 * fVar13) - unaff_s10;
    fVar29 = SQRT(fVar13 * fVar13 + fVar24 * fVar24 + fVar26 * fVar26);
    if ((DAT_012edc5c < fVar29) && (fVar11 < fVar29)) {
      fVar11 = fVar11 / fVar29;
      fVar24 = fVar24 * fVar11;
      fVar26 = fVar26 * fVar11;
      fVar13 = fVar13 * fVar11;
    }
    fVar11 = *(float *)(*(long *)(unaff_x19 + 0x78) + unaff_x20 * 4) * -0.5 + 1.0;
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    if ((uint)ABS(fVar11) <= (uint)unaff_w23) {
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar11)) {
        bVar5 = fVar11 < 1.0;
        bVar6 = fVar11 == 1.0;
        bVar7 = false;
      }
    }
    fVar29 = 1.0;
    if (bVar6 || bVar5 != bVar7) {
      fVar29 = fVar11;
    }
    bVar5 = true;
    if (((uint)ABS(fVar29) <= (uint)unaff_w23) && (bVar5 = false, !NAN(fVar29))) {
      bVar5 = fVar29 < 0.0;
    }
    fVar11 = 0.0;
    if (!bVar5) {
      fVar11 = fVar29;
    }
    puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + unaff_x20 * unaff_x27);
    fVar25 = fVar25 + ((fVar25 + fVar24) - fVar25) * fVar11;
    fVar27 = fVar27 + ((fVar27 + fVar26) - fVar27) * fVar11;
    unaff_d9 = CONCAT44(fVar27,fVar25);
    unaff_s11 = unaff_s10 + ((unaff_s10 + fVar13) - unaff_s10) * fVar11;
    *puVar9 = unaff_d9;
    *(float *)(puVar9 + 1) = unaff_s11;
    if (*(char *)(unaff_x24 + 0xcb) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcb) = 1;
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    in_register_00005344 = 0;
    param_5 = 1.0;
    fVar25 = fVar25 - fVar28;
    fVar27 = fVar27 - fVar16;
    param_2 = unaff_s11 - param_2;
    param_3 = 1.0 / SQRT(param_2 * param_2 + fVar25 * fVar25 + fVar27 * fVar27);
    param_1 = CONCAT44(fVar27 * param_3,fVar25 * param_3);
  } while( true );
}


