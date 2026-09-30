/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameSize
ENTRY_POINT: 060fd560
PROGRAM: BoxingMiniGames-libil2cpp.so
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
OVRPlugin_Media__GetMrcFrameSize
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
          undefined1 param_4 [16],undefined1 param_5 [16])

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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar20 = param_5._12_4_;
  fVar19 = param_5._8_4_;
  fVar10 = param_3._8_4_;
  fVar9 = param_3._4_4_;
  fVar8 = param_3._0_4_;
  fVar7 = param_2._12_4_;
  fVar18 = param_2._8_4_;
  fVar11 = param_1._12_4_;
  do {
    fVar8 = fVar8 - fVar18;
    fVar9 = fVar9 - fVar19;
    fVar10 = fVar10 - fVar7;
    fVar11 = fVar11 - fVar20;
    while( true ) {
      if (unaff_x28 == 0) goto LAB_060fd5f0;
      if (*(uint *)(unaff_x28 + 0x18) <= unaff_x23) goto LAB_060fd5f4;
      lVar6 = unaff_x28 + unaff_x23 * 0x10;
      unaff_x23 = unaff_x23 + 1;
      unaff_x25 = unaff_x25 + 0x1c;
      *(ulong *)(lVar6 + 0x28) = CONCAT44(fVar11,fVar10);
      *(ulong *)(lVar6 + 0x20) = CONCAT44(fVar9,fVar8);
      if (unaff_x23 == 0x1a) {
        return 1;
      }
      lVar6 = *unaff_x24;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar6 = *unaff_x24;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_060fd5f0;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_060fd5f4;
      unaff_x28 = *(long *)(unaff_x19 + 0x48);
      uVar1 = *(uint *)(lVar6 + unaff_x23 * 4 + 0x20);
      if (-1 < (int)uVar1) break;
      if (*(char *)(unaff_x26 + 0x6b4) == '\0') {
        FUN_03642964();
        *(undefined1 *)(unaff_x26 + 0x6b4) = unaff_w22;
      }
      uVar3 = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      fVar10 = (float)uVar3;
      fVar11 = (float)((ulong)uVar3 >> 0x20);
      uVar3 = **(undefined8 **)(*unaff_x21 + 0xb8);
      fVar8 = (float)uVar3;
      fVar9 = (float)((ulong)uVar3 >> 0x20);
    }
    lVar6 = *unaff_x20;
    if (lVar6 == 0) {
LAB_060fd5f0:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_060fd5f4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar6 = lVar6 + (ulong)uVar1 * (unaff_x27 & 0xffffffff);
    fVar9 = *(float *)(lVar6 + 0x30);
    auVar15 = ZEXT416(*(uint *)(lVar6 + 0x34));
    auVar17 = ZEXT416(*(uint *)(lVar6 + 0x38));
    fVar8 = (float)FUN_071aee04(*(undefined4 *)(lVar6 + 0x2c),0);
    lVar6 = *unaff_x20;
    if (lVar6 == 0) goto LAB_060fd5f0;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_060fd5f4;
    pauVar2 = (undefined1 (*) [12])(lVar6 + unaff_x25);
    fVar23 = (float)*(undefined8 *)(*pauVar2 + 8);
    fVar7 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    fVar21 = (float)*(undefined8 *)*pauVar2;
    fVar22 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar16 = auVar17._0_4_;
    fVar12 = auVar15._0_4_;
    auVar13._4_4_ = fVar7;
    auVar13._0_4_ = fVar7;
    auVar13._8_4_ = fVar7;
    auVar13._12_4_ = fVar7;
    auVar14._12_4_ = fVar7;
    auVar14._0_12_ = *pauVar2;
    auVar14 = NEON_ext(auVar13,auVar14,4,1);
    fVar10 = fVar8 * fVar22;
    fVar11 = fVar9 * fVar22;
    fVar18 = fVar12 * fVar22;
    fVar19 = fVar8 * fVar23;
    fVar20 = fVar12 * fVar23;
    auVar15._4_4_ = fVar10;
    auVar15._0_4_ = fVar12 * fVar21;
    auVar15._8_4_ = fVar9 * fVar23;
    auVar15._12_4_ = fVar11;
    auVar17._4_4_ = fVar10;
    auVar17._0_4_ = fVar12 * fVar21;
    auVar17._8_4_ = fVar9 * fVar23;
    auVar17._12_4_ = fVar11;
    auVar15 = NEON_ext(auVar15,auVar17,4,1);
    auVar4._4_4_ = fVar18;
    auVar4._0_4_ = fVar9 * fVar21;
    auVar4._8_4_ = fVar19;
    auVar4._12_4_ = fVar20;
    auVar5._4_4_ = fVar18;
    auVar5._0_4_ = fVar9 * fVar21;
    auVar5._8_4_ = fVar19;
    auVar5._12_4_ = fVar20;
    auVar17 = NEON_ext(auVar4,auVar5,0xc,1);
    fVar11 = (fVar7 * fVar16 - fVar8 * auVar14._12_4_) - fVar11;
    fVar7 = auVar17._4_4_;
    fVar8 = fVar21 * fVar16 + fVar8 * auVar14._0_4_ + auVar15._4_4_;
    fVar9 = fVar22 * fVar16 + fVar9 * auVar14._4_4_ + auVar15._12_4_;
    fVar10 = fVar23 * fVar16 + fVar12 * auVar14._8_4_ + fVar10;
  } while( true );
}


