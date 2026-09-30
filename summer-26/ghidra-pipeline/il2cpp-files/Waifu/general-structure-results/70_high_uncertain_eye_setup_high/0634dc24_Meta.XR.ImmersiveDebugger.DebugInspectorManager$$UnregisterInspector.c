/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$UnregisterInspector
ENTRY_POINT: 0634dc24
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


void Meta_XR_ImmersiveDebugger_DebugInspectorManager__UnregisterInspector
               (float param_1,float param_2,float param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  undefined8 *puVar11;
  float *unaff_x19;
  float unaff_w20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  int unaff_w25;
  long unaff_x27;
  long unaff_x28;
  uint unaff_w29;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong unaff_d9;
  float fVar24;
  float unaff_s10;
  float fVar25;
  float fVar26;
  float unaff_s12;
  float fVar27;
  float fVar28;
  float unaff_s13;
  float fVar29;
  float unaff_s14;
  float unaff_s15;
  float fVar30;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  long in_stack_00000088;
  undefined4 uStack0000000000000090;
  float fStack0000000000000094;
  undefined4 uStack0000000000000098;
  uint uStack000000000000009c;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float in_stack_000000b0;
  float in_stack_000000c0;
  undefined4 uStack00000000000000d0;
  float fStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  float fStack00000000000000dc;
  float in_stack_000000e0;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  undefined4 uStack0000000000000100;
  uint uStack0000000000000104;
  float fStack0000000000000108;
  float fStack000000000000010c;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float fStack0000000000000118;
  float fStack000000000000011c;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  ulong in_stack_00000140;
  float in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  int in_stack_00000168;
  undefined8 in_stack_00000188;
  
  do {
    fVar14 = (float)(param_4 >> 0x20);
    if ((unaff_w29 & 6) == 0) {
      fVar15 = (float)unaff_d9;
      fVar20 = in_stack_000000a0._4_4_ * DAT_012edabc;
      dVar13 = acos((double)(param_3 * fVar15 + param_1 * (float)param_4 + param_2 * fVar14));
                    /* try { // try from 0634dc78 to 0644de0b has its CatchHandler @ 0634dc78
                       catch() { ... } // from try @ 0634dc78 with catch @ 0634dc78
                       catch() { ... } // from try @ 0634e2d4 with catch @ 0634dc78
                       catch() { ... } // from try @ 0634e41c with catch @ 0634dc78
                       catch() { ... } // from try @ 0634e54c with catch @ 0634dc78
                       catch() { ... } // from try @ 0634e59c with catch @ 0634dc78
                       catch() { ... } // from try @ 0634e5d8 with catch @ 0634dc78
                       catch() { ... } // from try @ 0634e6a0 with catch @ 0634dc78 */
      in_stack_00000140 = param_4;
      in_stack_00000148 = fVar15;
      if (fVar20 < (float)dVar13) {
        FUN_0638db74(param_4,fVar14,unaff_d9,param_1,param_2,param_3,fVar20,&stack0x00000140,0);
        unaff_d9 = (ulong)(uint)in_stack_00000148;
      }
      uVar1 = in_stack_00000140;
      in_stack_000000a0._4_4_ = in_stack_000000a0._4_4_ / 90.0;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      if ((uint)ABS(in_stack_000000a0._4_4_) <= (uint)unaff_w20) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(in_stack_000000a0._4_4_)) {
          bVar2 = in_stack_000000a0._4_4_ < 1.0;
          bVar3 = in_stack_000000a0._4_4_ == 1.0;
          bVar4 = false;
        }
      }
      fVar20 = 1.0;
      if (bVar3 || bVar2 != bVar4) {
        fVar20 = in_stack_000000a0._4_4_;
      }
      if (DAT_086de61e == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de61e = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar18 = (float)uVar1 * 0.5;
      fVar19 = (float)(uVar1 >> 0x20) * 0.5;
      fVar17 = (float)unaff_d9 * 0.5;
      fVar27 = (float)in_stack_00000130;
      fVar12 = fVar27 + (float)param_4 * 0.5;
      fVar29 = (float)((ulong)in_stack_00000130 >> 0x20);
      fVar14 = fVar29 + fVar14 * 0.5;
      in_stack_000000e0 = (float)((ulong)in_stack_00000120 >> 0x20);
      fVar15 = fStack000000000000011c + fVar15 * 0.5;
      fVar22 = ((fVar12 + fVar18) - (float)in_stack_00000120) * in_stack_000000c0;
      fVar24 = ((fVar14 + fVar19) - in_stack_000000e0) * in_stack_000000c0;
      fVar26 = in_stack_000000c0 * ((fVar15 + fVar17) - fStack0000000000000118);
      dVar13 = 0.0;
      if (0.0 <= fVar20 && (uint)ABS(fVar20) <= (uint)unaff_w20) {
        dVar13 = (double)fVar20;
      }
      dVar13 = (double)FUN_033a3c74(dVar13,0x3fe0000000000000);
      fVar20 = DAT_012edea4;
      fStack0000000000000118 = fStack0000000000000118 + fVar26;
      puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
      fVar16 = (float)in_stack_00000120 + fVar22;
      in_stack_000000e0 = in_stack_000000e0 + fVar24;
      in_stack_00000120 = CONCAT44(in_stack_000000e0,fVar16);
      *puVar7 = in_stack_00000120;
      *(float *)(puVar7 + 1) = fStack0000000000000118;
      puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x27 * 0xc);
      fVar20 = (float)dVar13 * fVar20 + -0.5 + 1.0;
      *puVar7 = CONCAT44(fVar24 * fVar20 + (float)((ulong)*puVar7 >> 0x20),
                         fVar22 * fVar20 + (float)*puVar7);
      *(float *)(puVar7 + 1) = fVar26 * fVar20 + *(float *)(puVar7 + 1);
      if (unaff_w23 == 0) {
        puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x24 * 0xc);
        fVar12 = ((fVar12 - fVar18) - fVar27) * in_stack_000000b0;
        fVar14 = ((fVar14 - fVar19) - fVar29) * in_stack_000000b0;
        fVar15 = in_stack_000000b0 * ((fVar15 - fVar17) - fStack000000000000011c);
        fStack0000000000000080 = fVar29 + fVar14;
        in_stack_00000130 = CONCAT44(fStack0000000000000080,fVar27 + fVar12);
        fStack000000000000011c = fStack000000000000011c + fVar15;
        *puVar7 = in_stack_00000130;
        *(float *)(puVar7 + 1) = fStack000000000000011c;
        puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x24 * 0xc);
        *puVar7 = CONCAT44(fVar14 * fVar20 + (float)((ulong)*puVar7 >> 0x20),
                           fVar12 * fVar20 + (float)*puVar7);
        *(float *)(puVar7 + 1) = fVar15 * fVar20 + *(float *)(puVar7 + 1);
      }
      param_4 = (ulong)(uint)(fVar16 - (float)in_stack_00000130);
    }
    fVar20 = (float)param_4;
    fVar15 = (fStack000000000000007c * unaff_s13 +
             fStack00000000000000ac * unaff_s12 + fStack00000000000000a8 * unaff_s10) -
             fStack0000000000000078 * unaff_s14;
    fVar12 = (fStack0000000000000078 * unaff_s13 +
             fStack000000000000007c * unaff_s14 + fStack00000000000000a8 * unaff_s12) -
             fStack00000000000000ac * unaff_s10;
    fVar27 = (fStack00000000000000ac * unaff_s13 +
             fStack00000000000000a8 * unaff_s14 + fStack0000000000000078 * unaff_s10) -
             fStack000000000000007c * unaff_s12;
    fVar29 = (fStack00000000000000a8 * unaff_s13 -
             (fStack0000000000000078 * unaff_s12 + fStack000000000000007c * unaff_s10)) -
             fStack00000000000000ac * unaff_s14;
    fVar14 = (float)FUN_0638dfac(0);
    pfVar8 = (float *)(*(long *)(unaff_x19 + 0x34) + unaff_x27 * 0x10);
    *pfVar8 = (fVar15 * fVar20 + fVar29 * fVar14 + fVar27 * param_2) - fVar12 * param_3;
    pfVar8[1] = (fVar12 * fVar20 + fVar29 * param_2 + fVar15 * param_3) - fVar27 * fVar14;
    pfVar8[2] = (fVar27 * fVar20 + fVar29 * param_3 + fVar12 * fVar14) - fVar15 * param_2;
    pfVar8[3] = (fVar29 * fVar20 - (fVar15 * fVar14 + fVar12 * param_2)) - fVar27 * param_3;
    do {
      if (in_stack_00000168 == 1) {
        fVar14 = (float)FUN_06358bac(uStack0000000000000100,in_stack_00000048,0);
        fVar20 = *unaff_x19;
        if (DAT_086de61e == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086de61e = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar12 = (float)in_stack_00000130;
        fVar29 = (float)in_stack_00000120;
        fVar23 = fVar29 - fVar12;
        fVar28 = fStack0000000000000118 - fStack000000000000011c;
        fVar22 = fStack0000000000000114 * fStack00000000000000fc -
                 fStack0000000000000110 * unaff_s15;
        fVar17 = fStack0000000000000110 * fStack00000000000000f8 -
                 fStack000000000000010c * fStack00000000000000fc;
        fVar18 = fStack000000000000010c * unaff_s15 -
                 fStack0000000000000114 * fStack00000000000000f8;
        fVar17 = fVar17 + fVar17;
        fVar18 = fVar18 + fVar18;
        fVar22 = fVar22 + fVar22;
        fVar25 = in_stack_000000e0 - fStack0000000000000080;
        fVar21 = unaff_s15 + fStack0000000000000108 * fVar17 +
                 (fStack0000000000000110 * fVar22 - fStack000000000000010c * fVar18);
        FUN_033a3c74((double)(1.0 - fVar14),(double)fVar20);
        fVar14 = fVar25;
        fVar20 = fVar28;
        fVar15 = fVar21;
        fVar27 = (float)FUN_0638dfac(fVar23,0);
        fVar24 = fVar25 * fVar27 - fVar23 * fVar14;
        fVar26 = fVar28 * fVar14 - fVar25 * fVar20;
        fVar16 = fVar23 * fVar20 - fVar28 * fVar27;
        fVar26 = fVar26 + fVar26;
        fVar16 = fVar16 + fVar16;
        fVar24 = fVar24 + fVar24;
        fVar19 = fVar23 + fVar15 * fVar26 + (fVar14 * fVar24 - fVar20 * fVar16);
        fVar30 = fVar25 + fVar15 * fVar16 + (fVar20 * fVar26 - fVar27 * fVar24);
        fVar14 = fVar28 + fVar15 * fVar24 + (fVar27 * fVar16 - fVar14 * fVar26);
        fVar20 = (float)FUN_0635881c(fVar21,fStack00000000000000fc + fStack0000000000000108 * fVar18
                                            + (fStack000000000000010c * fVar17 -
                                              fStack0000000000000114 * fVar22),
                                     fStack00000000000000f8 + fStack0000000000000108 * fVar22 +
                                     (fStack0000000000000114 * fVar18 -
                                     fStack0000000000000110 * fVar17),uStack00000000000000d0,
                                     fStack00000000000000d4,uStack00000000000000d8,
                                     fStack00000000000000dc,0x3e800000);
        fVar15 = fVar12 + fVar23 * fVar20;
        fVar27 = fStack0000000000000080 + fVar25 * fVar20;
        fVar17 = fStack000000000000011c + fVar28 * fVar20;
        if ((unaff_w29 & 6) == 0) {
          fVar18 = 1.0 - fVar20;
          fVar22 = in_stack_000000c0 * ((fVar15 + fVar18 * fVar19) - fVar29);
          fVar24 = in_stack_000000c0 * ((fVar27 + fVar18 * fVar30) - in_stack_000000e0);
          in_stack_000000c0 =
               in_stack_000000c0 * ((fVar17 + fVar18 * fVar14) - fStack0000000000000118);
          pfVar8 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
          *pfVar8 = fVar29 + fVar22;
          pfVar8[1] = in_stack_000000e0 + fVar24;
          pfVar8[2] = fStack0000000000000118 + in_stack_000000c0;
          fVar29 = 1.0 - in_stack_00000188._4_4_;
          pfVar8 = (float *)(*(long *)(unaff_x19 + 0x38) + unaff_x27 * 0xc);
          *pfVar8 = fVar29 * fVar22 + *pfVar8;
          pfVar8[1] = fVar29 * fVar24 + pfVar8[1];
          pfVar8[2] = fVar29 * in_stack_000000c0 + pfVar8[2];
        }
        if ((uStack0000000000000104 & 6) == 0) {
          fVar15 = in_stack_000000b0 * ((fVar15 - fVar20 * fVar19) - fVar12);
          fVar27 = in_stack_000000b0 * ((fVar27 - fVar20 * fVar30) - fStack0000000000000080);
          in_stack_000000b0 =
               in_stack_000000b0 * ((fVar17 - fVar20 * fVar14) - fStack000000000000011c);
          pfVar8 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x24 * 0xc);
          *pfVar8 = fVar12 + fVar15;
          pfVar8[1] = fStack0000000000000080 + fVar27;
          pfVar8[2] = fStack000000000000011c + in_stack_000000b0;
          fVar14 = 1.0 - in_stack_00000188._4_4_;
          pfVar8 = (float *)(*(long *)(unaff_x19 + 0x38) + unaff_x24 * 0xc);
          *pfVar8 = fVar14 * fVar15 + *pfVar8;
          pfVar8[1] = fVar14 * fVar27 + pfVar8[1];
          pfVar8[2] = fVar14 * in_stack_000000b0 + pfVar8[2];
        }
      }
      do {
        do {
          do {
            unaff_x21 = unaff_x21 + -1;
            iVar6 = (int)unaff_x22 + 1;
            if (unaff_x21 == 0) {
              do {
                if ((in_stack_00000038._4_4_ & 1) != 0) {
                  return;
                }
                in_stack_00000038._4_4_ = 1;
                unaff_x21 = in_stack_00000018;
                iVar6 = in_stack_00000010._4_4_;
              } while ((int)in_stack_00000018 == 0);
            }
            unaff_x22 = (long)iVar6;
            lVar10 = *(long *)(unaff_x19 + 4) + (long)iVar6 * (long)(int)unaff_x28;
          } while (*(int *)(lVar10 + 4) < 0);
          iVar6 = *(int *)(*(long *)(unaff_x19 + 4) + unaff_x22 * unaff_x28) + unaff_w25;
          unaff_w29 = *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar6 * 4);
        } while ((unaff_w29 & 1) == 0);
        fVar27 = *(float *)(lVar10 + 8);
        fStack00000000000000fc = *(float *)(lVar10 + 0xc);
        fStack00000000000000f8 = *(float *)(lVar10 + 0x10);
        fStack000000000000007c = *(float *)(lVar10 + 0x14);
        fStack0000000000000078 = *(float *)(lVar10 + 0x18);
        fStack00000000000000ac = *(float *)(lVar10 + 0x1c);
        fStack00000000000000a8 = *(float *)(lVar10 + 0x20);
        unaff_x27 = (long)iVar6;
        uStack0000000000000100 = *(undefined4 *)(*(long *)(unaff_x19 + 0x1c) + unaff_x27 * 4);
        iVar6 = *(int *)(lVar10 + 4) + unaff_w25;
        uStack0000000000000104 = *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar6 * 4);
        puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x18) + in_stack_00000088 * 0x10);
        in_stack_00000158 = puVar7[1];
        in_stack_00000150 = *puVar7;
        puVar11 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
        fStack0000000000000118 = *(float *)(puVar11 + 1);
        puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + (long)iVar6 * 0xc);
        in_stack_00000120 = *puVar11;
        in_stack_00000130 = *puVar7;
        lVar10 = *(long *)(unaff_x19 + 0x2c);
        fStack000000000000011c = *(float *)(puVar7 + 1);
        unaff_x24 = (long)iVar6;
        pfVar8 = (float *)(*(long *)(unaff_x19 + 0x34) + (long)iVar6 * 0x10);
        pfVar9 = (float *)(lVar10 + (long)iVar6 * 0x10);
        fStack0000000000000114 = *pfVar9;
        fVar12 = *pfVar8;
        fVar29 = 0.0;
        fStack0000000000000110 = pfVar9[1];
        fStack000000000000010c = pfVar9[2];
        fStack0000000000000108 = pfVar9[3];
        fVar15 = pfVar8[1];
        fVar14 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + unaff_x27 * 4) * 0.5;
        fVar20 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + (long)iVar6 * 4) * 0.5;
        bVar2 = false;
        bVar3 = false;
        bVar4 = false;
        if ((uint)ABS(fVar14) <= (uint)unaff_w20) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar14)) {
            bVar2 = fVar14 < 1.0;
            bVar3 = fVar14 == 1.0;
            bVar4 = false;
          }
        }
        fVar17 = 1.0;
        if (bVar3 || bVar2 != bVar4) {
          fVar17 = fVar14;
        }
        bVar2 = true;
        if (((uint)ABS(fVar17) <= (uint)unaff_w20) && (bVar2 = false, !NAN(fVar17))) {
          bVar2 = fVar17 < 0.0;
        }
        in_stack_000000c0 = fVar29;
        if (!bVar2) {
          in_stack_000000c0 = fVar17;
        }
        bVar2 = false;
        bVar3 = false;
        bVar4 = false;
        if ((uint)ABS(fVar20) <= (uint)unaff_w20) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar20)) {
            bVar2 = fVar20 < 1.0;
            bVar3 = fVar20 == 1.0;
            bVar4 = false;
          }
        }
        fVar14 = 1.0;
        if (bVar3 || bVar2 != bVar4) {
          fVar14 = fVar20;
        }
        fVar17 = pfVar8[2];
        fVar20 = pfVar8[3];
        bVar2 = true;
        if (((uint)ABS(fVar14) <= (uint)unaff_w20) && (bVar2 = false, !NAN(fVar14))) {
          bVar2 = fVar14 < 0.0;
        }
        in_stack_000000b0 = fVar29;
        if (!bVar2) {
          in_stack_000000b0 = fVar14;
        }
        fStack00000000000000dc = (float)FUN_06358bac(uStack0000000000000100,&stack0x00000150,0);
        fStack00000000000000dc = ABS(fStack00000000000000dc);
        uStack00000000000000d0 = uStack0000000000000098;
        fStack00000000000000d4 = fStack0000000000000094;
        uStack00000000000000d8 = uStack0000000000000090;
        if (fStack00000000000000dc <= fStack0000000000000084) {
          uStack00000000000000d8 = 0;
          uStack00000000000000d0 = 0;
          fStack00000000000000d4 = fVar29;
        }
        if ((uStack000000000000009c >> 3 & 1) == 0) {
          unaff_s15 = fStack0000000000000074 * fVar27;
          fStack00000000000000fc = fStack0000000000000070 * fStack00000000000000fc;
          fStack00000000000000f8 = fStack000000000000006c * fStack00000000000000f8;
          fStack000000000000007c = fStack0000000000000068 * fStack000000000000007c;
          fStack0000000000000078 = fStack0000000000000064 * fStack0000000000000078;
          fStack00000000000000ac = fStack0000000000000060 * fStack00000000000000ac;
          fStack00000000000000a8 = in_stack_00000058._4_4_ * fStack00000000000000a8;
          goto LAB_0634da20;
        }
        pfVar9 = (float *)(*(long *)(unaff_x19 + 0x28) + unaff_x27 * 0xc);
        pfVar8 = (float *)(*(long *)(unaff_x19 + 0x28) + unaff_x24 * 0xc);
        fVar27 = *pfVar9 - *pfVar8;
        fVar29 = pfVar9[1] - pfVar8[1];
        fVar14 = pfVar9[2] - pfVar8[2];
        fVar18 = fVar14 * fVar14 + fVar27 * fVar27 + fVar29 * fVar29;
      } while (fVar18 < DAT_012ed990);
      pfVar8 = (float *)(lVar10 + unaff_x27 * 0x10);
      fVar19 = *pfVar8;
      fVar24 = pfVar8[1];
      fVar22 = pfVar8[2];
      fVar26 = pfVar8[3];
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar18 = 1.0 / SQRT(fVar18);
      fVar16 = 1.0 / (fStack0000000000000108 * fStack0000000000000108 +
                     fStack000000000000010c * fStack000000000000010c +
                     fStack0000000000000114 * fStack0000000000000114 +
                     fStack0000000000000110 * fStack0000000000000110);
      fVar27 = fVar27 * fVar18;
      fVar29 = fVar29 * fVar18;
      fVar14 = fVar14 * fVar18;
      fVar18 = fStack0000000000000108 * fVar16;
      fVar21 = fVar16 * -fStack0000000000000114;
      fVar23 = fVar16 * -fStack0000000000000110;
      fVar16 = fVar16 * -fStack000000000000010c;
      fVar30 = fVar16 * fVar27 - fVar21 * fVar14;
      fVar25 = fVar21 * fVar29 - fVar23 * fVar27;
      fVar28 = fVar23 * fVar14 - fVar16 * fVar29;
      fVar28 = fVar28 + fVar28;
      fVar30 = fVar30 + fVar30;
      fVar25 = fVar25 + fVar25;
      fStack00000000000000fc = fVar29 + fVar18 * fVar30 + (fVar16 * fVar28 - fVar21 * fVar25);
      fStack00000000000000f8 = fVar14 + fVar18 * fVar25 + (fVar21 * fVar30 - fVar23 * fVar28);
      fStack000000000000007c =
           (fVar18 * fVar19 + fVar23 * fVar22 + fVar21 * fVar26) - fVar16 * fVar24;
      fStack0000000000000078 =
           (fVar18 * fVar24 + fVar16 * fVar19 + fVar23 * fVar26) - fVar21 * fVar22;
      fStack00000000000000ac =
           (fVar18 * fVar22 + fVar21 * fVar24 + fVar16 * fVar26) - fVar23 * fVar19;
      unaff_s15 = fVar27 + fVar18 * fVar28 + (fVar23 * fVar25 - fVar16 * fVar30);
      fStack00000000000000a8 =
           (fVar18 * fVar26 - (fVar21 * fVar19 + fVar23 * fVar24)) - fVar16 * fVar22;
