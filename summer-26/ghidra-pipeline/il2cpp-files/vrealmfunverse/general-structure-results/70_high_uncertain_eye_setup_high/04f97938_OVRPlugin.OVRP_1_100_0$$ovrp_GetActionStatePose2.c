/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$ovrp_GetActionStatePose2
ENTRY_POINT: 04f97938
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_100_0__ovrp_GetActionStatePose2(void)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint uVar35;
  uint uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x22 + 0xdfe) = 1;
  uVar10 = *(undefined8 *)(unaff_x21 + 0x80);
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar5 = FUN_05c8e378(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(unaff_x21 + 0x80) != 0) && (unaff_x19 != 0)) {
    fVar32 = *(float *)(*(long *)(unaff_x21 + 0x80) + 0x3c);
    uVar37 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar38 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar39 = *(uint *)(unaff_x19 + 0x1c);
    uVar33 = *(undefined4 *)(unaff_x19 + 0x20);
    uVar34 = *(undefined4 *)(unaff_x19 + 0x24);
    uVar35 = *(uint *)(unaff_x19 + 0x28);
    plVar11 = (long *)(unaff_x19 + 0x38);
    uVar36 = *(uint *)(unaff_x19 + 0x2c);
    uVar12 = *(undefined8 *)(unaff_x21 + 0xa8);
    uVar10 = FUN_031c92ac(*plVar11,*(undefined8 *)System_Func<Assembly,_IEnumerable<Type>>_TypeInfo)
    ;
                    /* try { // try from 04f979b4 to 050979bb has its CatchHandler @ 04f97a78 */
    FUN_04f92244(uVar12,uVar10,0);
    plVar13 = *(long **)(unaff_x21 + 0x90);
    if (plVar13 != (long *)0x0) {
      lVar8 = *plVar13;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)System_Comparison<Event>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_04f97a2c;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)System_Comparison<Event>_TypeInfo,2);
LAB_04f97a2c:
      auVar22 = ZEXT416(uVar39);
      uVar37 = (*(code *)*puVar6)(uVar37,uVar38,plVar13,puVar6[1]);
      puVar3 = System_Collections_Generic_Dictionary<uint,_Glyph>_TypeInfo;
      plVar13 = *(long **)(unaff_x21 + 0x88);
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)System_Collections_Generic_Dictionary<uint,_Glyph>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_04f97ab4;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_02b7654c(plVar13,*(long *)
                                       System_Collections_Generic_Dictionary<uint,_Glyph>_TypeInfo,2
                             );
