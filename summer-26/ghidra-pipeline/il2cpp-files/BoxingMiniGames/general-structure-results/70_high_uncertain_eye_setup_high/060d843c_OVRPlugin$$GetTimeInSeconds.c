/*
FUNCTION_NAME: OVRPlugin$$GetTimeInSeconds
ENTRY_POINT: 060d843c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__GetTimeInSeconds(long param_1)

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
  undefined4 unaff_w20;
  long unaff_x21;
  long *plVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 in_q3 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
                    /* try { // try from 060d8440 to 061d844f has its CatchHandler @ 060d86a0 */
  if ((*(byte *)(unaff_x21 + 0xade) & 1) == 0) {
    FUN_03642964(PTR_DAT_07a246d0);
                    /* try { // try from 060d8458 to 061d8463 has its CatchHandler @ 060d8618 */
    *(undefined1 *)(unaff_x21 + 0xade) = 1;
  }
  plVar9 = *(long **)(param_1 + 0x50);
                    /* try { // try from 060d8468 to 061d8473 has its CatchHandler @ 060d86a0 */
  if (*(int *)(param_1 + 0x58) == 1) {
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
                    /* try { // try from 060d8478 to 061d848b has its CatchHandler @ 060d8604 */
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
                    /* try { // try from 060d848c to 061d84c7 has its CatchHandler @ 060d8600 */
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07a246d0) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
            goto LAB_060d8514;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)PTR_DAT_07a246d0,8);
LAB_060d8514:
      uVar4 = (*(code *)*puVar5)(plVar9,unaff_w20);
      lVar6 = FUN_071bd0d0(param_1,0);
      if (lVar6 != 0) {
        fVar14 = (float)unaff_x19[1];
        auVar18 = ZEXT416((uint)unaff_x19[2]);
        uVar10 = FUN_071d2018(*unaff_x19,lVar6,0);
        *unaff_x19 = uVar10;
        unaff_x19[1] = fVar14;
        unaff_x19[2] = auVar18._0_4_;
        lVar6 = FUN_071bd0d0(param_1,0);
        if (lVar6 != 0) {
          fVar11 = (float)FUN_071d05c8(lVar6,0);
          fVar26 = (float)*(undefined8 *)(unaff_x19 + 5);
          fVar27 = (float)((ulong)*(undefined8 *)(unaff_x19 + 5) >> 0x20);
          uVar3 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x19 + 3);
          fVar24 = (float)uVar3;
          fVar25 = (float)((ulong)uVar3 >> 0x20);
          fVar19 = in_q3._0_4_;
          fVar15 = auVar18._0_4_;
          auVar16._4_4_ = fVar27;
          auVar16._0_4_ = fVar27;
          auVar16._8_4_ = fVar27;
          auVar16._12_4_ = fVar27;
          auVar17._12_4_ = fVar27;
          auVar17._0_12_ = *(undefined1 (*) [12])(unaff_x19 + 3);
          auVar17 = NEON_ext(auVar16,auVar17,4,1);
          fVar12 = fVar11 * fVar25;
          fVar13 = fVar14 * fVar25;
          fVar21 = fVar15 * fVar25;
          fVar22 = fVar11 * fVar26;
          fVar23 = fVar15 * fVar26;
          auVar18._4_4_ = fVar12;
          auVar18._0_4_ = fVar15 * fVar24;
          auVar18._8_4_ = fVar14 * fVar26;
          auVar18._12_4_ = fVar13;
          auVar20._4_4_ = fVar12;
          auVar20._0_4_ = fVar15 * fVar24;
          auVar20._8_4_ = fVar14 * fVar26;
          auVar20._12_4_ = fVar13;
          auVar18 = NEON_ext(auVar18,auVar20,4,1);
          auVar1._4_4_ = fVar21;
          auVar1._0_4_ = fVar14 * fVar24;
          auVar1._8_4_ = fVar22;
          auVar1._12_4_ = fVar23;
          auVar2._4_4_ = fVar21;
          auVar2._0_4_ = fVar14 * fVar24;
          auVar2._8_4_ = fVar22;
          auVar2._12_4_ = fVar23;
          auVar20 = NEON_ext(auVar1,auVar2,0xc,1);
          *(ulong *)(unaff_x19 + 5) =
               CONCAT44(((fVar27 * fVar19 - fVar11 * auVar17._12_4_) - fVar13) - fVar23,
                        (fVar26 * fVar19 + fVar15 * auVar17._8_4_ + fVar12) - auVar20._4_4_);
          *(ulong *)(unaff_x19 + 3) =
               CONCAT44((fVar25 * fVar19 + fVar14 * auVar17._4_4_ + auVar18._12_4_) - fVar22,
                        (fVar24 * fVar19 + fVar11 * auVar17._0_4_ + auVar18._4_4_) - fVar21);
          return (ulong)(uVar4 & 1);
        }
      }
    }
  }
  else if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
                    /* try { // try from 060d84c8 to 061d84cb has its CatchHandler @ 060d864c */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 060d84cc to 061d84cf has its CatchHandler @ 060d8634 */
                    /* try { // try from 060d84d0 to 061d84e7 has its CatchHandler @ 060d8628 */
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07a246d0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto LAB_060d8608;
        }
                    /* try { // try from 060d84e8 to 061d84f3 has its CatchHandler @ 060d8630 */
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 060d84fc to 061d8527 has its CatchHandler @ 060d8624 */
    puVar5 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)PTR_DAT_07a246d0,6);
LAB_060d8608:
                    /* WARNING: Could not recover jumptable at 0x060d8624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)*puVar5)(plVar9,unaff_w20);
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


