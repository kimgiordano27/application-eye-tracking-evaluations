/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceCreate
ENTRY_POINT: 07a61284
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnInstanceCreate(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined1 (*unaff_x25) [12];
  long unaff_x26;
  undefined1 unaff_w27;
  ulong unaff_x28;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  do {
    thunk_FUN_040d65a8();
    lVar5 = *unaff_x24;
    do {
                    /* try { // try from 07a6128c to 07b6129b has its CatchHandler @ 07a6129c */
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) {
LAB_07a613d0:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
                    /* catch() { ... } // from try @ 07a61244 with catch @ 07a6129c
                       catch() { ... } // from try @ 07a6128c with catch @ 07a6129c */
                    /* try { // try from 07a612a0 to 07b612a3 has its CatchHandler @ 07a612ac */
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_07a613cc;
                    /* try { // try from 07a612a4 to 07b612af has its CatchHandler @ 07a61140 */
      lVar6 = *unaff_x19;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07a612a0 with catch @ 07a612ac
                        */
      uVar1 = *(uint *)(lVar5 + unaff_x22 * 4 + 0x20);
      if ((int)uVar1 < 0) {
        if (*(char *)(unaff_x26 + 0x626) == '\0') {
          FUN_04077588();
          *(undefined1 *)(unaff_x26 + 0x626) = unaff_w27;
        }
        uVar2 = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
        fVar10 = (float)uVar2;
        fVar19 = (float)((ulong)uVar2 >> 0x20);
        uVar2 = **(undefined8 **)(*unaff_x21 + 0xb8);
        fVar17 = (float)uVar2;
        fVar18 = (float)((ulong)uVar2 >> 0x20);
      }
      else {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar1) goto LAB_07a613cc;
        lVar5 = unaff_x23 + (ulong)uVar1 * (unaff_x28 & 0xffffffff);
        fVar10 = *(float *)(lVar5 + 0x10);
        auVar14 = ZEXT416(*(uint *)(lVar5 + 0x14));
        auVar16 = ZEXT416(*(uint *)(lVar5 + 0x18));
        fVar7 = (float)FUN_089b8e60(*(undefined4 *)(lVar5 + 0xc),0);
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_x22) goto LAB_07a613cc;
        fVar22 = (float)*(undefined8 *)(*unaff_x25 + 8);
        fVar23 = (float)((ulong)*(undefined8 *)(*unaff_x25 + 8) >> 0x20);
        fVar20 = (float)*(undefined8 *)*unaff_x25;
        fVar21 = (float)((ulong)*(undefined8 *)*unaff_x25 >> 0x20);
        fVar15 = auVar16._0_4_;
        fVar11 = auVar14._0_4_;
        auVar12._4_4_ = fVar23;
        auVar12._0_4_ = fVar23;
        auVar12._8_4_ = fVar23;
        auVar12._12_4_ = fVar23;
        auVar13._12_4_ = fVar23;
        auVar13._0_12_ = *unaff_x25;
        auVar13 = NEON_ext(auVar12,auVar13,4,1);
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
        auVar3._4_4_ = fVar17;
        auVar3._0_4_ = fVar10 * fVar20;
        auVar3._8_4_ = fVar18;
        auVar3._12_4_ = fVar19;
        auVar4._4_4_ = fVar17;
        auVar4._0_4_ = fVar10 * fVar20;
        auVar4._8_4_ = fVar18;
        auVar4._12_4_ = fVar19;
        auVar16 = NEON_ext(auVar3,auVar4,0xc,1);
        fVar17 = (fVar20 * fVar15 + fVar7 * auVar13._0_4_ + auVar14._4_4_) - fVar17;
        fVar18 = (fVar21 * fVar15 + fVar10 * auVar13._4_4_ + auVar14._12_4_) - fVar18;
        fVar10 = (fVar22 * fVar15 + fVar11 * auVar13._8_4_ + fVar8) - auVar16._4_4_;
        fVar19 = ((fVar23 * fVar15 - fVar7 * auVar13._12_4_) - fVar9) - fVar19;
      }
      if (lVar6 == 0) goto LAB_07a613d0;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) {
LAB_07a613cc:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar6 = lVar6 + unaff_x22 * 0x10;
      unaff_x22 = unaff_x22 + 1;
      unaff_x25 = (undefined1 (*) [12])(unaff_x25[2] + 4);
      *(ulong *)(lVar6 + 0x28) = CONCAT44(fVar19,fVar10);
      *(ulong *)(lVar6 + 0x20) = CONCAT44(fVar18,fVar17);
      if (unaff_x22 == 0x1a) {
        return 1;
      }
      lVar5 = *unaff_x24;
    } while (*(int *)(lVar5 + 0xe4) != 0);
  } while( true );
}


