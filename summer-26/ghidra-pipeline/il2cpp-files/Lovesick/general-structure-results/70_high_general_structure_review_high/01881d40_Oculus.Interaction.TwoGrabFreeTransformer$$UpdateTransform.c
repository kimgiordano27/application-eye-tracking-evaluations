/*
FUNCTION_NAME: Oculus.Interaction.TwoGrabFreeTransformer$$UpdateTransform
ENTRY_POINT: 01881d40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01881bdc) */
/* WARNING: Removing unreachable block (ram,0x01881be0) */
/* WARNING: Removing unreachable block (ram,0x01881f78) */
/* WARNING: Removing unreachable block (ram,0x01881f7c) */
/* WARNING: Removing unreachable block (ram,0x01882234) */
/* WARNING: Removing unreachable block (ram,0x0188224c) */
/* WARNING: Removing unreachable block (ram,0x0188243c) */
/* WARNING: Removing unreachable block (ram,0x018823c8) */

void Oculus_Interaction_TwoGrabFreeTransformer__UpdateTransform(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined **in_x10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar12;
  long unaff_x22;
  long unaff_x24;
  long *unaff_x26;
  undefined8 uVar13;
  long *unaff_x27;
  long lVar14;
  undefined1 auVar15 [16];
  long in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
code_r0x01881d40:
  uVar10 = (ulong)*(ushort *)(param_1 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)in_x10[0x169]) {
        puVar5 = (undefined8 *)(param_1 + (long)(*piVar11 + 9) * 0x10 + 0x138);
        goto LAB_01881d90;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724(unaff_x27,*(long *)in_x10[0x169],9);
LAB_01881d90:
  plVar6 = (long *)(*(code *)*puVar5)(unaff_x27,puVar5[1]);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01881df8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_00d59724(plVar6,*(long *)
                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                          ,0);
LAB_01881df8:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Threading_Tasks_Task_FromCancellation<bool>__) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_01881e60;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_00d59724(plVar6,*(long *)
                                  Method_System_Threading_Tasks_Task_FromCancellation<bool>__,2);
