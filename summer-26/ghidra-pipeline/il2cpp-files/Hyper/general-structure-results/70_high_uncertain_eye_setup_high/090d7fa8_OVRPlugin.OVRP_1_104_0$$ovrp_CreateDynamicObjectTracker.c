/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_CreateDynamicObjectTracker
ENTRY_POINT: 090d7fa8
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_104_0__ovrp_CreateDynamicObjectTracker
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
          undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16])

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 unaff_w22;
  ulong unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar22 = param_6._8_4_;
  fVar21 = param_6._4_4_;
  fVar20 = param_6._0_4_;
  fVar12 = param_5._12_4_;
  fVar9 = param_5._8_4_;
  fVar7 = param_5._4_4_;
  fVar8 = param_3._8_4_;
  fVar13 = param_3._4_4_;
  fVar10 = param_3._0_4_;
  fVar14 = param_2._12_4_;
  fVar11 = param_1._12_4_;
  do {
    fVar7 = (fVar20 + fVar10) - fVar7;
    fVar9 = (fVar21 + fVar13) - fVar9;
    fVar10 = (fVar22 + fVar8) - param_4._4_4_;
    fVar12 = (fVar14 - fVar11) - fVar12;
    while( true ) {
      if (unaff_x28 == 0) goto LAB_090d8044;
      if (*(uint *)(unaff_x28 + 0x18) <= unaff_x23) goto LAB_090d8048;
      lVar6 = unaff_x28 + unaff_x23 * 0x10;
      unaff_x23 = unaff_x23 + 1;
      unaff_x25 = unaff_x25 + 0x1c;
      *(ulong *)(lVar6 + 0x28) = CONCAT44(fVar12,fVar10);
      *(ulong *)(lVar6 + 0x20) = CONCAT44(fVar9,fVar7);
      if (unaff_x23 == 0x1a) {
        return 1;
      }
      lVar6 = *unaff_x24;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar6 = *unaff_x24;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_090d8044;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_090d8048;
      unaff_x28 = *(long *)(unaff_x19 + 0x48);
      uVar1 = *(uint *)(lVar6 + unaff_x23 * 4 + 0x20);
      if (-1 < (int)uVar1) break;
      if (*(char *)(unaff_x26 + 0x57b) == '\0') {
        FUN_04947ee4();
        *(undefined1 *)(unaff_x26 + 0x57b) = unaff_w22;
      }
      uVar3 = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      fVar10 = (float)uVar3;
      fVar12 = (float)((ulong)uVar3 >> 0x20);
      uVar3 = **(undefined8 **)(*unaff_x21 + 0xb8);
      fVar7 = (float)uVar3;
      fVar9 = (float)((ulong)uVar3 >> 0x20);
    }
    lVar6 = *unaff_x20;
    if (lVar6 == 0) {
LAB_090d8044:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_090d8048:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar6 = lVar6 + (ulong)uVar1 * (unaff_x27 & 0xffffffff);
    fVar13 = *(float *)(lVar6 + 0x30);
    auVar17 = ZEXT416(*(uint *)(lVar6 + 0x34));
    auVar19 = ZEXT416(*(uint *)(lVar6 + 0x38));
    fVar10 = (float)FUN_0a16a578(*(undefined4 *)(lVar6 + 0x2c),0);
    lVar6 = *unaff_x20;
    if (lVar6 == 0) goto LAB_090d8044;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_090d8048;
    pauVar2 = (undefined1 (*) [12])(lVar6 + unaff_x25);
    fVar22 = (float)*(undefined8 *)(*pauVar2 + 8);
    fVar24 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    fVar23 = (float)*(undefined8 *)*pauVar2;
    fVar21 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar18 = auVar19._0_4_;
    fVar14 = auVar17._0_4_;
    auVar15._4_4_ = fVar24;
    auVar15._0_4_ = fVar24;
    auVar15._8_4_ = fVar24;
    auVar15._12_4_ = fVar24;
    auVar5._12_4_ = fVar24;
    auVar5._0_12_ = *pauVar2;
    auVar16 = NEON_ext(auVar15,auVar5,4,1);
    fVar8 = fVar10 * fVar21;
    fVar11 = fVar13 * fVar21;
    fVar7 = fVar14 * fVar21;
    fVar9 = fVar10 * fVar22;
    fVar12 = fVar14 * fVar22;
    auVar17._4_4_ = fVar8;
    auVar17._0_4_ = fVar14 * fVar23;
    auVar17._8_4_ = fVar13 * fVar22;
    auVar17._12_4_ = fVar11;
    auVar19._4_4_ = fVar8;
    auVar19._0_4_ = fVar14 * fVar23;
    auVar19._8_4_ = fVar13 * fVar22;
    auVar19._12_4_ = fVar11;
    auVar17 = NEON_ext(auVar17,auVar19,4,1);
    fVar20 = fVar23 * fVar18 + fVar10 * auVar16._0_4_;
    fVar21 = fVar21 * fVar18 + fVar13 * auVar16._4_4_;
    fVar22 = fVar22 * fVar18 + fVar14 * auVar16._8_4_;
    fVar14 = fVar24 * fVar18 - fVar10 * auVar16._12_4_;
    auVar16._4_4_ = fVar7;
    auVar16._0_4_ = fVar13 * fVar23;
    auVar16._8_4_ = fVar9;
    auVar16._12_4_ = fVar12;
    auVar4._4_4_ = fVar7;
    auVar4._0_4_ = fVar13 * fVar23;
    auVar4._8_4_ = fVar9;
    auVar4._12_4_ = fVar12;
    param_4 = NEON_ext(auVar16,auVar4,0xc,1);
    fVar10 = auVar17._4_4_;
    fVar13 = auVar17._12_4_;
  } while( true );
}


