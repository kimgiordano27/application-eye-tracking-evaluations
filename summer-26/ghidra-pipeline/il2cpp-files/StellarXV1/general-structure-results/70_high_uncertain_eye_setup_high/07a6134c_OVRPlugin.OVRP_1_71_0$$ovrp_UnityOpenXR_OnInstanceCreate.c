/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceCreate
ENTRY_POINT: 07a6134c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceCreate
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
          undefined1 param_4 [16],undefined1 param_5 [16])

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [12];
  long lVar6;
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
  long unaff_x29;
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
  fVar11 = param_3._12_4_;
  fVar10 = param_3._8_4_;
  fVar9 = param_3._4_4_;
  fVar8 = param_3._0_4_;
  fVar7 = param_2._12_4_;
  fVar18 = param_2._8_4_;
code_r0x07a6134c:
  fVar8 = fVar8 - fVar18;
  fVar9 = fVar9 - fVar19;
  fVar10 = fVar10 - fVar7;
  fVar11 = fVar11 - fVar20;
  pauVar5 = unaff_x25;
  do {
    if (unaff_x29 == 0) {
LAB_07a613d0:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(unaff_x29 + 0x18) <= unaff_x22) goto LAB_07a613cc;
    lVar6 = unaff_x29 + unaff_x22 * 0x10;
    unaff_x22 = unaff_x22 + 1;
    unaff_x25 = (undefined1 (*) [12])(pauVar5[2] + 4);
    *(ulong *)(lVar6 + 0x28) = CONCAT44(fVar11,fVar10);
    *(ulong *)(lVar6 + 0x20) = CONCAT44(fVar9,fVar8);
    if (unaff_x22 == 0x1a) {
      return 1;
    }
    lVar6 = *unaff_x24;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar6 = *unaff_x24;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_07a613d0;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_07a613cc;
    unaff_x29 = *unaff_x19;
    uVar1 = *(uint *)(lVar6 + unaff_x22 * 4 + 0x20);
    if (-1 < (int)uVar1) break;
    if (*(char *)(unaff_x26 + 0x626) == '\0') {
      FUN_04077588();
      *(undefined1 *)(unaff_x26 + 0x626) = unaff_w27;
    }
    uVar2 = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
    fVar10 = (float)uVar2;
    fVar11 = (float)((ulong)uVar2 >> 0x20);
    uVar2 = **(undefined8 **)(*unaff_x21 + 0xb8);
    fVar8 = (float)uVar2;
    fVar9 = (float)((ulong)uVar2 >> 0x20);
    pauVar5 = unaff_x25;
  } while( true );
  if (*(uint *)(unaff_x20 + 0x18) <= uVar1) {
LAB_07a613cc:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  lVar6 = unaff_x23 + (ulong)uVar1 * (unaff_x28 & 0xffffffff);
  fVar9 = *(float *)(lVar6 + 0x10);
  auVar15 = ZEXT416(*(uint *)(lVar6 + 0x14));
  auVar17 = ZEXT416(*(uint *)(lVar6 + 0x18));
  fVar8 = (float)FUN_089b8e60(*(undefined4 *)(lVar6 + 0xc),0);
  if (*(uint *)(unaff_x20 + 0x18) <= unaff_x22) goto LAB_07a613cc;
  fVar23 = (float)*(undefined8 *)pauVar5[3];
  fVar7 = (float)((ulong)*(undefined8 *)pauVar5[3] >> 0x20);
  fVar21 = (float)*(undefined8 *)*unaff_x25;
  fVar22 = (float)((ulong)*(undefined8 *)*unaff_x25 >> 0x20);
  fVar16 = auVar17._0_4_;
  fVar12 = auVar15._0_4_;
  auVar13._4_4_ = fVar7;
  auVar13._0_4_ = fVar7;
  auVar13._8_4_ = fVar7;
  auVar13._12_4_ = fVar7;
  auVar14._12_4_ = fVar7;
  auVar14._0_12_ = *unaff_x25;
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
  auVar3._4_4_ = fVar18;
  auVar3._0_4_ = fVar9 * fVar21;
  auVar3._8_4_ = fVar19;
  auVar3._12_4_ = fVar20;
  auVar4._4_4_ = fVar18;
  auVar4._0_4_ = fVar9 * fVar21;
  auVar4._8_4_ = fVar19;
  auVar4._12_4_ = fVar20;
  auVar17 = NEON_ext(auVar3,auVar4,0xc,1);
  fVar11 = (fVar7 * fVar16 - fVar8 * auVar14._12_4_) - fVar11;
  fVar7 = auVar17._4_4_;
  fVar8 = fVar21 * fVar16 + fVar8 * auVar14._0_4_ + auVar15._4_4_;
  fVar9 = fVar22 * fVar16 + fVar9 * auVar14._4_4_ + auVar15._12_4_;
  fVar10 = fVar23 * fVar16 + fVar12 * auVar14._8_4_ + fVar10;
  goto code_r0x07a6134c;
}


