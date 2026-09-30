/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_RegisterOpenXREventHandler
ENTRY_POINT: 090d7d14
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_104_0__ovrp_RegisterOpenXREventHandler(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int in_w9;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar13;
  undefined8 *unaff_x23;
  long *plVar14;
  long *unaff_x24;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  (**(code **)(param_1 + (long)(in_w9 + 2) * 0x10 + 0x138))();
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  FUN_0a188128(&stack0x00000020,0);
  uVar13 = 0;
  unaff_x23[1] = CONCAT44(uStack000000000000002c,in_stack_00000028);
  *unaff_x23 = in_stack_00000020;
  *(ulong *)((long)unaff_x23 + 0x14) = CONCAT44(in_stack_00000038,uStack0000000000000034);
  *(ulong *)((long)unaff_x23 + 0xc) = CONCAT44(in_stack_00000030,uStack000000000000002c);
  do {
    if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_090d8044;
    FUN_090d1de8(&stack0x00000020,*(long *)(unaff_x21 + 0xa8),uVar13);
    uVar7 = uStack000000000000002c;
    lVar10 = *(long *)(unaff_x21 + 0xa0);
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000048 = in_stack_00000028;
    if (lVar10 == 0) goto LAB_090d8044;
    if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_090d8048;
    plVar14 = *(long **)(lVar10 + (ulong)uVar13 * 8 + 0x20);
    if (plVar14 == (long *)0x0) goto LAB_090d8044;
    lVar10 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_090d7e34;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_04980e68(plVar14,*unaff_x24,2);
LAB_090d7e34:
    (*(code *)*puVar8)(uVar7,plVar14,puVar8[1]);
    if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_090d8044;
    FUN_090d1e28(*(long *)(unaff_x21 + 0xa8),uVar13);
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x1a);
  lVar10 = *(long *)(unaff_x21 + 0xa8);
  if (lVar10 == 0) {
LAB_090d8044:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_090d1fb0(lVar10,1);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar10 + 0x18);
  thunk_FUN_049ee3d8();
  puVar6 = PTR_DAT_0ac75878;
  puVar5 = PTR_DAT_0ac0f100;
  uVar11 = 0;
  lVar10 = 0x2c;
  do {
    lVar9 = *(long *)puVar6;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar9 = *(long *)puVar6;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_090d8044;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_090d8048;
    lVar15 = *(long *)(unaff_x19 + 0x48);
    uVar13 = *(uint *)(lVar9 + uVar11 * 4 + 0x20);
    if ((int)uVar13 < 0) {
      if (DAT_0b31f57b == '\0') {
        FUN_04947ee4(puVar5);
        DAT_0b31f57b = '\x01';
      }
      puVar8 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
      uVar2 = puVar8[1];
      fVar19 = (float)uVar2;
      fVar28 = (float)((ulong)uVar2 >> 0x20);
      uVar2 = *puVar8;
      fVar26 = (float)uVar2;
      fVar27 = (float)((ulong)uVar2 >> 0x20);
    }
    else {
      lVar9 = *unaff_x20;
      if (lVar9 == 0) goto LAB_090d8044;
      if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_090d8048:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      lVar9 = lVar9 + (ulong)uVar13 * 0x1c;
      fVar19 = *(float *)(lVar9 + 0x30);
      auVar23 = ZEXT416(*(uint *)(lVar9 + 0x34));
      auVar25 = ZEXT416(*(uint *)(lVar9 + 0x38));
      fVar16 = (float)FUN_0a16a578(*(undefined4 *)(lVar9 + 0x2c),0);
      lVar9 = *unaff_x20;
      if (lVar9 == 0) goto LAB_090d8044;
      if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_090d8048;
      pauVar1 = (undefined1 (*) [12])(lVar9 + lVar10);
      fVar31 = (float)*(undefined8 *)(*pauVar1 + 8);
      fVar32 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
      fVar29 = (float)*(undefined8 *)*pauVar1;
      fVar30 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar24 = auVar25._0_4_;
      fVar20 = auVar23._0_4_;
      auVar21._4_4_ = fVar32;
      auVar21._0_4_ = fVar32;
      auVar21._8_4_ = fVar32;
      auVar21._12_4_ = fVar32;
      auVar22._12_4_ = fVar32;
      auVar22._0_12_ = *pauVar1;
      auVar22 = NEON_ext(auVar21,auVar22,4,1);
      fVar17 = fVar16 * fVar30;
      fVar18 = fVar19 * fVar30;
      fVar26 = fVar20 * fVar30;
      fVar27 = fVar16 * fVar31;
      fVar28 = fVar20 * fVar31;
      auVar23._4_4_ = fVar17;
      auVar23._0_4_ = fVar20 * fVar29;
      auVar23._8_4_ = fVar19 * fVar31;
      auVar23._12_4_ = fVar18;
      auVar25._4_4_ = fVar17;
      auVar25._0_4_ = fVar20 * fVar29;
      auVar25._8_4_ = fVar19 * fVar31;
      auVar25._12_4_ = fVar18;
      auVar23 = NEON_ext(auVar23,auVar25,4,1);
      auVar3._4_4_ = fVar26;
      auVar3._0_4_ = fVar19 * fVar29;
      auVar3._8_4_ = fVar27;
      auVar3._12_4_ = fVar28;
      auVar4._4_4_ = fVar26;
      auVar4._0_4_ = fVar19 * fVar29;
      auVar4._8_4_ = fVar27;
      auVar4._12_4_ = fVar28;
      auVar25 = NEON_ext(auVar3,auVar4,0xc,1);
      fVar26 = (fVar29 * fVar24 + fVar16 * auVar22._0_4_ + auVar23._4_4_) - fVar26;
      fVar27 = (fVar30 * fVar24 + fVar19 * auVar22._4_4_ + auVar23._12_4_) - fVar27;
      fVar19 = (fVar31 * fVar24 + fVar20 * auVar22._8_4_ + fVar17) - auVar25._4_4_;
      fVar28 = ((fVar32 * fVar24 - fVar16 * auVar22._12_4_) - fVar18) - fVar28;
    }
    if (lVar15 == 0) goto LAB_090d8044;
    if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_090d8048;
    lVar15 = lVar15 + uVar11 * 0x10;
    uVar11 = uVar11 + 1;
    lVar10 = lVar10 + 0x1c;
    *(ulong *)(lVar15 + 0x28) = CONCAT44(fVar28,fVar19);
    *(ulong *)(lVar15 + 0x20) = CONCAT44(fVar27,fVar26);
    if (uVar11 == 0x1a) {
      return 1;
    }
  } while( true );
}


