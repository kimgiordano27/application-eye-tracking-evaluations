/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SaveUnifiedConsentWithOlderVersion
ENTRY_POINT: 04f88e90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_UnifiedConsent__SaveUnifiedConsentWithOlderVersion(long param_1)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  
  if (param_1 == 0) goto LAB_04f88fec;
  if (*(uint *)(param_1 + 0x18) <= unaff_w19) goto LAB_04f88ff0;
  lVar9 = (long)(int)unaff_w19;
  uVar2 = *(uint *)(param_1 + lVar9 * 4 + 0x20);
  if (uVar2 < 0x12) {
    uVar3 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar3 & 0x10840) != 0) {
      lVar8 = *unaff_x21;
      if (lVar8 == 0) goto LAB_04f88fec;
      if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_04f88ff0;
      lVar8 = lVar8 + (ulong)uVar2 * 0x10;
      goto LAB_04f88fcc;
    }
    if ((uVar3 & 0x21080) != 0) {
      lVar8 = *unaff_x21;
      if (lVar8 == 0) goto LAB_04f88fec;
      if (uVar2 - 1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (ulong)(uVar2 - 1) * 0x10;
        fVar11 = *(float *)(lVar8 + 0x24);
        auVar15 = ZEXT416(*(uint *)(lVar8 + 0x28));
        auVar16 = ZEXT416(*(uint *)(lVar8 + 0x2c));
        fVar10 = (float)FUN_05c7b504(*(undefined4 *)(lVar8 + 0x20),fVar11,0);
        lVar8 = *(long *)(unaff_x20 + 0x140);
        if (lVar8 == 0) goto LAB_04f88fec;
        if (unaff_w19 < *(uint *)(lVar8 + 0x18)) {
          lVar8 = lVar8 + lVar9 * 0x10;
          pauVar1 = (undefined1 (*) [12])(lVar8 + 0x20);
          uVar7 = *(undefined8 *)(lVar8 + 0x28);
          fVar20 = (float)uVar7;
          uVar21 = (undefined4)((ulong)uVar7 >> 0x20);
          uVar7 = *(undefined8 *)*pauVar1;
          fVar18 = (float)uVar7;
          fVar19 = (float)((ulong)uVar7 >> 0x20);
          fVar12 = auVar15._0_4_;
          auVar13._4_4_ = uVar21;
          auVar13._0_4_ = uVar21;
          auVar13._8_4_ = uVar21;
          auVar13._12_4_ = uVar21;
          auVar14._12_4_ = uVar21;
          auVar14._0_12_ = *pauVar1;
          auVar14 = NEON_ext(auVar13,auVar14,4,1);
          fVar17 = fVar12 * fVar19;
          auVar15._4_4_ = fVar10 * fVar19;
          auVar15._0_4_ = fVar12 * fVar18;
          auVar15._8_4_ = fVar11 * fVar20;
          auVar15._12_4_ = fVar11 * fVar19;
          auVar4._4_4_ = fVar10 * fVar19;
          auVar4._0_4_ = fVar12 * fVar18;
          auVar4._8_4_ = fVar11 * fVar20;
          auVar4._12_4_ = fVar11 * fVar19;
          auVar15 = NEON_ext(auVar15,auVar4,4,1);
          auVar5._4_4_ = fVar17;
          auVar5._0_4_ = fVar11 * fVar18;
          auVar5._8_4_ = fVar10 * fVar20;
          auVar5._12_4_ = fVar12 * fVar20;
          auVar6._4_4_ = fVar17;
          auVar6._0_4_ = fVar11 * fVar18;
          auVar6._8_4_ = fVar10 * fVar20;
          auVar6._12_4_ = fVar12 * fVar20;
          NEON_ext(auVar5,auVar6,0xc,1);
          return (fVar18 * auVar16._0_4_ + fVar10 * auVar14._0_4_ + auVar15._4_4_) - fVar17;
        }
      }
      goto LAB_04f88ff0;
    }
  }
  lVar8 = *(long *)(unaff_x20 + 0x140);
  if (lVar8 == 0) {
LAB_04f88fec:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar8 + 0x18) <= unaff_w19) {
LAB_04f88ff0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  lVar8 = lVar8 + lVar9 * 0x10;
LAB_04f88fcc:
  return (float)*(undefined8 *)(lVar8 + 0x20);
}


