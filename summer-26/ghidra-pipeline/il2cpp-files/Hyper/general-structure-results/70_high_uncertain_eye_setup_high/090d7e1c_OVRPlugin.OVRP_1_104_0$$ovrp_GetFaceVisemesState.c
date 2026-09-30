/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetFaceVisemesState
ENTRY_POINT: 090d7e1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_104_0__ovrp_GetFaceVisemesState(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar11;
  ulong unaff_x22;
  long *unaff_x23;
  ulong uVar12;
  long *unaff_x24;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 unaff_s9;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    puVar8 = (undefined8 *)FUN_04980e68(param_1,param_2,param_3);
    param_1 = unaff_x23;
    while( true ) {
      (*(code *)*puVar8)(unaff_s9,param_1,puVar8[1]);
      if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_090d8044;
      FUN_090d1e28(*(long *)(unaff_x21 + 0xa8),unaff_x22 & 0xffffffff);
      uVar1 = (int)unaff_x22 + 1;
      unaff_x22 = (ulong)uVar1;
      if (uVar1 == 0x1a) {
        lVar11 = *(long *)(unaff_x21 + 0xa8);
        if (lVar11 == 0) goto LAB_090d8044;
        FUN_090d1fb0(lVar11,1);
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar11 + 0x18);
        thunk_FUN_049ee3d8();
        puVar7 = PTR_DAT_0ac75878;
        puVar6 = PTR_DAT_0ac0f100;
        uVar12 = 0;
        lVar11 = 0x2c;
        goto LAB_090d7ed4;
      }
      if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_090d8044;
      FUN_090d1de8(&stack0x00000020,*(long *)(unaff_x21 + 0xa8),unaff_x22);
      lVar11 = *(long *)(unaff_x21 + 0xa0);
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = uStack0000000000000028;
      if (lVar11 == 0) goto LAB_090d8044;
      if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_090d8048;
      param_1 = *(long **)(lVar11 + unaff_x22 * 8 + 0x20);
      if (param_1 == (long *)0x0) goto LAB_090d8044;
      lVar11 = *param_1;
      param_2 = *unaff_x24;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      unaff_s9 = uStack000000000000002c;
      if (uVar12 == 0) break;
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      while (*(long *)(piVar10 + -2) != param_2) {
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
        if (uVar12 == 0) goto LAB_090d7e14;
      }
      puVar8 = (undefined8 *)(lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
    }
LAB_090d7e14:
    param_3 = 2;
    unaff_x23 = param_1;
  } while( true );
LAB_090d7ed4:
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar9 = *(long *)puVar7;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar9 == 0) goto LAB_090d8044;
  if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_090d8048;
  lVar13 = *(long *)(unaff_x19 + 0x48);
  uVar1 = *(uint *)(lVar9 + uVar12 * 4 + 0x20);
  if ((int)uVar1 < 0) {
    if (DAT_0b31f57b == '\0') {
      FUN_04947ee4(puVar6);
      DAT_0b31f57b = '\x01';
    }
    puVar8 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    uVar3 = puVar8[1];
    fVar17 = (float)uVar3;
    fVar26 = (float)((ulong)uVar3 >> 0x20);
    uVar3 = *puVar8;
    fVar24 = (float)uVar3;
    fVar25 = (float)((ulong)uVar3 >> 0x20);
  }
  else {
    lVar9 = *unaff_x20;
    if (lVar9 == 0) {
LAB_090d8044:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar1) {
LAB_090d8048:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar9 = lVar9 + (ulong)uVar1 * 0x1c;
    fVar17 = *(float *)(lVar9 + 0x30);
    auVar21 = ZEXT416(*(uint *)(lVar9 + 0x34));
    auVar23 = ZEXT416(*(uint *)(lVar9 + 0x38));
    fVar14 = (float)FUN_0a16a578(*(undefined4 *)(lVar9 + 0x2c),0);
    lVar9 = *unaff_x20;
    if (lVar9 == 0) goto LAB_090d8044;
    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_090d8048;
    pauVar2 = (undefined1 (*) [12])(lVar9 + lVar11);
    fVar29 = (float)*(undefined8 *)(*pauVar2 + 8);
    fVar30 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    fVar27 = (float)*(undefined8 *)*pauVar2;
    fVar28 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar22 = auVar23._0_4_;
    fVar18 = auVar21._0_4_;
    auVar19._4_4_ = fVar30;
    auVar19._0_4_ = fVar30;
    auVar19._8_4_ = fVar30;
    auVar19._12_4_ = fVar30;
    auVar20._12_4_ = fVar30;
    auVar20._0_12_ = *pauVar2;
    auVar20 = NEON_ext(auVar19,auVar20,4,1);
    fVar15 = fVar14 * fVar28;
    fVar16 = fVar17 * fVar28;
    fVar24 = fVar18 * fVar28;
    fVar25 = fVar14 * fVar29;
    fVar26 = fVar18 * fVar29;
    auVar21._4_4_ = fVar15;
    auVar21._0_4_ = fVar18 * fVar27;
    auVar21._8_4_ = fVar17 * fVar29;
    auVar21._12_4_ = fVar16;
    auVar23._4_4_ = fVar15;
    auVar23._0_4_ = fVar18 * fVar27;
    auVar23._8_4_ = fVar17 * fVar29;
    auVar23._12_4_ = fVar16;
    auVar21 = NEON_ext(auVar21,auVar23,4,1);
    auVar4._4_4_ = fVar24;
    auVar4._0_4_ = fVar17 * fVar27;
    auVar4._8_4_ = fVar25;
    auVar4._12_4_ = fVar26;
    auVar5._4_4_ = fVar24;
    auVar5._0_4_ = fVar17 * fVar27;
    auVar5._8_4_ = fVar25;
    auVar5._12_4_ = fVar26;
    auVar23 = NEON_ext(auVar4,auVar5,0xc,1);
    fVar24 = (fVar27 * fVar22 + fVar14 * auVar20._0_4_ + auVar21._4_4_) - fVar24;
    fVar25 = (fVar28 * fVar22 + fVar17 * auVar20._4_4_ + auVar21._12_4_) - fVar25;
    fVar17 = (fVar29 * fVar22 + fVar18 * auVar20._8_4_ + fVar15) - auVar23._4_4_;
    fVar26 = ((fVar30 * fVar22 - fVar14 * auVar20._12_4_) - fVar16) - fVar26;
  }
  if (lVar13 == 0) goto LAB_090d8044;
  if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_090d8048;
  lVar13 = lVar13 + uVar12 * 0x10;
  uVar12 = uVar12 + 1;
  lVar11 = lVar11 + 0x1c;
  *(ulong *)(lVar13 + 0x28) = CONCAT44(fVar26,fVar17);
  *(ulong *)(lVar13 + 0x20) = CONCAT44(fVar25,fVar24);
  if (uVar12 == 0x1a) {
    return 1;
  }
  goto LAB_090d7ed4;
}


