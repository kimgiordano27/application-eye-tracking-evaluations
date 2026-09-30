/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetOpenXRInstanceProcAddrFunc
ENTRY_POINT: 090d7c98
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_104_0__ovrp_GetOpenXRInstanceProcAddrFunc(undefined8 *param_1)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 unaff_s10;
  uint unaff_s11;
  uint unaff_s12;
  undefined4 unaff_s14;
  uint unaff_s15;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  auVar23 = ZEXT416(unaff_s15);
  uVar14 = (*(code *)*param_1)();
  puVar4 = PTR_DAT_0ac78b98;
  plVar12 = *(long **)(unaff_x21 + 0x88);
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac78b98) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_090d7d20;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac78b98,2);
LAB_090d7d20:
    auVar26 = ZEXT416(unaff_s11);
    auVar25 = ZEXT416(unaff_s12);
    uVar15 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_0a188128(uVar14,unaff_s14,auVar23._0_4_,uVar15,unaff_s10,auVar26._0_4_,auVar25._0_4_,
                 &stack0x00000020,0);
    uVar11 = 0;
    unaff_x23[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x23 = in_stack_00000020;
    *(ulong *)((long)unaff_x23 + 0x14) = CONCAT44(in_stack_00000038,uStack0000000000000034);
    *(ulong *)((long)unaff_x23 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    do {
      if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_090d8044;
      FUN_090d1de8(&stack0x00000020,*(long *)(unaff_x21 + 0xa8),uVar11);
      uVar14 = uStack000000000000002c;
      lVar8 = *(long *)(unaff_x21 + 0xa0);
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = uStack0000000000000028;
      if (lVar8 == 0) goto LAB_090d8044;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_090d8048;
      plVar12 = *(long **)(lVar8 + (ulong)uVar11 * 8 + 0x20);
      if (plVar12 == (long *)0x0) goto LAB_090d8044;
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_090d7e34;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar12,*(long *)puVar4,2);
LAB_090d7e34:
      (*(code *)*puVar6)(uVar14,plVar12,puVar6[1]);
      if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_090d8044;
      FUN_090d1e28(*(long *)(unaff_x21 + 0xa8),uVar11);
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x1a);
    lVar8 = *(long *)(unaff_x21 + 0xa8);
    if (lVar8 != 0) {
      FUN_090d1fb0(lVar8,1);
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar8 + 0x18);
      thunk_FUN_049ee3d8();
      puVar5 = PTR_DAT_0ac75878;
      puVar4 = PTR_DAT_0ac0f100;
      uVar9 = 0;
      lVar8 = 0x2c;
      do {
        lVar7 = *(long *)puVar5;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar7 = *(long *)puVar5;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_090d8048;
        lVar13 = *(long *)(unaff_x19 + 0x48);
        uVar11 = *(uint *)(lVar7 + uVar9 * 4 + 0x20);
        if ((int)uVar11 < 0) {
          if (DAT_0b31f57b == '\0') {
            FUN_04947ee4(puVar4);
            DAT_0b31f57b = '\x01';
          }
          puVar6 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          uVar2 = puVar6[1];
          fVar19 = (float)uVar2;
          fVar29 = (float)((ulong)uVar2 >> 0x20);
          uVar2 = *puVar6;
          fVar27 = (float)uVar2;
          fVar28 = (float)((ulong)uVar2 >> 0x20);
        }
        else {
          lVar7 = *unaff_x20;
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar11) {
LAB_090d8048:
                    /* WARNING: Subroutine does not return */
            FUN_04948194();
          }
          lVar7 = lVar7 + (ulong)uVar11 * 0x1c;
          fVar19 = *(float *)(lVar7 + 0x30);
          auVar23 = ZEXT416(*(uint *)(lVar7 + 0x34));
          auVar26 = ZEXT416(*(uint *)(lVar7 + 0x38));
          fVar16 = (float)FUN_0a16a578(*(undefined4 *)(lVar7 + 0x2c),0);
          lVar7 = *unaff_x20;
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_090d8048;
          pauVar1 = (undefined1 (*) [12])(lVar7 + lVar8);
          fVar32 = (float)*(undefined8 *)(*pauVar1 + 8);
          fVar33 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
          fVar30 = (float)*(undefined8 *)*pauVar1;
          fVar31 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
          fVar24 = auVar26._0_4_;
          fVar20 = auVar23._0_4_;
          auVar21._4_4_ = fVar33;
          auVar21._0_4_ = fVar33;
          auVar21._8_4_ = fVar33;
          auVar21._12_4_ = fVar33;
          auVar22._12_4_ = fVar33;
          auVar22._0_12_ = *pauVar1;
          auVar22 = NEON_ext(auVar21,auVar22,4,1);
          fVar17 = fVar16 * fVar31;
          fVar18 = fVar19 * fVar31;
          fVar27 = fVar20 * fVar31;
          fVar28 = fVar16 * fVar32;
          fVar29 = fVar20 * fVar32;
          auVar23._4_4_ = fVar17;
          auVar23._0_4_ = fVar20 * fVar30;
          auVar23._8_4_ = fVar19 * fVar32;
          auVar23._12_4_ = fVar18;
          auVar26._4_4_ = fVar17;
          auVar26._0_4_ = fVar20 * fVar30;
          auVar26._8_4_ = fVar19 * fVar32;
          auVar26._12_4_ = fVar18;
          auVar23 = NEON_ext(auVar23,auVar26,4,1);
          auVar25._4_4_ = fVar27;
          auVar25._0_4_ = fVar19 * fVar30;
          auVar25._8_4_ = fVar28;
          auVar25._12_4_ = fVar29;
          auVar3._4_4_ = fVar27;
          auVar3._0_4_ = fVar19 * fVar30;
          auVar3._8_4_ = fVar28;
          auVar3._12_4_ = fVar29;
          auVar26 = NEON_ext(auVar25,auVar3,0xc,1);
          fVar27 = (fVar30 * fVar24 + fVar16 * auVar22._0_4_ + auVar23._4_4_) - fVar27;
          fVar28 = (fVar31 * fVar24 + fVar19 * auVar22._4_4_ + auVar23._12_4_) - fVar28;
          fVar19 = (fVar32 * fVar24 + fVar20 * auVar22._8_4_ + fVar17) - auVar26._4_4_;
          fVar29 = ((fVar33 * fVar24 - fVar16 * auVar22._12_4_) - fVar18) - fVar29;
        }
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_090d8048;
        lVar13 = lVar13 + uVar9 * 0x10;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x1c;
        *(ulong *)(lVar13 + 0x28) = CONCAT44(fVar29,fVar19);
        *(ulong *)(lVar13 + 0x20) = CONCAT44(fVar28,fVar27);
        if (uVar9 == 0x1a) {
          return 1;
        }
      } while( true );
    }
  }
LAB_090d8044:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


