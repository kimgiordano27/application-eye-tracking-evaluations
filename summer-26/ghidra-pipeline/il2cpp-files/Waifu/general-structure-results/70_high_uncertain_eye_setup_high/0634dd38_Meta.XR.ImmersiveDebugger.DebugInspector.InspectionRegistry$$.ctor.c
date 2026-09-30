/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector.InspectionRegistry$$.ctor
ENTRY_POINT: 0634dd38
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


void Meta_XR_ImmersiveDebugger_DebugInspector_InspectionRegistry___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,
               undefined1 param_4 [16],float param_5)

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
  uint unaff_w24;
  int unaff_w25;
  uint unaff_w26;
  long unaff_x27;
  long unaff_x28;
  uint unaff_w29;
  float fVar11;
  float fVar12;
  float fVar14;
  double dVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s8;
  float fVar20;
  float unaff_s9;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_s10;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_s12;
  float fVar27;
  float fVar28;
  float unaff_s13;
  float unaff_s14;
  float fVar29;
  ulong unaff_d15;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
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
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float in_stack_000000b0;
  float in_stack_000000c0;
  undefined4 uStack00000000000000d0;
  float fStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  float fStack00000000000000dc;
  float fStack00000000000000e0;
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
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
      param_3 = _fStack00000000000000e0;
    }
    fVar17 = (float)unaff_d15 * 0.5;
    fVar18 = (float)(unaff_d15 >> 0x20) * 0.5;
    fVar24 = (float)in_stack_00000130;
    fVar11 = fVar24 + (float)param_3 * 0.5;
    fVar27 = (float)((ulong)in_stack_00000130 >> 0x20);
    fVar14 = fVar27 + (float)(param_3 >> 0x20) * 0.5;
    fStack00000000000000e0 = (float)((ulong)in_stack_00000120 >> 0x20);
    fVar15 = fStack000000000000011c + unaff_s9 * 0.5;
    fVar21 = ((fVar11 + fVar17) - (float)in_stack_00000120) * in_stack_000000c0;
    fVar23 = ((fVar14 + fVar18) - fStack00000000000000e0) * in_stack_000000c0;
    fVar26 = in_stack_000000c0 * ((fVar15 + param_5 * 0.5) - fStack0000000000000118);
    dVar13 = 0.0;
    if (unaff_w24 == 0 && unaff_w26 == 0) {
      dVar13 = (double)unaff_s8;
    }
    dVar13 = (double)FUN_033a3c74(dVar13,0x3fe0000000000000);
    fVar12 = DAT_012edea4;
    fStack0000000000000118 = fStack0000000000000118 + fVar26;
    puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
    fVar16 = (float)in_stack_00000120 + fVar21;
    fStack00000000000000e0 = fStack00000000000000e0 + fVar23;
    in_stack_00000120 = CONCAT44(fStack00000000000000e0,fVar16);
    *puVar6 = in_stack_00000120;
    *(float *)(puVar6 + 1) = fStack0000000000000118;
    puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x27 * 0xc);
    fVar12 = (float)dVar13 * fVar12 + -0.5 + 1.0;
    *puVar6 = CONCAT44(fVar23 * fVar12 + (float)((ulong)*puVar6 >> 0x20),
                       fVar21 * fVar12 + (float)*puVar6);
    *(float *)(puVar6 + 1) = fVar26 * fVar12 + *(float *)(puVar6 + 1);
    if (unaff_w23 == 0) {
      puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + in_stack_00000030 * 0xc);
      fVar11 = ((fVar11 - fVar17) - fVar24) * in_stack_000000b0;
      fVar14 = ((fVar14 - fVar18) - fVar27) * in_stack_000000b0;
      fVar15 = in_stack_000000b0 * ((fVar15 - param_5 * 0.5) - fStack000000000000011c);
      fStack0000000000000080 = fVar27 + fVar14;
      in_stack_00000130 = CONCAT44(fStack0000000000000080,fVar24 + fVar11);
      fStack000000000000011c = fStack000000000000011c + fVar15;
      *puVar6 = in_stack_00000130;
      *(float *)(puVar6 + 1) = fStack000000000000011c;
      puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + in_stack_00000030 * 0xc);
      *puVar6 = CONCAT44(fVar14 * fVar12 + (float)((ulong)*puVar6 >> 0x20),
                         fVar11 * fVar12 + (float)*puVar6);
      *(float *)(puVar6 + 1) = fVar15 * fVar12 + *(float *)(puVar6 + 1);
    }
    param_3 = (ulong)(uint)(fVar16 - (float)in_stack_00000130);
    do {
      fVar14 = (float)param_3;
      fVar15 = (fStack000000000000007c * unaff_s13 +
               fStack00000000000000ac * unaff_s12 + fStack00000000000000a8 * unaff_s10) -
               fStack0000000000000078 * unaff_s14;
      fVar24 = (fStack0000000000000078 * unaff_s13 +
               fStack000000000000007c * unaff_s14 + fStack00000000000000a8 * unaff_s12) -
               fStack00000000000000ac * unaff_s10;
      fVar27 = (fStack00000000000000ac * unaff_s13 +
               fStack00000000000000a8 * unaff_s14 + fStack0000000000000078 * unaff_s10) -
               fStack000000000000007c * unaff_s12;
      fVar17 = (fStack00000000000000a8 * unaff_s13 -
               (fStack0000000000000078 * unaff_s12 + fStack000000000000007c * unaff_s10)) -
               fStack00000000000000ac * unaff_s14;
      fVar11 = (float)FUN_0638dfac(0);
      pfVar7 = (float *)(*(long *)(unaff_x19 + 0x34) + unaff_x27 * 0x10);
      *pfVar7 = (fVar15 * fVar14 + fVar17 * fVar11 + fVar27 * fStack0000000000000044) -
                fVar24 * fStack0000000000000040;
      pfVar7[1] = (fVar24 * fVar14 +
                  fVar17 * fStack0000000000000044 + fVar15 * fStack0000000000000040) -
                  fVar27 * fVar11;
      pfVar7[2] = (fVar27 * fVar14 + fVar17 * fStack0000000000000040 + fVar24 * fVar11) -
                  fVar15 * fStack0000000000000044;
      pfVar7[3] = (fVar17 * fVar14 - (fVar15 * fVar11 + fVar24 * fStack0000000000000044)) -
                  fVar27 * fStack0000000000000040;
      do {
        if (in_stack_00000168 == 1) {
          fVar11 = (float)FUN_06358bac(uStack0000000000000100,in_stack_00000048,0);
          fVar14 = *unaff_x19;
          if (DAT_086de61e == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086de61e = '\x01';
          }
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar24 = (float)in_stack_00000130;
          fVar17 = (float)in_stack_00000120;
          fVar22 = fVar17 - fVar24;
          fVar28 = fStack0000000000000118 - fStack000000000000011c;
          fVar26 = fStack0000000000000114 * fStack00000000000000fc -
                   fStack0000000000000110 * in_stack_00000028._4_4_;
          fVar18 = fStack0000000000000110 * fStack00000000000000f8 -
                   fStack000000000000010c * fStack00000000000000fc;
          fVar21 = fStack000000000000010c * in_stack_00000028._4_4_ -
                   fStack0000000000000114 * fStack00000000000000f8;
          fVar18 = fVar18 + fVar18;
          fVar21 = fVar21 + fVar21;
          fVar26 = fVar26 + fVar26;
          fVar25 = fStack00000000000000e0 - fStack0000000000000080;
          fVar20 = in_stack_00000028._4_4_ + fStack0000000000000108 * fVar18 +
                   (fStack0000000000000110 * fVar26 - fStack000000000000010c * fVar21);
          FUN_033a3c74((double)(1.0 - fVar11),(double)fVar14);
          fVar11 = fVar25;
          fVar14 = fVar28;
          fVar15 = fVar20;
          fVar27 = (float)FUN_0638dfac(fVar22,0);
          fVar12 = fVar25 * fVar27 - fVar22 * fVar11;
          fVar16 = fVar28 * fVar11 - fVar25 * fVar14;
          fVar19 = fVar22 * fVar14 - fVar28 * fVar27;
          fVar16 = fVar16 + fVar16;
          fVar19 = fVar19 + fVar19;
          fVar12 = fVar12 + fVar12;
          fVar23 = fVar22 + fVar15 * fVar16 + (fVar11 * fVar12 - fVar14 * fVar19);
          fVar29 = fVar25 + fVar15 * fVar19 + (fVar14 * fVar16 - fVar27 * fVar12);
          fVar11 = fVar28 + fVar15 * fVar12 + (fVar27 * fVar19 - fVar11 * fVar16);
          fVar14 = (float)FUN_0635881c(fVar20,fStack00000000000000fc +
                                              fStack0000000000000108 * fVar21 +
                                              (fStack000000000000010c * fVar18 -
                                              fStack0000000000000114 * fVar26),
                                       fStack00000000000000f8 + fStack0000000000000108 * fVar26 +
                                       (fStack0000000000000114 * fVar21 -
                                       fStack0000000000000110 * fVar18),uStack00000000000000d0,
                                       fStack00000000000000d4,uStack00000000000000d8,
                                       fStack00000000000000dc,0x3e800000);
          fVar15 = fVar24 + fVar22 * fVar14;
          fVar27 = fStack0000000000000080 + fVar25 * fVar14;
          fVar18 = fStack000000000000011c + fVar28 * fVar14;
          if ((unaff_w29 & 6) == 0) {
            fVar21 = 1.0 - fVar14;
            fVar26 = in_stack_000000c0 * ((fVar15 + fVar21 * fVar23) - fVar17);
            fVar12 = in_stack_000000c0 * ((fVar27 + fVar21 * fVar29) - fStack00000000000000e0);
            in_stack_000000c0 =
                 in_stack_000000c0 * ((fVar18 + fVar21 * fVar11) - fStack0000000000000118);
            pfVar7 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
            *pfVar7 = fVar17 + fVar26;
            pfVar7[1] = fStack00000000000000e0 + fVar12;
            pfVar7[2] = fStack0000000000000118 + in_stack_000000c0;
            fVar17 = 1.0 - in_stack_00000188._4_4_;
            pfVar7 = (float *)(*(long *)(unaff_x19 + 0x38) + unaff_x27 * 0xc);
            *pfVar7 = fVar17 * fVar26 + *pfVar7;
            pfVar7[1] = fVar17 * fVar12 + pfVar7[1];
            pfVar7[2] = fVar17 * in_stack_000000c0 + pfVar7[2];
          }
          if ((uStack0000000000000104 & 6) == 0) {
            fVar15 = in_stack_000000b0 * ((fVar15 - fVar14 * fVar23) - fVar24);
            fVar27 = in_stack_000000b0 * ((fVar27 - fVar14 * fVar29) - fStack0000000000000080);
            in_stack_000000b0 =
                 in_stack_000000b0 * ((fVar18 - fVar14 * fVar11) - fStack000000000000011c);
            pfVar7 = (float *)(*(long *)(unaff_x19 + 0x30) + in_stack_00000030 * 0xc);
            *pfVar7 = fVar24 + fVar15;
            pfVar7[1] = fStack0000000000000080 + fVar27;
            pfVar7[2] = fStack000000000000011c + in_stack_000000b0;
            fVar11 = 1.0 - in_stack_00000188._4_4_;
            pfVar7 = (float *)(*(long *)(unaff_x19 + 0x38) + in_stack_00000030 * 0xc);
            *pfVar7 = fVar11 * fVar15 + *pfVar7;
            pfVar7[1] = fVar11 * fVar27 + pfVar7[1];
            pfVar7[2] = fVar11 * in_stack_000000b0 + pfVar7[2];
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
          in_stack_00000028._4_4_ = *(float *)(lVar9 + 8);
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
          in_stack_00000030 = (long)iVar5;
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x34) + (long)iVar5 * 0x10);
          pfVar8 = (float *)(lVar9 + (long)iVar5 * 0x10);
          fStack0000000000000114 = *pfVar8;
          fVar24 = *pfVar7;
          fVar27 = 0.0;
          fStack0000000000000110 = pfVar8[1];
          fStack000000000000010c = pfVar8[2];
          fStack0000000000000108 = pfVar8[3];
          fVar15 = pfVar7[1];
          fVar11 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + unaff_x27 * 4) * 0.5;
          fVar14 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + (long)iVar5 * 4) * 0.5;
          bVar1 = false;
          bVar2 = false;
          bVar3 = false;
          if ((uint)ABS(fVar11) <= (uint)unaff_w20) {
            bVar1 = false;
            bVar2 = false;
            bVar3 = true;
            if (!NAN(fVar11)) {
              bVar1 = fVar11 < 1.0;
              bVar2 = fVar11 == 1.0;
              bVar3 = false;
            }
          }
          fVar17 = 1.0;
          if (bVar2 || bVar1 != bVar3) {
            fVar17 = fVar11;
          }
          bVar1 = true;
          if (((uint)ABS(fVar17) <= (uint)unaff_w20) && (bVar1 = false, !NAN(fVar17))) {
            bVar1 = fVar17 < 0.0;
          }
          in_stack_000000c0 = fVar27;
          if (!bVar1) {
            in_stack_000000c0 = fVar17;
          }
          bVar1 = false;
          bVar2 = false;
          bVar3 = false;
          if ((uint)ABS(fVar14) <= (uint)unaff_w20) {
            bVar1 = false;
            bVar2 = false;
            bVar3 = true;
            if (!NAN(fVar14)) {
              bVar1 = fVar14 < 1.0;
              bVar2 = fVar14 == 1.0;
              bVar3 = false;
            }
          }
          fVar11 = 1.0;
          if (bVar2 || bVar1 != bVar3) {
            fVar11 = fVar14;
          }
          fVar17 = pfVar7[2];
          fVar14 = pfVar7[3];
          bVar1 = true;
          if (((uint)ABS(fVar11) <= (uint)unaff_w20) && (bVar1 = false, !NAN(fVar11))) {
            bVar1 = fVar11 < 0.0;
          }
          in_stack_000000b0 = fVar27;
          if (!bVar1) {
            in_stack_000000b0 = fVar11;
          }
          fStack00000000000000dc = (float)FUN_06358bac(uStack0000000000000100,&stack0x00000150,0);
          fStack00000000000000dc = ABS(fStack00000000000000dc);
          uStack00000000000000d0 = uStack0000000000000098;
          fStack00000000000000d4 = fStack0000000000000094;
          uStack00000000000000d8 = uStack0000000000000090;
          if (fStack00000000000000dc <= fStack0000000000000084) {
            uStack00000000000000d8 = 0;
            uStack00000000000000d0 = 0;
            fStack00000000000000d4 = fVar27;
          }
          if ((uStack000000000000009c >> 3 & 1) == 0) {
            in_stack_00000028._4_4_ = fStack0000000000000074 * in_stack_00000028._4_4_;
            fStack00000000000000fc = fStack0000000000000070 * fStack00000000000000fc;
            fStack00000000000000f8 = fStack000000000000006c * fStack00000000000000f8;
            fStack000000000000007c = fStack0000000000000068 * fStack000000000000007c;
            fStack0000000000000078 = fStack0000000000000064 * fStack0000000000000078;
            fStack00000000000000ac = fStack0000000000000060 * fStack00000000000000ac;
            fStack00000000000000a8 = in_stack_00000058._4_4_ * fStack00000000000000a8;
            goto LAB_0634da20;
          }
          pfVar8 = (float *)(*(long *)(unaff_x19 + 0x28) + unaff_x27 * 0xc);
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x28) + in_stack_00000030 * 0xc);
          fVar27 = *pfVar8 - *pfVar7;
          fVar18 = pfVar8[1] - pfVar7[1];
          fVar11 = pfVar8[2] - pfVar7[2];
          fVar21 = fVar11 * fVar11 + fVar27 * fVar27 + fVar18 * fVar18;
        } while (fVar21 < DAT_012ed990);
        pfVar7 = (float *)(lVar9 + unaff_x27 * 0x10);
        fVar23 = *pfVar7;
        fVar12 = pfVar7[1];
        fVar26 = pfVar7[2];
        fVar16 = pfVar7[3];
        if (DAT_086d90cb == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d90cb = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar21 = 1.0 / SQRT(fVar21);
        fVar19 = 1.0 / (fStack0000000000000108 * fStack0000000000000108 +
                       fStack000000000000010c * fStack000000000000010c +
                       fStack0000000000000114 * fStack0000000000000114 +
                       fStack0000000000000110 * fStack0000000000000110);
        fVar27 = fVar27 * fVar21;
        fVar18 = fVar18 * fVar21;
        fVar11 = fVar11 * fVar21;
        fVar21 = fStack0000000000000108 * fVar19;
        fVar20 = fVar19 * -fStack0000000000000114;
        fVar22 = fVar19 * -fStack0000000000000110;
        fVar19 = fVar19 * -fStack000000000000010c;
        fVar29 = fVar19 * fVar27 - fVar20 * fVar11;
        fVar25 = fVar20 * fVar18 - fVar22 * fVar27;
        fVar28 = fVar22 * fVar11 - fVar19 * fVar18;
        fVar28 = fVar28 + fVar28;
        fVar29 = fVar29 + fVar29;
        fVar25 = fVar25 + fVar25;
        fStack00000000000000fc = fVar18 + fVar21 * fVar29 + (fVar19 * fVar28 - fVar20 * fVar25);
        fStack00000000000000f8 = fVar11 + fVar21 * fVar25 + (fVar20 * fVar29 - fVar22 * fVar28);
        fStack000000000000007c =
             (fVar21 * fVar23 + fVar22 * fVar26 + fVar20 * fVar16) - fVar19 * fVar12;
        fStack0000000000000078 =
             (fVar21 * fVar12 + fVar19 * fVar23 + fVar22 * fVar16) - fVar20 * fVar26;
        fStack00000000000000ac =
             (fVar21 * fVar26 + fVar20 * fVar12 + fVar19 * fVar16) - fVar22 * fVar23;
        in_stack_00000028._4_4_ = fVar27 + fVar21 * fVar28 + (fVar22 * fVar25 - fVar19 * fVar29);
        fStack00000000000000a8 =
             (fVar21 * fVar16 - (fVar20 * fVar23 + fVar22 * fVar12)) - fVar19 * fVar26;
LAB_0634da20:
        fStack0000000000000080 = (float)((ulong)in_stack_00000130 >> 0x20);
        fStack00000000000000e0 = (float)((ulong)in_stack_00000120 >> 0x20);
      } while (in_stack_00000160._4_4_ != 1);
      unaff_w23 = uStack0000000000000104 & 6;
      unaff_s10 = fStack0000000000000114;
      unaff_s12 = fStack0000000000000110;
      unaff_s13 = fStack0000000000000108;
      unaff_s14 = fStack000000000000010c;
      if (unaff_w23 == 0) {
        unaff_s10 = fVar24;
        unaff_s12 = fVar15;
        unaff_s13 = fVar14;
        unaff_s14 = fVar17;
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
      fVar11 = *(float *)(*(long *)(unaff_x19 + 0x3c) + unaff_x22 * 4);
      if (cVar4 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar14 = (float)FUN_06358bac(uStack0000000000000100,in_stack_00000050,0);
      if (DAT_086de4d6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de4d6 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar21 = (float)in_stack_00000120 - (float)in_stack_00000130;
      fVar23 = fStack00000000000000e0 - fStack0000000000000080;
      fVar26 = fStack0000000000000118 - fStack000000000000011c;
      fVar27 = fStack00000000000000f8 * unaff_s12 - fStack00000000000000fc * unaff_s14;
      fVar18 = in_stack_00000028._4_4_ * unaff_s14 - fStack00000000000000f8 * unaff_s10;
      fVar24 = fStack00000000000000fc * unaff_s10 - in_stack_00000028._4_4_ * unaff_s12;
      fVar27 = fVar27 + fVar27;
      fVar18 = fVar18 + fVar18;
      fVar24 = fVar24 + fVar24;
      fVar17 = SQRT(fVar26 * fVar26 + fVar21 * fVar21 + fVar23 * fVar23);
      fVar15 = in_stack_00000028._4_4_ + unaff_s13 * fVar27 +
               (unaff_s12 * fVar24 - unaff_s14 * fVar18);
      fStack0000000000000044 =
           fStack00000000000000fc + unaff_s13 * fVar18 + (unaff_s14 * fVar27 - unaff_s10 * fVar24);
      fStack0000000000000040 =
           fStack00000000000000f8 + unaff_s13 * fVar24 + (unaff_s10 * fVar18 - unaff_s12 * fVar27);
      fVar27 = 1.0 / fVar17;
      fVar17 = fVar17 + (fVar11 - fVar17) * 0.5;
      fVar11 = fVar21 * fVar27 * fVar17;
      fVar24 = fVar23 * fVar27 * fVar17;
      param_3 = CONCAT44(fVar24,fVar11);
      unaff_s9 = fVar26 * fVar27 * fVar17;
    } while ((unaff_w29 & 6) != 0);
    fVar27 = fVar14 * DAT_012edabc;
    dVar13 = acos((double)(fStack0000000000000040 * unaff_s9 +
                          fVar15 * fVar11 + fStack0000000000000044 * fVar24));
    in_stack_00000140 = param_3;
    in_stack_00000148 = unaff_s9;
    if (fVar27 < (float)dVar13) {
      FUN_0638db74(param_3,fVar24,unaff_s9,fVar15,fStack0000000000000044,fStack0000000000000040,
                   fVar27,&stack0x00000140,0);
    }
    param_5 = in_stack_00000148;
    unaff_d15 = in_stack_00000140;
    fVar14 = fVar14 / 90.0;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if ((uint)ABS(fVar14) <= (uint)unaff_w20) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar14)) {
        bVar1 = fVar14 < 1.0;
        bVar2 = fVar14 == 1.0;
        bVar3 = false;
      }
    }
    unaff_s8 = 1.0;
    if (bVar2 || bVar1 != bVar3) {
      unaff_s8 = fVar14;
    }
    unaff_w26 = (uint)((uint)unaff_w20 < (uint)ABS(unaff_s8));
    unaff_w24 = (uint)(unaff_s8 < 0.0);
    _fStack00000000000000e0 = param_3;
    if (DAT_086de61e == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086de61e = '\x01';
    }
  } while( true );
}


