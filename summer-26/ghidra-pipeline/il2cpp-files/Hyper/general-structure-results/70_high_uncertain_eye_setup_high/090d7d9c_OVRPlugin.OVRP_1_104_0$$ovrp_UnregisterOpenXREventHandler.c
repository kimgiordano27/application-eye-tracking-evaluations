/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_UnregisterOpenXREventHandler
ENTRY_POINT: 090d7d9c
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


undefined8 OVRPlugin_OVRP_1_104_0__ovrp_UnregisterOpenXREventHandler(long param_1)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
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
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  while (param_1 != 0) {
    FUN_090d1de8(&stack0x00000020,param_1,unaff_w22);
    uVar8 = uStack000000000000002c;
    lVar11 = *(long *)(unaff_x21 + 0xa0);
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000048 = uStack0000000000000028;
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_090d8048;
    plVar14 = *(long **)(lVar11 + (ulong)unaff_w22 * 8 + 0x20);
    if (plVar14 == (long *)0x0) break;
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_090d7e34;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar14,*unaff_x24,2);
LAB_090d7e34:
    (*(code *)*puVar9)(uVar8,plVar14,puVar9[1]);
    if (*(long *)(unaff_x21 + 0xa8) == 0) break;
    FUN_090d1e28(*(long *)(unaff_x21 + 0xa8),unaff_w22);
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 0x1a) {
      lVar11 = *(long *)(unaff_x21 + 0xa8);
      if (lVar11 != 0) {
        FUN_090d1fb0(lVar11,1);
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar11 + 0x18);
        thunk_FUN_049ee3d8();
        puVar7 = PTR_DAT_0ac75878;
        puVar6 = PTR_DAT_0ac0f100;
        uVar12 = 0;
        lVar11 = 0x2c;
        goto LAB_090d7ed4;
      }
      break;
    }
    param_1 = *(long *)(unaff_x21 + 0xa8);
  }
LAB_090d8044:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
LAB_090d7ed4:
  lVar10 = *(long *)puVar7;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar10 = *(long *)puVar7;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar10 == 0) goto LAB_090d8044;
  if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_090d8048;
  lVar15 = *(long *)(unaff_x19 + 0x48);
  uVar1 = *(uint *)(lVar10 + uVar12 * 4 + 0x20);
  if ((int)uVar1 < 0) {
    if (DAT_0b31f57b == '\0') {
      FUN_04947ee4(puVar6);
      DAT_0b31f57b = '\x01';
    }
    puVar9 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    uVar3 = puVar9[1];
    fVar19 = (float)uVar3;
    fVar28 = (float)((ulong)uVar3 >> 0x20);
    uVar3 = *puVar9;
    fVar26 = (float)uVar3;
    fVar27 = (float)((ulong)uVar3 >> 0x20);
  }
  else {
    lVar10 = *unaff_x20;
    if (lVar10 == 0) goto LAB_090d8044;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) {
LAB_090d8048:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar10 = lVar10 + (ulong)uVar1 * 0x1c;
    fVar19 = *(float *)(lVar10 + 0x30);
    auVar23 = ZEXT416(*(uint *)(lVar10 + 0x34));
    auVar25 = ZEXT416(*(uint *)(lVar10 + 0x38));
    fVar16 = (float)FUN_0a16a578(*(undefined4 *)(lVar10 + 0x2c),0);
    lVar10 = *unaff_x20;
    if (lVar10 == 0) goto LAB_090d8044;
    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_090d8048;
    pauVar2 = (undefined1 (*) [12])(lVar10 + lVar11);
    fVar31 = (float)*(undefined8 *)(*pauVar2 + 8);
    fVar32 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    fVar29 = (float)*(undefined8 *)*pauVar2;
    fVar30 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar24 = auVar25._0_4_;
    fVar20 = auVar23._0_4_;
    auVar21._4_4_ = fVar32;
    auVar21._0_4_ = fVar32;
    auVar21._8_4_ = fVar32;
    auVar21._12_4_ = fVar32;
    auVar22._12_4_ = fVar32;
    auVar22._0_12_ = *pauVar2;
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
    auVar4._4_4_ = fVar26;
    auVar4._0_4_ = fVar19 * fVar29;
    auVar4._8_4_ = fVar27;
    auVar4._12_4_ = fVar28;
    auVar5._4_4_ = fVar26;
    auVar5._0_4_ = fVar19 * fVar29;
    auVar5._8_4_ = fVar27;
    auVar5._12_4_ = fVar28;
    auVar25 = NEON_ext(auVar4,auVar5,0xc,1);
    fVar26 = (fVar29 * fVar24 + fVar16 * auVar22._0_4_ + auVar23._4_4_) - fVar26;
    fVar27 = (fVar30 * fVar24 + fVar19 * auVar22._4_4_ + auVar23._12_4_) - fVar27;
    fVar19 = (fVar31 * fVar24 + fVar20 * auVar22._8_4_ + fVar17) - auVar25._4_4_;
    fVar28 = ((fVar32 * fVar24 - fVar16 * auVar22._12_4_) - fVar18) - fVar28;
  }
  if (lVar15 == 0) goto LAB_090d8044;
  if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_090d8048;
  lVar15 = lVar15 + uVar12 * 0x10;
  uVar12 = uVar12 + 1;
  lVar11 = lVar11 + 0x1c;
  *(ulong *)(lVar15 + 0x28) = CONCAT44(fVar28,fVar19);
  *(ulong *)(lVar15 + 0x20) = CONCAT44(fVar27,fVar26);
  if (uVar12 == 0x1a) {
    return 1;
  }
  goto LAB_090d7ed4;
}


