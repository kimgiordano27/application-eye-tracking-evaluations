/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_SetFaceTrackingVisemesEnabled
ENTRY_POINT: 090d7f2c
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_104_0__ovrp_SetFaceTrackingVisemesEnabled(long param_1,undefined8 param_2)

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
  
  while( true ) {
    fVar10 = *(float *)(param_1 + 0x30);
    auVar14 = ZEXT416(*(uint *)(param_1 + 0x34));
    auVar16 = ZEXT416(*(uint *)(param_1 + 0x38));
    fVar7 = (float)FUN_0a16a578(*(undefined4 *)(param_1 + 0x2c),param_2);
    lVar6 = *unaff_x20;
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) {
LAB_090d8048:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    pauVar2 = (undefined1 (*) [12])(lVar6 + unaff_x25);
    fVar22 = (float)*(undefined8 *)(*pauVar2 + 8);
    fVar23 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    fVar20 = (float)*(undefined8 *)*pauVar2;
    fVar21 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar15 = auVar16._0_4_;
    fVar11 = auVar14._0_4_;
    auVar12._4_4_ = fVar23;
    auVar12._0_4_ = fVar23;
    auVar12._8_4_ = fVar23;
    auVar12._12_4_ = fVar23;
    auVar13._12_4_ = fVar23;
    auVar13._0_12_ = *pauVar2;
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
    auVar4._4_4_ = fVar17;
    auVar4._0_4_ = fVar10 * fVar20;
    auVar4._8_4_ = fVar18;
    auVar4._12_4_ = fVar19;
    auVar5._4_4_ = fVar17;
    auVar5._0_4_ = fVar10 * fVar20;
    auVar5._8_4_ = fVar18;
    auVar5._12_4_ = fVar19;
    auVar16 = NEON_ext(auVar4,auVar5,0xc,1);
    fVar17 = (fVar20 * fVar15 + fVar7 * auVar13._0_4_ + auVar14._4_4_) - fVar17;
    fVar18 = (fVar21 * fVar15 + fVar10 * auVar13._4_4_ + auVar14._12_4_) - fVar18;
    fVar10 = (fVar22 * fVar15 + fVar11 * auVar13._8_4_ + fVar8) - auVar16._4_4_;
    fVar19 = ((fVar23 * fVar15 - fVar7 * auVar13._12_4_) - fVar9) - fVar19;
    while( true ) {
      if (unaff_x28 == 0) goto LAB_090d8044;
      if (*(uint *)(unaff_x28 + 0x18) <= unaff_x23) goto LAB_090d8048;
      lVar6 = unaff_x28 + unaff_x23 * 0x10;
      unaff_x23 = unaff_x23 + 1;
      unaff_x25 = unaff_x25 + 0x1c;
      *(ulong *)(lVar6 + 0x28) = CONCAT44(fVar19,fVar10);
      *(ulong *)(lVar6 + 0x20) = CONCAT44(fVar18,fVar17);
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
      fVar19 = (float)((ulong)uVar3 >> 0x20);
      uVar3 = **(undefined8 **)(*unaff_x21 + 0xb8);
      fVar17 = (float)uVar3;
      fVar18 = (float)((ulong)uVar3 >> 0x20);
    }
    param_1 = *unaff_x20;
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= uVar1) goto LAB_090d8048;
    param_1 = param_1 + (ulong)uVar1 * (unaff_x27 & 0xffffffff);
    param_2 = 0;
  }
LAB_090d8044:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


