/*
FUNCTION_NAME: AlterEyes.ColorACube.Analytics.AnalyticsTimer$$.ctor
ENTRY_POINT: 03f9cea4
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AlterEyes_ColorACube_Analytics_AnalyticsTimer___ctor(uint *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte *pbVar5;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  byte *unaff_x19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte *pbVar6;
  
  auVar4 = _DAT_0192c100;
  auVar3 = _DAT_0192b4c0;
  auVar2 = _DAT_0192a870;
  auVar1 = _DAT_01929280;
  pbVar6 = &stack0x00000005;
  if (pbVar6 != unaff_x19) {
    uVar8 = (long)unaff_x19 - (long)pbVar6;
    if (0x1f < uVar8) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar7 = param_1 + uVar9;
      pbVar6 = &stack0x00000005 + uVar9;
      pauVar11 = (undefined1 (*) [16])&stack0x00000015;
      puVar10 = param_1 + 0x10;
      uVar12 = uVar9;
      do {
        auVar13 = pauVar11[-1];
        auVar16 = *pauVar11;
        uVar12 = uVar12 - 0x20;
        pauVar11 = pauVar11 + 2;
        auVar14 = a64_TBL(ZEXT816(0),auVar13,auVar1);
        auVar15 = a64_TBL(ZEXT816(0),auVar13,auVar3);
        auVar17 = a64_TBL(ZEXT816(0),auVar13,auVar4);
        auVar13 = a64_TBL(ZEXT816(0),auVar13,auVar2);
        auVar18 = a64_TBL(ZEXT816(0),auVar16,auVar1);
        *(long *)(puVar10 + -6) = auVar15._8_8_;
        *(long *)(puVar10 + -8) = auVar15._0_8_;
        *(long *)(puVar10 + -2) = auVar14._8_8_;
        *(long *)(puVar10 + -4) = auVar14._0_8_;
        auVar14 = a64_TBL(ZEXT816(0),auVar16,auVar3);
        auVar15 = a64_TBL(ZEXT816(0),auVar16,auVar4);
        auVar16 = a64_TBL(ZEXT816(0),auVar16,auVar2);
        *(long *)(puVar10 + -0xe) = auVar13._8_8_;
        *(long *)(puVar10 + -0x10) = auVar13._0_8_;
        *(long *)(puVar10 + -10) = auVar17._8_8_;
        *(long *)(puVar10 + -0xc) = auVar17._0_8_;
        *(long *)(puVar10 + 10) = auVar14._8_8_;
        *(long *)(puVar10 + 8) = auVar14._0_8_;
        *(long *)(puVar10 + 0xe) = auVar18._8_8_;
        *(long *)(puVar10 + 0xc) = auVar18._0_8_;
        *(long *)(puVar10 + 2) = auVar16._8_8_;
        *(long *)puVar10 = auVar16._0_8_;
        *(long *)(puVar10 + 6) = auVar15._8_8_;
        *(long *)(puVar10 + 4) = auVar15._0_8_;
        puVar10 = puVar10 + 0x20;
      } while (uVar12 != 0);
      param_1 = puVar7;
      if (uVar8 == uVar9) goto LAB_03f9cf50;
    }
    do {
      pbVar5 = pbVar6 + 1;
      puVar7 = param_1 + 1;
      *param_1 = (uint)*pbVar6;
      pbVar6 = pbVar5;
      param_1 = puVar7;
    } while (pbVar5 != unaff_x19);
  }
LAB_03f9cf50:
  *param_1 = 0;
  return;
}


