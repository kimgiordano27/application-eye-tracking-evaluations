/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$RegisterInspector
ENTRY_POINT: 0634db0c
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


void Meta_XR_ImmersiveDebugger_DebugInspectorManager__RegisterInspector
               (ulong param_1,undefined8 param_2,undefined8 param_3)

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
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar23;
  float unaff_s11;
  float fVar24;
  float unaff_s12;
  float fVar25;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
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
  float in_stack_000000b0;
  float in_stack_000000c0;
  undefined4 uStack00000000000000d0;
  float fStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  float fStack00000000000000dc;
  float in_stack_000000e0;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  uint uStack0000000000000100;
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
    fVar11 = (float)FUN_06358bac(param_1,param_2,param_3);
                    /* try { // try from 0634db18 to 0644db1b has its CatchHandler @ 0634db28 */
                    /* try { // try from 0634db1c to 0644db1f has its CatchHandler @ 0634db34 */
    if (DAT_086de4d6 == '\0') {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0634da40 with catch @ 0634db20
                       try { // try from 0634db20 to 0644db53 has its CatchHandler @ 0634d83c */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0634d9d4 with catch @ 0634db24
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0634db18 with catch @ 0634db28
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0634dac8 with catch @ 0634db2c
                        */
      FUN_0335b6c8(&DAT_083ce8b0,1);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0634da7c with catch @ 0634db30
                        */
      DataMemoryBarrier(2,3);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0634d978 with catch @ 0634db34
                       catch(type#1 @ 07e8c608) { ... } // from try @ 0634db1c with catch @ 0634db34
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0634d948 with catch @ 0634db38
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 0634da94 with catch @ 0634db3c
                        */
      DAT_086de4d6 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                    /* try { // try from 0634db54 to 0644db6f has its CatchHandler @ 0634dbe4 */
      FUN_033b9870();
    }
    fVar30 = (float)in_stack_00000130;
    fVar17 = (float)in_stack_00000120;
    fVar27 = fVar17 - fVar30;
    fVar23 = (float)((ulong)in_stack_00000130 >> 0x20);
    fVar13 = (float)((ulong)in_stack_00000120 >> 0x20);
    fVar28 = fVar13 - fVar23;
                    /* try { // try from 0634db70 to 0644dbd3 has its CatchHandler @ 0634d83c */
    fVar29 = fStack0000000000000118 - fStack000000000000011c;
    fVar18 = fStack00000000000000f8 * unaff_s12 - fStack00000000000000fc * unaff_s14;
    fVar21 = unaff_s15 * unaff_s14 - fStack00000000000000f8 * unaff_s10;
    fVar16 = fStack00000000000000fc * unaff_s10 - unaff_s15 * unaff_s12;
    fVar18 = fVar18 + fVar18;
    fVar21 = fVar21 + fVar21;
    fVar16 = fVar16 + fVar16;
                    /* try { // try from 0634dbd4 to 0644dbe3 has its CatchHandler @ 0634dbe4 */
                    /* catch() { ... } // from try @ 0634db54 with catch @ 0634dbe4
                       catch() { ... } // from try @ 0634dbd4 with catch @ 0634dbe4 */
                    /* try { // try from 0634dbe8 to 0644dbeb has its CatchHandler @ 0634dbf4 */
                    /* try { // try from 0634dbec to 0644dbf7 has its CatchHandler @ 0634d83c */
    fVar19 = SQRT(fVar29 * fVar29 + fVar27 * fVar27 + fVar28 * fVar28);
    fVar12 = unaff_s15 + unaff_s13 * fVar18 + (unaff_s12 * fVar16 - unaff_s14 * fVar21);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0634dbe8 with catch @ 0634dbf4
                        */
    fVar15 = fStack00000000000000fc + unaff_s13 * fVar21 + (unaff_s14 * fVar18 - unaff_s10 * fVar16)
    ;
    fVar16 = fStack00000000000000f8 + unaff_s13 * fVar16 + (unaff_s10 * fVar21 - unaff_s12 * fVar18)
    ;
    fVar22 = 1.0 / fVar19;
    fVar19 = fVar19 + (unaff_s8 - fVar19) * 0.5;
    fVar18 = fVar27 * fVar22 * fVar19;
    fVar21 = fVar28 * fVar22 * fVar19;
    uVar20 = CONCAT44(fVar21,fVar18);
    fVar19 = fVar29 * fVar22 * fVar19;
    if ((unaff_w29 & 6) == 0) {
      fVar22 = fVar11 * DAT_012edabc;
      dVar14 = acos((double)(fVar16 * fVar19 + fVar12 * fVar18 + fVar15 * fVar21));
      in_stack_00000140 = uVar20;
      in_stack_00000148 = fVar19;
      if (fVar22 < (float)dVar14) {
        FUN_0638db74(uVar20,fVar21,fVar19,fVar12,fVar15,fVar16,fVar22,&stack0x00000140,0);
      }
      fVar12 = in_stack_00000148;
      uVar20 = in_stack_00000140;
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
      fVar22 = 1.0;
      if (bVar2 || bVar1 != bVar3) {
        fVar22 = fVar11;
      }
      if (DAT_086de61e == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de61e = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar27 = (float)uVar20 * 0.5;
      fVar28 = (float)(uVar20 >> 0x20) * 0.5;
      fVar11 = fVar30 + fVar18 * 0.5;
      fVar18 = fVar23 + fVar21 * 0.5;
      fVar19 = fStack000000000000011c + fVar19 * 0.5;
      fVar21 = ((fVar11 + fVar27) - fVar17) * in_stack_000000c0;
      fVar29 = ((fVar18 + fVar28) - fVar13) * in_stack_000000c0;
      fVar24 = in_stack_000000c0 * ((fVar19 + fVar12 * 0.5) - fStack0000000000000118);
      dVar14 = 0.0;
      if (0.0 <= fVar22 && (uint)ABS(fVar22) <= (uint)unaff_w20) {
        dVar14 = (double)fVar22;
      }
      dVar14 = (double)FUN_033a3c74(dVar14,0x3fe0000000000000);
      fVar22 = DAT_012edea4;
      fStack0000000000000118 = fStack0000000000000118 + fVar24;
      puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
      fVar17 = fVar17 + fVar21;
      in_stack_000000e0 = fVar13 + fVar29;
      in_stack_00000120 = CONCAT44(in_stack_000000e0,fVar17);
      *puVar6 = in_stack_00000120;
      *(float *)(puVar6 + 1) = fStack0000000000000118;
      puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x27 * 0xc);
      fVar13 = (float)dVar14 * fVar22 + -0.5 + 1.0;
      *puVar6 = CONCAT44(fVar29 * fVar13 + (float)((ulong)*puVar6 >> 0x20),
                         fVar21 * fVar13 + (float)*puVar6);
      *(float *)(puVar6 + 1) = fVar24 * fVar13 + *(float *)(puVar6 + 1);
      if (unaff_w23 == 0) {
        puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x24 * 0xc);
        fVar11 = ((fVar11 - fVar27) - fVar30) * in_stack_000000b0;
        fVar18 = ((fVar18 - fVar28) - fVar23) * in_stack_000000b0;
        fVar12 = in_stack_000000b0 * ((fVar19 - fVar12 * 0.5) - fStack000000000000011c);
        fStack0000000000000080 = fVar23 + fVar18;
        in_stack_00000130 = CONCAT44(fStack0000000000000080,fVar30 + fVar11);
        fStack000000000000011c = fStack000000000000011c + fVar12;
        *puVar6 = in_stack_00000130;
        *(float *)(puVar6 + 1) = fStack000000000000011c;
        puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x24 * 0xc);
        *puVar6 = CONCAT44(fVar18 * fVar13 + (float)((ulong)*puVar6 >> 0x20),
                           fVar11 * fVar13 + (float)*puVar6);
        *(float *)(puVar6 + 1) = fVar12 * fVar13 + *(float *)(puVar6 + 1);
      }
      uVar20 = (ulong)(uint)(fVar17 - (float)in_stack_00000130);
    }
    fVar30 = (float)uVar20;
    fVar12 = (fStack000000000000007c * unaff_s13 + unaff_s9 * unaff_s12 + unaff_s11 * unaff_s10) -
             fStack0000000000000078 * unaff_s14;
    fVar23 = (fStack0000000000000078 * unaff_s13 +
             fStack000000000000007c * unaff_s14 + unaff_s11 * unaff_s12) - unaff_s9 * unaff_s10;
    fVar17 = (unaff_s9 * unaff_s13 + unaff_s11 * unaff_s14 + fStack0000000000000078 * unaff_s10) -
             fStack000000000000007c * unaff_s12;
    fVar13 = (unaff_s11 * unaff_s13 -
             (fStack0000000000000078 * unaff_s12 + fStack000000000000007c * unaff_s10)) -
             unaff_s9 * unaff_s14;
    fVar11 = (float)FUN_0638dfac(0);
    pfVar7 = (float *)(*(long *)(unaff_x19 + 0x34) + unaff_x27 * 0x10);
    *pfVar7 = (fVar12 * fVar30 + fVar13 * fVar11 + fVar17 * fVar15) - fVar23 * fVar16;
    pfVar7[1] = (fVar23 * fVar30 + fVar13 * fVar15 + fVar12 * fVar16) - fVar17 * fVar11;
    pfVar7[2] = (fVar17 * fVar30 + fVar13 * fVar16 + fVar23 * fVar11) - fVar12 * fVar15;
    pfVar7[3] = (fVar13 * fVar30 - (fVar12 * fVar11 + fVar23 * fVar15)) - fVar17 * fVar16;
    do {
      if (in_stack_00000168 == 1) {
        fVar11 = (float)FUN_06358bac(uStack0000000000000100,in_stack_00000048,0);
        fVar30 = *unaff_x19;
        if (DAT_086de61e == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086de61e = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar23 = (float)in_stack_00000130;
        fVar15 = (float)in_stack_00000120;
        fVar29 = fVar15 - fVar23;
        fVar25 = fStack0000000000000118 - fStack000000000000011c;
        fVar19 = fStack0000000000000114 * fStack00000000000000fc -
                 fStack0000000000000110 * unaff_s15;
        fVar13 = fStack0000000000000110 * fStack00000000000000f8 -
                 fStack000000000000010c * fStack00000000000000fc;
        fVar16 = fStack000000000000010c * unaff_s15 -
                 fStack0000000000000114 * fStack00000000000000f8;
        fVar13 = fVar13 + fVar13;
        fVar16 = fVar16 + fVar16;
        fVar19 = fVar19 + fVar19;
        fVar24 = in_stack_000000e0 - fStack0000000000000080;
        fVar28 = unaff_s15 + fStack0000000000000108 * fVar13 +
                 (fStack0000000000000110 * fVar19 - fStack000000000000010c * fVar16);
        FUN_033a3c74((double)(1.0 - fVar11),(double)fVar30);
        fVar11 = fVar24;
        fVar30 = fVar25;
        fVar12 = fVar28;
        fVar17 = (float)FUN_0638dfac(fVar29,0);
        fVar21 = fVar24 * fVar17 - fVar29 * fVar11;
        fVar22 = fVar25 * fVar11 - fVar24 * fVar30;
        fVar27 = fVar29 * fVar30 - fVar25 * fVar17;
        fVar22 = fVar22 + fVar22;
        fVar27 = fVar27 + fVar27;
        fVar21 = fVar21 + fVar21;
        fVar18 = fVar29 + fVar12 * fVar22 + (fVar11 * fVar21 - fVar30 * fVar27);
        fVar26 = fVar24 + fVar12 * fVar27 + (fVar30 * fVar22 - fVar17 * fVar21);
        fVar11 = fVar25 + fVar12 * fVar21 + (fVar17 * fVar27 - fVar11 * fVar22);
        fVar30 = (float)FUN_0635881c(fVar28,fStack00000000000000fc + fStack0000000000000108 * fVar16
                                            + (fStack000000000000010c * fVar13 -
                                              fStack0000000000000114 * fVar19),
                                     fStack00000000000000f8 + fStack0000000000000108 * fVar19 +
                                     (fStack0000000000000114 * fVar16 -
                                     fStack0000000000000110 * fVar13),uStack00000000000000d0,
                                     fStack00000000000000d4,uStack00000000000000d8,
                                     fStack00000000000000dc,0x3e800000);
        fVar12 = fVar23 + fVar29 * fVar30;
        fVar17 = fStack0000000000000080 + fVar24 * fVar30;
        fVar13 = fStack000000000000011c + fVar25 * fVar30;
        if ((unaff_w29 & 6) == 0) {
          fVar16 = 1.0 - fVar30;
          fVar19 = in_stack_000000c0 * ((fVar12 + fVar16 * fVar18) - fVar15);
          fVar21 = in_stack_000000c0 * ((fVar17 + fVar16 * fVar26) - in_stack_000000e0);
          in_stack_000000c0 =
               in_stack_000000c0 * ((fVar13 + fVar16 * fVar11) - fStack0000000000000118);
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x27 * 0xc);
          *pfVar7 = fVar15 + fVar19;
          pfVar7[1] = in_stack_000000e0 + fVar21;
          pfVar7[2] = fStack0000000000000118 + in_stack_000000c0;
          fVar15 = 1.0 - in_stack_00000188._4_4_;
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x38) + unaff_x27 * 0xc);
          *pfVar7 = fVar15 * fVar19 + *pfVar7;
          pfVar7[1] = fVar15 * fVar21 + pfVar7[1];
          pfVar7[2] = fVar15 * in_stack_000000c0 + pfVar7[2];
        }
        if ((uStack0000000000000104 & 6) == 0) {
          fVar12 = in_stack_000000b0 * ((fVar12 - fVar30 * fVar18) - fVar23);
          fVar17 = in_stack_000000b0 * ((fVar17 - fVar30 * fVar26) - fStack0000000000000080);
          in_stack_000000b0 =
               in_stack_000000b0 * ((fVar13 - fVar30 * fVar11) - fStack000000000000011c);
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x24 * 0xc);
          *pfVar7 = fVar23 + fVar12;
          pfVar7[1] = fStack0000000000000080 + fVar17;
          pfVar7[2] = fStack000000000000011c + in_stack_000000b0;
          fVar11 = 1.0 - in_stack_00000188._4_4_;
          pfVar7 = (float *)(*(long *)(unaff_x19 + 0x38) + unaff_x24 * 0xc);
          *pfVar7 = fVar11 * fVar12 + *pfVar7;
          pfVar7[1] = fVar11 * fVar17 + pfVar7[1];
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
        fVar15 = *(float *)(lVar9 + 8);
        fStack00000000000000fc = *(float *)(lVar9 + 0xc);
        fStack00000000000000f8 = *(float *)(lVar9 + 0x10);
        fStack000000000000007c = *(float *)(lVar9 + 0x14);
        fStack0000000000000078 = *(float *)(lVar9 + 0x18);
        fVar17 = *(float *)(lVar9 + 0x1c);
        fVar13 = *(float *)(lVar9 + 0x20);
        unaff_x27 = (long)iVar5;
        uStack0000000000000100 = *(uint *)(*(long *)(unaff_x19 + 0x1c) + unaff_x27 * 4);
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
        fVar23 = *pfVar7;
        fVar16 = 0.0;
        fStack0000000000000110 = pfVar8[1];
        fStack000000000000010c = pfVar8[2];
        fStack0000000000000108 = pfVar8[3];
        fVar12 = pfVar7[1];
        fVar11 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + unaff_x27 * 4) * 0.5;
        fVar30 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + (long)iVar5 * 4) * 0.5;
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
        fVar18 = 1.0;
        if (bVar2 || bVar1 != bVar3) {
          fVar18 = fVar11;
        }
        bVar1 = true;
        if (((uint)ABS(fVar18) <= (uint)unaff_w20) && (bVar1 = false, !NAN(fVar18))) {
          bVar1 = fVar18 < 0.0;
        }
        in_stack_000000c0 = fVar16;
        if (!bVar1) {
          in_stack_000000c0 = fVar18;
        }
        bVar1 = false;
        bVar2 = false;
        bVar3 = false;
        if ((uint)ABS(fVar30) <= (uint)unaff_w20) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar30)) {
            bVar1 = fVar30 < 1.0;
            bVar2 = fVar30 == 1.0;
            bVar3 = false;
          }
        }
        fVar11 = 1.0;
        if (bVar2 || bVar1 != bVar3) {
          fVar11 = fVar30;
        }
        fVar18 = pfVar7[2];
        fVar30 = pfVar7[3];
        bVar1 = true;
        if (((uint)ABS(fVar11) <= (uint)unaff_w20) && (bVar1 = false, !NAN(fVar11))) {
          bVar1 = fVar11 < 0.0;
        }
        in_stack_000000b0 = fVar16;
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
          fStack00000000000000d4 = fVar16;
        }
        if ((uStack000000000000009c >> 3 & 1) == 0) {
          unaff_s15 = fStack0000000000000074 * fVar15;
          fStack00000000000000fc = fStack0000000000000070 * fStack00000000000000fc;
          fStack00000000000000f8 = fStack000000000000006c * fStack00000000000000f8;
          fStack000000000000007c = fStack0000000000000068 * fStack000000000000007c;
          fStack0000000000000078 = fStack0000000000000064 * fStack0000000000000078;
          unaff_s9 = fStack0000000000000060 * fVar17;
          unaff_s11 = in_stack_00000058._4_4_ * fVar13;
          goto LAB_0634da20;
        }
        pfVar8 = (float *)(*(long *)(unaff_x19 + 0x28) + unaff_x27 * 0xc);
        pfVar7 = (float *)(*(long *)(unaff_x19 + 0x28) + unaff_x24 * 0xc);
        fVar17 = *pfVar8 - *pfVar7;
        fVar15 = pfVar8[1] - pfVar7[1];
        fVar11 = pfVar8[2] - pfVar7[2];
        fVar13 = fVar11 * fVar11 + fVar17 * fVar17 + fVar15 * fVar15;
      } while (fVar13 < DAT_012ed990);
      pfVar7 = (float *)(lVar9 + unaff_x27 * 0x10);
      fVar16 = *pfVar7;
      fVar21 = pfVar7[1];
      fVar19 = pfVar7[2];
      fVar22 = pfVar7[3];
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar13 = 1.0 / SQRT(fVar13);
      fVar27 = 1.0 / (fStack0000000000000108 * fStack0000000000000108 +
                     fStack000000000000010c * fStack000000000000010c +
                     fStack0000000000000114 * fStack0000000000000114 +
                     fStack0000000000000110 * fStack0000000000000110);
      fVar17 = fVar17 * fVar13;
      fVar15 = fVar15 * fVar13;
      fVar11 = fVar11 * fVar13;
      fVar13 = fStack0000000000000108 * fVar27;
      fVar28 = fVar27 * -fStack0000000000000114;
      fVar29 = fVar27 * -fStack0000000000000110;
      fVar27 = fVar27 * -fStack000000000000010c;
      fVar26 = fVar27 * fVar17 - fVar28 * fVar11;
      fVar24 = fVar28 * fVar15 - fVar29 * fVar17;
      fVar25 = fVar29 * fVar11 - fVar27 * fVar15;
      fVar25 = fVar25 + fVar25;
      fVar26 = fVar26 + fVar26;
      fVar24 = fVar24 + fVar24;
      fStack00000000000000fc = fVar15 + fVar13 * fVar26 + (fVar27 * fVar25 - fVar28 * fVar24);
      fStack00000000000000f8 = fVar11 + fVar13 * fVar24 + (fVar28 * fVar26 - fVar29 * fVar25);
      fStack000000000000007c =
           (fVar13 * fVar16 + fVar29 * fVar19 + fVar28 * fVar22) - fVar27 * fVar21;
      fStack0000000000000078 =
           (fVar13 * fVar21 + fVar27 * fVar16 + fVar29 * fVar22) - fVar28 * fVar19;
      unaff_s9 = (fVar13 * fVar19 + fVar28 * fVar21 + fVar27 * fVar22) - fVar29 * fVar16;
      unaff_s15 = fVar17 + fVar13 * fVar25 + (fVar29 * fVar24 - fVar27 * fVar26);
      unaff_s11 = (fVar13 * fVar22 - (fVar28 * fVar16 + fVar29 * fVar21)) - fVar27 * fVar19;
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
      unaff_s10 = fVar23;
      unaff_s12 = fVar12;
      unaff_s13 = fVar30;
      unaff_s14 = fVar18;
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
    unaff_s8 = *(float *)(*(long *)(unaff_x19 + 0x3c) + unaff_x22 * 4);
    if (cVar4 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    param_1 = (ulong)uStack0000000000000100;
    param_3 = 0;
    param_2 = in_stack_00000050;
  } while( true );
}


