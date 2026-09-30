/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$.cctor
ENTRY_POINT: 0534db34
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_12_0___cctor(void)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  uint uVar10;
  long *unaff_x21;
  long *plVar11;
  undefined8 *unaff_x22;
  long lVar12;
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
  
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Unity_AppUI_UI_BaseTextElement_TypeInfo) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_0534db90;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_02f421d0();
LAB_0534db90:
  auVar23 = ZEXT416(unaff_s15);
  uVar14 = (*(code *)*puVar6)();
  puVar4 = System_Xml_Schema_Datatype_anyAtomicType_TypeInfo;
  plVar11 = *(long **)(unaff_x20 + 0x88);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)System_Xml_Schema_Datatype_anyAtomicType_TypeInfo) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0534dc18;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02f421d0(plVar11,*(long *)System_Xml_Schema_Datatype_anyAtomicType_TypeInfo,2);
LAB_0534dc18:
    auVar26 = ZEXT416(unaff_s11);
    auVar25 = ZEXT416(unaff_s12);
    uVar15 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_060fda18(uVar14,unaff_s14,auVar23._0_4_,uVar15,unaff_s10,auVar26._0_4_,auVar25._0_4_,
                 &stack0x00000020,0);
    uVar10 = 0;
    unaff_x22[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x22 = in_stack_00000020;
    *(ulong *)((long)unaff_x22 + 0x14) = CONCAT44(in_stack_00000038,uStack0000000000000034);
    *(ulong *)((long)unaff_x22 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    do {
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0534df30;
      FUN_053485f0(&stack0x00000020,*(long *)(unaff_x20 + 0xa8),uVar10);
      uVar14 = uStack000000000000002c;
      lVar7 = *(long *)(unaff_x20 + 0xa0);
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = uStack0000000000000028;
      if (lVar7 == 0) goto LAB_0534df30;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_0534df34;
      plVar11 = *(long **)(lVar7 + (ulong)uVar10 * 8 + 0x20);
      if (plVar11 == (long *)0x0) goto LAB_0534df30;
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0534dd2c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar4,2);
LAB_0534dd2c:
      (*(code *)*puVar6)(uVar14,plVar11,puVar6[1]);
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0534df30;
      FUN_05348630(*(long *)(unaff_x20 + 0xa8),uVar10);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x1a);
    lVar7 = *(long *)(unaff_x20 + 0xa8);
    if (lVar7 != 0) {
      FUN_053487b8(lVar7,1);
      puVar5 = UnityEngine_UIElements_PopupField<string>_TypeInfo;
      puVar4 = PTR_DAT_067c90a8;
      uVar8 = 0;
      lVar12 = 0x2c;
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar7 + 0x18);
      do {
        lVar7 = *(long *)puVar5;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar7 = *(long *)puVar5;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_0534df34;
        lVar13 = *(long *)(unaff_x19 + 0x48);
        uVar10 = *(uint *)(lVar7 + uVar8 * 4 + 0x20);
        if ((int)uVar10 < 0) {
          if (DAT_06bb42c3 == '\0') {
            FUN_02f08768(puVar4);
            DAT_06bb42c3 = '\x01';
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
          lVar7 = *(long *)(unaff_x19 + 0x38);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar10) {
LAB_0534df34:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          lVar7 = lVar7 + (ulong)uVar10 * 0x1c;
          fVar19 = *(float *)(lVar7 + 0x30);
          auVar23 = ZEXT416(*(uint *)(lVar7 + 0x34));
          auVar26 = ZEXT416(*(uint *)(lVar7 + 0x38));
          fVar16 = (float)FUN_060df2e4(*(undefined4 *)(lVar7 + 0x2c),0);
          lVar7 = *(long *)(unaff_x19 + 0x38);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_0534df34;
          pauVar1 = (undefined1 (*) [12])(lVar7 + lVar12);
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
        if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0534df34;
        lVar13 = lVar13 + uVar8 * 0x10;
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 0x1c;
        *(ulong *)(lVar13 + 0x28) = CONCAT44(fVar29,fVar19);
        *(ulong *)(lVar13 + 0x20) = CONCAT44(fVar28,fVar27);
        if (uVar8 == 0x1a) {
          return 1;
        }
      } while( true );
    }
  }
LAB_0534df30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


