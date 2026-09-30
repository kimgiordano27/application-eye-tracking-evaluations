/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetFaceTrackingVisemesSupported
ENTRY_POINT: 090d7eb0
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_104_0__ovrp_GetFaceTrackingVisemesSupported(void)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  char unaff_w22;
  ulong uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  thunk_FUN_049ee3d8();
  puVar7 = PTR_DAT_0ac75878;
  puVar6 = PTR_DAT_0ac0f100;
  uVar10 = 0;
  lVar11 = 0x2c;
  while( true ) {
    lVar8 = *(long *)puVar7;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar8 = *(long *)puVar7;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_090d8048;
    lVar12 = *(long *)(unaff_x19 + 0x48);
    uVar1 = *(uint *)(lVar8 + uVar10 * 4 + 0x20);
    if ((int)uVar1 < 0) {
      if (DAT_0b31f57b == '\0') {
        FUN_04947ee4(puVar6);
        DAT_0b31f57b = unaff_w22;
      }
      puVar9 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      uVar3 = puVar9[1];
      fVar16 = (float)uVar3;
      fVar25 = (float)((ulong)uVar3 >> 0x20);
      uVar3 = *puVar9;
      fVar23 = (float)uVar3;
      fVar24 = (float)((ulong)uVar3 >> 0x20);
    }
    else {
      lVar8 = *unaff_x20;
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_090d8048;
      lVar8 = lVar8 + (ulong)uVar1 * 0x1c;
      fVar16 = *(float *)(lVar8 + 0x30);
      auVar20 = ZEXT416(*(uint *)(lVar8 + 0x34));
      auVar22 = ZEXT416(*(uint *)(lVar8 + 0x38));
      fVar13 = (float)FUN_0a16a578(*(undefined4 *)(lVar8 + 0x2c),0);
      lVar8 = *unaff_x20;
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_090d8048;
      pauVar2 = (undefined1 (*) [12])(lVar8 + lVar11);
      fVar28 = (float)*(undefined8 *)(*pauVar2 + 8);
      fVar29 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
      fVar26 = (float)*(undefined8 *)*pauVar2;
      fVar27 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
      fVar21 = auVar22._0_4_;
      fVar17 = auVar20._0_4_;
      auVar18._4_4_ = fVar29;
      auVar18._0_4_ = fVar29;
      auVar18._8_4_ = fVar29;
      auVar18._12_4_ = fVar29;
      auVar19._12_4_ = fVar29;
      auVar19._0_12_ = *pauVar2;
      auVar19 = NEON_ext(auVar18,auVar19,4,1);
      fVar14 = fVar13 * fVar27;
      fVar15 = fVar16 * fVar27;
      fVar23 = fVar17 * fVar27;
      fVar24 = fVar13 * fVar28;
      fVar25 = fVar17 * fVar28;
      auVar20._4_4_ = fVar14;
      auVar20._0_4_ = fVar17 * fVar26;
      auVar20._8_4_ = fVar16 * fVar28;
      auVar20._12_4_ = fVar15;
      auVar22._4_4_ = fVar14;
      auVar22._0_4_ = fVar17 * fVar26;
      auVar22._8_4_ = fVar16 * fVar28;
      auVar22._12_4_ = fVar15;
      auVar20 = NEON_ext(auVar20,auVar22,4,1);
      auVar4._4_4_ = fVar23;
      auVar4._0_4_ = fVar16 * fVar26;
      auVar4._8_4_ = fVar24;
      auVar4._12_4_ = fVar25;
      auVar5._4_4_ = fVar23;
      auVar5._0_4_ = fVar16 * fVar26;
      auVar5._8_4_ = fVar24;
      auVar5._12_4_ = fVar25;
      auVar22 = NEON_ext(auVar4,auVar5,0xc,1);
      fVar23 = (fVar26 * fVar21 + fVar13 * auVar19._0_4_ + auVar20._4_4_) - fVar23;
      fVar24 = (fVar27 * fVar21 + fVar16 * auVar19._4_4_ + auVar20._12_4_) - fVar24;
      fVar16 = (fVar28 * fVar21 + fVar17 * auVar19._8_4_ + fVar14) - auVar22._4_4_;
      fVar25 = ((fVar29 * fVar21 - fVar13 * auVar19._12_4_) - fVar15) - fVar25;
    }
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar10) {
LAB_090d8048:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar12 = lVar12 + uVar10 * 0x10;
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + 0x1c;
    *(ulong *)(lVar12 + 0x28) = CONCAT44(fVar25,fVar16);
    *(ulong *)(lVar12 + 0x20) = CONCAT44(fVar24,fVar23);
    if (uVar10 == 0x1a) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


