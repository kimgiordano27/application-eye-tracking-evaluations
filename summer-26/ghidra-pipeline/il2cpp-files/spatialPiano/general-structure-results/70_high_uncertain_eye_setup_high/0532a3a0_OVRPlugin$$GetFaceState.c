/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 0532a3a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetFaceState(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x21;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 in_q3 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)OVR_OpenVR_EVRApplicationError_TypeInfo) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
        goto LAB_0532a444;
      }
      uVar7 = uVar7 - 1;
                    /* try { // try from 0532a3d0 to 0542a3d7 has its CatchHandler @ 0532a4f4 */
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02f421d0();
LAB_0532a444:
  uVar4 = (*(code *)*puVar5)();
  lVar6 = FUN_060ed7ac();
  if (lVar6 != 0) {
    fVar13 = (float)unaff_x19[1];
    auVar17 = ZEXT416((uint)unaff_x19[2]);
                    /* try { // try from 0532a478 to 0542a4a7 has its CatchHandler @ 0532a4f8 */
    uVar9 = FUN_060fdd00(*unaff_x19,lVar6,0);
    *unaff_x19 = uVar9;
    unaff_x19[1] = fVar13;
    unaff_x19[2] = auVar17._0_4_;
    lVar6 = FUN_060ed7ac();
    if (lVar6 != 0) {
      fVar10 = (float)FUN_060fdda4(lVar6,0);
      fVar25 = (float)*(undefined8 *)(unaff_x19 + 5);
      fVar26 = (float)((ulong)*(undefined8 *)(unaff_x19 + 5) >> 0x20);
      uVar3 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x19 + 3);
      fVar23 = (float)uVar3;
      fVar24 = (float)((ulong)uVar3 >> 0x20);
      fVar18 = in_q3._0_4_;
                    /* try { // try from 0532a4a8 to 0542a4b3 has its CatchHandler @ 0532a4ec */
      fVar14 = auVar17._0_4_;
      auVar15._4_4_ = fVar26;
      auVar15._0_4_ = fVar26;
      auVar15._8_4_ = fVar26;
      auVar15._12_4_ = fVar26;
      auVar16._12_4_ = fVar26;
      auVar16._0_12_ = *(undefined1 (*) [12])(unaff_x19 + 3);
      auVar16 = NEON_ext(auVar15,auVar16,4,1);
      fVar11 = fVar10 * fVar24;
      fVar12 = fVar13 * fVar24;
      fVar20 = fVar14 * fVar24;
      fVar21 = fVar10 * fVar25;
      fVar22 = fVar14 * fVar25;
      auVar17._4_4_ = fVar11;
      auVar17._0_4_ = fVar14 * fVar23;
      auVar17._8_4_ = fVar13 * fVar25;
      auVar17._12_4_ = fVar12;
      auVar19._4_4_ = fVar11;
      auVar19._0_4_ = fVar14 * fVar23;
      auVar19._8_4_ = fVar13 * fVar25;
      auVar19._12_4_ = fVar12;
      auVar17 = NEON_ext(auVar17,auVar19,4,1);
      auVar1._4_4_ = fVar20;
      auVar1._0_4_ = fVar13 * fVar23;
      auVar1._8_4_ = fVar21;
      auVar1._12_4_ = fVar22;
      auVar2._4_4_ = fVar20;
      auVar2._0_4_ = fVar13 * fVar23;
      auVar2._8_4_ = fVar21;
      auVar2._12_4_ = fVar22;
      auVar19 = NEON_ext(auVar1,auVar2,0xc,1);
      *(ulong *)(unaff_x19 + 5) =
           CONCAT44(((fVar26 * fVar18 - fVar10 * auVar16._12_4_) - fVar12) - fVar22,
                    (fVar25 * fVar18 + fVar14 * auVar16._8_4_ + fVar11) - auVar19._4_4_);
      *(ulong *)(unaff_x19 + 3) =
           CONCAT44((fVar24 * fVar18 + fVar13 * auVar16._4_4_ + auVar17._12_4_) - fVar21,
                    (fVar23 * fVar18 + fVar10 * auVar16._0_4_ + auVar17._4_4_) - fVar20);
      return uVar4 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


