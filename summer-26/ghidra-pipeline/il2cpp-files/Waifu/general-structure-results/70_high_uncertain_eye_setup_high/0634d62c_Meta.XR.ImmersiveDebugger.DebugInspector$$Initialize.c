/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector$$Initialize
ENTRY_POINT: 0634d62c
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


void Meta_XR_ImmersiveDebugger_DebugInspector__Initialize(float param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint in_w8;
  int iVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 in_x9;
  float *pfVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 in_x11;
  float *unaff_x19;
  long lVar14;
  int unaff_w25;
  long lVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  uint uStack000000000000003c;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000080;
  float fStack0000000000000084;
  long in_stack_00000088;
  undefined4 uStack0000000000000090;
  float fStack0000000000000094;
  undefined4 uStack0000000000000098;
  uint uStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  ulong uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  ulong uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
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
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  ulong in_stack_00000140;
  float in_stack_00000148;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 in_stack_00000160;
  int in_stack_00000168;
  undefined8 in_stack_00000188;
  
  uStack0000000000000048 = in_x9;
  uStack0000000000000050 = in_x11;
  fStack0000000000000084 = param_1;
  do {
    lVar14 = in_stack_00000018;
    iVar8 = in_stack_00000010._4_4_;
    uStack000000000000003c = in_w8;
    if ((int)in_stack_00000018 != 0) {
      do {
        lVar12 = *(long *)(unaff_x19 + 4) + (long)iVar8 * 0x24;
        if (-1 < *(int *)(lVar12 + 4)) {
          iVar1 = *(int *)(*(long *)(unaff_x19 + 4) + (long)iVar8 * 0x24) + unaff_w25;
          uVar3 = *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4);
          if ((uVar3 & 1) != 0) {
            fVar38 = *(float *)(lVar12 + 8);
            fStack00000000000000fc = *(float *)(lVar12 + 0xc);
            fStack00000000000000f8 = *(float *)(lVar12 + 0x10);
            fVar40 = *(float *)(lVar12 + 0x14);
            fVar32 = *(float *)(lVar12 + 0x18);
            fVar35 = *(float *)(lVar12 + 0x1c);
            fVar39 = *(float *)(lVar12 + 0x20);
            lVar16 = (long)iVar1;
            uStack0000000000000100 = *(undefined4 *)(*(long *)(unaff_x19 + 0x1c) + lVar16 * 4);
            iVar1 = *(int *)(lVar12 + 4) + unaff_w25;
            uStack0000000000000104 = *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4);
            puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x18) + in_stack_00000088 * 0x10);
            uStack0000000000000158 = puVar9[1];
            uStack0000000000000150 = *puVar9;
            puVar13 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + lVar16 * 0xc);
            fStack0000000000000118 = *(float *)(puVar13 + 1);
            puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + (long)iVar1 * 0xc);
            uStack0000000000000120 = *puVar13;
            uStack0000000000000130 = *puVar9;
            lVar15 = *(long *)(unaff_x19 + 0x2c);
            uStack0000000000000128 = 0;
            uStack0000000000000138 = 0;
            fStack000000000000011c = *(float *)(puVar9 + 1);
            lVar12 = (long)iVar1;
            pfVar10 = (float *)(*(long *)(unaff_x19 + 0x34) + (long)iVar1 * 0x10);
            pfVar11 = (float *)(lVar15 + (long)iVar1 * 0x10);
            fStack0000000000000114 = *pfVar11;
            fStack00000000000000ac = *pfVar10;
            fVar34 = 0.0;
            fStack0000000000000110 = pfVar11[1];
            fStack000000000000010c = pfVar11[2];
            fStack0000000000000108 = pfVar11[3];
            fStack00000000000000a8 = pfVar10[1];
            fVar17 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + lVar16 * 4) * 0.5;
            fVar21 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + (long)iVar1 * 4) * 0.5;
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if ((uint)ABS(fVar17) < 0x7f800001) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar17)) {
                bVar4 = fVar17 < 1.0;
                bVar5 = fVar17 == 1.0;
                bVar6 = false;
              }
            }
            fVar24 = 1.0;
            if (bVar5 || bVar4 != bVar6) {
              fVar24 = fVar17;
            }
            bVar4 = true;
            if (((uint)ABS(fVar24) < 0x7f800001) && (bVar4 = false, !NAN(fVar24))) {
              bVar4 = fVar24 < 0.0;
            }
            fVar17 = fVar34;
            if (!bVar4) {
              fVar17 = fVar24;
            }
            uStack00000000000000c0 = (ulong)(uint)fVar17;
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if ((uint)ABS(fVar21) < 0x7f800001) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar21)) {
                bVar4 = fVar21 < 1.0;
                bVar5 = fVar21 == 1.0;
                bVar6 = false;
              }
            }
            fVar17 = 1.0;
            if (bVar5 || bVar4 != bVar6) {
              fVar17 = fVar21;
            }
            fStack00000000000000a4 = pfVar10[2];
            fStack00000000000000a0 = pfVar10[3];
            bVar4 = true;
            if (((uint)ABS(fVar17) < 0x7f800001) && (bVar4 = false, !NAN(fVar17))) {
              bVar4 = fVar17 < 0.0;
            }
            fVar21 = fVar34;
            if (!bVar4) {
              fVar21 = fVar17;
            }
            uStack00000000000000b0 = (ulong)(uint)fVar21;
            uStack00000000000000b8 = 0;
            uStack00000000000000c8 = 0;
            fVar21 = (float)FUN_06358bac(uStack0000000000000100,&stack0x00000150,0);
            uVar19 = uStack0000000000000098;
            fVar17 = fStack0000000000000094;
            uVar18 = uStack0000000000000090;
            if (ABS(fVar21) <= fStack0000000000000084) {
              uVar18 = 0;
              uVar19 = 0;
              fVar17 = fVar34;
            }
            if ((uStack000000000000009c >> 3 & 1) == 0) {
              fVar38 = fStack0000000000000074 * fVar38;
              fStack00000000000000fc = fStack0000000000000070 * fStack00000000000000fc;
              fStack00000000000000f8 = fStack000000000000006c * fStack00000000000000f8;
              fVar40 = fStack0000000000000068 * fVar40;
              fVar32 = fStack0000000000000064 * fVar32;
              fVar35 = fStack0000000000000060 * fVar35;
              fVar39 = in_stack_00000058._4_4_ * fVar39;
            }
            else {
              pfVar11 = (float *)(*(long *)(unaff_x19 + 0x28) + lVar16 * 0xc);
              pfVar10 = (float *)(*(long *)(unaff_x19 + 0x28) + lVar12 * 0xc);
              fVar38 = *pfVar11 - *pfVar10;
              fVar35 = pfVar11[1] - pfVar10[1];
              fVar32 = pfVar11[2] - pfVar10[2];
              fVar39 = fVar32 * fVar32 + fVar38 * fVar38 + fVar35 * fVar35;
              if (fVar39 < DAT_012ed990) goto LAB_0634e3cc;
              pfVar10 = (float *)(lVar15 + lVar16 * 0x10);
              fVar34 = *pfVar10;
              fVar27 = pfVar10[1];
              fVar24 = pfVar10[2];
              fVar28 = pfVar10[3];
              if (DAT_086d90cb == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086d90cb = '\x01';
              }
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar39 = 1.0 / SQRT(fVar39);
              fVar31 = 1.0 / (fStack0000000000000108 * fStack0000000000000108 +
                             fStack000000000000010c * fStack000000000000010c +
                             fStack0000000000000114 * fStack0000000000000114 +
                             fStack0000000000000110 * fStack0000000000000110);
              fVar38 = fVar38 * fVar39;
              fVar35 = fVar35 * fVar39;
              fVar32 = fVar32 * fVar39;
              fVar39 = fStack0000000000000108 * fVar31;
              fVar33 = fVar31 * -fStack0000000000000114;
              fVar22 = fVar31 * -fStack0000000000000110;
              fVar31 = fVar31 * -fStack000000000000010c;
              fVar30 = fVar31 * fVar38 - fVar33 * fVar32;
              fVar25 = fVar33 * fVar35 - fVar22 * fVar38;
              fVar26 = fVar22 * fVar32 - fVar31 * fVar35;
              fVar26 = fVar26 + fVar26;
              fVar30 = fVar30 + fVar30;
              fVar25 = fVar25 + fVar25;
              fStack00000000000000fc =
                   fVar35 + fVar39 * fVar30 + (fVar31 * fVar26 - fVar33 * fVar25);
              fStack00000000000000f8 =
                   fVar32 + fVar39 * fVar25 + (fVar33 * fVar30 - fVar22 * fVar26);
              fVar40 = (fVar39 * fVar34 + fVar22 * fVar24 + fVar33 * fVar28) - fVar31 * fVar27;
              fVar32 = (fVar39 * fVar27 + fVar31 * fVar34 + fVar22 * fVar28) - fVar33 * fVar24;
              fVar35 = (fVar39 * fVar24 + fVar33 * fVar27 + fVar31 * fVar28) - fVar22 * fVar34;
              fVar38 = fVar38 + fVar39 * fVar26 + (fVar22 * fVar25 - fVar31 * fVar30);
              fVar39 = (fVar39 * fVar28 - (fVar33 * fVar34 + fVar22 * fVar27)) - fVar31 * fVar24;
            }
            fStack0000000000000080 = (float)((ulong)uStack0000000000000130 >> 0x20);
            fVar34 = (float)((ulong)uStack0000000000000120 >> 0x20);
            if (in_stack_00000160._4_4_ == 1) {
              uVar2 = uStack0000000000000104 & 6;
              fVar24 = fStack0000000000000108;
              fVar27 = fStack000000000000010c;
              fVar28 = fStack0000000000000110;
              fVar31 = fStack0000000000000114;
              if (uVar2 == 0) {
                fVar24 = fStack00000000000000a0;
                fVar27 = fStack00000000000000a4;
                fVar28 = fStack00000000000000a8;
                fVar31 = fStack00000000000000ac;
              }
              if (DAT_086d90cb == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086d90cb = '\x01';
              }
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
                cVar7 = DAT_086d90cb;
              }
              else {
                cVar7 = '\x01';
              }
              fVar33 = *(float *)(*(long *)(unaff_x19 + 0x3c) + (long)iVar8 * 4);
              if (cVar7 == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086d90cb = '\x01';
              }
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fStack00000000000000a4 =
                   (float)FUN_06358bac(uStack0000000000000100,uStack0000000000000050,0);
              if (DAT_086de4d6 == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086de4d6 = '\x01';
              }
              fStack00000000000000a8 = fVar39;
              fStack00000000000000ac = fVar35;
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar41 = (float)uStack0000000000000120 - (float)uStack0000000000000130;
              fVar42 = (float)((ulong)uStack0000000000000120 >> 0x20) -
                       (float)((ulong)uStack0000000000000130 >> 0x20);
              fVar43 = fStack0000000000000118 - fStack000000000000011c;
              fVar25 = fStack00000000000000f8 * fVar28 - fStack00000000000000fc * fVar27;
              fVar30 = fVar38 * fVar27 - fStack00000000000000f8 * fVar31;
              fVar22 = fStack00000000000000fc * fVar31 - fVar38 * fVar28;
              fVar25 = fVar25 + fVar25;
              fVar30 = fVar30 + fVar30;
              fVar22 = fVar22 + fVar22;
              fVar26 = SQRT(fVar43 * fVar43 + fVar41 * fVar41 + fVar42 * fVar42);
              fVar35 = fVar38 + fVar24 * fVar25 + (fVar28 * fVar22 - fVar27 * fVar30);
              fVar39 = fStack00000000000000fc + fVar24 * fVar30 +
                       (fVar27 * fVar25 - fVar31 * fVar22);
              fVar22 = fStack00000000000000f8 + fVar24 * fVar22 +
                       (fVar31 * fVar30 - fVar28 * fVar25);
              fVar30 = 1.0 / fVar26;
              fVar26 = fVar26 + (fVar33 - fVar26) * 0.5;
              fVar33 = fVar41 * fVar30 * fVar26;
              fVar25 = fVar42 * fVar30 * fVar26;
              uVar29 = CONCAT44(fVar25,fVar33);
              fVar26 = fVar43 * fVar30 * fVar26;
              if ((uVar3 & 6) == 0) {
                fVar34 = fStack00000000000000a4 * DAT_012edabc;
                fStack00000000000000a0 = fVar35;
                dVar20 = acos((double)(fVar22 * fVar26 + fVar35 * fVar33 + fVar39 * fVar25));
                in_stack_00000140 = uVar29;
                in_stack_00000148 = fVar26;
                if (fVar34 < (float)dVar20) {
                  FUN_0638db74(uVar29,fVar25,fVar26,fStack00000000000000a0,fVar39,fVar22,fVar34,
                               &stack0x00000140,0);
                }
                fVar35 = in_stack_00000148;
                uVar29 = in_stack_00000140;
                fVar34 = fStack00000000000000a4 / 90.0;
                bVar4 = false;
                bVar5 = false;
                bVar6 = false;
                if ((uint)ABS(fVar34) < 0x7f800001) {
                  bVar4 = false;
                  bVar5 = false;
                  bVar6 = true;
                  if (!NAN(fVar34)) {
                    bVar4 = fVar34 < 1.0;
                    bVar5 = fVar34 == 1.0;
                    bVar6 = false;
                  }
                }
                fVar30 = 1.0;
                if (bVar5 || bVar4 != bVar6) {
                  fVar30 = fVar34;
                }
                if (DAT_086de61e == '\0') {
                  FUN_0335b6c8(&DAT_083ce8b0,1);
                  DataMemoryBarrier(2,3);
                  DAT_086de61e = '\x01';
                }
                if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                fVar41 = fStack000000000000011c;
                fVar34 = fStack0000000000000118;
                fVar42 = (float)uVar29 * 0.5;
                fVar43 = (float)(uVar29 >> 0x20) * 0.5;
                fStack00000000000000a4 = fVar35 * 0.5;
                fVar35 = (float)uStack0000000000000130 + fVar33 * 0.5;
                fVar33 = (float)((ulong)uStack0000000000000130 >> 0x20) + fVar25 * 0.5;
                fVar25 = fStack000000000000011c + fVar26 * 0.5;
                fVar26 = (float)uStack00000000000000c0;
                fVar36 = ((fVar35 + fVar42) - (float)uStack0000000000000120) * fVar26;
                fVar37 = ((fVar33 + fVar43) - (float)((ulong)uStack0000000000000120 >> 0x20)) *
                         fVar26;
                fVar26 = fVar26 * ((fVar25 + fStack00000000000000a4) - fStack0000000000000118);
                dVar20 = 0.0;
                if (0.0 <= fVar30 && (uint)ABS(fVar30) < 0x7f800001) {
                  dVar20 = (double)fVar30;
                }
                dVar20 = (double)FUN_033a3c74(dVar20,0x3fe0000000000000);
                fVar30 = DAT_012edea4;
                fStack0000000000000118 = fVar34 + fVar26;
                puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + lVar16 * 0xc);
                fVar23 = (float)uStack0000000000000120 + fVar36;
                fVar34 = (float)((ulong)uStack0000000000000120 >> 0x20) + fVar37;
                uStack0000000000000120 = CONCAT44(fVar34,fVar23);
                *puVar9 = uStack0000000000000120;
                *(float *)(puVar9 + 1) = fStack0000000000000118;
                puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + lVar16 * 0xc);
                uStack0000000000000128 = 0;
                fVar30 = (float)dVar20 * fVar30 + -0.5 + 1.0;
                *puVar9 = CONCAT44(fVar37 * fVar30 + (float)((ulong)*puVar9 >> 0x20),
                                   fVar36 * fVar30 + (float)*puVar9);
                *(float *)(puVar9 + 1) = fVar26 * fVar30 + *(float *)(puVar9 + 1);
                if (uVar2 == 0) {
                  fStack0000000000000080 = (float)((ulong)uStack0000000000000130 >> 0x20);
                  puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + lVar12 * 0xc);
                  fVar26 = (float)uStack00000000000000b0;
                  fVar35 = ((fVar35 - fVar42) - (float)uStack0000000000000130) * fVar26;
                  fVar33 = ((fVar33 - fVar43) - fStack0000000000000080) * fVar26;
                  fVar26 = fVar26 * ((fVar25 - fStack00000000000000a4) - fVar41);
                  fStack0000000000000080 = fStack0000000000000080 + fVar33;
                  uStack0000000000000130 =
                       CONCAT44(fStack0000000000000080,(float)uStack0000000000000130 + fVar35);
                  fVar41 = fVar41 + fVar26;
                  *puVar9 = uStack0000000000000130;
                  *(float *)(puVar9 + 1) = fVar41;
                  puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + lVar12 * 0xc);
                  *puVar9 = CONCAT44(fVar33 * fVar30 + (float)((ulong)*puVar9 >> 0x20),
                                     fVar35 * fVar30 + (float)*puVar9);
                  *(float *)(puVar9 + 1) = fVar26 * fVar30 + *(float *)(puVar9 + 1);
                  uStack0000000000000138 = 0;
                }
                uVar29 = (ulong)(uint)(fVar23 - (float)uStack0000000000000130);
                fStack000000000000011c = fVar41;
              }
              fVar35 = (float)uVar29;
              fVar33 = (fVar40 * fVar24 +
                       fStack00000000000000ac * fVar28 + fStack00000000000000a8 * fVar31) -
                       fVar32 * fVar27;
              fVar25 = (fVar32 * fVar24 + fVar40 * fVar27 + fStack00000000000000a8 * fVar28) -
                       fStack00000000000000ac * fVar31;
              fVar26 = (fStack00000000000000ac * fVar24 +
                       fStack00000000000000a8 * fVar27 + fVar32 * fVar31) - fVar40 * fVar28;
              fVar40 = (fStack00000000000000a8 * fVar24 - (fVar32 * fVar28 + fVar40 * fVar31)) -
                       fStack00000000000000ac * fVar27;
              fVar32 = (float)FUN_0638dfac(0);
              pfVar10 = (float *)(*(long *)(unaff_x19 + 0x34) + lVar16 * 0x10);
              *pfVar10 = (fVar33 * fVar35 + fVar40 * fVar32 + fVar26 * fVar39) - fVar25 * fVar22;
              pfVar10[1] = (fVar25 * fVar35 + fVar40 * fVar39 + fVar33 * fVar22) - fVar26 * fVar32;
              pfVar10[2] = (fVar26 * fVar35 + fVar40 * fVar22 + fVar25 * fVar32) - fVar33 * fVar39;
              pfVar10[3] = (fVar40 * fVar35 - (fVar33 * fVar32 + fVar25 * fVar39)) - fVar26 * fVar22
              ;
            }
            if (in_stack_00000168 == 1) {
              fVar32 = (float)FUN_06358bac(uStack0000000000000100,uStack0000000000000048,0);
              fVar35 = *unaff_x19;
              if (DAT_086de61e == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086de61e = '\x01';
              }
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar30 = (float)uStack0000000000000120 - (float)uStack0000000000000130;
              fVar42 = fStack0000000000000118 - fStack000000000000011c;
              fVar27 = fStack0000000000000114 * fStack00000000000000fc -
                       fStack0000000000000110 * fVar38;
              fVar39 = fStack0000000000000110 * fStack00000000000000f8 -
                       fStack000000000000010c * fStack00000000000000fc;
              fVar24 = fStack000000000000010c * fVar38 -
                       fStack0000000000000114 * fStack00000000000000f8;
              fVar39 = fVar39 + fVar39;
              fVar24 = fVar24 + fVar24;
              fVar27 = fVar27 + fVar27;
              fVar31 = fStack0000000000000108 * fVar24;
              fVar33 = fStack0000000000000108 * fVar27;
              fVar25 = fStack0000000000000114 * fVar24;
              fVar36 = fStack000000000000010c * fVar39;
              fVar40 = fStack0000000000000110 * fVar39;
              fVar28 = fStack0000000000000114 * fVar27;
              fVar41 = fVar34 - fStack0000000000000080;
              fVar26 = fVar38 + fStack0000000000000108 * fVar39 +
                       (fStack0000000000000110 * fVar27 - fStack000000000000010c * fVar24);
              FUN_033a3c74((double)(1.0 - fVar32),(double)fVar35);
              fVar32 = fVar41;
              fVar35 = fVar42;
              fVar38 = fVar26;
              fVar39 = (float)FUN_0638dfac(fVar30,0);
              fVar24 = fVar41 * fVar39 - fVar30 * fVar32;
              fVar27 = fVar42 * fVar32 - fVar41 * fVar35;
              fVar22 = fVar30 * fVar35 - fVar42 * fVar39;
              fVar27 = fVar27 + fVar27;
              fVar22 = fVar22 + fVar22;
              fVar24 = fVar24 + fVar24;
              fStack0000000000000114 =
                   fVar30 + fVar38 * fVar27 + (fVar32 * fVar24 - fVar35 * fVar22);
              fVar43 = fVar41 + fVar38 * fVar22 + (fVar35 * fVar27 - fVar39 * fVar24);
              fStack0000000000000110 =
                   fVar42 + fVar38 * fVar24 + (fVar39 * fVar22 - fVar32 * fVar27);
              fVar17 = (float)FUN_0635881c(fVar26,fStack00000000000000fc + fVar31 +
                                                  (fVar36 - fVar28),
                                           fStack00000000000000f8 + fVar33 + (fVar25 - fVar40),
                                           uVar19,fVar17,uVar18,ABS(fVar21),0x3e800000);
              fVar38 = (float)uStack0000000000000130;
              fVar21 = fVar38 + fVar30 * fVar17;
              fVar32 = fStack0000000000000080 + fVar41 * fVar17;
              fVar35 = fStack000000000000011c + fVar42 * fVar17;
              if ((uVar3 & 6) == 0) {
                fVar39 = 1.0 - fVar17;
                fVar40 = (float)uStack00000000000000c0;
                fVar24 = fVar40 * ((fVar21 + fVar39 * fStack0000000000000114) -
                                  (float)uStack0000000000000120);
                fVar27 = fVar40 * ((fVar32 + fVar39 * fVar43) - fVar34);
                fVar40 = fVar40 * ((fVar35 + fVar39 * fStack0000000000000110) -
                                  fStack0000000000000118);
                pfVar10 = (float *)(*(long *)(unaff_x19 + 0x30) + lVar16 * 0xc);
                *pfVar10 = (float)uStack0000000000000120 + fVar24;
                pfVar10[1] = fVar34 + fVar27;
                pfVar10[2] = fStack0000000000000118 + fVar40;
                fVar39 = 1.0 - in_stack_00000188._4_4_;
                pfVar10 = (float *)(*(long *)(unaff_x19 + 0x38) + lVar16 * 0xc);
                *pfVar10 = fVar39 * fVar24 + *pfVar10;
                pfVar10[1] = fVar39 * fVar27 + pfVar10[1];
                pfVar10[2] = fVar39 * fVar40 + pfVar10[2];
              }
              if ((uStack0000000000000104 & 6) == 0) {
                fVar39 = (float)uStack00000000000000b0;
                fVar21 = fVar39 * ((fVar21 - fVar17 * fStack0000000000000114) - fVar38);
                fVar32 = fVar39 * ((fVar32 - fVar17 * fVar43) - fStack0000000000000080);
                fVar39 = fVar39 * ((fVar35 - fVar17 * fStack0000000000000110) -
                                  fStack000000000000011c);
                pfVar10 = (float *)(*(long *)(unaff_x19 + 0x30) + lVar12 * 0xc);
                *pfVar10 = fVar38 + fVar21;
                pfVar10[1] = fStack0000000000000080 + fVar32;
                pfVar10[2] = fStack000000000000011c + fVar39;
                fVar17 = 1.0 - in_stack_00000188._4_4_;
                pfVar10 = (float *)(*(long *)(unaff_x19 + 0x38) + lVar12 * 0xc);
                *pfVar10 = fVar17 * fVar21 + *pfVar10;
                pfVar10[1] = fVar17 * fVar32 + pfVar10[1];
                pfVar10[2] = fVar17 * fVar39 + pfVar10[2];
              }
            }
          }
        }
LAB_0634e3cc:
        lVar14 = lVar14 + -1;
        iVar8 = iVar8 + 1;
      } while (lVar14 != 0);
    }
    in_w8 = 1;
    if ((uStack000000000000003c & 1) != 0) {
      return;
    }
  } while( true );
}


