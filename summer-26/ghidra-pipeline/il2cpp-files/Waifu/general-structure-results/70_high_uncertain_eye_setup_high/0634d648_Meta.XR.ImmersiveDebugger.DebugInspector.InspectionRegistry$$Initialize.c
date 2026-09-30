/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector.InspectionRegistry$$Initialize
ENTRY_POINT: 0634d648
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


void Meta_XR_ImmersiveDebugger_DebugInspector_InspectionRegistry__Initialize(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  float *pfVar10;
  long in_x9;
  float *pfVar11;
  long lVar12;
  undefined8 *puVar13;
  long in_x13;
  float *unaff_x19;
  float unaff_w20;
  int unaff_w25;
  long lVar14;
  long lVar15;
  long unaff_x28;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
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
  
  do {
                    /* try { // try from 0634d648 to 0644d653 has its CatchHandler @ 0634d780 */
    iVar8 = in_stack_00000010._4_4_;
    if ((int)in_x9 != 0) {
      do {
        lVar12 = *(long *)(unaff_x19 + 4) + (long)iVar8 * (long)(int)unaff_x28;
        if (-1 < *(int *)(lVar12 + 4)) {
          iVar1 = *(int *)(*(long *)(unaff_x19 + 4) + iVar8 * unaff_x28) + unaff_w25;
          uVar3 = *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4);
          if ((uVar3 & 1) != 0) {
            fVar37 = *(float *)(lVar12 + 8);
            fStack00000000000000fc = *(float *)(lVar12 + 0xc);
            fStack00000000000000f8 = *(float *)(lVar12 + 0x10);
            fVar39 = *(float *)(lVar12 + 0x14);
            fVar31 = *(float *)(lVar12 + 0x18);
            fVar34 = *(float *)(lVar12 + 0x1c);
            fVar38 = *(float *)(lVar12 + 0x20);
            lVar15 = (long)iVar1;
            uStack0000000000000100 = *(undefined4 *)(*(long *)(unaff_x19 + 0x1c) + lVar15 * 4);
            iVar1 = *(int *)(lVar12 + 4) + unaff_w25;
            uStack0000000000000104 = *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4);
                    /* try { // try from 0634d6b0 to 0644d6bb has its CatchHandler @ 0634d77c */
            puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x18) + in_stack_00000088 * 0x10);
            uStack0000000000000158 = puVar9[1];
            uStack0000000000000150 = *puVar9;
            puVar13 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + lVar15 * in_x13);
            fStack0000000000000118 = *(float *)(puVar13 + 1);
            puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + (long)iVar1 * (long)(int)in_x13);
            uStack0000000000000120 = *puVar13;
            uStack0000000000000130 = *puVar9;
            lVar14 = *(long *)(unaff_x19 + 0x2c);
                    /* try { // try from 0634d6e0 to 0644d6e3 has its CatchHandler @ 0634d794 */
            uStack0000000000000128 = 0;
            uStack0000000000000138 = 0;
            fStack000000000000011c = *(float *)(puVar9 + 1);
            lVar12 = (long)iVar1;
            pfVar10 = (float *)(*(long *)(unaff_x19 + 0x34) + (long)iVar1 * 0x10);
            pfVar11 = (float *)(lVar14 + (long)iVar1 * 0x10);
                    /* try { // try from 0634d6f8 to 0644d6ff has its CatchHandler @ 0634d7a0 */
            fStack0000000000000114 = *pfVar11;
            fStack00000000000000ac = *pfVar10;
            fVar33 = 0.0;
                    /* try { // try from 0634d710 to 0644d737 has its CatchHandler @ 0634d7a4 */
            fStack0000000000000110 = pfVar11[1];
            fStack000000000000010c = pfVar11[2];
            fStack0000000000000108 = pfVar11[3];
            fStack00000000000000a8 = pfVar10[1];
                    /* try { // try from 0634d738 to 0644d763 has its CatchHandler @ 0634d4e8 */
            fVar16 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + lVar15 * 4) * 0.5;
            fVar20 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + (long)iVar1 * 4) * 0.5;
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if ((uint)ABS(fVar16) <= (uint)unaff_w20) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar16)) {
                bVar4 = fVar16 < 1.0;
                bVar5 = fVar16 == 1.0;
                bVar6 = false;
              }
            }
                    /* try { // try from 0634d764 to 0644d767 has its CatchHandler @ 0634d790 */
                    /* try { // try from 0634d768 to 0644d76b has its CatchHandler @ 0634d78c */
            fVar23 = 1.0;
            if (bVar5 || bVar4 != bVar6) {
              fVar23 = fVar16;
            }
                    /* try { // try from 0634d76c to 0644d76f has its CatchHandler @ 0634d7a0 */
                    /* try { // try from 0634d770 to 0644d773 has its CatchHandler @ 0634d788 */
                    /* try { // try from 0634d774 to 0644d777 has its CatchHandler @ 0634d784 */
                    /* try { // try from 0634d778 to 0644d77b has its CatchHandler @ 0634d79c */
                    /* catch() { ... } // from try @ 0634d6b0 with catch @ 0634d77c
                       try { // try from 0634d77c to 0644d7bb has its CatchHandler @ 0634d4e8 */
            bVar4 = true;
            if (((uint)ABS(fVar23) <= (uint)unaff_w20) && (bVar4 = false, !NAN(fVar23))) {
              bVar4 = fVar23 < 0.0;
            }
            fVar16 = fVar33;
                    /* catch() { ... } // from try @ 0634d648 with catch @ 0634d780 */
            if (!bVar4) {
              fVar16 = fVar23;
            }
                    /* catch() { ... } // from try @ 0634d774 with catch @ 0634d784 */
            uStack00000000000000c0 = (ulong)(uint)fVar16;
                    /* catch() { ... } // from try @ 0634d770 with catch @ 0634d788 */
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if ((uint)ABS(fVar20) <= (uint)unaff_w20) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar20)) {
                bVar4 = fVar20 < 1.0;
                bVar5 = fVar20 == 1.0;
                bVar6 = false;
              }
            }
                    /* catch() { ... } // from try @ 0634d768 with catch @ 0634d78c */
            fVar16 = 1.0;
            if (bVar5 || bVar4 != bVar6) {
              fVar16 = fVar20;
            }
                    /* catch() { ... } // from try @ 0634d764 with catch @ 0634d790 */
                    /* catch() { ... } // from try @ 0634d6e0 with catch @ 0634d794 */
                    /* catch() { ... } // from try @ 0634d5d0 with catch @ 0634d798 */
            fStack00000000000000a4 = pfVar10[2];
                    /* catch() { ... } // from try @ 0634d5f0 with catch @ 0634d79c
                       catch() { ... } // from try @ 0634d778 with catch @ 0634d79c */
            fStack00000000000000a0 = pfVar10[3];
                    /* catch() { ... } // from try @ 0634d6f8 with catch @ 0634d7a0
                       catch() { ... } // from try @ 0634d76c with catch @ 0634d7a0 */
                    /* catch() { ... } // from try @ 0634d710 with catch @ 0634d7a4 */
            bVar4 = true;
            if (((uint)ABS(fVar16) <= (uint)unaff_w20) && (bVar4 = false, !NAN(fVar16))) {
              bVar4 = fVar16 < 0.0;
            }
            fVar20 = fVar33;
            if (!bVar4) {
              fVar20 = fVar16;
            }
            uStack00000000000000b0 = (ulong)(uint)fVar20;
            uStack00000000000000b8 = 0;
            uStack00000000000000c8 = 0;
                    /* try { // try from 0634d7bc to 0644d7d7 has its CatchHandler @ 0634d820 */
            fVar20 = (float)FUN_06358bac(uStack0000000000000100,&stack0x00000150,0);
            uVar18 = uStack0000000000000098;
            fVar16 = fStack0000000000000094;
            uVar17 = uStack0000000000000090;
            if (ABS(fVar20) <= fStack0000000000000084) {
              uVar17 = 0;
              uVar18 = 0;
              fVar16 = fVar33;
            }
            if ((uStack000000000000009c >> 3 & 1) == 0) {
              fVar37 = fStack0000000000000074 * fVar37;
              fStack00000000000000fc = fStack0000000000000070 * fStack00000000000000fc;
              fStack00000000000000f8 = fStack000000000000006c * fStack00000000000000f8;
                    /* try { // try from 0634d810 to 0644d81f has its CatchHandler @ 0634d820 */
              fVar39 = fStack0000000000000068 * fVar39;
              fVar31 = fStack0000000000000064 * fVar31;
                    /* catch() { ... } // from try @ 0634d7bc with catch @ 0634d820
                       catch() { ... } // from try @ 0634d810 with catch @ 0634d820 */
                    /* try { // try from 0634d824 to 0644d827 has its CatchHandler @ 0634d830 */
              fVar34 = fStack0000000000000060 * fVar34;
                    /* try { // try from 0634d828 to 0644d833 has its CatchHandler @ 0634d4e8 */
              fVar38 = in_stack_00000058._4_4_ * fVar38;
                    /* catch() { ... } // from try @ 0634d824 with catch @ 0634d830 */
            }
            else {
              in_x13 = 0xc;
                    /* try { // try from 0634d83c to 0644d947 has its CatchHandler @ 0634d83c
                       catch() { ... } // from try @ 0634d83c with catch @ 0634d83c
                       catch() { ... } // from try @ 0634dad0 with catch @ 0634d83c
                       catch() { ... } // from try @ 0634db20 with catch @ 0634d83c
                       catch() { ... } // from try @ 0634db70 with catch @ 0634d83c
                       catch() { ... } // from try @ 0634dbec with catch @ 0634d83c */
              pfVar11 = (float *)(*(long *)(unaff_x19 + 0x28) + lVar15 * 0xc);
              pfVar10 = (float *)(*(long *)(unaff_x19 + 0x28) + lVar12 * 0xc);
              fVar37 = *pfVar11 - *pfVar10;
              fVar34 = pfVar11[1] - pfVar10[1];
              fVar31 = pfVar11[2] - pfVar10[2];
              fVar38 = fVar31 * fVar31 + fVar37 * fVar37 + fVar34 * fVar34;
              if (fVar38 < DAT_012ed990) goto LAB_0634e3cc;
              pfVar10 = (float *)(lVar14 + lVar15 * 0x10);
              fVar33 = *pfVar10;
              fVar26 = pfVar10[1];
              fVar23 = pfVar10[2];
              fVar27 = pfVar10[3];
              if (DAT_086d90cb == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086d90cb = '\x01';
              }
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar38 = 1.0 / SQRT(fVar38);
              fVar30 = 1.0 / (fStack0000000000000108 * fStack0000000000000108 +
                             fStack000000000000010c * fStack000000000000010c +
                             fStack0000000000000114 * fStack0000000000000114 +
                             fStack0000000000000110 * fStack0000000000000110);
              fVar37 = fVar37 * fVar38;
              fVar34 = fVar34 * fVar38;
              fVar31 = fVar31 * fVar38;
              fVar38 = fStack0000000000000108 * fVar30;
              fVar32 = fVar30 * -fStack0000000000000114;
              fVar21 = fVar30 * -fStack0000000000000110;
              fVar30 = fVar30 * -fStack000000000000010c;
              fVar29 = fVar30 * fVar37 - fVar32 * fVar31;
                    /* try { // try from 0634d948 to 0644d96f has its CatchHandler @ 0634db38 */
              fVar24 = fVar32 * fVar34 - fVar21 * fVar37;
              fVar25 = fVar21 * fVar31 - fVar30 * fVar34;
                    /* try { // try from 0634d978 to 0644d97f has its CatchHandler @ 0634db34 */
              fVar25 = fVar25 + fVar25;
              fVar29 = fVar29 + fVar29;
              fVar24 = fVar24 + fVar24;
              fStack00000000000000fc =
                   fVar34 + fVar38 * fVar29 + (fVar30 * fVar25 - fVar32 * fVar24);
              fStack00000000000000f8 =
                   fVar31 + fVar38 * fVar24 + (fVar32 * fVar29 - fVar21 * fVar25);
              fVar39 = (fVar38 * fVar33 + fVar21 * fVar23 + fVar32 * fVar27) - fVar30 * fVar26;
              fVar31 = (fVar38 * fVar26 + fVar30 * fVar33 + fVar21 * fVar27) - fVar32 * fVar23;
              fVar34 = (fVar38 * fVar23 + fVar32 * fVar26 + fVar30 * fVar27) - fVar21 * fVar33;
              fVar37 = fVar37 + fVar38 * fVar25 + (fVar21 * fVar24 - fVar30 * fVar29);
              fVar38 = (fVar38 * fVar27 - (fVar32 * fVar33 + fVar21 * fVar26)) - fVar30 * fVar23;
            }
            fStack0000000000000080 = (float)((ulong)uStack0000000000000130 >> 0x20);
            fVar33 = (float)((ulong)uStack0000000000000120 >> 0x20);
            if (in_stack_00000160._4_4_ == 1) {
              uVar2 = uStack0000000000000104 & 6;
              fVar23 = fStack0000000000000108;
              fVar26 = fStack000000000000010c;
              fVar27 = fStack0000000000000110;
              fVar30 = fStack0000000000000114;
              if (uVar2 == 0) {
                fVar23 = fStack00000000000000a0;
                fVar26 = fStack00000000000000a4;
                fVar27 = fStack00000000000000a8;
                fVar30 = fStack00000000000000ac;
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
              fVar32 = *(float *)(*(long *)(unaff_x19 + 0x3c) + (long)iVar8 * 4);
              if (cVar7 == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086d90cb = '\x01';
              }
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fStack00000000000000a4 =
                   (float)FUN_06358bac(uStack0000000000000100,in_stack_00000050,0);
              if (DAT_086de4d6 == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086de4d6 = '\x01';
              }
              fStack00000000000000a8 = fVar38;
              fStack00000000000000ac = fVar34;
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar40 = (float)uStack0000000000000120 - (float)uStack0000000000000130;
              fVar41 = (float)((ulong)uStack0000000000000120 >> 0x20) -
                       (float)((ulong)uStack0000000000000130 >> 0x20);
              fVar42 = fStack0000000000000118 - fStack000000000000011c;
              fVar24 = fStack00000000000000f8 * fVar27 - fStack00000000000000fc * fVar26;
              fVar29 = fVar37 * fVar26 - fStack00000000000000f8 * fVar30;
              fVar21 = fStack00000000000000fc * fVar30 - fVar37 * fVar27;
              fVar24 = fVar24 + fVar24;
              fVar29 = fVar29 + fVar29;
              fVar21 = fVar21 + fVar21;
              fVar25 = SQRT(fVar42 * fVar42 + fVar40 * fVar40 + fVar41 * fVar41);
              fVar34 = fVar37 + fVar23 * fVar24 + (fVar27 * fVar21 - fVar26 * fVar29);
              fVar38 = fStack00000000000000fc + fVar23 * fVar29 +
                       (fVar26 * fVar24 - fVar30 * fVar21);
              fVar21 = fStack00000000000000f8 + fVar23 * fVar21 +
                       (fVar30 * fVar29 - fVar27 * fVar24);
              fVar29 = 1.0 / fVar25;
              fVar25 = fVar25 + (fVar32 - fVar25) * 0.5;
              fVar32 = fVar40 * fVar29 * fVar25;
              fVar24 = fVar41 * fVar29 * fVar25;
              uVar28 = CONCAT44(fVar24,fVar32);
              fVar25 = fVar42 * fVar29 * fVar25;
              if ((uVar3 & 6) == 0) {
                fVar33 = fStack00000000000000a4 * DAT_012edabc;
                fStack00000000000000a0 = fVar34;
                dVar19 = acos((double)(fVar21 * fVar25 + fVar34 * fVar32 + fVar38 * fVar24));
                in_stack_00000140 = uVar28;
                in_stack_00000148 = fVar25;
                if (fVar33 < (float)dVar19) {
                  FUN_0638db74(uVar28,fVar24,fVar25,fStack00000000000000a0,fVar38,fVar21,fVar33,
                               &stack0x00000140,0);
                }
                fVar34 = in_stack_00000148;
                uVar28 = in_stack_00000140;
                fVar33 = fStack00000000000000a4 / 90.0;
                bVar4 = false;
                bVar5 = false;
                bVar6 = false;
                if ((uint)ABS(fVar33) <= (uint)unaff_w20) {
                  bVar4 = false;
                  bVar5 = false;
                  bVar6 = true;
                  if (!NAN(fVar33)) {
                    bVar4 = fVar33 < 1.0;
                    bVar5 = fVar33 == 1.0;
                    bVar6 = false;
                  }
                }
                fVar29 = 1.0;
                if (bVar5 || bVar4 != bVar6) {
                  fVar29 = fVar33;
                }
                if (DAT_086de61e == '\0') {
                  FUN_0335b6c8(&DAT_083ce8b0,1);
                  DataMemoryBarrier(2,3);
                  DAT_086de61e = '\x01';
                }
                if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                fVar40 = fStack000000000000011c;
                fVar33 = fStack0000000000000118;
                fVar41 = (float)uVar28 * 0.5;
                fVar42 = (float)(uVar28 >> 0x20) * 0.5;
                fStack00000000000000a4 = fVar34 * 0.5;
                fVar34 = (float)uStack0000000000000130 + fVar32 * 0.5;
                fVar32 = (float)((ulong)uStack0000000000000130 >> 0x20) + fVar24 * 0.5;
                fVar24 = fStack000000000000011c + fVar25 * 0.5;
                fVar25 = (float)uStack00000000000000c0;
                fVar35 = ((fVar34 + fVar41) - (float)uStack0000000000000120) * fVar25;
                fVar36 = ((fVar32 + fVar42) - (float)((ulong)uStack0000000000000120 >> 0x20)) *
                         fVar25;
                fVar25 = fVar25 * ((fVar24 + fStack00000000000000a4) - fStack0000000000000118);
                dVar19 = 0.0;
                if (0.0 <= fVar29 && (uint)ABS(fVar29) <= (uint)unaff_w20) {
                  dVar19 = (double)fVar29;
                }
                dVar19 = (double)FUN_033a3c74(dVar19,0x3fe0000000000000);
                fVar29 = DAT_012edea4;
                fStack0000000000000118 = fVar33 + fVar25;
                puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + lVar15 * 0xc);
                fVar22 = (float)uStack0000000000000120 + fVar35;
                fVar33 = (float)((ulong)uStack0000000000000120 >> 0x20) + fVar36;
                uStack0000000000000120 = CONCAT44(fVar33,fVar22);
                *puVar9 = uStack0000000000000120;
                *(float *)(puVar9 + 1) = fStack0000000000000118;
                puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + lVar15 * 0xc);
                uStack0000000000000128 = 0;
                fVar29 = (float)dVar19 * fVar29 + -0.5 + 1.0;
                *puVar9 = CONCAT44(fVar36 * fVar29 + (float)((ulong)*puVar9 >> 0x20),
                                   fVar35 * fVar29 + (float)*puVar9);
                *(float *)(puVar9 + 1) = fVar25 * fVar29 + *(float *)(puVar9 + 1);
                if (uVar2 == 0) {
                  fStack0000000000000080 = (float)((ulong)uStack0000000000000130 >> 0x20);
                  puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + lVar12 * 0xc);
                  fVar25 = (float)uStack00000000000000b0;
                  fVar34 = ((fVar34 - fVar41) - (float)uStack0000000000000130) * fVar25;
                  fVar32 = ((fVar32 - fVar42) - fStack0000000000000080) * fVar25;
                  fVar25 = fVar25 * ((fVar24 - fStack00000000000000a4) - fVar40);
                  fStack0000000000000080 = fStack0000000000000080 + fVar32;
                  uStack0000000000000130 =
                       CONCAT44(fStack0000000000000080,(float)uStack0000000000000130 + fVar34);
                  fVar40 = fVar40 + fVar25;
                  *puVar9 = uStack0000000000000130;
                  *(float *)(puVar9 + 1) = fVar40;
                  puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + lVar12 * 0xc);
                  *puVar9 = CONCAT44(fVar32 * fVar29 + (float)((ulong)*puVar9 >> 0x20),
                                     fVar34 * fVar29 + (float)*puVar9);
                  *(float *)(puVar9 + 1) = fVar25 * fVar29 + *(float *)(puVar9 + 1);
                  uStack0000000000000138 = 0;
                }
                uVar28 = (ulong)(uint)(fVar22 - (float)uStack0000000000000130);
                fStack000000000000011c = fVar40;
              }
              fVar34 = (float)uVar28;
              fVar32 = (fVar39 * fVar23 +
                       fStack00000000000000ac * fVar27 + fStack00000000000000a8 * fVar30) -
                       fVar31 * fVar26;
              fVar24 = (fVar31 * fVar23 + fVar39 * fVar26 + fStack00000000000000a8 * fVar27) -
                       fStack00000000000000ac * fVar30;
              fVar25 = (fStack00000000000000ac * fVar23 +
                       fStack00000000000000a8 * fVar26 + fVar31 * fVar30) - fVar39 * fVar27;
              fVar39 = (fStack00000000000000a8 * fVar23 - (fVar31 * fVar27 + fVar39 * fVar30)) -
                       fStack00000000000000ac * fVar26;
              fVar31 = (float)FUN_0638dfac(0);
              pfVar10 = (float *)(*(long *)(unaff_x19 + 0x34) + lVar15 * 0x10);
              *pfVar10 = (fVar32 * fVar34 + fVar39 * fVar31 + fVar25 * fVar38) - fVar24 * fVar21;
              pfVar10[1] = (fVar24 * fVar34 + fVar39 * fVar38 + fVar32 * fVar21) - fVar25 * fVar31;
              pfVar10[2] = (fVar25 * fVar34 + fVar39 * fVar21 + fVar24 * fVar31) - fVar32 * fVar38;
              pfVar10[3] = (fVar39 * fVar34 - (fVar32 * fVar31 + fVar24 * fVar38)) - fVar25 * fVar21
              ;
            }
            in_x13 = 0xc;
            if (in_stack_00000168 == 1) {
              fVar31 = (float)FUN_06358bac(uStack0000000000000100,in_stack_00000048,0);
              fVar34 = *unaff_x19;
              if (DAT_086de61e == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086de61e = '\x01';
              }
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar29 = (float)uStack0000000000000120 - (float)uStack0000000000000130;
              fVar41 = fStack0000000000000118 - fStack000000000000011c;
              fVar26 = fStack0000000000000114 * fStack00000000000000fc -
                       fStack0000000000000110 * fVar37;
              fVar38 = fStack0000000000000110 * fStack00000000000000f8 -
                       fStack000000000000010c * fStack00000000000000fc;
              fVar23 = fStack000000000000010c * fVar37 -
                       fStack0000000000000114 * fStack00000000000000f8;
              fVar38 = fVar38 + fVar38;
              fVar23 = fVar23 + fVar23;
              fVar26 = fVar26 + fVar26;
              fVar30 = fStack0000000000000108 * fVar23;
              fVar32 = fStack0000000000000108 * fVar26;
              fVar24 = fStack0000000000000114 * fVar23;
              fVar35 = fStack000000000000010c * fVar38;
              fVar39 = fStack0000000000000110 * fVar38;
              fVar27 = fStack0000000000000114 * fVar26;
              fVar40 = fVar33 - fStack0000000000000080;
              fVar25 = fVar37 + fStack0000000000000108 * fVar38 +
                       (fStack0000000000000110 * fVar26 - fStack000000000000010c * fVar23);
              FUN_033a3c74((double)(1.0 - fVar31),(double)fVar34);
              fVar31 = fVar40;
              fVar34 = fVar41;
              fVar37 = fVar25;
              fVar38 = (float)FUN_0638dfac(fVar29,0);
              fVar23 = fVar40 * fVar38 - fVar29 * fVar31;
              fVar26 = fVar41 * fVar31 - fVar40 * fVar34;
              fVar21 = fVar29 * fVar34 - fVar41 * fVar38;
              fVar26 = fVar26 + fVar26;
              fVar21 = fVar21 + fVar21;
              fVar23 = fVar23 + fVar23;
              fStack0000000000000114 =
                   fVar29 + fVar37 * fVar26 + (fVar31 * fVar23 - fVar34 * fVar21);
              fVar42 = fVar40 + fVar37 * fVar21 + (fVar34 * fVar26 - fVar38 * fVar23);
              fStack0000000000000110 =
                   fVar41 + fVar37 * fVar23 + (fVar38 * fVar21 - fVar31 * fVar26);
              fVar16 = (float)FUN_0635881c(fVar25,fStack00000000000000fc + fVar30 +
                                                  (fVar35 - fVar27),
                                           fStack00000000000000f8 + fVar32 + (fVar24 - fVar39),
                                           uVar18,fVar16,uVar17,ABS(fVar20),0x3e800000);
              fVar37 = (float)uStack0000000000000130;
              fVar20 = fVar37 + fVar29 * fVar16;
              fVar31 = fStack0000000000000080 + fVar40 * fVar16;
              fVar34 = fStack000000000000011c + fVar41 * fVar16;
              if ((uVar3 & 6) == 0) {
                fVar38 = 1.0 - fVar16;
                fVar39 = (float)uStack00000000000000c0;
                fVar23 = fVar39 * ((fVar20 + fVar38 * fStack0000000000000114) -
                                  (float)uStack0000000000000120);
                fVar26 = fVar39 * ((fVar31 + fVar38 * fVar42) - fVar33);
                fVar39 = fVar39 * ((fVar34 + fVar38 * fStack0000000000000110) -
                                  fStack0000000000000118);
                pfVar10 = (float *)(*(long *)(unaff_x19 + 0x30) + lVar15 * 0xc);
                *pfVar10 = (float)uStack0000000000000120 + fVar23;
                pfVar10[1] = fVar33 + fVar26;
                pfVar10[2] = fStack0000000000000118 + fVar39;
                fVar38 = 1.0 - in_stack_00000188._4_4_;
                pfVar10 = (float *)(*(long *)(unaff_x19 + 0x38) + lVar15 * 0xc);
                *pfVar10 = fVar38 * fVar23 + *pfVar10;
                pfVar10[1] = fVar38 * fVar26 + pfVar10[1];
                pfVar10[2] = fVar38 * fVar39 + pfVar10[2];
              }
              in_x13 = 0xc;
              if ((uStack0000000000000104 & 6) == 0) {
                fVar38 = (float)uStack00000000000000b0;
                fVar20 = fVar38 * ((fVar20 - fVar16 * fStack0000000000000114) - fVar37);
                fVar31 = fVar38 * ((fVar31 - fVar16 * fVar42) - fStack0000000000000080);
                fVar38 = fVar38 * ((fVar34 - fVar16 * fStack0000000000000110) -
                                  fStack000000000000011c);
                pfVar10 = (float *)(*(long *)(unaff_x19 + 0x30) + lVar12 * 0xc);
                *pfVar10 = fVar37 + fVar20;
                pfVar10[1] = fStack0000000000000080 + fVar31;
                pfVar10[2] = fStack000000000000011c + fVar38;
                fVar16 = 1.0 - in_stack_00000188._4_4_;
                pfVar10 = (float *)(*(long *)(unaff_x19 + 0x38) + lVar12 * 0xc);
                *pfVar10 = fVar16 * fVar20 + *pfVar10;
                pfVar10[1] = fVar16 * fVar31 + pfVar10[1];
                pfVar10[2] = fVar16 * fVar38 + pfVar10[2];
              }
            }
          }
        }
LAB_0634e3cc:
        in_x9 = in_x9 + -1;
        iVar8 = iVar8 + 1;
      } while (in_x9 != 0);
    }
    if ((in_stack_00000038._4_4_ & 1) != 0) {
      return;
    }
    in_stack_00000038._4_4_ = 1;
    in_x9 = in_stack_00000018;
  } while( true );
}


