/*
FUNCTION_NAME: OVRHand$$get_PointerPose
ENTRY_POINT: 053983b4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRHand__get_PointerPose
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined4 uStack000000000000003c;
  
  if ((DAT_06bbd62c & 1) == 0) {
    FUN_02f08768(System_Linq_Expressions_InvocationExpressionN_TypeInfo);
    FUN_02f08768(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Linq_JArray_TypeInfo);
    FUN_02f08768(UnityEngine_Events_InvokableCallList_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_Layout_InvokeBaselineFunctionDelegate_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo);
    FUN_02f08768(UnityEngine_XR_OpenXR_Features_Meta_BatchEraseAnchors_TypeInfo);
    FUN_02f08768(Oculus_Platform_InviteOptions_TypeInfo);
    FUN_02f08768(System_Data_InternalDataCollectionBase_TypeInfo);
    DAT_06bbd62c = 1;
  }
  puVar4 = UnityEngine_UIElements_Layout_InvokeBaselineFunctionDelegate_TypeInfo;
  uStack000000000000003c = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if ((*(char *)(param_4 + 0x98) != '\0') &&
     (plVar15 = *(long **)(param_4 + 0xa8), plVar15 != (long *)0x0)) {
    lVar11 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)UnityEngine_UIElements_Layout_InvokeBaselineFunctionDelegate_TypeInfo) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_053984b0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02f421d0(plVar15,*(long *)
                                   UnityEngine_UIElements_Layout_InvokeBaselineFunctionDelegate_TypeInfo
                          ,0);
LAB_053984b0:
    iVar6 = (*(code *)*puVar8)(plVar15,puVar8[1]);
    if (iVar6 != 0) {
      if (*(long *)(param_4 + 0xc0) == 0) {
        uVar9 = *(undefined8 *)(param_4 + 0xe0);
        iVar6 = *(int *)(param_4 + 0x20);
        uVar10 = *(undefined8 *)(param_4 + 0x138);
        lVar11 = thunk_FUN_02f45270(*(undefined8 *)System_Data_InternalDataCollectionBase_TypeInfo);
        FUN_05398a48(lVar11,param_4,0,uVar9,iVar6 == 3,uVar10);
        *(long *)(param_4 + 0xc0) = lVar11;
      }
      else {
        FUN_0539cf24(*(long *)(param_4 + 0xc0),param_4,0,*(undefined8 *)(param_4 + 0xe0),
                     *(undefined8 *)(param_4 + 0x138),*(int *)(param_4 + 0x20) == 3);
        lVar11 = *(long *)(param_4 + 0xc0);
      }
      if (lVar11 != 0) {
        FUN_0539666c(lVar11);
        if (*(long *)(param_4 + 200) == 0) {
          uVar9 = *(undefined8 *)(param_4 + 0xe0);
          iVar6 = *(int *)(param_4 + 0x20);
          uVar10 = *(undefined8 *)(param_4 + 0x138);
          lVar11 = thunk_FUN_02f45270(*(undefined8 *)System_Data_InternalDataCollectionBase_TypeInfo
                                     );
          FUN_05398a48(lVar11,param_4,1,uVar9,iVar6 == 3,uVar10);
          *(long *)(param_4 + 200) = lVar11;
        }
        else {
          FUN_0539cf24(*(long *)(param_4 + 200),param_4,1,*(undefined8 *)(param_4 + 0xe0),
                       *(undefined8 *)(param_4 + 0x138),*(int *)(param_4 + 0x20) == 3);
          lVar11 = *(long *)(param_4 + 200);
        }
        if (lVar11 != 0) {
          FUN_0539666c(lVar11);
          if (*(long *)(param_4 + 0xd8) != 0) {
            uVar9 = FUN_06093cf8(*(long *)(param_4 + 0xd8),0,0);
            if (*(long *)(param_4 + 0xf0) != 0) {
              uVar10 = FUN_048b0f14(*(long *)(param_4 + 0xf0),0,
                                    *(undefined8 *)Newtonsoft_Json_Linq_JArray_TypeInfo);
              FUN_053972b4(param_4,uVar9,uVar10);
              if (*(long *)(param_4 + 0xd0) != 0) {
                FUN_0539666c();
                puVar5 = UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo;
                puVar3 = UnityEngine_Events_InvokableCallList_TypeInfo;
                puVar2 = UnityEngine_Events_InvokableCall_TypeInfo;
                puVar1 = System_Linq_Expressions_InvocationExpressionN_TypeInfo;
                plVar15 = *(long **)(param_4 + 0xa8);
                if (plVar15 != (long *)0x0) {
                  iVar6 = 0;
                  do {
                    lVar11 = *plVar15;
                    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_05398694;
                        }
                        uVar13 = uVar13 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_02f421d0(plVar15,*(long *)puVar4,0);
LAB_05398694:
                    iVar7 = (*(code *)*puVar8)(plVar15,puVar8[1]);
                    if (iVar7 <= iVar6) {
                      *(undefined4 *)(param_4 + 0xf8) = *(undefined4 *)(param_4 + 0xb8);
                      lVar11 = FUN_060ed7ac(param_4,0);
                      if (lVar11 != 0) {
                        uVar17 = FUN_06101d4c(lVar11,0);
                        *(undefined4 *)(param_4 + 0xfc) = uVar17;
                        *(undefined4 *)(param_4 + 0x100) = param_2;
                        *(undefined4 *)(param_4 + 0x104) = param_3;
                        return;
                      }
                      break;
                    }
                    plVar15 = *(long **)(param_4 + 0xa8);
                    if (plVar15 == (long *)0x0) break;
                    lVar12 = *plVar15;
                    lVar16 = *(long *)(param_4 + 0xe0);
                    lVar11 = *(long *)puVar5;
                    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == lVar11) {
                          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_05398700;
                        }
                        uVar13 = uVar13 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_02f421d0(plVar15,lVar11,0);
LAB_05398700:
                    lVar11 = (*(code *)*puVar8)(plVar15,iVar6,puVar8[1]);
                    if ((lVar11 == 0) || (lVar16 == 0)) break;
                    uVar13 = FUN_048af7cc(lVar16,*(undefined4 *)(lVar11 + 0x10),&stack0x0000003c,
                                          *(undefined8 *)puVar1);
                    if ((uVar13 & 1) != 0) {
                      if ((*(long *)(param_4 + 0xd0) == 0) ||
                         (lVar11 = *(long *)(*(long *)(param_4 + 0xd0) + 0x10), lVar11 == 0)) break;
                      uVar13 = FUN_048b29f4(lVar11,uStack000000000000003c,&stack0x00000028,
                                            *(undefined8 *)puVar2);
                      if ((uVar13 & 1) != 0) {
                        plVar15 = *(long **)(param_4 + 0x138);
                        if (plVar15 == (long *)0x0) break;
                        lVar11 = *plVar15;
                        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                *(long *)Oculus_Platform_InviteOptions_TypeInfo) {
                              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                              goto LAB_053987b4;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar8 = (undefined8 *)
                                 FUN_02f421d0(plVar15,*(long *)
                                                  Oculus_Platform_InviteOptions_TypeInfo,1);
LAB_053987b4:
                        lVar11 = (*(code *)*puVar8)(plVar15,puVar8[1]);
                        if (lVar11 == 0) break;
                        uVar9 = FUN_048ade2c(lVar11,uStack000000000000003c,*(undefined8 *)puVar3);
                        lVar11 = 0x110;
                        if (*(int *)(param_4 + 0x20) != 3) {
                          lVar11 = 0x118;
                        }
                        uVar13 = FUN_05398bd0(uVar9,*(undefined8 *)(param_4 + lVar11));
                        if ((uVar13 & 1) != 0) {
                          if ((*(long *)(param_4 + 200) == 0) ||
                             (lVar11 = *(long *)(*(long *)(param_4 + 200) + 0x10), lVar11 == 0))
                          break;
                          uVar13 = FUN_048b29f4(lVar11,uStack000000000000003c,&stack0x00000020,
                                                *(undefined8 *)puVar2);
                          if ((uVar13 & 1) != 0) {
                            if ((*(long *)(param_4 + 0xc0) == 0) ||
                               (lVar11 = *(long *)(*(long *)(param_4 + 0xc0) + 0x10), lVar11 == 0))
                            break;
                            uVar13 = FUN_048b29f4(lVar11,uStack000000000000003c,&stack0x00000018,
                                                  *(undefined8 *)puVar2);
                            if ((uVar13 & 1) != 0) {
                              if (in_stack_00000020 == 0) break;
                              if (*(char *)(in_stack_00000020 + 0x70) == '\0') {
                                if (in_stack_00000018 == 0) break;
                                if (*(char *)(in_stack_00000018 + 0x70) == '\0') {
                                  uVar18 = *(undefined4 *)(in_stack_00000020 + 0x40);
                                  uVar19 = *(undefined4 *)(in_stack_00000020 + 0x44);
                                  uVar20 = *(undefined4 *)(in_stack_00000020 + 0x48);
                                  uVar21 = *(undefined4 *)(in_stack_00000020 + 0x4c);
                                  uVar17 = FUN_053a7f4c(0);
                                  uVar17 = FUN_060dfb18(uVar18,uVar19,uVar20,uVar21,uVar17,param_2,
                                                        param_3,0);
                                  if (in_stack_00000028 != 0) {
                                    uVar21 = *(undefined4 *)(in_stack_00000028 + 0x40);
                                    param_2 = *(undefined4 *)(in_stack_00000028 + 0x44);
                                    param_3 = *(undefined4 *)(in_stack_00000028 + 0x48);
                                    uVar22 = *(undefined4 *)(in_stack_00000028 + 0x4c);
                                    uVar18 = FUN_053a7f4c(0);
                                    FUN_060dfb18(uVar21,param_2,param_3,uVar22,uVar18,uVar19,uVar20,
                                                 0);
                                    FUN_060df230(0);
                                    if (((*(long *)(param_4 + 0xa8) != 0) &&
                                        (lVar11 = FUN_02b1fc08(0,*(undefined8 *)puVar5,
                                                               *(long *)(param_4 + 0xa8),iVar6),
                                        lVar11 != 0)) && (*(long *)(lVar11 + 0x18) != 0)) {
                                      FUN_060fdda4(*(long *)(lVar11 + 0x18),0);
                                      FUN_060df2e4(0);
                                      lVar11 = in_stack_00000028;
                                      uVar19 = System_Text_Normalization__GetCanonicalHangul(0);
                                      if ((*(long *)(param_4 + 0xd8) != 0) &&
                                         (uVar20 = param_2, uVar18 = param_3, uVar21 = uVar17,
                                         lVar12 = FUN_06093cf8(*(long *)(param_4 + 0xd8),
                                                               uStack000000000000003c,0),
                                         lVar12 != 0)) {
                                        uVar22 = FUN_060fdda4(lVar12,0);
                                        System_Text_Normalization__GetCanonicalHangul
                                                  (uVar19,param_2,param_3,uVar17,uVar22,uVar20,
                                                   uVar18,uVar21,0);
                                        FUN_03e1f13c();
                                        if (lVar11 != 0) {
                                          *(undefined8 *)(lVar11 + 0x58) = 0;
                                          *(undefined8 *)(lVar11 + 0x50) = 0;
                                          *(undefined4 *)(lVar11 + 0x60) = 0;
                                          goto LAB_05398860;
                                        }
                                      }
                                    }
                                  }
                                  break;
                                }
                              }
                              if (in_stack_00000028 == 0) break;
                              *(undefined8 *)(in_stack_00000028 + 0x50) = 0;
                              *(undefined8 *)(in_stack_00000028 + 0x58) = 0;
                              *(undefined4 *)(in_stack_00000028 + 0x60) = 0;
                            }
                          }
                        }
                      }
                    }
LAB_05398860:
                    plVar15 = *(long **)(param_4 + 0xa8);
                    iVar6 = iVar6 + 1;
                    if (plVar15 == (long *)0x0) break;
                  } while( true );
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  return;
}


