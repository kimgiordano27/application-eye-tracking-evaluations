/*
FUNCTION_NAME: Unity.VisualScripting.VariableDeclarationCollection$$Unity.VisualScripting.IKeyedCollection<System.String,Unity.VisualScripting.VariableDeclaration>.get_Item
ENTRY_POINT: 071d0bb8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;telemetry_or_network_hits_3;eye_or_gaze_keyword_boost_only;functionality_possible_biometrics_hits_4
*/


void Unity_VisualScripting_VariableDeclarationCollection__Unity_VisualScripting_IKeyedCollection<System_String,Unity_VisualScripting_VariableDeclaration>_get_Item
               (long param_1)

{
  byte bVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  int *piVar20;
  long unaff_x19;
  undefined8 unaff_x21;
  long *unaff_x22;
  int iVar21;
  long unaff_x27;
  long *plVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x660));
  FUN_0373b518(System_Func<HapticEffect,_bool>_TypeInfo);
  FUN_0373b518(System_Func<HapticSample,_bool>_TypeInfo);
  FUN_0373b518(System_Func<IEnumerable<ClaimsIdentity>,_ClaimsIdentity>_TypeInfo);
  FUN_0373b518(PTR_DAT_07d86398);
  FUN_0373b518(
              System_Func<IGrouping<int,_DivrPostProcessController_ColorAdjustmentsSetting>,_int>_TypeInfo
              );
  FUN_0373b518(System_Func<TextGenerator>_TypeInfo);
  FUN_0373b518(System_Func<HierarchyNode,_HierarchyNode>_TypeInfo);
  FUN_0373b518(System_Func<int,_IEnumerable<Edge>>_TypeInfo);
  FUN_0373b518(PTR_DAT_07d89860);
  FUN_0373b518(System_Func<int,_IEnumerable<int>>_TypeInfo);
  FUN_0373b518(System_Func<InputDevice,_string>_TypeInfo);
  FUN_0373b518(PTR_DAT_07d97640);
  FUN_0373b518(System_Func<InputEventPtr,_InputControl>_TypeInfo);
  FUN_0373b518(PTR_DAT_07d969f0);
  FUN_0373b518(System_Func<int,_List<int>>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x31b) = 1;
  puVar7 = System_Func<HapticEffect,_bool>_TypeInfo;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  auVar27 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  if (unaff_x22 != (long *)0x0) {
    lVar16 = *unaff_x22;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)System_Func<HapticEffect,_bool>_TypeInfo) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_071d0ce4;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c();
