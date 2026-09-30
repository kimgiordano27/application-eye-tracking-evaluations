/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector$$OnDisable
ENTRY_POINT: 0634dc04
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


void Meta_XR_ImmersiveDebugger_DebugInspector__OnDisable
               (float param_1,float param_2,float param_3,float param_4,float param_5,
               undefined1 param_6 [16],float param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  undefined8 *puVar10;
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
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_s10;
  float fVar26;
  float fVar27;
  float unaff_s12;
  float fVar28;
  float unaff_s13;
  float fVar29;
  float unaff_s14;
  float unaff_s15;
  float fVar30;
  float in_s21;
  float in_register_000052a4;
  float in_s22;
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
  ulong uVar17;
  
  do {
    param_5 = param_5 / param_4;
    param_4 = param_4 + param_7 * 0.5;
    fVar16 = in_s21 * param_5 * param_4;
    fVar18 = in_register_000052a4 * param_5 * param_4;
    uVar17 = CONCAT44(fVar18,fVar16);
    param_4 = in_s22 * param_5 * param_4;
    if ((unaff_w29 & 6) == 0) {
      fVar21 = in_stack_000000a0._4_4_ * DAT_012edabc;
      dVar12 = acos((double)(param_3 * param_4 + param_1 * fVar16 + param_2 * fVar18));
      in_stack_00000140 = uVar17;
      in_stack_00000148 = param_4;
      if (fVar21 < (float)dVar12) {
        FUN_0638db74(uVar17,fVar18,param_4,param_1,param_2,param_3,fVar21,&stack0x00000140,0);
      }
      fVar21 = in_stack_00000148;
      uVar17 = in_stack_00000140;
      in_stack_000000a0._4_4_ = in_stack_000000a0._4_4_ / 90.0;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if ((uint)ABS(in_stack_000000a0._4_4_) <= (uint)unaff_w20) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(in_stack_000000a0._4_4_)) {
          bVar1 = in_stack_000000a0._4_4_ < 1.0;
          bVar2 = in_stack_000000a0._4_4_ == 1.0;
          bVar3 = false;
        }
      }
      fVar11 = 1.0;
      if (bVar2 || bVar1 != bVar3) {
        fVar11 = in_stack_000000a0._4_4_;
      }
      if (DAT_086de61e == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de61e = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar19 = (float)uVar17 * 0.5;
      fVar20 = (float)(uVar17 >> 0x20) * 0.5;
      fVar29 = (float)in_stack_00000130;
      fVar16 = fVar29 + fVar16 * 0.5;
      fVar14 = (float)((ulong)in_stack_00000130 >> 0x20);
      fVar18 = fVar14 + fVar18 * 0.5;
      in_stack_000000e0 = (float)((ulong)in_stack_00000120 >> 0x20);
      fVar13 = fStack000000000000011c + param_4 * 0.5;
      fVar23 = ((fVar16 + fVar19) - (float)in_stack_00000120) * in_stack_000000c0;
      fVar25 = ((fVar18 + fVar20) - in_stack_000000e0) * in_stack_000000c0;
      fVar27 = in_stack_000000c0 * ((fVar13 + fVar21 * 0.5) - fStack0000000000000118);
      dVar12 = 0.0;
      if (0.0 <= fVar11 && (uint)ABS(fVar11) <= (uint)unaff_w20) {
        dVar12 = (double)fVar11;
      }
      dVar12 = (double)FUN_033a3c74(dVar12,0x3fe0000000000000);
      fVar11 = DAT_012edea4;
      fStack0000000000000118 = fStack0000000000000118 + fVar27;
      puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
      fVar15 = (float)in_stack_00000120 + fVar23;
      in_stack_000000e0 = in_stack_000000e0 + fVar25;
      in_stack_00000120 = CONCAT44(in_stack_000000e0,fVar15);
      *puVar6 = in_stack_00000120;
      *(float *)(puVar6 + 1) = fStack0000000000000118;
      puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x27 * 0xc);
      fVar11 = (float)dVar12 * fVar11 + -0.5 + 1.0;
      *puVar6 = CONCAT44(fVar25 * fVar11 + (float)((ulong)*puVar6 >> 0x20),
                         fVar23 * fVar11 + (float)*puVar6);
      *(float *)(puVar6 + 1) = fVar27 * fVar11 + *(float *)(puVar6 + 1);
      if (unaff_w23 == 0) {
        puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x24 * 0xc);
        fVar16 = ((fVar16 - fVar19) - fVar29) * in_stack_000000b0;
        fVar18 = ((fVar18 - fVar20) - fVar14) * in_stack_000000b0;
        fVar21 = in_stack_000000b0 * ((fVar13 - fVar21 * 0.5) - fStack000000000000011c);
        fStack0000000000000080 = fVar14 + fVar18;
        in_stack_00000130 = CONCAT44(fStack0000000000000080,fVar29 + fVar16);
        fStack000000000000011c = fStack000000000000011c + fVar21;
        *puVar6 = in_stack_00000130;
        *(float *)(puVar6 + 1) = fStack000000000000011c;
        puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x24 * 0xc);
        *puVar6 = CONCAT44(fVar18 * fVar11 + (float)((ulong)*puVar6 >> 0x20),
                           fVar16 * fVar11 + (float)*puVar6);
        *(float *)(puVar6 + 1) = fVar21 * fVar11 + *(float *)(puVar6 + 1);
      }
      uVar17 = (ulong)(uint)(fVar15 - (float)in_stack_00000130);
    }
    fVar18 = (float)uVar17;
    fVar21 = (fStack000000000000007c * unaff_s13 +
             fStack00000000000000ac * unaff_s12 + fStack00000000000000a8 * unaff_s10) -
             fStack0000000000000078 * unaff_s14;
    fVar11 = (fStack0000000000000078 * unaff_s13 +
             fStack000000000000007c * unaff_s14 + fStack00000000000000a8 * unaff_s12) -
             fStack00000000000000ac * unaff_s10;
    fVar13 = (fStack00000000000000ac * unaff_s13 +
             fStack00000000000000a8 * unaff_s14 + fStack0000000000000078 * unaff_s10) -
             fStack000000000000007c * unaff_s12;
    fVar29 = (fStack00000000000000a8 * unaff_s13 -
             (fStack0000000000000078 * unaff_s12 + fStack000000000000007c * unaff_s10)) -
             fStack00000000000000ac * unaff_s14;
    fVar16 = (float)FUN_0638dfac(0);
    pfVar7 = (float *)(*(long *)(unaff_x19 + 0x34) + unaff_x27 * 0x10);
    *pfVar7 = (fVar21 * fVar18 + fVar29 * fVar16 + fVar13 * param_2) - fVar11 * param_3;
    pfVar7[1] = (fVar11 * fVar18 + fVar29 * param_2 + fVar21 * param_3) - fVar13 * fVar16;
    pfVar7[2] = (fVar13 * fVar18 + fVar29 * param_3 + fVar11 * fVar16) - fVar21 * param_2;
    pfVar7[3] = (fVar29 * fVar18 - (fVar21 * fVar16 + fVar11 * param_2)) - fVar13 * param_3;
    do {
      if (in_stack_00000168 == 1) {
        fVar16 = (float)FUN_06358bac(uStack0000000000000100,in_stack_00000048,0);
        fVar18 = *unaff_x19;
        if (DAT_086de61e == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086de61e = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar11 = (float)in_stack_00000130;
        fVar29 = (float)in_stack_00000120;
        fVar24 = fVar29 - fVar11;
        fVar28 = fStack0000000000000118 - fStack000000000000011c;
        fVar23 = fStack0000000000000114 * fStack00000000000000fc -
                 fStack0000000000000110 * unaff_s15;
        fVar14 = fStack0000000000000110 * fStack00000000000000f8 -
                 fStack000000000000010c * fStack00000000000000fc;
        fVar19 = fStack000000000000010c * unaff_s15 -
                 fStack0000000000000114 * fStack00000000000000f8;
        fVar14 = fVar14 + fVar14;
        fVar19 = fVar19 + fVar19;
        fVar23 = fVar23 + fVar23;
        fVar26 = in_stack_000000e0 - fStack0000000000000080;
        fVar22 = unaff_s15 + fStack0000000000000108 * fVar14 +
                 (fStack0000000000000110 * fVar23 - fStack000000000000010c * fVar19);
        FUN_033a3c74((double)(1.0 - fVar16),(double)fVar18);
        fVar16 = fVar26;
        fVar18 = fVar28;
        fVar21 = fVar22;
        fVar13 = (float)FUN_0638dfac(fVar24,0);
        fVar25 = fVar26 * fVar13 - fVar24 * fVar16;
        fVar27 = fVar28 * fVar16 - fVar26 * fVar18;
        fVar15 = fVar24 * fVar18 - fVar28 * fVar13;
        fVar27 = fVar27 + fVar27;
        fVar15 = fVar15 + fVar15;
        fVar25 = fVar25 + fVar25;
        fVar20 = fVar24 + fVar21 * fVar27 + (fVar16 * fVar25 - fVar18 * fVar15);
        fVar30 = fVar26 + fVar21 * fVar15 + (fVar18 * fVar27 - fVar13 * fVar25);
        fVar16 = fVar28 + fVar21 * fVar25 + (fVar13 * fVar15 - fVar16 * fVar27);
        fVar18 = (float)FUN_0635881c(fVar22,fStack00000000000000fc + fStack0000000000000108 * fVar19
                                            + (fStack000000000000010c * fVar14 -
                                              fStack0000000000000114 * fVar23),
                                     fStack00000000000000f8 + fStack0000000000000108 * fVar23 +
                                     (fStack0000000000000114 * fVar19 -
                                     fStack0000000000000110 * fVar14),uStack00000000000000d0,
                                     fStack00000000000000d4,uStack00000000000000d8,
                                     fStack00000000000000dc,0x3e800000);
        fVar21 = fVar11 + fVar24 * fVar18;
        fVar13 = fStack0000000000000080 + fVar26 * fVar18;
        fVar14 = fStack000000000000011c + fVar28 * fVar18;
        if ((unaff_w29 & 6) == 0) {
          fVar19 = 1.0 - fVar18;
          fVar23 = in_stack_000000c0 * ((fVar21 + fVar19 * fVar20) - fVar29);
          fVar25 = in_stack_000000c0 * ((fVar13 + fVar19 * fVar30) - in_stack_000000e0);
          in_stack_000000c0 =
               in_stack_000000c0 * ((fVar14 + fVar19 * fVar16) - fStack0000000000000118);
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
          *pfVar7 = fVar29 + fVar23;
          pfVar7[1] = in_stack_000000e0 + fVar25;
          pfVar7[2] = fStack0000000000000118 + in_stack_000000c0;
          fVar29 = 1.0 - in_stack_00000188._4_4_;
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x38) + unaff_x27 * 0xc);
          *pfVar7 = fVar29 * fVar23 + *pfVar7;
          pfVar7[1] = fVar29 * fVar25 + pfVar7[1];
          pfVar7[2] = fVar29 * in_stack_000000c0 + pfVar7[2];
        }
        if ((uStack0000000000000104 & 6) == 0) {
          fVar21 = in_stack_000000b0 * ((fVar21 - fVar18 * fVar20) - fVar11);
          fVar13 = in_stack_000000b0 * ((fVar13 - fVar18 * fVar30) - fStack0000000000000080);
          in_stack_000000b0 =
               in_stack_000000b0 * ((fVar14 - fVar18 * fVar16) - fStack000000000000011c);
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x24 * 0xc);
          *pfVar7 = fVar11 + fVar21;
          pfVar7[1] = fStack0000000000000080 + fVar13;
          pfVar7[2] = fStack000000000000011c + in_stack_000000b0;
          fVar16 = 1.0 - in_stack_00000188._4_4_;
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x38) + unaff_x24 * 0xc);
          *pfVar7 = fVar16 * fVar21 + *pfVar7;
          pfVar7[1] = fVar16 * fVar13 + pfVar7[1];
          pfVar7[2] = fVar16 * in_stack_000000b0 + pfVar7[2];
        }
      }
      do {
        do {
          do {
            unaff_x21 = unaff_x21 + -1;
            iVar5 = (int)unaff_x22 + 1;
            if (unaff_x21 == 0) {
              do {
                if ((in_stack_00000038._4_4_ & 1) != 0) {
                  return;
                }
                in_stack_00000038._4_4_ = 1;
                unaff_x21 = in_stack_00000018;
                iVar5 = in_stack_00000010._4_4_;
              } while ((int)in_stack_00000018 == 0);
            }
            unaff_x22 = (long)iVar5;
            lVar9 = *(long *)(unaff_x19 + 4) + (long)iVar5 * (long)(int)unaff_x28;
          } while (*(int *)(lVar9 + 4) < 0);
          iVar5 = *(int *)(*(long *)(unaff_x19 + 4) + unaff_x22 * unaff_x28) + unaff_w25;
          unaff_w29 = *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar5 * 4);
        } while ((unaff_w29 & 1) == 0);
        fVar13 = *(float *)(lVar9 + 8);
        fStack00000000000000fc = *(float *)(lVar9 + 0xc);
        fStack00000000000000f8 = *(float *)(lVar9 + 0x10);
        fStack000000000000007c = *(float *)(lVar9 + 0x14);
        fStack0000000000000078 = *(float *)(lVar9 + 0x18);
        fStack00000000000000ac = *(float *)(lVar9 + 0x1c);
        fStack00000000000000a8 = *(float *)(lVar9 + 0x20);
        unaff_x27 = (long)iVar5;
        uStack0000000000000100 = *(undefined4 *)(*(long *)(unaff_x19 + 0x1c) + unaff_x27 * 4);
        iVar5 = *(int *)(lVar9 + 4) + unaff_w25;
        uStack0000000000000104 = *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar5 * 4);
        puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x18) + in_stack_00000088 * 0x10);
        in_stack_00000158 = puVar6[1];
        in_stack_00000150 = *puVar6;
        puVar10 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
        fStack0000000000000118 = *(float *)(puVar10 + 1);
        puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + (long)iVar5 * 0xc);
        in_stack_00000120 = *puVar10;
        in_stack_00000130 = *puVar6;
        lVar9 = *(long *)(unaff_x19 + 0x2c);
        fStack000000000000011c = *(float *)(puVar6 + 1);
        unaff_x24 = (long)iVar5;
        pfVar7 = (float *)(*(long *)(unaff_x19 + 0x34) + (long)iVar5 * 0x10);
        pfVar8 = (float *)(lVar9 + (long)iVar5 * 0x10);
        fStack0000000000000114 = *pfVar8;
        fVar11 = *pfVar7;
        fVar29 = 0.0;
        fStack0000000000000110 = pfVar8[1];
        fStack000000000000010c = pfVar8[2];
        fStack0000000000000108 = pfVar8[3];
        fVar21 = pfVar7[1];
        fVar16 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + unaff_x27 * 4) * 0.5;
        fVar18 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + (long)iVar5 * 4) * 0.5;
        bVar1 = false;
        bVar2 = false;
        bVar3 = false;
        if ((uint)ABS(fVar16) <= (uint)unaff_w20) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar16)) {
            bVar1 = fVar16 < 1.0;
            bVar2 = fVar16 == 1.0;
            bVar3 = false;
          }
        }
        fVar14 = 1.0;
        if (bVar2 || bVar1 != bVar3) {
          fVar14 = fVar16;
        }
        bVar1 = true;
        if (((uint)ABS(fVar14) <= (uint)unaff_w20) && (bVar1 = false, !NAN(fVar14))) {
          bVar1 = fVar14 < 0.0;
        }
        in_stack_000000c0 = fVar29;
        if (!bVar1) {
          in_stack_000000c0 = fVar14;
        }
        bVar1 = false;
        bVar2 = false;
        bVar3 = false;
        if ((uint)ABS(fVar18) <= (uint)unaff_w20) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar18)) {
            bVar1 = fVar18 < 1.0;
            bVar2 = fVar18 == 1.0;
            bVar3 = false;
          }
        }
        fVar16 = 1.0;
        if (bVar2 || bVar1 != bVar3) {
          fVar16 = fVar18;
        }
        fVar14 = pfVar7[2];
        fVar18 = pfVar7[3];
        bVar1 = true;
        if (((uint)ABS(fVar16) <= (uint)unaff_w20) && (bVar1 = false, !NAN(fVar16))) {
          bVar1 = fVar16 < 0.0;
        }
        in_stack_000000b0 = fVar29;
        if (!bVar1) {
          in_stack_000000b0 = fVar16;
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
          unaff_s15 = fStack0000000000000074 * fVar13;
          fStack00000000000000fc = fStack0000000000000070 * fStack00000000000000fc;
          fStack00000000000000f8 = fStack000000000000006c * fStack00000000000000f8;
          fStack000000000000007c = fStack0000000000000068 * fStack000000000000007c;
          fStack0000000000000078 = fStack0000000000000064 * fStack0000000000000078;
          fStack00000000000000ac = fStack0000000000000060 * fStack00000000000000ac;
          fStack00000000000000a8 = in_stack_00000058._4_4_ * fStack00000000000000a8;
          goto LAB_0634da20;
        }
        pfVar8 = (float *)(*(long *)(unaff_x19 + 0x28) + unaff_x27 * 0xc);
        pfVar7 = (float *)(*(long *)(unaff_x19 + 0x28) + unaff_x24 * 0xc);
        fVar13 = *pfVar8 - *pfVar7;
        fVar29 = pfVar8[1] - pfVar7[1];
        fVar16 = pfVar8[2] - pfVar7[2];
        fVar19 = fVar16 * fVar16 + fVar13 * fVar13 + fVar29 * fVar29;
      } while (fVar19 < DAT_012ed990);
      pfVar7 = (float *)(lVar9 + unaff_x27 * 0x10);
      fVar20 = *pfVar7;
      fVar25 = pfVar7[1];
      fVar23 = pfVar7[2];
      fVar27 = pfVar7[3];
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar19 = 1.0 / SQRT(fVar19);
      fVar15 = 1.0 / (fStack0000000000000108 * fStack0000000000000108 +
                     fStack000000000000010c * fStack000000000000010c +
                     fStack0000000000000114 * fStack0000000000000114 +
                     fStack0000000000000110 * fStack0000000000000110);
      fVar13 = fVar13 * fVar19;
      fVar29 = fVar29 * fVar19;
      fVar16 = fVar16 * fVar19;
      fVar19 = fStack0000000000000108 * fVar15;
      fVar22 = fVar15 * -fStack0000000000000114;
      fVar24 = fVar15 * -fStack0000000000000110;
      fVar15 = fVar15 * -fStack000000000000010c;
      fVar30 = fVar15 * fVar13 - fVar22 * fVar16;
      fVar26 = fVar22 * fVar29 - fVar24 * fVar13;
      fVar28 = fVar24 * fVar16 - fVar15 * fVar29;
      fVar28 = fVar28 + fVar28;
      fVar30 = fVar30 + fVar30;
      fVar26 = fVar26 + fVar26;
      fStack00000000000000fc = fVar29 + fVar19 * fVar30 + (fVar15 * fVar28 - fVar22 * fVar26);
      fStack00000000000000f8 = fVar16 + fVar19 * fVar26 + (fVar22 * fVar30 - fVar24 * fVar28);
      fStack000000000000007c =
           (fVar19 * fVar20 + fVar24 * fVar23 + fVar22 * fVar27) - fVar15 * fVar25;
      fStack0000000000000078 =
           (fVar19 * fVar25 + fVar15 * fVar20 + fVar24 * fVar27) - fVar22 * fVar23;
      fStack00000000000000ac =
           (fVar19 * fVar23 + fVar22 * fVar25 + fVar15 * fVar27) - fVar24 * fVar20;
      unaff_s15 = fVar13 + fVar19 * fVar28 + (fVar24 * fVar26 - fVar15 * fVar30);
      fStack00000000000000a8 =
           (fVar19 * fVar27 - (fVar22 * fVar20 + fVar24 * fVar25)) - fVar15 * fVar23;
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
      unaff_s10 = fVar11;
      unaff_s12 = fVar21;
      unaff_s13 = fVar18;
      unaff_s14 = fVar14;
    }
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
      cVar4 = DAT_086d90cb;
    }
    else {
      cVar4 = '\x01';
    }
    param_7 = *(float *)(*(long *)(unaff_x19 + 0x3c) + unaff_x22 * 4);
    if (cVar4 == '\0') {
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
    in_s21 = (float)in_stack_00000120 - (float)in_stack_00000130;
    in_register_000052a4 = in_stack_000000e0 - fStack0000000000000080;
    in_s22 = fStack0000000000000118 - fStack000000000000011c;
    fVar18 = fStack00000000000000f8 * unaff_s12 - fStack00000000000000fc * unaff_s14;
    fVar21 = unaff_s15 * unaff_s14 - fStack00000000000000f8 * unaff_s10;
    fVar16 = fStack00000000000000fc * unaff_s10 - unaff_s15 * unaff_s12;
    fVar18 = fVar18 + fVar18;
    fVar21 = fVar21 + fVar21;
    fVar16 = fVar16 + fVar16;
    param_4 = SQRT(in_s22 * in_s22 + in_s21 * in_s21 + in_register_000052a4 * in_register_000052a4);
    param_1 = unaff_s15 + unaff_s13 * fVar18 + (unaff_s12 * fVar16 - unaff_s14 * fVar21);
    param_2 = fStack00000000000000fc + unaff_s13 * fVar21 +
              (unaff_s14 * fVar18 - unaff_s10 * fVar16);
    param_3 = fStack00000000000000f8 + unaff_s13 * fVar16 +
              (unaff_s10 * fVar21 - unaff_s12 * fVar18);
    param_7 = param_7 - param_4;
    param_5 = 1.0;
  } while( true );
}


