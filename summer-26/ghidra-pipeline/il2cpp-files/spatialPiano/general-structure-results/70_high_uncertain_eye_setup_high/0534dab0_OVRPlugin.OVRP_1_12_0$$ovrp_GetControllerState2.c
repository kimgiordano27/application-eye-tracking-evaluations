/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetControllerState2
ENTRY_POINT: 0534dab0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_12_0__ovrp_GetControllerState2(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
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
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  uint uVar38;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_060f245c(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(unaff_x20 + 0x80) != 0) && (unaff_x19 != 0)) {
    fVar31 = *(float *)(*(long *)(unaff_x20 + 0x80) + 0x3c);
    uVar36 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar37 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar38 = *(uint *)(unaff_x19 + 0x1c);
    uVar32 = *(undefined4 *)(unaff_x19 + 0x20);
    uVar33 = *(undefined4 *)(unaff_x19 + 0x24);
    uVar34 = *(uint *)(unaff_x19 + 0x28);
    uVar35 = *(uint *)(unaff_x19 + 0x2c);
    uVar10 = *(undefined8 *)(unaff_x20 + 0xa8);
    uVar9 = FUN_033a6754(*(undefined8 *)(unaff_x19 + 0x38),
                         *(undefined8 *)Unity_Collections_FixedString64Bytes_TypeInfo);
    FUN_05348cb8(uVar10,uVar9,0);
    plVar11 = *(long **)(unaff_x20 + 0x90);
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)Unity_AppUI_UI_BaseTextElement_TypeInfo) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0534db90;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02f421d0(plVar11,*(long *)Unity_AppUI_UI_BaseTextElement_TypeInfo,2);
LAB_0534db90:
      auVar21 = ZEXT416(uVar38);
      uVar36 = (*(code *)*puVar6)(uVar36,uVar37,plVar11,puVar6[1]);
      puVar3 = System_Xml_Schema_Datatype_anyAtomicType_TypeInfo;
      plVar11 = *(long **)(unaff_x20 + 0x88);
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)System_Xml_Schema_Datatype_anyAtomicType_TypeInfo
               ) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_0534dc18;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_02f421d0(plVar11,*(long *)System_Xml_Schema_Datatype_anyAtomicType_TypeInfo,2);