LAB_0634da20:
      fStack0000000000000080 = (float)((ulong)in_stack_00000130 >> 0x20);
      in_stack_000000e0 = (float)((ulong)in_stack_00000120 >> 0x20);
    } while (in_stack_00000160._4_4_ != 1);
    unaff_w23 = uStack0000000000000104 & 6;
    unaff_s10 = fStack0000000000000114;
    unaff_s12 = fStack0000000000000110;
    unaff_s13 = fStack0000000000000108;
    unaff_s14 = fStack000000000000010c;
    if (unaff_w23 == 0) {
      unaff_s10 = fVar12;
      unaff_s12 = fVar15;
      unaff_s13 = fVar20;
      unaff_s14 = fVar17;
    }
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
      cVar5 = DAT_086d90cb;
    }
    else {
      cVar5 = '\x01';
    }
    fVar14 = *(float *)(*(long *)(unaff_x19 + 0x3c) + unaff_x22 * 4);
    if (cVar5 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    in_stack_000000a0._4_4_ = (float)FUN_06358bac(uStack0000000000000100,in_stack_00000050,0);
    if (DAT_086de4d6 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086de4d6 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar29 = (float)in_stack_00000120 - (float)in_stack_00000130;
    fVar17 = in_stack_000000e0 - fStack0000000000000080;
    fVar18 = fStack0000000000000118 - fStack000000000000011c;
    fVar15 = fStack00000000000000f8 * unaff_s12 - fStack00000000000000fc * unaff_s14;
    fVar27 = unaff_s15 * unaff_s14 - fStack00000000000000f8 * unaff_s10;
    fVar20 = fStack00000000000000fc * unaff_s10 - unaff_s15 * unaff_s12;
    fVar15 = fVar15 + fVar15;
    fVar27 = fVar27 + fVar27;
    fVar20 = fVar20 + fVar20;
    fVar12 = SQRT(fVar18 * fVar18 + fVar29 * fVar29 + fVar17 * fVar17);
    param_1 = unaff_s15 + unaff_s13 * fVar15 + (unaff_s12 * fVar20 - unaff_s14 * fVar27);
    param_2 = fStack00000000000000fc + unaff_s13 * fVar27 +
              (unaff_s14 * fVar15 - unaff_s10 * fVar20);
    param_3 = fStack00000000000000f8 + unaff_s13 * fVar20 +
              (unaff_s10 * fVar27 - unaff_s12 * fVar15);
    fVar20 = 1.0 / fVar12;
    fVar12 = fVar12 + (fVar14 - fVar12) * 0.5;
    param_4 = CONCAT44(fVar17 * fVar20 * fVar12,fVar29 * fVar20 * fVar12);
    unaff_d9 = (ulong)(uint)(fVar18 * fVar20 * fVar12);
  } while( true );
}


