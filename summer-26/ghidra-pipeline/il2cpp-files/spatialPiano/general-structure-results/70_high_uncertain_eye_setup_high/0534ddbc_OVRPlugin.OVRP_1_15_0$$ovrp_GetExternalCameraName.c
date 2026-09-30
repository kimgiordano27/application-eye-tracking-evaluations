/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraName
ENTRY_POINT: 0534ddbc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraName(undefined8 param_1)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  ulong unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long lVar7;
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
  float fVar24;
  
  *(undefined8 *)(unaff_x19 + 0x38) = param_1;
  while( true ) {
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *unaff_x23;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_0534df34;
    lVar7 = *(long *)(unaff_x19 + 0x48);
    uVar1 = *(uint *)(lVar6 + unaff_x22 * 4 + 0x20);
    if ((int)uVar1 < 0) {
      if (*(char *)(unaff_x25 + 0x2c3) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x25 + 0x2c3) = unaff_w21;
      }
      uVar3 = (*(undefined8 **)(*unaff_x20 + 0xb8))[1];
      fVar11 = (float)uVar3;
      fVar20 = (float)((ulong)uVar3 >> 0x20);
      uVar3 = **(undefined8 **)(*unaff_x20 + 0xb8);
      fVar18 = (float)uVar3;
      fVar19 = (float)((ulong)uVar3 >> 0x20);
    }
    else {
      lVar6 = *(long *)(unaff_x19 + 0x38);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_0534df34;
      lVar6 = lVar6 + (ulong)uVar1 * 0x1c;
      fVar11 = *(float *)(lVar6 + 0x30);
      auVar15 = ZEXT416(*(uint *)(lVar6 + 0x34));
      auVar17 = ZEXT416(*(uint *)(lVar6 + 0x38));
      fVar8 = (float)FUN_060df2e4(*(undefined4 *)(lVar6 + 0x2c),0);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_0534df34;
      pauVar2 = (undefined1 (*) [12])(lVar6 + unaff_x24);
      fVar23 = (float)*(undefined8 *)(*pauVar2 + 8);
      fVar24 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
      fVar21 = (float)*(undefined8 *)*pauVar2;
      fVar22 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
      fVar16 = auVar17._0_4_;
      fVar12 = auVar15._0_4_;
      auVar13._4_4_ = fVar24;
      auVar13._0_4_ = fVar24;
      auVar13._8_4_ = fVar24;
      auVar13._12_4_ = fVar24;
      auVar14._12_4_ = fVar24;
      auVar14._0_12_ = *pauVar2;
      auVar14 = NEON_ext(auVar13,auVar14,4,1);
      fVar9 = fVar8 * fVar22;
      fVar10 = fVar11 * fVar22;
      fVar18 = fVar12 * fVar22;
      fVar19 = fVar8 * fVar23;
      fVar20 = fVar12 * fVar23;
      auVar15._4_4_ = fVar9;
      auVar15._0_4_ = fVar12 * fVar21;
      auVar15._8_4_ = fVar11 * fVar23;
      auVar15._12_4_ = fVar10;
      auVar17._4_4_ = fVar9;
      auVar17._0_4_ = fVar12 * fVar21;
      auVar17._8_4_ = fVar11 * fVar23;
      auVar17._12_4_ = fVar10;
      auVar15 = NEON_ext(auVar15,auVar17,4,1);
      auVar4._4_4_ = fVar18;
      auVar4._0_4_ = fVar11 * fVar21;
      auVar4._8_4_ = fVar19;
      auVar4._12_4_ = fVar20;
      auVar5._4_4_ = fVar18;
      auVar5._0_4_ = fVar11 * fVar21;
      auVar5._8_4_ = fVar19;
      auVar5._12_4_ = fVar20;
      auVar17 = NEON_ext(auVar4,auVar5,0xc,1);
      fVar18 = (fVar21 * fVar16 + fVar8 * auVar14._0_4_ + auVar15._4_4_) - fVar18;
      fVar19 = (fVar22 * fVar16 + fVar11 * auVar14._4_4_ + auVar15._12_4_) - fVar19;
      fVar11 = (fVar23 * fVar16 + fVar12 * auVar14._8_4_ + fVar9) - auVar17._4_4_;
      fVar20 = ((fVar24 * fVar16 - fVar8 * auVar14._12_4_) - fVar10) - fVar20;
    }
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x22) {
LAB_0534df34:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar7 = lVar7 + unaff_x22 * 0x10;
    unaff_x22 = unaff_x22 + 1;
    unaff_x24 = unaff_x24 + 0x1c;
    *(ulong *)(lVar7 + 0x28) = CONCAT44(fVar20,fVar11);
    *(ulong *)(lVar7 + 0x20) = CONCAT44(fVar19,fVar18);
    if (unaff_x22 == 0x1a) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


