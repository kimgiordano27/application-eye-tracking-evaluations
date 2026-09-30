/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 060d8508
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__SetColorScaleAndOffset(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  int in_w9;
  undefined4 *unaff_x19;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 in_q3 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar4 = (**(code **)(param_1 + (long)(in_w9 + 8) * 0x10 + 0x138))();
                    /* try { // try from 060d8528 to 061d8533 has its CatchHandler @ 060d860c */
                    /* try { // try from 060d8534 to 061d853f has its CatchHandler @ 060d8608 */
  lVar5 = FUN_071bd0d0();
  if (lVar5 != 0) {
    fVar10 = (float)unaff_x19[1];
    auVar14 = ZEXT416((uint)unaff_x19[2]);
    uVar6 = FUN_071d2018(*unaff_x19,lVar5,0);
                    /* try { // try from 060d854c to 061d854f has its CatchHandler @ 060d8620 */
                    /* try { // try from 060d8550 to 061d856f has its CatchHandler @ 060d861c */
    *unaff_x19 = uVar6;
    unaff_x19[1] = fVar10;
    unaff_x19[2] = auVar14._0_4_;
    lVar5 = FUN_071bd0d0();
    if (lVar5 != 0) {
      fVar7 = (float)FUN_071d05c8(lVar5,0);
                    /* try { // try from 060d8570 to 061d85ab has its CatchHandler @ 060d8614 */
      fVar22 = (float)*(undefined8 *)(unaff_x19 + 5);
      fVar23 = (float)((ulong)*(undefined8 *)(unaff_x19 + 5) >> 0x20);
      uVar3 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x19 + 3);
      fVar20 = (float)uVar3;
      fVar21 = (float)((ulong)uVar3 >> 0x20);
      fVar15 = in_q3._0_4_;
      fVar11 = auVar14._0_4_;
      auVar12._4_4_ = fVar23;
      auVar12._0_4_ = fVar23;
      auVar12._8_4_ = fVar23;
      auVar12._12_4_ = fVar23;
      auVar13._12_4_ = fVar23;
      auVar13._0_12_ = *(undefined1 (*) [12])(unaff_x19 + 3);
      auVar13 = NEON_ext(auVar12,auVar13,4,1);
                    /* try { // try from 060d85b0 to 061d85db has its CatchHandler @ 060d8610 */
      fVar8 = fVar7 * fVar21;
      fVar9 = fVar10 * fVar21;
      fVar17 = fVar11 * fVar21;
      fVar18 = fVar7 * fVar22;
      fVar19 = fVar11 * fVar22;
      auVar14._4_4_ = fVar8;
      auVar14._0_4_ = fVar11 * fVar20;
      auVar14._8_4_ = fVar10 * fVar22;
      auVar14._12_4_ = fVar9;
      auVar16._4_4_ = fVar8;
      auVar16._0_4_ = fVar11 * fVar20;
      auVar16._8_4_ = fVar10 * fVar22;
      auVar16._12_4_ = fVar9;
      auVar14 = NEON_ext(auVar14,auVar16,4,1);
      auVar1._4_4_ = fVar17;
      auVar1._0_4_ = fVar10 * fVar20;
      auVar1._8_4_ = fVar18;
      auVar1._12_4_ = fVar19;
      auVar2._4_4_ = fVar17;
      auVar2._0_4_ = fVar10 * fVar20;
      auVar2._8_4_ = fVar18;
      auVar2._12_4_ = fVar19;
      auVar16 = NEON_ext(auVar1,auVar2,0xc,1);
                    /* try { // try from 060d85dc to 061d85e7 has its CatchHandler @ 060d85fc */
                    /* try { // try from 060d85e8 to 061d85f3 has its CatchHandler @ 060d85f8 */
      *(ulong *)(unaff_x19 + 5) =
           CONCAT44(((fVar23 * fVar15 - fVar7 * auVar13._12_4_) - fVar9) - fVar19,
                    (fVar22 * fVar15 + fVar11 * auVar13._8_4_ + fVar8) - auVar16._4_4_);
      *(ulong *)(unaff_x19 + 3) =
           CONCAT44((fVar21 * fVar15 + fVar10 * auVar13._4_4_ + auVar14._12_4_) - fVar18,
                    (fVar20 * fVar15 + fVar7 * auVar13._0_4_ + auVar14._4_4_) - fVar17);
                    /* try { // try from 060d85f4 to 061d86b3 has its CatchHandler @ 060d7db8 */
      return uVar4 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 060d84d0 with catch @ 060d8628 */
  FUN_03642c18();
}