LAB_01881e60:
    auVar15 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar9 = *unaff_x26;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_01881ed0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_00d59724(unaff_x26,*(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                          ,1);
LAB_01881ed0:
    (*(code *)*puVar5)(unaff_x26,auVar15._0_8_,auVar15._8_8_,puVar5[1]);
  } while( true );
  plVar6 = (long *)thunk_FUN_00d6225c(plVar6,*(undefined8 *)StringLiteral_10310);
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10310) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01881f60;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_10310,0);
LAB_01881f60:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
LAB_01881c34:
  do {
    do {
      do {
        *(undefined1 *)(unaff_x24 + 0x38) = 1;
        do {
          while( true ) {
            do {
              do {
                uVar10 = FUN_012b894c(&stack0x00000070,*unaff_x19);
                if ((uVar10 & 1) == 0) {
                  FUN_012b8948(&stack0x00000070,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                              );
                  if (*(long *)(in_stack_00000020 + 0xe0) != 0) {
                    FUN_01323390(in_stack_00000038,&stack0x00000048,
                                 *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__
                                );
                    in_stack_00000078 = in_stack_00000050;
                    in_stack_00000070 = in_stack_00000048;
                    in_stack_00000080 = in_stack_00000058;
                    while (uVar10 = FUN_012b894c(&stack0x00000070,*unaff_x19), (uVar10 & 1) != 0) {
                      lVar9 = FUN_00bef118(&stack0x00000070,*unaff_x20);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(char *)(lVar9 + 0x38) == '\0') {
                        in_stack_00000068 = *(undefined8 *)(lVar9 + 0x28);
                        iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
                        lVar9 = *(long *)(*(long *)
                                           Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                                         + 0x20);
                        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                          lVar9 = FUN_00d5941c();
                        }
                        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
                        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                          lVar9 = FUN_00d5941c();
                        }
                        pcVar7 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,
                                                            *(undefined8 *)(lVar9 + 0x80));
                        if ((iVar3 != 0) || (*pcVar7 == '\0')) {
                          lVar9 = *(long *)(in_stack_00000020 + 0xe0);
                          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40));
                        }
                      }
                    }
                    FUN_012b8948(&stack0x00000070,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                                );
                  }
                  if (in_stack_00000040._4_4_ != 0) {
                    FUN_01323390(in_stack_00000038,&stack0x00000048,
                                 *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__
                                );
                    in_stack_00000078 = in_stack_00000050;
                    in_stack_00000070 = in_stack_00000048;
                    in_stack_00000080 = in_stack_00000058;
                    while (uVar10 = FUN_012b894c(&stack0x00000070,*unaff_x19), (uVar10 & 1) != 0) {
                      lVar9 = FUN_00bef118(&stack0x00000070,*unaff_x20);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(long *)(lVar9 + 0x18) != 0) {
                        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        (**(code **)(*in_stack_00000028 + 0x268))
                                  (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x270));
                        FUN_00bef220(lVar9 + 0x28,*(undefined8 *)StringLiteral_9074);
                        FUN_01882ef0(in_stack_00000030);
                      }
                    }
                    FUN_012b8948(&stack0x00000070,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                                );
                  }
                  FUN_01880600(in_stack_00000030,in_stack_00000028,in_stack_00000020);
                  return;
                }
                unaff_x24 = FUN_00bef118(&stack0x00000070,*unaff_x20);
                if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              } while (((*(char *)(unaff_x24 + 0x38) != '\0') || (*(long *)(unaff_x24 + 0x18) == 0))
                      || (*(char *)(*(long *)(unaff_x24 + 0x18) + 0x80) != '\0'));
              in_stack_00000068 = *(undefined8 *)(unaff_x24 + 0x28);
              iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
              lVar9 = *(long *)(*(long *)
                                 Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                               + 0x20);
              if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                lVar9 = FUN_00d5941c();
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
              if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                lVar9 = FUN_00d5941c();
              }
              pcVar7 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar9 + 0x80));
            } while ((iVar3 == 0) && (*pcVar7 != '\0'));
            lVar14 = *(long *)(unaff_x24 + 0x18);
            lVar9 = *(long *)(unaff_x24 + 0x30);
            uVar10 = FUN_0187feec();
            if ((uVar10 & 1) == 0) break;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            plVar6 = *(long **)(lVar14 + 0x68);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar9 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__)
                {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_01881760;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_00d59724(plVar6,*(long *)
                                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                                  ,0);
LAB_01881760:
            (*(code *)*puVar5)(plVar6);
            *(undefined1 *)(unaff_x24 + 0x38) = 1;
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        } while ((lVar9 == 0) || (*(char *)(lVar14 + 0x82) != '\0'));
        if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar6 = *(long **)(*(long *)(unaff_x22 + 0x20) + 0x40);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar8 = *plVar6;
        uVar13 = *(undefined8 *)(lVar14 + 0x40);
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10777) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_01881788;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_10777,0);
LAB_01881788:
        plVar6 = (long *)(*(code *)*puVar5)(plVar6,uVar13,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)((long)plVar6 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo +
                           300);
          if ((*(byte *)(*plVar6 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar6);
          }
          if ((*(char *)((long)plVar6 + 0xf2) != '\0') && ((char)plVar6[5] == '\0')) {
            plVar6 = *(long **)(lVar14 + 0x68);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar14 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__)
                {
                  puVar5 = (undefined8 *)(lVar14 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_01881858;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_00d59724(plVar6,*(long *)
                                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                                  ,1);
LAB_01881858:
            lVar14 = (*(code *)*puVar5)(plVar6);
            if (lVar14 != 0) {
              thunk_FUN_00d93c64(lVar14,0);
              plVar6 = (long *)FUN_01879238();
              puVar2 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo
                               + 300);
              if ((*(byte *)(*plVar6 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c();
              }
              if (*(char *)((long)plVar6 + 0xf1) == '\0') {
                uVar13 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
                plVar4 = (long *)thunk_FUN_00d6225c(lVar14,uVar13);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(lVar14,uVar13);
                }
              }
              else {
                plVar4 = (long *)FUN_01872f88(plVar6,lVar14);
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              }
              lVar14 = *plVar4;
              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar14 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                    goto LAB_0188195c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar2,6);
LAB_0188195c:
              uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
              plVar12 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
              if ((uVar10 & 1) == 0) {
                if (*(char *)((long)plVar6 + 0xf1) == '\0') {
                  uVar13 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
                  plVar6 = (long *)thunk_FUN_00d6225c(lVar9,uVar13);
                  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c(lVar9,uVar13);
                  }
                }
                else {
                  plVar6 = (long *)FUN_01872f88(plVar6,lVar9);
                  plVar12 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
                  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                }
                lVar9 = *plVar6;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
                      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_01881a08;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar5 = (undefined8 *)
                         FUN_00d59724(plVar6,*(long *)
                                              Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                      ,0);
LAB_01881a08:
                plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                do {
                  lVar9 = *plVar6;
                  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) ==
                          *(long *)
                           Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ) {
                        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_01881a70;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar5 = (undefined8 *)
                           FUN_00d59724(plVar6,*(long *)
                                                Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                        ,0);
LAB_01881a70:
                  uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                  if ((uVar10 & 1) == 0) goto LAB_01881b4c;
                  lVar9 = *plVar6;
                  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) ==
                          *(long *)
                           Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ) {
                        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto LAB_01881ad8;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar5 = (undefined8 *)
                           FUN_00d59724(plVar6,*(long *)
                                                Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                        ,1);
LAB_01881ad8:
                  uVar13 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                  lVar9 = *plVar4;
                  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *plVar12) {
                        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                        goto LAB_01881b38;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_00d59724(plVar4,*plVar12,2);
LAB_01881b38:
                  (*(code *)*puVar5)(plVar4,uVar13,puVar5[1]);
                } while( true );
              }
            }
          }
          goto LAB_01881c34;
        }
      } while (*(int *)((long)plVar6 + 0x24) != 5);
      bVar1 = *(byte *)(*(long *)sbyte___var + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)sbyte___var)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
    } while ((char)plVar6[5] != '\0');
    plVar4 = *(long **)(lVar14 + 0x68);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar14 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__)
        {
          puVar5 = (undefined8 *)(lVar14 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_01881ca4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_00d59724(plVar4,*(long *)
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                          ,1);
LAB_01881ca4:
    lVar14 = (*(code *)*puVar5)(plVar4);
  } while (lVar14 == 0);
  if ((char)plVar6[0x20] == '\0') {
    uVar13 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
    unaff_x26 = (long *)thunk_FUN_00d6225c(lVar14,uVar13);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar14,uVar13);
    }
  }
  else {
    unaff_x26 = (long *)FUN_0187467c(plVar6,lVar14);
  }
  if ((char)plVar6[0x20] == '\0') {
    uVar13 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
    unaff_x27 = (long *)thunk_FUN_00d6225c(lVar9,uVar13);
    if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar9,uVar13);
    }
  }
  else {
    unaff_x27 = (long *)FUN_0187467c(plVar6,lVar9);
    if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  param_1 = *unaff_x27;
  in_x10 = &Oculus_Platform_Models_ChallengeEntry_TypeInfo;
  goto code_r0x01881d40;
LAB_01881b4c:
  plVar6 = (long *)thunk_FUN_00d6225c(plVar6,*(undefined8 *)StringLiteral_10310);
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10310) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01881bc4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_10310,0);
LAB_01881bc4:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  goto LAB_01881c34;
}