LAB_04f97ab4:
        auVar25 = ZEXT416(uVar35);
        auVar24 = ZEXT416(uVar36);
        uVar33 = (*(code *)*puVar6)(uVar33,uVar34,auVar25,auVar24,1.0 / fVar32,plVar13,puVar6[1]);
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_05c99d80(uVar37,uVar38,auVar22._0_4_,uVar33,uVar34,auVar25._0_4_,auVar24._0_4_,
                     &stack0x00000020,0);
        uVar35 = 0;
        *(ulong *)(unaff_x19 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
        *(ulong *)(unaff_x19 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(unaff_x19 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        do {
          if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_04f97dd8;
          FUN_04f91b7c(&stack0x00000020,*(long *)(unaff_x21 + 0xa8),uVar35);
          uVar38 = uStack000000000000002c;
          lVar8 = *(long *)(unaff_x21 + 0xa0);
          in_stack_00000040 = in_stack_00000020;
          in_stack_00000048 = uStack0000000000000028;
          if (lVar8 == 0) goto LAB_04f97dd8;
          if (*(uint *)(lVar8 + 0x18) <= uVar35) goto LAB_04f97ddc;
          plVar13 = *(long **)(lVar8 + (ulong)uVar35 * 8 + 0x20);
          if (plVar13 == (long *)0x0) goto LAB_04f97dd8;
          lVar8 = *plVar13;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_04f97bc8;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar3,2);
LAB_04f97bc8:
          (*(code *)*puVar6)(uVar38,plVar13,puVar6[1]);
          if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_04f97dd8;
          FUN_04f91bbc(*(long *)(unaff_x21 + 0xa8),uVar35);
          uVar35 = uVar35 + 1;
        } while (uVar35 != 0x1a);
        lVar8 = *(long *)(unaff_x21 + 0xa8);
        if (lVar8 != 0) {
          FUN_04f91d44(lVar8,1);
          *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar8 + 0x18);
          thunk_FUN_02bb0e9c(plVar11);
          puVar4 = System_ComponentModel_Design_IDictionaryService_var;
          puVar3 = PTR_DAT_06312cd8;
          uVar5 = 0;
          lVar8 = 0x2c;
          do {
            lVar7 = *(long *)puVar4;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar7 = *(long *)puVar4;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_04f97ddc;
            lVar14 = *(long *)(unaff_x19 + 0x48);
            uVar35 = *(uint *)(lVar7 + uVar5 * 4 + 0x20);
            if ((int)uVar35 < 0) {
              if (DAT_066c1d9a == '\0') {
                FUN_02b3c81c(puVar3);
                DAT_066c1d9a = '\x01';
              }
              puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
              uVar10 = puVar6[1];
              fVar18 = (float)uVar10;
              fVar27 = (float)((ulong)uVar10 >> 0x20);
              uVar10 = *puVar6;
              fVar32 = (float)uVar10;
              fVar26 = (float)((ulong)uVar10 >> 0x20);
            }
            else {
              lVar7 = *plVar11;
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar35) {
LAB_04f97ddc:
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              lVar7 = lVar7 + (ulong)uVar35 * 0x1c;
              fVar18 = *(float *)(lVar7 + 0x30);
              auVar22 = ZEXT416(*(uint *)(lVar7 + 0x34));
              auVar25 = ZEXT416(*(uint *)(lVar7 + 0x38));
              fVar15 = (float)FUN_05c7b504(*(undefined4 *)(lVar7 + 0x2c),0);
              lVar7 = *plVar11;
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_04f97ddc;
              pauVar1 = (undefined1 (*) [12])(lVar7 + lVar8);
              fVar30 = (float)*(undefined8 *)(*pauVar1 + 8);
              fVar31 = (float)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
              fVar28 = (float)*(undefined8 *)*pauVar1;
              fVar29 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
              fVar23 = auVar25._0_4_;
              fVar19 = auVar22._0_4_;
              auVar20._4_4_ = fVar31;
              auVar20._0_4_ = fVar31;
              auVar20._8_4_ = fVar31;
              auVar20._12_4_ = fVar31;
              auVar21._12_4_ = fVar31;
              auVar21._0_12_ = *pauVar1;
              auVar21 = NEON_ext(auVar20,auVar21,4,1);
              fVar16 = fVar15 * fVar29;
              fVar17 = fVar18 * fVar29;
              fVar32 = fVar19 * fVar29;
              fVar26 = fVar15 * fVar30;
              fVar27 = fVar19 * fVar30;
              auVar22._4_4_ = fVar16;
              auVar22._0_4_ = fVar19 * fVar28;
              auVar22._8_4_ = fVar18 * fVar30;
              auVar22._12_4_ = fVar17;
              auVar25._4_4_ = fVar16;
              auVar25._0_4_ = fVar19 * fVar28;
              auVar25._8_4_ = fVar18 * fVar30;
              auVar25._12_4_ = fVar17;
              auVar22 = NEON_ext(auVar22,auVar25,4,1);
              auVar24._4_4_ = fVar32;
              auVar24._0_4_ = fVar18 * fVar28;
              auVar24._8_4_ = fVar26;
              auVar24._12_4_ = fVar27;
              auVar2._4_4_ = fVar32;
              auVar2._0_4_ = fVar18 * fVar28;
              auVar2._8_4_ = fVar26;
              auVar2._12_4_ = fVar27;
              auVar25 = NEON_ext(auVar24,auVar2,0xc,1);
              fVar32 = (fVar28 * fVar23 + fVar15 * auVar21._0_4_ + auVar22._4_4_) - fVar32;
              fVar26 = (fVar29 * fVar23 + fVar18 * auVar21._4_4_ + auVar22._12_4_) - fVar26;
              fVar18 = (fVar30 * fVar23 + fVar19 * auVar21._8_4_ + fVar16) - auVar25._4_4_;
              fVar27 = ((fVar31 * fVar23 - fVar15 * auVar21._12_4_) - fVar17) - fVar27;
            }
            if (lVar14 == 0) break;
            if (*(uint *)(lVar14 + 0x18) <= uVar5) goto LAB_04f97ddc;
            lVar14 = lVar14 + uVar5 * 0x10;
            uVar5 = uVar5 + 1;
            lVar8 = lVar8 + 0x1c;
            *(ulong *)(lVar14 + 0x28) = CONCAT44(fVar27,fVar18);
            *(ulong *)(lVar14 + 0x20) = CONCAT44(fVar26,fVar32);
            if (uVar5 == 0x1a) {
              return 1;
            }
          } while( true );
        }
      }
    }
  }
LAB_04f97dd8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


