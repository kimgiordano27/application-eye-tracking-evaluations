/*
FUNCTION_NAME: AlterEyes.ColorACube.Analytics.AnalyticsTimer$$Handle
ENTRY_POINT: 03f9c6cc
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AlterEyes_ColorACube_Analytics_AnalyticsTimer__Handle(long param_1,uint param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte *pbVar6;
  uint *puVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  byte *unaff_x19;
  ulong *unaff_x20;
  uint *puVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte *pbVar7;
  
  if ((9 < (long)unaff_x19 - param_1) ||
     (uVar1 = (uint)((0x20 - (int)LZCOUNT(param_2 | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar1 - (param_2 < *(uint *)(&DAT_0223c5f0 + (ulong)uVar1 * 4))) + 1) <=
     (long)unaff_x19 - param_1)) {
    unaff_x19 = (byte *)FUN_03f9e430();
  }
  uVar13 = (long)unaff_x19 - (long)&stack0x00000004;
  if (0x3fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_03f98578();
  }
  if (uVar13 < 5) {
    puVar12 = (uint *)((long)unaff_x20 + 4);
    *(char *)unaff_x20 = (char)((int)uVar13 << 1);
    auVar2 = _DAT_01929280;
    auVar3 = _DAT_0192a870;
    auVar4 = _DAT_0192b4c0;
    auVar5 = _DAT_0192c100;
  }
  else {
    if (0x3ffffffffffffffe < (uVar13 | 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1a570();
    }
    uVar11 = (uVar13 | 3) + 1;
    puVar12 = operator_new(uVar11 * 4);
    unaff_x20[1] = uVar13;
    unaff_x20[2] = (ulong)puVar12;
    *unaff_x20 = uVar11 | 1;
    auVar2 = _DAT_01929280;
    auVar3 = _DAT_0192a870;
    auVar4 = _DAT_0192b4c0;
    auVar5 = _DAT_0192c100;
  }
  _DAT_01929280 = auVar2;
  _DAT_0192a870 = auVar3;
  _DAT_0192b4c0 = auVar4;
  _DAT_0192c100 = auVar5;
  if (&stack0x00000004 != unaff_x19) {
    pbVar7 = &stack0x00000004;
    uVar13 = (long)unaff_x19 - (long)pbVar7;
    if (0x1f < uVar13) {
      uVar9 = uVar13 & 0xffffffffffffffe0;
      puVar8 = puVar12 + uVar9;
      pbVar7 = &stack0x00000004 + uVar9;
      pauVar10 = (undefined1 (*) [16])&stack0x00000014;
      puVar12 = puVar12 + 0x10;
      uVar11 = uVar9;
      do {
        auVar14 = pauVar10[-1];
        auVar17 = *pauVar10;
        uVar11 = uVar11 - 0x20;
        pauVar10 = pauVar10 + 2;
        auVar15 = a64_TBL(ZEXT816(0),auVar14,auVar2);
        auVar16 = a64_TBL(ZEXT816(0),auVar14,auVar4);
        auVar18 = a64_TBL(ZEXT816(0),auVar14,auVar5);
        auVar14 = a64_TBL(ZEXT816(0),auVar14,auVar3);
        auVar19 = a64_TBL(ZEXT816(0),auVar17,auVar2);
        *(long *)(puVar12 + -6) = auVar16._8_8_;
        *(long *)(puVar12 + -8) = auVar16._0_8_;
        *(long *)(puVar12 + -2) = auVar15._8_8_;
        *(long *)(puVar12 + -4) = auVar15._0_8_;
        auVar15 = a64_TBL(ZEXT816(0),auVar17,auVar4);
        auVar16 = a64_TBL(ZEXT816(0),auVar17,auVar5);
        auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar3);
        *(long *)(puVar12 + -0xe) = auVar14._8_8_;
        *(long *)(puVar12 + -0x10) = auVar14._0_8_;
        *(long *)(puVar12 + -10) = auVar18._8_8_;
        *(long *)(puVar12 + -0xc) = auVar18._0_8_;
        *(long *)(puVar12 + 10) = auVar15._8_8_;
        *(long *)(puVar12 + 8) = auVar15._0_8_;
        *(long *)(puVar12 + 0xe) = auVar19._8_8_;
        *(long *)(puVar12 + 0xc) = auVar19._0_8_;
        *(long *)(puVar12 + 2) = auVar17._8_8_;
        *(long *)puVar12 = auVar17._0_8_;
        *(long *)(puVar12 + 6) = auVar16._8_8_;
        *(long *)(puVar12 + 4) = auVar16._0_8_;
        puVar12 = puVar12 + 0x20;
      } while (uVar11 != 0);
      puVar12 = puVar8;
      if (uVar13 == uVar9) goto LAB_03f9c83c;
    }
    do {
      pbVar6 = pbVar7 + 1;
      puVar8 = puVar12 + 1;
      *puVar12 = (uint)*pbVar7;
      pbVar7 = pbVar6;
      puVar12 = puVar8;
    } while (pbVar6 != unaff_x19);
  }
LAB_03f9c83c:
  *puVar12 = 0;
  return;
}