LAB_0534dc18:
        auVar24 = ZEXT416(uVar34);
        auVar23 = ZEXT416(uVar35);
        uVar32 = (*(code *)*puVar6)(uVar32,uVar33,auVar24,auVar23,1.0 / fVar31,plVar11,puVar6[1]);
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_060fda18(uVar36,uVar37,auVar21._0_4_,uVar32,uVar33,auVar24._0_4_,auVar23._0_4_,
                     &stack0x00000020,0);
        uVar34 = 0;
        *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
        *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(unaff_x19 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        do {
          if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0534df30;
          FUN_053485f0(&stack0x00000020,*(long *)(unaff_x20 + 0xa8),uVar34);
          uVar37 = uStack000000000000002c;
          lVar7 = *(long *)(unaff_x20 + 0xa0);
          uStack0000000000000040 = in_stack_00000020;
          uStack0000000000000048 = uStack0000000000000028;
          if (lVar7 == 0) goto LAB_0534df30;
          if (*(uint *)(lVar7 + 0x18) <= uVar34) goto LAB_0534df34;
          plVar11 = *(long **)(lVar7 + (ulong)uVar34 * 8 + 0x20);
          if (plVar11 == (long *)0x0) goto LAB_0534df30;
          lVar7 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_0534dd2c;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,2);
LAB_0534dd2c:
          (*(code *)*puVar6)(uVar37,plVar11,puVar6[1]);
          if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0534df30;
          FUN_05348630(*(long *)(unaff_x20 + 0xa8),uVar34);
          uVar34 = uVar34 + 1;
        } while (uVar34 != 0x1a);
        lVar7 = *(long *)(unaff_x20 + 0xa8);
        if (lVar7 != 0) {
          FUN_053487b8(lVar7,1);
          puVar4 = UnityEngine_UIElements_PopupField<string>_TypeInfo;
          puVar3 = PTR_DAT_067c90a8;
          uVar5 = 0;
          lVar12 = 0x2c;
          *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar7 + 0x18);
          do {
            lVar7 = *(long *)puVar4;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar7 = *(long *)puVar4;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_0534df34;
            lVar13 = *(long *)(unaff_x19 + 0x48);
            uVar34 = *(uint *)(lVar7 + uVar5 * 4 + 0x20);
            if ((int)uVar34 < 0) {
              if (DAT_06bb42c3 == '\0') {
                FUN_02f08768(puVar3);
                DAT_06bb42c3 = '\x01';
              }
              puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
              uVar9 = puVar6[1];
              fVar17 = (float)uVar9;
              fVar26 = (float)((ulong)uVar9 >> 0x20);
              uVar9 = *puVar6;
              fVar31 = (float)uVar9;
              fVar25 = (float)((ulong)uVar9 >> 0x20);
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x38);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar34) {
LAB_0534df34:
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              lVar7 = lVar7 + (ulong)uVar34 * 0x1c;
              fVar17 = *(float *)(lVar7 + 0x30);
              auVar21 = ZEXT416(*(uint *)(lVar7 + 0x34));
              auVar24 = ZEXT416(*(uint *)(lVar7 + 0x38));
              fVar14 = (float)FUN_060df2e4(*(undefined4 *)(lVar7 + 0x2c),0);
              lVar7 = *(long *)(unaff_x19 + 0x38);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_0534df34;
              pauVar1 = (undefined1 (*) [12])(lVar7 + lVar12);
              fVar29 = (float)*(undefined8 *)(*pauVar1 + 8);
              fVar30 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
              fVar27 = (float)*(undefined8 *)*pauVar1;
              fVar28 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
              fVar22 = auVar24._0_4_;
              fVar18 = auVar21._0_4_;
              auVar19._4_4_ = fVar30;
              auVar19._0_4_ = fVar30;
              auVar19._8_4_ = fVar30;
              auVar19._12_4_ = fVar30;
              auVar20._12_4_ = fVar30;
              auVar20._0_12_ = *pauVar1;
              auVar20 = NEON_ext(auVar19,auVar20,4,1);
              fVar15 = fVar14 * fVar28;
              fVar16 = fVar17 * fVar28;
              fVar31 = fVar18 * fVar28;
              fVar25 = fVar14 * fVar29;
              fVar26 = fVar18 * fVar29;
              auVar21._4_4_ = fVar15;
              auVar21._0_4_ = fVar18 * fVar27;
              auVar21._8_4_ = fVar17 * fVar29;
              auVar21._12_4_ = fVar16;
              auVar24._4_4_ = fVar15;
              auVar24._0_4_ = fVar18 * fVar27;
              auVar24._8_4_ = fVar17 * fVar29;
              auVar24._12_4_ = fVar16;
              auVar21 = NEON_ext(auVar21,auVar24,4,1);
              auVar23._4_4_ = fVar31;
              auVar23._0_4_ = fVar17 * fVar27;
              auVar23._8_4_ = fVar25;
              auVar23._12_4_ = fVar26;
              auVar2._4_4_ = fVar31;
              auVar2._0_4_ = fVar17 * fVar27;
              auVar2._8_4_ = fVar25;
              auVar2._12_4_ = fVar26;
              auVar24 = NEON_ext(auVar23,auVar2,0xc,1);
              fVar31 = (fVar27 * fVar22 + fVar14 * auVar20._0_4_ + auVar21._4_4_) - fVar31;
              fVar25 = (fVar28 * fVar22 + fVar17 * auVar20._4_4_ + auVar21._12_4_) - fVar25;
              fVar17 = (fVar29 * fVar22 + fVar18 * auVar20._8_4_ + fVar15) - auVar24._4_4_;
              fVar26 = ((fVar30 * fVar22 - fVar14 * auVar20._12_4_) - fVar16) - fVar26;
            }
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= uVar5) goto LAB_0534df34;
            lVar13 = lVar13 + uVar5 * 0x10;
            uVar5 = uVar5 + 1;
            lVar12 = lVar12 + 0x1c;
            *(ulong *)(lVar13 + 0x28) = CONCAT44(fVar26,fVar17);
            *(ulong *)(lVar13 + 0x20) = CONCAT44(fVar25,fVar31);
            if (uVar5 == 0x1a) {
              return 1;
            }
          } while( true );
        }
      }
    }
  }
LAB_0534df30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