LAB_071d0ce4:
    (*(code *)*puVar11)();
    _in_stack_00000040 = FUN_0754911c();
    uVar19 = FUN_071ca6ec(in_stack_00000008);
    if ((uVar19 & 1) != 0) {
      _in_stack_00000030 = FUN_07549384(&stack0x00000040,0);
      auVar5._8_8_ = in_stack_00000028;
      auVar5._0_8_ = in_stack_00000020;
      auVar27._8_8_ = in_stack_00000018;
      auVar27._0_8_ = in_stack_00000010;
      plVar12 = *(long **)(in_stack_00000008 + 0xa0);
      auVar3 = _in_stack_00000030;
      auVar4 = _in_stack_00000040;
      if (plVar12 == (long *)0x0) goto LAB_071d1208;
      uVar13 = (**(code **)(*plVar12 + 0x288))(plVar12,*(undefined8 *)(*plVar12 + 0x290));
      if (*(int *)(*(long *)PTR_DAT_07d97640 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d97640);
      }
      FUN_075c762c(&stack0x00000030,uVar13,0);
    }
    uVar13 = DAT_0158b918;
    fVar6 = DAT_015866a0;
    iVar21 = 0;
    fVar26 = 1.0;
    plVar12 = (long *)System_Func<HapticSample,_bool>_TypeInfo;
    plVar22 = (long *)
              System_Func<IGrouping<int,_DivrPostProcessController_ColorAdjustmentsSetting>,_int>_TypeInfo
    ;
    plVar23 = (long *)PTR_DAT_07d86398;
    do {
      lVar16 = *unaff_x22;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
            puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_071d0df8;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar11 = (undefined8 *)FUN_0377596c();
LAB_071d0df8:
      iVar10 = (*(code *)*puVar11)();
      if (iVar10 <= iVar21) {
        auVar27 = FUN_07549390(in_stack_00000040,in_stack_00000048,0);
        FUN_071cdbf8(in_stack_00000008,unaff_x27,unaff_x21,auVar27._0_8_,auVar27._8_8_);
        FUN_07549390(in_stack_00000040,in_stack_00000048,0);
        return;
      }
      lVar16 = *unaff_x22;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar12) {
            puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_071d0e58;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar11 = (undefined8 *)FUN_0377596c();
LAB_071d0e58:
      lVar16 = (*(code *)*puVar11)();
      auVar27 = _in_stack_00000010;
      auVar3 = _in_stack_00000030;
      auVar4 = _in_stack_00000040;
      auVar5 = _in_stack_00000020;
      if (lVar16 == 0) break;
      plVar17 = *(long **)(lVar16 + 0x28);
      if (plVar17 == (long *)0x0) {
LAB_071d0e90:
        plVar17 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*plVar22 + 0x130);
        if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_071d0e90;
        if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *plVar22) {
          plVar17 = (long *)0x0;
        }
      }
      if (*(int *)(*plVar23 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar19 = FUN_075ac5e0(plVar17,0,0);
      if ((uVar19 & 1) == 0) {
        plVar18 = *(long **)(lVar16 + 0x28);
        if (plVar18 == (long *)0x0) {
LAB_071d0ef8:
          plVar18 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)System_Func<int,_IEnumerable<byte>>_TypeInfo + 0x130);
          if (*(byte *)(*plVar18 + 0x130) < bVar1) goto LAB_071d0ef8;
          if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Func<int,_IEnumerable<byte>>_TypeInfo) {
            plVar18 = (long *)0x0;
          }
        }
        if (*(int *)(*plVar23 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar19 = FUN_075aa744(plVar18,0,0);
        fVar25 = fVar6;
        auVar27 = _in_stack_00000010;
        auVar3 = _in_stack_00000030;
        auVar4 = _in_stack_00000040;
        auVar5 = _in_stack_00000020;
        if ((uVar19 & 1) != 0) {
          if (plVar18 == (long *)0x0) break;
          fVar25 = *(float *)((long)plVar18 + 0x24);
        }
        if (plVar17 == (long *)0x0) break;
        auVar27 = (**(code **)(*plVar17 + 0x198))
                            (plVar17,in_stack_00000050,in_stack_00000058,unaff_x21,
                             *(undefined8 *)(*plVar17 + 0x1a0));
        _in_stack_00000020 = auVar27;
        uVar19 = FUN_041322f4(auVar27._0_8_,auVar27._8_8_,
                              *(undefined8 *)System_Func<TextGenerator>_TypeInfo);
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_07d969f0 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar19 = FUN_04130c74(&stack0x00000020,
                                *(undefined8 *)System_Func<InputEventPtr,_InputControl>_TypeInfo);
          if ((uVar19 & 1) != 0) {
            auVar27 = FUN_075485b0(in_stack_00000020,in_stack_00000028,0);
            _in_stack_00000010 = auVar27;
            auVar27 = FUN_07548574(&stack0x00000010,0);
            _in_stack_00000030 = auVar27;
            if (*(int *)(*(long *)PTR_DAT_07d97640 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar14 = FUN_04134a40(&stack0x00000030,
                                  *(undefined8 *)System_Func<InputDevice,_string>_TypeInfo);
            auVar27 = _in_stack_00000010;
            auVar3 = _in_stack_00000030;
            auVar4 = _in_stack_00000040;
            auVar5 = _in_stack_00000020;
            if ((*(long *)(in_stack_00000008 + 0xa0) == 0) || (lVar14 == 0)) break;
            fVar24 = *(float *)(*(long *)(in_stack_00000008 + 0xa0) + 0x10) *
                     *(float *)(lVar14 + 0x10);
            fVar2 = fVar24;
            if (1.0 < fVar24) {
              fVar2 = fVar26;
            }
            if (fVar24 < 0.0) {
              fVar2 = 0.0;
            }
            FUN_075486ac(fVar2,&stack0x00000010,0);
            auVar27 = _in_stack_00000010;
            auVar3 = _in_stack_00000030;
            auVar4 = _in_stack_00000040;
            auVar5 = _in_stack_00000020;
            if (*(long *)(in_stack_00000008 + 0xa0) == 0) break;
            fVar24 = *(float *)(*(long *)(in_stack_00000008 + 0xa0) + 0x14);
            fVar2 = fVar24;
            if (1.0 < fVar24) {
              fVar2 = fVar26;
            }
            if (fVar24 < -1.0) {
              fVar2 = -1.0;
            }
            FUN_075487c8(fVar2,&stack0x00000010,0);
            auVar27 = _in_stack_00000010;
            auVar3 = _in_stack_00000030;
            auVar4 = _in_stack_00000040;
            auVar5 = _in_stack_00000020;
            if (*(long *)(in_stack_00000008 + 0xa0) == 0) break;
            fVar24 = *(float *)(*(long *)(in_stack_00000008 + 0xa0) + 0x18);
            fVar2 = fVar24;
            if (1.0 < fVar24) {
              fVar2 = fVar26;
            }
            if (fVar24 < 0.0) {
              fVar2 = 0.0;
            }
            FUN_075488e8(fVar2,&stack0x00000010,0);
          }
          uVar9 = in_stack_00000028;
          uVar8 = in_stack_00000020;
          auVar27 = FUN_07549390(in_stack_00000040,in_stack_00000048,0);
          uVar15 = thunk_FUN_037788cc(*(undefined8 *)System_Func<int,_List<int>>_TypeInfo);
          FUN_062855bc(uVar15,0);
          FUN_071d6ad0((double)fVar25,uVar13,uVar15,lVar16,uVar8,uVar9,auVar27._0_8_,auVar27._8_8_);
          auVar27 = _in_stack_00000010;
          auVar3 = _in_stack_00000030;
          auVar4 = _in_stack_00000040;
          auVar5 = _in_stack_00000020;
          if (unaff_x27 == 0) break;
          FUN_047612c8(unaff_x27,uVar15,
                       *(undefined8 *)
                        System_Func<IEnumerable<ClaimsIdentity>,_ClaimsIdentity>_TypeInfo);
          FUN_04134738(&stack0x00000050,in_stack_00000020,in_stack_00000028,0,in_stack_00000040,
                       in_stack_00000048,iVar21,
                       *(undefined8 *)System_Func<int,_IEnumerable<int>>_TypeInfo);
          uVar9 = in_stack_00000028;
          uVar8 = in_stack_00000020;
          FUN_071c3af4(lVar16);
          FUN_041339d0(uVar8,uVar9,*(undefined8 *)PTR_DAT_07d89860);
          uVar9 = in_stack_00000028;
          uVar8 = in_stack_00000020;
          FUN_071c533c(lVar16);
          FUN_0413292c(uVar8,uVar9,*(undefined8 *)System_Func<HierarchyNode,_HierarchyNode>_TypeInfo
                      );
          FUN_04133418(0x3f800000,in_stack_00000040,in_stack_00000048,in_stack_00000020,
                       in_stack_00000028,*(undefined8 *)System_Func<int,_IEnumerable<Edge>>_TypeInfo
                      );
          plVar12 = (long *)System_Func<HapticSample,_bool>_TypeInfo;
          plVar22 = (long *)
                    System_Func<IGrouping<int,_DivrPostProcessController_ColorAdjustmentsSetting>,_int>_TypeInfo
          ;
          plVar23 = (long *)PTR_DAT_07d86398;
        }
      }
      iVar21 = iVar21 + 1;
    } while( true );
  }
LAB_071d1208:
  _in_stack_00000010 = auVar27;
  _in_stack_00000030 = auVar3;
  _in_stack_00000020 = auVar5;
  _in_stack_00000040 = auVar4;
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


