/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_InitializeMixedReality
ENTRY_POINT: 0534dbb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_15_0__ovrp_InitializeMixedReality
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  uint uVar11;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar12;
  long lVar13;
  long lVar14;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 unaff_s10;
  uint unaff_s11;
  uint unaff_s12;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  puVar5 = System_Xml_Schema_Datatype_anyAtomicType_TypeInfo;
  if (unaff_x21 != (long *)0x0) {
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)System_Xml_Schema_Datatype_anyAtomicType_TypeInfo) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0534dc18;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0();
LAB_0534dc18:
    auVar23 = ZEXT416(unaff_s11);
    auVar25 = ZEXT416(unaff_s12);
    uVar15 = (*(code *)*puVar7)();
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_060fda18(param_1,param_2,param_3,uVar15,unaff_s10,auVar23._0_4_,auVar25._0_4_,
                 &stack0x00000020,0);
    uVar11 = 0;
    unaff_x22[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x22 = in_stack_00000020;
    *(ulong *)((long)unaff_x22 + 0x14) = CONCAT44(in_stack_00000038,uStack0000000000000034);
    *(ulong *)((long)unaff_x22 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    do {
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0534df30;
      FUN_053485f0(&stack0x00000020,*(long *)(unaff_x20 + 0xa8),uVar11);
      uVar15 = uStack000000000000002c;
      lVar8 = *(long *)(unaff_x20 + 0xa0);
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = uStack0000000000000028;
      if (lVar8 == 0) goto LAB_0534df30;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_0534df34;
      plVar12 = *(long **)(lVar8 + (ulong)uVar11 * 8 + 0x20);
      if (plVar12 == (long *)0x0) goto LAB_0534df30;
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_0534dd2c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar5,2);
LAB_0534dd2c:
      (*(code *)*puVar7)(uVar15,plVar12,puVar7[1]);
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0534df30;
      FUN_05348630(*(long *)(unaff_x20 + 0xa8),uVar11);
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x1a);
    lVar8 = *(long *)(unaff_x20 + 0xa8);
    if (lVar8 != 0) {
      FUN_053487b8(lVar8,1);
      puVar6 = UnityEngine_UIElements_PopupField<string>_TypeInfo;
      puVar5 = PTR_DAT_067c90a8;
      uVar9 = 0;
      lVar13 = 0x2c;
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar8 + 0x18);
      do {
        lVar8 = *(long *)puVar6;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar8 = *(long *)puVar6;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0534df34;
        lVar14 = *(long *)(unaff_x19 + 0x48);
        uVar11 = *(uint *)(lVar8 + uVar9 * 4 + 0x20);
        if ((int)uVar11 < 0) {
          if (DAT_06bb42c3 == '\0') {
            FUN_02f08768(puVar5);
            DAT_06bb42c3 = '\x01';
          }
          puVar7 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
          uVar2 = puVar7[1];
          fVar19 = (float)uVar2;
          fVar28 = (float)((ulong)uVar2 >> 0x20);
          uVar2 = *puVar7;
          fVar26 = (float)uVar2;
          fVar27 = (float)((ulong)uVar2 >> 0x20);
        }
        else {
          lVar8 = *(long *)(unaff_x19 + 0x38);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) {
LAB_0534df34:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          lVar8 = lVar8 + (ulong)uVar11 * 0x1c;
          fVar19 = *(float *)(lVar8 + 0x30);
          auVar23 = ZEXT416(*(uint *)(lVar8 + 0x34));
          auVar25 = ZEXT416(*(uint *)(lVar8 + 0x38));
          fVar16 = (float)FUN_060df2e4(*(undefined4 *)(lVar8 + 0x2c),0);
          lVar8 = *(long *)(unaff_x19 + 0x38);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0534df34;
          pauVar1 = (undefined1 (*) [12])(lVar8 + lVar13);
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
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0534df34;
        lVar14 = lVar14 + uVar9 * 0x10;
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 0x1c;
        *(ulong *)(lVar14 + 0x28) = CONCAT44(fVar28,fVar19);
        *(ulong *)(lVar14 + 0x20) = CONCAT44(fVar27,fVar26);
        if (uVar9 == 0x1a) {
          return 1;
        }
      } while( true );
    }
  }
LAB_0534df30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


