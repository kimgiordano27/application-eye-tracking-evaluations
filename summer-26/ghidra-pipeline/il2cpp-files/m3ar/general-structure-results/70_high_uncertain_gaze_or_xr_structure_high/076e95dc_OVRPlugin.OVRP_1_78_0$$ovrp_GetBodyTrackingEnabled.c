/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 076e95dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int iVar6;
  ulong unaff_x24;
  long *unaff_x25;
  float *unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  long unaff_x29;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  float fVar25;
  undefined1 auVar24 [16];
  undefined8 uVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000020;
  
  fVar18 = param_4._12_4_;
  fVar25 = param_4._8_4_;
  fVar16 = param_4._4_4_;
  fVar23 = param_4._0_4_;
  fVar21 = param_3._12_4_;
  fVar19 = param_3._8_4_;
  fVar17 = param_3._4_4_;
  fVar15 = param_3._0_4_;
  fVar13 = param_2._12_4_;
  fVar12 = param_2._8_4_;
  fVar11 = param_2._4_4_;
  fVar10 = param_2._0_4_;
  fVar8 = param_1._12_4_;
  fVar14 = param_1._8_4_;
  fVar9 = param_1._4_4_;
  fVar7 = param_1._0_4_;
  while( true ) {
    auVar29._4_4_ = fVar17;
    auVar29._0_4_ = fVar15;
    auVar29._8_4_ = fVar19;
    auVar29._12_4_ = fVar21;
                    /* catch() { ... } // from try @ 076e9520 with catch @ 076e95dc
                       catch() { ... } // from try @ 076e959c with catch @ 076e95dc */
    auVar29 = NEON_ext(param_6,auVar29,4,1);
    fVar11 = fVar11 * fVar16;
    fVar13 = fVar13 * fVar18;
                    /* try { // try from 076e95e4 to 077e95e7 has its CatchHandler @ 076e963c */
                    /* try { // try from 076e95e8 to 077e9603 has its CatchHandler @ 076e93d8 */
    fVar16 = param_5._0_4_ * fVar15;
    fVar18 = param_5._4_4_ * fVar17;
    fVar20 = param_5._8_4_ * fVar19;
    fVar22 = param_5._12_4_ * fVar19;
    auVar24._4_4_ = fVar11;
    auVar24._0_4_ = fVar10 * fVar23;
    auVar24._8_4_ = fVar12 * fVar25;
    auVar24._12_4_ = fVar13;
    auVar27._4_4_ = fVar11;
    auVar27._0_4_ = fVar10 * fVar23;
    auVar27._8_4_ = fVar12 * fVar25;
    auVar27._12_4_ = fVar13;
    auVar27 = NEON_ext(auVar24,auVar27,4,1);
    auVar1._4_4_ = fVar18;
    auVar1._0_4_ = fVar16;
    auVar1._8_4_ = fVar20;
    auVar1._12_4_ = fVar22;
    auVar2._4_4_ = fVar18;
    auVar2._0_4_ = fVar16;
    auVar2._8_4_ = fVar20;
    auVar2._12_4_ = fVar22;
                    /* try { // try from 076e9604 to 077e9607 has its CatchHandler @ 076e9620 */
    auVar24 = NEON_ext(auVar1,auVar2,0xc,1);
                    /* try { // try from 076e9608 to 077e9633 has its CatchHandler @ 076e93d8 */
    iVar6 = (int)unaff_x24;
                    /* catch() { ... } // from try @ 076e9604 with catch @ 076e9620 */
    unaff_x24 = unaff_x24 + 1;
                    /* try { // try from 076e9634 to 077e963b has its CatchHandler @ 076e963c */
    unaff_x26[2] = unaff_s11 * unaff_s13;
                    /* catch() { ... } // from try @ 076e95e4 with catch @ 076e963c
                       catch() { ... } // from try @ 076e9634 with catch @ 076e963c */
    *unaff_x26 = unaff_s10 * unaff_s13;
    unaff_x26[1] = unaff_s9 * unaff_s13;
    *(ulong *)(unaff_x26 + 5) =
         CONCAT44(((fVar21 * fStack0000000000000020 - fVar8 * auVar29._12_4_) - fVar13) - fVar22,
                  (fVar19 * fStack0000000000000020 + fVar14 * auVar29._8_4_ + fVar11) -
                  auVar24._4_4_);
    *(ulong *)(unaff_x26 + 3) =
         CONCAT44((fVar17 * fStack0000000000000020 + fVar9 * auVar29._4_4_ + auVar27._12_4_) -
                  fVar20,(fVar15 * fStack0000000000000020 + fVar7 * auVar29._0_4_ + auVar27._4_4_) -
                         fVar18);
    unaff_x26[7] = unaff_s12 * (float)iVar6;
    unaff_x26 = unaff_x26 + 8;
    if (unaff_x20 == unaff_x24) {
      return;
    }
    if (*(char *)(unaff_x27 + 0xe16) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x27 + 0xe16) = unaff_w28;
    }
    lVar4 = *(long *)(*unaff_x22 + 0xb8);
    fVar9 = *(float *)(lVar4 + 0x18);
    fVar14 = *(float *)(lVar4 + 0x1c);
    auVar24 = ZEXT416(*(uint *)(lVar4 + 0x20));
    fVar7 = (float)FUN_08575c64((float)unaff_w23 - unaff_s8,0);
    _fStack0000000000000020 = auVar24._0_8_;
    if (*(char *)(unaff_x29 + 0xc08) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x29 + 0xc08) = unaff_w28;
    }
    auVar24 = ZEXT416(0);
    unaff_s9 = fVar9;
    unaff_s11 = fVar14;
    unaff_s10 = (float)FUN_08575f94(fVar7,0);
    uVar28 = auVar24._8_8_;
    lVar4 = *unaff_x25;
    unaff_s13 = *(float *)(unaff_x19 + 0x94);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      uVar28 = auVar24._8_8_;
      lVar4 = *unaff_x25;
    }
    if (unaff_x21 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    unaff_w23 = unaff_w23 + -1;
    pfVar5 = *(float **)(lVar4 + 0xb8);
    fVar19 = (float)*(undefined8 *)(pfVar5 + 2);
    fVar21 = (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20);
    fVar23 = *pfVar5;
    fVar16 = pfVar5[1];
    fVar25 = pfVar5[2];
    fVar15 = (float)*(undefined8 *)pfVar5;
    fVar17 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
    auVar3._4_8_ = uVar28;
    auVar3._0_4_ = fVar14;
    auVar26._0_8_ = auVar3._0_8_ << 0x20;
    auVar26._8_4_ = fVar7;
    auVar26._12_4_ = fVar14;
    param_6._4_4_ = fVar21;
    param_6._0_4_ = fVar21;
    param_6._8_4_ = fVar21;
    param_6._12_4_ = fVar21;
    param_5._4_12_ = auVar26._4_12_;
    param_5._0_4_ = fVar9;
    fVar8 = fVar7;
    fVar10 = fVar14;
    fVar11 = fVar7;
    fVar12 = fVar9;
    fVar13 = fVar9;
    fVar18 = fVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


