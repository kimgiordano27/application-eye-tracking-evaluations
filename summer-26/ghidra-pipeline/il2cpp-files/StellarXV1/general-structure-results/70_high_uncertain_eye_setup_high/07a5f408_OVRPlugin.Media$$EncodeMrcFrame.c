/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 07a5f408
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__EncodeMrcFrame(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 unaff_w23;
  long unaff_x24;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float unaff_s8;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 in_stack_000000a0 [16];
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined1 in_stack_000000e0 [16];
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
                    /* try { // try from 07a5f408 to 07b5f40b has its CatchHandler @ 07a5e8d0 */
                    /* try { // try from 07a5f40c to 07b5f40f has its CatchHandler @ 07a5f448 */
  FUN_04077588(*(undefined8 *)(param_1 + 0xbb0));
                    /* try { // try from 07a5f410 to 07b5f413 has its CatchHandler @ 07a5f440 */
                    /* try { // try from 07a5f414 to 07b5f417 has its CatchHandler @ 07a5f44c */
  *(undefined1 *)(unaff_x24 + 0x508) = 1;
                    /* try { // try from 07a5f418 to 07b5f41b has its CatchHandler @ 07a5f42c */
  uVar2 = *(uint *)(unaff_x20 + 0xcc);
                    /* try { // try from 07a5f41c to 07b5f41f has its CatchHandler @ 07a5f424 */
  *(undefined4 *)(unaff_x20 + 0x10) = unaff_w23;
                    /* try { // try from 07a5f420 to 07b5f423 has its CatchHandler @ 07a5f44c */
                    /* catch() { ... } // from try @ 07a5f41c with catch @ 07a5f424
                       try { // try from 07a5f424 to 07b5f473 has its CatchHandler @ 07a5e8d0 */
  if (0 < (int)uVar2) {
                    /* catch() { ... } // from try @ 07a5f024 with catch @ 07a5f428 */
    lVar7 = *(long *)(unaff_x20 + 0x38);
                    /* catch() { ... } // from try @ 07a5f418 with catch @ 07a5f42c */
    if (lVar7 == 0) goto LAB_07a5f688;
                    /* catch() { ... } // from try @ 07a5f010 with catch @ 07a5f430 */
    uVar9 = 0;
                    /* catch() { ... } // from try @ 07a5f038 with catch @ 07a5f434 */
    do {
                    /* catch() { ... } // from try @ 07a5f410 with catch @ 07a5f440 */
                    /* catch() { ... } // from try @ 07a5f0b8 with catch @ 07a5f444 */
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
LAB_07a5f684:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
                    /* catch() { ... } // from try @ 07a5f40c with catch @ 07a5f448 */
      *(undefined8 *)(lVar7 + 0x20 + uVar9 * 8) = 0xffffffffffffffff;
                    /* catch() { ... } // from try @ 07a5f414 with catch @ 07a5f44c
                       catch() { ... } // from try @ 07a5f420 with catch @ 07a5f44c */
      lVar10 = *(long *)(unaff_x20 + 0x40);
                    /* catch() { ... } // from try @ 07a5f404 with catch @ 07a5f450 */
      if (lVar10 == 0) goto LAB_07a5f688;
                    /* catch() { ... } // from try @ 07a5f198 with catch @ 07a5f454 */
                    /* catch() { ... } // from try @ 07a5f178 with catch @ 07a5f458 */
      if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_07a5f684;
      *(undefined8 *)(lVar10 + uVar9 * 8 + 0x20) = 0xffffffffffffffff;
      lVar10 = *(long *)(unaff_x20 + 0x48);
      if (lVar10 == 0) goto LAB_07a5f688;
                    /* try { // try from 07a5f474 to 07b5f477 has its CatchHandler @ 07a5f498 */
                    /* try { // try from 07a5f478 to 07b5f49b has its CatchHandler @ 07a5e8d0 */
      if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_07a5f684;
      lVar1 = uVar9 * 8;
      uVar9 = uVar9 + 1;
      *(undefined8 *)(lVar10 + lVar1 + 0x20) = 0xffffffffffffffff;
    } while (uVar2 != uVar9);
  }
  puVar6 = PTR_DAT_09285bb0;
                    /* catch() { ... } // from try @ 07a5f474 with catch @ 07a5f498 */
                    /* try { // try from 07a5f49c to 07b5f4a3 has its CatchHandler @ 07a5f4ec */
  if (DAT_098854f0 == '\0') {
                    /* try { // try from 07a5f4a4 to 07b5f4cb has its CatchHandler @ 07a5e8d0 */
                    /* catch() { ... } // from try @ 07a5f3fc with catch @ 07a5f4a8 */
                    /* catch() { ... } // from try @ 07a5efb4 with catch @ 07a5f4ac */
    FUN_04077588(PTR_DAT_09285d60);
                    /* catch() { ... } // from try @ 07a5ef98 with catch @ 07a5f4b0 */
    DAT_098854f0 = '\x01';
  }
                    /* try { // try from 07a5f4cc to 07b5f4cf has its CatchHandler @ 07a5f4d8 */
                    /* catch() { ... } // from try @ 07a5f4cc with catch @ 07a5f4d8 */
                    /* try { // try from 07a5f4dc to 07b5f4e3 has its CatchHandler @ 07a5f4ec */
                    /* try { // try from 07a5f4e4 to 07b5f4ef has its CatchHandler @ 07a5e8d0 */
  FUN_089b6d9c(&stack0x00000100,
               *(float *)(*(long *)(*(long *)PTR_DAT_09285d60 + 0xb8) + 0xc) * unaff_s8,
               *(float *)(*(long *)(*(long *)PTR_DAT_09285d60 + 0xb8) + 0x10) * unaff_s8,0);
                    /* catch() { ... } // from try @ 07a5f49c with catch @ 07a5f4ec
                       catch() { ... } // from try @ 07a5f4dc with catch @ 07a5f4ec */
  lVar7 = *(long *)puVar6;
  *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000108;
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000100;
  *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000118;
  *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000110;
  *(undefined8 *)(unaff_x20 + 0x78) = in_stack_00000128;
  *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000120;
  *(undefined8 *)(unaff_x20 + 0x88) = in_stack_00000138;
  *(undefined8 *)(unaff_x20 + 0x80) = in_stack_00000130;
  uVar3 = *unaff_x22;
  uVar11 = *(undefined4 *)(unaff_x22 + 3);
  uVar8 = unaff_x22[2];
  *(undefined8 *)(unaff_x20 + 0x98) = unaff_x22[1];
  *(undefined8 *)(unaff_x20 + 0x90) = uVar3;
  *(undefined4 *)(unaff_x20 + 0xa8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0xb4) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xac) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xa4);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x20 + 0x9c);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar9 = FUN_089ca704();
  if ((uVar9 & 1) != 0) {
    in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x58);
    in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x50);
    in_stack_00000118 = *(undefined8 *)(unaff_x20 + 0x68);
    in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0x60);
    in_stack_00000128 = *(undefined8 *)(unaff_x20 + 0x78);
    in_stack_00000120 = *(undefined8 *)(unaff_x20 + 0x70);
    in_stack_00000138 = SUB168(*(undefined1 (*) [16])(unaff_x20 + 0x80),8);
    in_stack_00000130 = SUB168(*(undefined1 (*) [16])(unaff_x20 + 0x80),0);
    if (unaff_x21 == 0) {
LAB_07a5f688:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_089de258();
    FUN_089b6d9c(&stack0x000000c0,0);
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000058 = in_stack_00000118;
    in_stack_00000050 = in_stack_00000110;
    in_stack_00000068 = in_stack_00000128;
    in_stack_00000060 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000138;
    in_stack_00000070 = in_stack_00000130;
    FUN_089b6a44(&stack0x00000080,&stack0x00000040);
    auVar21 = ZEXT416(*(uint *)(unaff_x20 + 0x98));
    *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000088;
    *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000080;
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000098;
    *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000090;
    fVar15 = *(float *)(unaff_x20 + 0x94);
    *(long *)(unaff_x20 + 0x78) = in_stack_000000a0._8_8_;
    *(long *)(unaff_x20 + 0x70) = in_stack_000000a0._0_8_;
    *(undefined8 *)(unaff_x20 + 0x88) = in_stack_000000b8;
    *(undefined8 *)(unaff_x20 + 0x80) = in_stack_000000b0;
    auVar19 = in_stack_000000a0;
    uVar11 = FUN_089dd968(*(undefined4 *)(unaff_x20 + 0x90));
    *(undefined4 *)(unaff_x20 + 0xac) = uVar11;
    *(float *)(unaff_x20 + 0xb0) = fVar15;
    *(int *)(unaff_x20 + 0xb4) = auVar21._0_4_;
    fVar12 = (float)FUN_089dbd64();
    fVar27 = (float)*(undefined8 *)(unaff_x20 + 0xa4);
    fVar28 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0xa4) >> 0x20);
    uVar3 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x20 + 0x9c);
    fVar25 = (float)uVar3;
    fVar26 = (float)((ulong)uVar3 >> 0x20);
    fVar20 = auVar19._0_4_;
    fVar16 = auVar21._0_4_;
    auVar17._4_4_ = fVar28;
    auVar17._0_4_ = fVar28;
    auVar17._8_4_ = fVar28;
    auVar17._12_4_ = fVar28;
    auVar18._12_4_ = fVar28;
    auVar18._0_12_ = *(undefined1 (*) [12])(unaff_x20 + 0x9c);
    auVar18 = NEON_ext(auVar17,auVar18,4,1);
    fVar13 = fVar12 * fVar26;
    fVar14 = fVar15 * fVar26;
    fVar22 = fVar16 * fVar26;
    fVar23 = fVar12 * fVar27;
    fVar24 = fVar16 * fVar27;
    auVar19._4_4_ = fVar13;
    auVar19._0_4_ = fVar16 * fVar25;
    auVar19._8_4_ = fVar15 * fVar27;
    auVar19._12_4_ = fVar14;
    auVar21._4_4_ = fVar13;
    auVar21._0_4_ = fVar16 * fVar25;
    auVar21._8_4_ = fVar15 * fVar27;
    auVar21._12_4_ = fVar14;
    auVar19 = NEON_ext(auVar19,auVar21,4,1);
    auVar4._4_4_ = fVar22;
    auVar4._0_4_ = fVar15 * fVar25;
    auVar4._8_4_ = fVar23;
    auVar4._12_4_ = fVar24;
    auVar5._4_4_ = fVar22;
    auVar5._0_4_ = fVar15 * fVar25;
    auVar5._8_4_ = fVar23;
    auVar5._12_4_ = fVar24;
    auVar21 = NEON_ext(auVar4,auVar5,0xc,1);
    *(ulong *)(unaff_x20 + 0xc0) =
         CONCAT44(((fVar28 * fVar20 - fVar12 * auVar18._12_4_) - fVar14) - fVar24,
                  (fVar27 * fVar20 + fVar16 * auVar18._8_4_ + fVar13) - auVar21._4_4_);
    *(ulong *)(unaff_x20 + 0xb8) =
         CONCAT44((fVar26 * fVar20 + fVar15 * auVar18._4_4_ + auVar19._12_4_) - fVar23,
                  (fVar25 * fVar20 + fVar12 * auVar18._0_4_ + auVar19._4_4_) - fVar22);
  }
  FUN_0769da98();
  return;
}


