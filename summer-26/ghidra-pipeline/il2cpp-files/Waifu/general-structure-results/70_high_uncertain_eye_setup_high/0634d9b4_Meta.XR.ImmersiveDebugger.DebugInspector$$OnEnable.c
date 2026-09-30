/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector$$OnEnable
ENTRY_POINT: 0634d9b4
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspector__OnEnable
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

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
  long unaff_x24;
  int unaff_w25;
  long unaff_x27;
  long unaff_x28;
  uint unaff_w29;
  float fVar11;
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
  ulong uVar24;
  float fVar25;
  float unaff_s8;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float fVar32;
  float in_s21;
  float fVar33;
  float fVar34;
  float fVar35;
  float in_s22;
  float fVar36;
  float in_s23;
  float in_s24;
  float in_s25;
  float in_s26;
  float in_s28;
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
  float in_stack_000000b0;
  float in_stack_000000c0;
  undefined4 uStack00000000000000d0;
  float fStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  float fStack00000000000000dc;
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
  
code_r0x0634d9b4:
                    /* try { // try from 0634d9d4 to 0644d9df has its CatchHandler @ 0634db24 */
  fStack00000000000000fc = in_s16 + param_4 * in_s17 + (param_2 * param_8 - param_5 * param_7);
  fStack00000000000000f8 = param_1 + param_4 * param_7 + (param_5 * in_s17 - param_6 * param_8);
  fVar32 = in_s20 - in_s26;
  fVar33 = (in_s22 + in_s23) - in_s21;
  fVar27 = (in_s24 + in_s18) - param_6 * unaff_s8;
  fVar31 = param_3 + param_4 * param_8 + (param_6 * param_7 - param_2 * in_s17);
  fVar29 = (in_s25 - in_s19) - in_s28;
  do {
    fStack0000000000000080 = (float)((ulong)in_stack_00000130 >> 0x20);
    fVar21 = (float)((ulong)in_stack_00000120 >> 0x20);
    if (in_stack_00000160._4_4_ == 1) {
                    /* try { // try from 0634da40 to 0644da5b has its CatchHandler @ 0634db20 */
      fVar14 = fStack0000000000000108;
      fVar16 = fStack000000000000010c;
      fVar19 = fStack0000000000000110;
      fVar20 = fStack0000000000000114;
      if ((uStack0000000000000104 & 6) == 0) {
        fVar14 = fStack00000000000000a0;
        fVar16 = fStack00000000000000a4;
        fVar19 = fStack00000000000000a8;
        fVar20 = fStack00000000000000ac;
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
      fVar26 = *(float *)(*(long *)(unaff_x19 + 0x3c) + unaff_x22 * 4);
      if (cVar4 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar11 = (float)FUN_06358bac(uStack0000000000000100,in_stack_00000050,0);
      if (DAT_086de4d6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de4d6 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar28 = (float)in_stack_00000130;
      fVar18 = (float)in_stack_00000120;
      fVar34 = fVar18 - fVar28;
      fVar35 = fVar21 - fStack0000000000000080;
      fVar36 = fStack0000000000000118 - fStack000000000000011c;
      fVar22 = fStack00000000000000f8 * fVar19 - fStack00000000000000fc * fVar16;
      fVar25 = fVar31 * fVar16 - fStack00000000000000f8 * fVar20;
      fVar17 = fStack00000000000000fc * fVar20 - fVar31 * fVar19;
      fVar22 = fVar22 + fVar22;
      fVar25 = fVar25 + fVar25;
      fVar17 = fVar17 + fVar17;
      fVar23 = SQRT(fVar36 * fVar36 + fVar34 * fVar34 + fVar35 * fVar35);
      fVar12 = fVar31 + fVar14 * fVar22 + (fVar19 * fVar17 - fVar16 * fVar25);
      fVar15 = fStack00000000000000fc + fVar14 * fVar25 + (fVar16 * fVar22 - fVar20 * fVar17);
      fVar17 = fStack00000000000000f8 + fVar14 * fVar17 + (fVar20 * fVar25 - fVar19 * fVar22);
      fVar25 = 1.0 / fVar23;
      fVar23 = fVar23 + (fVar26 - fVar23) * 0.5;
      fVar26 = fVar34 * fVar25 * fVar23;
      fVar22 = fVar35 * fVar25 * fVar23;
      uVar24 = CONCAT44(fVar22,fVar26);
      fVar23 = fVar36 * fVar25 * fVar23;
      if ((unaff_w29 & 6) == 0) {
        fVar25 = fVar11 * DAT_012edabc;
        dVar13 = acos((double)(fVar17 * fVar23 + fVar12 * fVar26 + fVar15 * fVar22));
        in_stack_00000140 = uVar24;
        in_stack_00000148 = fVar23;
        if (fVar25 < (float)dVar13) {
          FUN_0638db74(uVar24,fVar22,fVar23,fVar12,fVar15,fVar17,fVar25,&stack0x00000140,0);
        }
        fVar12 = in_stack_00000148;
        uVar24 = in_stack_00000140;
        fVar11 = fVar11 / 90.0;
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
        fVar25 = 1.0;
        if (bVar2 || bVar1 != bVar3) {
          fVar25 = fVar11;
        }
        if (DAT_086de61e == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086de61e = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar34 = (float)uVar24 * 0.5;
        fVar35 = (float)(uVar24 >> 0x20) * 0.5;
        fVar26 = fVar28 + fVar26 * 0.5;
        fVar11 = fStack0000000000000080 + fVar22 * 0.5;
        fVar22 = fStack000000000000011c + fVar23 * 0.5;
        fVar23 = ((fVar26 + fVar34) - fVar18) * in_stack_000000c0;
        fVar36 = ((fVar11 + fVar35) - fVar21) * in_stack_000000c0;
        fVar30 = in_stack_000000c0 * ((fVar22 + fVar12 * 0.5) - fStack0000000000000118);
        dVar13 = 0.0;
        if (0.0 <= fVar25 && (uint)ABS(fVar25) <= (uint)unaff_w20) {
          dVar13 = (double)fVar25;
        }
        dVar13 = (double)FUN_033a3c74(dVar13,0x3fe0000000000000);
        fVar25 = DAT_012edea4;
        fStack0000000000000118 = fStack0000000000000118 + fVar30;
        puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
        fVar18 = fVar18 + fVar23;
        fVar21 = fVar21 + fVar36;
        in_stack_00000120 = CONCAT44(fVar21,fVar18);
        *puVar6 = in_stack_00000120;
        *(float *)(puVar6 + 1) = fStack0000000000000118;
        puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x27 * 0xc);
        fVar25 = (float)dVar13 * fVar25 + -0.5 + 1.0;
        *puVar6 = CONCAT44(fVar36 * fVar25 + (float)((ulong)*puVar6 >> 0x20),
                           fVar23 * fVar25 + (float)*puVar6);
        *(float *)(puVar6 + 1) = fVar30 * fVar25 + *(float *)(puVar6 + 1);
        if ((uStack0000000000000104 & 6) == 0) {
          puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x24 * 0xc);
          fVar26 = ((fVar26 - fVar34) - fVar28) * in_stack_000000b0;
          fVar11 = ((fVar11 - fVar35) - fStack0000000000000080) * in_stack_000000b0;
          fVar12 = in_stack_000000b0 * ((fVar22 - fVar12 * 0.5) - fStack000000000000011c);
          fStack0000000000000080 = fStack0000000000000080 + fVar11;
          in_stack_00000130 = CONCAT44(fStack0000000000000080,fVar28 + fVar26);
          fStack000000000000011c = fStack000000000000011c + fVar12;
          *puVar6 = in_stack_00000130;
          *(float *)(puVar6 + 1) = fStack000000000000011c;
          puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x24 * 0xc);
          *puVar6 = CONCAT44(fVar11 * fVar25 + (float)((ulong)*puVar6 >> 0x20),
                             fVar26 * fVar25 + (float)*puVar6);
          *(float *)(puVar6 + 1) = fVar12 * fVar25 + *(float *)(puVar6 + 1);
        }
        uVar24 = (ulong)(uint)(fVar18 - (float)in_stack_00000130);
      }
      fVar26 = (float)uVar24;
      fVar11 = (fVar32 * fVar14 + fVar27 * fVar19 + fVar29 * fVar20) - fVar33 * fVar16;
      fVar28 = (fVar33 * fVar14 + fVar32 * fVar16 + fVar29 * fVar19) - fVar27 * fVar20;
      fVar12 = (fVar27 * fVar14 + fVar29 * fVar16 + fVar33 * fVar20) - fVar32 * fVar19;
      fVar27 = (fVar29 * fVar14 - (fVar33 * fVar19 + fVar32 * fVar20)) - fVar27 * fVar16;
      fVar33 = (float)FUN_0638dfac(0);
      pfVar7 = (float *)(*(long *)(unaff_x19 + 0x34) + unaff_x27 * 0x10);
      *pfVar7 = (fVar11 * fVar26 + fVar27 * fVar33 + fVar12 * fVar15) - fVar28 * fVar17;
      pfVar7[1] = (fVar28 * fVar26 + fVar27 * fVar15 + fVar11 * fVar17) - fVar12 * fVar33;
      pfVar7[2] = (fVar12 * fVar26 + fVar27 * fVar17 + fVar28 * fVar33) - fVar11 * fVar15;
      pfVar7[3] = (fVar27 * fVar26 - (fVar11 * fVar33 + fVar28 * fVar15)) - fVar12 * fVar17;
    }
    if (in_stack_00000168 == 1) {
      fVar33 = (float)FUN_06358bac(uStack0000000000000100,in_stack_00000048,0);
      fVar27 = *unaff_x19;
      if (DAT_086de61e == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de61e = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar29 = (float)in_stack_00000130;
      fVar14 = (float)in_stack_00000120;
      fVar22 = fVar14 - fVar29;
      fVar25 = fStack0000000000000118 - fStack000000000000011c;
      fVar26 = fStack0000000000000114 * fStack00000000000000fc - fStack0000000000000110 * fVar31;
      fVar16 = fStack0000000000000110 * fStack00000000000000f8 -
               fStack000000000000010c * fStack00000000000000fc;
      fVar19 = fStack000000000000010c * fVar31 - fStack0000000000000114 * fStack00000000000000f8;
      fVar16 = fVar16 + fVar16;
      fVar19 = fVar19 + fVar19;
      fVar26 = fVar26 + fVar26;
      fVar18 = fStack00000000000000f8 + fStack0000000000000108 * fVar26;
      fVar28 = fStack00000000000000fc + fStack0000000000000108 * fVar19;
      fVar23 = fVar21 - fStack0000000000000080;
      fVar17 = fVar31 + fStack0000000000000108 * fVar16 +
               (fStack0000000000000110 * fVar26 - fStack000000000000010c * fVar19);
      FUN_033a3c74((double)(1.0 - fVar33),(double)fVar27);
      fVar33 = fVar23;
      fVar27 = fVar25;
      fVar31 = fVar17;
      fVar32 = (float)FUN_0638dfac(fVar22,0);
      fVar11 = fVar23 * fVar32 - fVar22 * fVar33;
      fVar12 = fVar25 * fVar33 - fVar23 * fVar27;
      fVar15 = fVar22 * fVar27 - fVar25 * fVar32;
      fVar12 = fVar12 + fVar12;
      fVar15 = fVar15 + fVar15;
      fVar11 = fVar11 + fVar11;
      fVar20 = fVar22 + fVar31 * fVar12 + (fVar33 * fVar11 - fVar27 * fVar15);
      fVar34 = fVar23 + fVar31 * fVar15 + (fVar27 * fVar12 - fVar32 * fVar11);
      fVar33 = fVar25 + fVar31 * fVar11 + (fVar32 * fVar15 - fVar33 * fVar12);
      fVar27 = (float)FUN_0635881c(fVar17,fVar28 + (fStack000000000000010c * fVar16 -
                                                   fStack0000000000000114 * fVar26),
                                   fVar18 + (fStack0000000000000114 * fVar19 -
                                            fStack0000000000000110 * fVar16),uStack00000000000000d0,
                                   fStack00000000000000d4,uStack00000000000000d8,
                                   fStack00000000000000dc,0x3e800000);
      fVar31 = fVar29 + fVar22 * fVar27;
      fVar32 = fStack0000000000000080 + fVar23 * fVar27;
      fVar16 = fStack000000000000011c + fVar25 * fVar27;
      if ((unaff_w29 & 6) == 0) {
        fVar19 = 1.0 - fVar27;
        fVar26 = in_stack_000000c0 * ((fVar31 + fVar19 * fVar20) - fVar14);
        fVar11 = in_stack_000000c0 * ((fVar32 + fVar19 * fVar34) - fVar21);
        in_stack_000000c0 =
             in_stack_000000c0 * ((fVar16 + fVar19 * fVar33) - fStack0000000000000118);
        pfVar7 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
        *pfVar7 = fVar14 + fVar26;
        pfVar7[1] = fVar21 + fVar11;
        pfVar7[2] = fStack0000000000000118 + in_stack_000000c0;
        fVar21 = 1.0 - in_stack_00000188._4_4_;
        pfVar7 = (float *)(*(long *)(unaff_x19 + 0x38) + unaff_x27 * 0xc);
        *pfVar7 = fVar21 * fVar26 + *pfVar7;
        pfVar7[1] = fVar21 * fVar11 + pfVar7[1];
        pfVar7[2] = fVar21 * in_stack_000000c0 + pfVar7[2];
      }
      if ((uStack0000000000000104 & 6) == 0) {
        fVar31 = in_stack_000000b0 * ((fVar31 - fVar27 * fVar20) - fVar29);
        fVar32 = in_stack_000000b0 * ((fVar32 - fVar27 * fVar34) - fStack0000000000000080);
        in_stack_000000b0 =
             in_stack_000000b0 * ((fVar16 - fVar27 * fVar33) - fStack000000000000011c);
        pfVar7 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x24 * 0xc);
        *pfVar7 = fVar29 + fVar31;
        pfVar7[1] = fStack0000000000000080 + fVar32;
        pfVar7[2] = fStack000000000000011c + in_stack_000000b0;
        fVar33 = 1.0 - in_stack_00000188._4_4_;
        pfVar7 = (float *)(*(long *)(unaff_x19 + 0x38) + unaff_x24 * 0xc);
        *pfVar7 = fVar33 * fVar31 + *pfVar7;
        pfVar7[1] = fVar33 * fVar32 + pfVar7[1];
        pfVar7[2] = fVar33 * in_stack_000000b0 + pfVar7[2];
      }
    }
    while( true ) {
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
      fVar31 = *(float *)(lVar9 + 8);
      fVar16 = *(float *)(lVar9 + 0xc);
      fVar19 = *(float *)(lVar9 + 0x10);
      fVar32 = *(float *)(lVar9 + 0x14);
      fVar33 = *(float *)(lVar9 + 0x18);
      fVar27 = *(float *)(lVar9 + 0x1c);
      fVar29 = *(float *)(lVar9 + 0x20);
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
      fStack00000000000000ac = *pfVar7;
      fVar20 = 0.0;
      fStack0000000000000110 = pfVar8[1];
      fStack000000000000010c = pfVar8[2];
      fStack0000000000000108 = pfVar8[3];
      fStack00000000000000a8 = pfVar7[1];
      fVar21 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + unaff_x27 * 4) * 0.5;
      fVar14 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + (long)iVar5 * 4) * 0.5;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if ((uint)ABS(fVar21) <= (uint)unaff_w20) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar21)) {
          bVar1 = fVar21 < 1.0;
          bVar2 = fVar21 == 1.0;
          bVar3 = false;
        }
      }
      fVar26 = 1.0;
      if (bVar2 || bVar1 != bVar3) {
        fVar26 = fVar21;
      }
      bVar1 = true;
      if (((uint)ABS(fVar26) <= (uint)unaff_w20) && (bVar1 = false, !NAN(fVar26))) {
        bVar1 = fVar26 < 0.0;
      }
      in_stack_000000c0 = fVar20;
      if (!bVar1) {
        in_stack_000000c0 = fVar26;
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
      fVar21 = 1.0;
      if (bVar2 || bVar1 != bVar3) {
        fVar21 = fVar14;
      }
      fStack00000000000000a4 = pfVar7[2];
      fStack00000000000000a0 = pfVar7[3];
      bVar1 = true;
      if (((uint)ABS(fVar21) <= (uint)unaff_w20) && (bVar1 = false, !NAN(fVar21))) {
        bVar1 = fVar21 < 0.0;
      }
      in_stack_000000b0 = fVar20;
      if (!bVar1) {
        in_stack_000000b0 = fVar21;
      }
      fStack00000000000000dc = (float)FUN_06358bac(uStack0000000000000100,&stack0x00000150,0);
      fStack00000000000000dc = ABS(fStack00000000000000dc);
      uStack00000000000000d0 = uStack0000000000000098;
      fStack00000000000000d4 = fStack0000000000000094;
      uStack00000000000000d8 = uStack0000000000000090;
      if (fStack00000000000000dc <= fStack0000000000000084) {
        uStack00000000000000d8 = 0;
        uStack00000000000000d0 = 0;
        fStack00000000000000d4 = fVar20;
      }
      if ((uStack000000000000009c >> 3 & 1) == 0) break;
      pfVar8 = (float *)(*(long *)(unaff_x19 + 0x28) + unaff_x27 * 0xc);
      pfVar7 = (float *)(*(long *)(unaff_x19 + 0x28) + unaff_x24 * 0xc);
      param_3 = *pfVar8 - *pfVar7;
      fVar33 = pfVar8[1] - pfVar7[1];
      param_1 = pfVar8[2] - pfVar7[2];
      fVar27 = param_1 * param_1 + param_3 * param_3 + fVar33 * fVar33;
      if (DAT_012ed990 <= fVar27) {
        pfVar7 = (float *)(lVar9 + unaff_x27 * 0x10);
        unaff_s8 = *pfVar7;
        fVar29 = pfVar7[1];
        fVar31 = pfVar7[2];
        fVar32 = pfVar7[3];
        if (DAT_086d90cb == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d90cb = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar27 = 1.0 / SQRT(fVar27);
        param_2 = 1.0 / (fStack0000000000000108 * fStack0000000000000108 +
                        fStack000000000000010c * fStack000000000000010c +
                        fStack0000000000000114 * fStack0000000000000114 +
                        fStack0000000000000110 * fStack0000000000000110);
        param_3 = param_3 * fVar27;
        in_s16 = fVar33 * fVar27;
        param_1 = param_1 * fVar27;
        param_4 = fStack0000000000000108 * param_2;
        param_5 = param_2 * -fStack0000000000000114;
        param_6 = param_2 * -fStack0000000000000110;
        param_2 = param_2 * -fStack000000000000010c;
        fVar33 = param_2 * param_3 - param_5 * param_1;
        param_7 = param_5 * in_s16 - param_6 * param_3;
        in_s23 = param_2 * unaff_s8 + param_6 * fVar32;
        param_8 = param_6 * param_1 - param_2 * in_s16;
        in_s18 = param_5 * fVar29 + param_2 * fVar32;
        in_s22 = param_4 * fVar29;
        in_s19 = param_5 * unaff_s8 + param_6 * fVar29;
        in_s24 = param_4 * fVar31;
        in_s25 = param_4 * fVar32;
        param_8 = param_8 + param_8;
        in_s17 = fVar33 + fVar33;
        param_7 = param_7 + param_7;
        in_s26 = param_2 * fVar29;
        in_s20 = param_4 * unaff_s8 + param_6 * fVar31 + param_5 * fVar32;
        in_s21 = param_5 * fVar31;
        in_s28 = param_2 * fVar31;
        goto code_r0x0634d9b4;
      }
    }
    fVar31 = fStack0000000000000074 * fVar31;
    fStack00000000000000fc = fStack0000000000000070 * fVar16;
    fStack00000000000000f8 = fStack000000000000006c * fVar19;
    fVar32 = fStack0000000000000068 * fVar32;
    fVar33 = fStack0000000000000064 * fVar33;
    fVar27 = fStack0000000000000060 * fVar27;
    fVar29 = in_stack_00000058._4_4_ * fVar29;
  } while( true );
}


