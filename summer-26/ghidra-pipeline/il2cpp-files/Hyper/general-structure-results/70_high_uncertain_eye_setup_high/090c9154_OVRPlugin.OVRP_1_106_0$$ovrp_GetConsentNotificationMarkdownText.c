/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentNotificationMarkdownText
ENTRY_POINT: 090c9154
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_106_0__ovrp_GetConsentNotificationMarkdownText(void)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  int in_w8;
  long lVar6;
  long in_x9;
  uint in_w10;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x22;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  
  if (in_w8 - 1U < in_w10) {
    lVar6 = in_x9 + (ulong)(in_w8 - 1U) * 0x10;
    fVar8 = *(float *)(lVar6 + 0x24);
    auVar12 = ZEXT416(*(uint *)(lVar6 + 0x28));
    auVar13 = ZEXT416(*(uint *)(lVar6 + 0x2c));
    fVar7 = (float)FUN_0a16a578(*(undefined4 *)(lVar6 + 0x20),fVar8,0);
    lVar6 = *(long *)(unaff_x20 + 0x140);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (unaff_w19 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + unaff_x22 * 0x10;
      pauVar1 = (undefined1 (*) [12])(lVar6 + 0x20);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      fVar17 = (float)uVar5;
      uVar18 = (undefined4)((ulong)uVar5 >> 0x20);
      uVar5 = *(undefined8 *)*pauVar1;
      fVar15 = (float)uVar5;
      fVar16 = (float)((ulong)uVar5 >> 0x20);
      fVar9 = auVar12._0_4_;
      auVar10._4_4_ = uVar18;
      auVar10._0_4_ = uVar18;
      auVar10._8_4_ = uVar18;
      auVar10._12_4_ = uVar18;
      auVar11._12_4_ = uVar18;
      auVar11._0_12_ = *pauVar1;
      auVar11 = NEON_ext(auVar10,auVar11,4,1);
      fVar14 = fVar9 * fVar16;
      auVar12._4_4_ = fVar7 * fVar16;
      auVar12._0_4_ = fVar9 * fVar15;
      auVar12._8_4_ = fVar8 * fVar17;
      auVar12._12_4_ = fVar8 * fVar16;
      auVar2._4_4_ = fVar7 * fVar16;
      auVar2._0_4_ = fVar9 * fVar15;
      auVar2._8_4_ = fVar8 * fVar17;
      auVar2._12_4_ = fVar8 * fVar16;
      auVar12 = NEON_ext(auVar12,auVar2,4,1);
      auVar3._4_4_ = fVar14;
      auVar3._0_4_ = fVar8 * fVar15;
      auVar3._8_4_ = fVar7 * fVar17;
      auVar3._12_4_ = fVar9 * fVar17;
      auVar4._4_4_ = fVar14;
      auVar4._0_4_ = fVar8 * fVar15;
      auVar4._8_4_ = fVar7 * fVar17;
      auVar4._12_4_ = fVar9 * fVar17;
      NEON_ext(auVar3,auVar4,0xc,1);
      return (fVar15 * auVar13._0_4_ + fVar7 * auVar11._0_4_ + auVar12._4_4_) - fVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


