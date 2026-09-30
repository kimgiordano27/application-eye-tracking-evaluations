/*
FUNCTION_NAME: Oculus.Interaction.TwoGrabFreeTransformer$$BeginTransform
ENTRY_POINT: 01881814
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01881bdc) */
/* WARNING: Removing unreachable block (ram,0x01881be0) */
/* WARNING: Removing unreachable block (ram,0x0188243c) */
/* WARNING: Removing unreachable block (ram,0x01881f78) */
/* WARNING: Removing unreachable block (ram,0x01881f7c) */
/* WARNING: Removing unreachable block (ram,0x0188224c) */
/* WARNING: Removing unreachable block (ram,0x018823c8) */

void Oculus_Interaction_TwoGrabFreeTransformer__BeginTransform
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong in_x9;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar13;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  undefined1 auVar14 [16];
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
  
code_r0x01881814:
  if (in_x9 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_01881858;
      }
      in_x9 = in_x9 - 1;
      piVar12 = piVar12 + 4;
    } while (in_x9 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724(unaff_x26,param_3,1);
LAB_01881858:
  lVar6 = (*(code *)*puVar5)(unaff_x26);
  if (lVar6 != 0) {
    thunk_FUN_00d93c64(lVar6,0);
    plVar7 = (long *)FUN_01879238();
    puVar2 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo + 300);
    if ((*(byte *)(*plVar7 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    if (*(char *)((long)plVar7 + 0xf1) == '\0') {
      uVar9 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
      plVar8 = (long *)thunk_FUN_00d6225c(lVar6,uVar9);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar6,uVar9);
      }
    }
    else {
      plVar8 = (long *)FUN_01872f88(plVar7,lVar6);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    lVar6 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 6) * 0x10 + 0x138);
          goto LAB_0188195c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,6);
LAB_0188195c:
    uVar11 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    plVar13 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
    if ((uVar11 & 1) == 0) {
      if (*(char *)((long)plVar7 + 0xf1) == '\0') {
        uVar9 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
        plVar7 = (long *)thunk_FUN_00d6225c(unaff_x25,uVar9);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(unaff_x25,uVar9);
        }
      }
      else {
        plVar7 = (long *)FUN_01872f88(plVar7,unaff_x25);
        plVar13 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      lVar6 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01881a08;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_00d59724(plVar7,*(long *)
                                    Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                            ,0);
LAB_01881a08:
      plVar7 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar6 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
               ) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01881a70;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(plVar7,*(long *)
                                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                              ,0);
LAB_01881a70:
        uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        if ((uVar11 & 1) == 0) goto LAB_01881b4c;
        lVar6 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
               ) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_01881ad8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(plVar7,*(long *)
                                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                              ,1);
LAB_01881ad8:
        uVar9 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        lVar6 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *plVar13) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_01881b38;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar8,*plVar13,2);
LAB_01881b38:
        (*(code *)*puVar5)(plVar8,uVar9,puVar5[1]);
      } while( true );
    }
  }
  goto LAB_01881c34;
LAB_01881b4c:
  plVar7 = (long *)thunk_FUN_00d6225c(plVar7,*(undefined8 *)StringLiteral_10310);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_10310) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01881bc4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar7,*(long *)StringLiteral_10310,0);
LAB_01881bc4:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
LAB_01881c34:
  do {
    *(undefined1 *)(unaff_x24 + 0x38) = 1;
    do {
      while( true ) {
        do {
          do {
            uVar11 = FUN_012b894c(&stack0x00000070,*unaff_x19);
            if ((uVar11 & 1) == 0) {
              FUN_012b8948(&stack0x00000070,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                          );
              if (*(long *)(in_stack_00000020 + 0xe0) != 0) {
                FUN_01323390(in_stack_00000038,&stack0x00000048,
                             *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__);
                in_stack_00000078 = in_stack_00000050;
                in_stack_00000070 = in_stack_00000048;
                in_stack_00000080 = in_stack_00000058;
                while (uVar11 = FUN_012b894c(&stack0x00000070,*unaff_x19), (uVar11 & 1) != 0) {
                  lVar6 = FUN_00bef118(&stack0x00000070,*unaff_x20);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(char *)(lVar6 + 0x38) == '\0') {
                    in_stack_00000068 = *(undefined8 *)(lVar6 + 0x28);
                    iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
                    lVar6 = *(long *)(*(long *)
                                       Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                                     + 0x20);
                    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                      lVar6 = FUN_00d5941c();
                    }
                    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                      lVar6 = FUN_00d5941c();
                    }
                    pcVar4 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,
                                                        *(undefined8 *)(lVar6 + 0x80));
                    if ((iVar3 != 0) || (*pcVar4 == '\0')) {
                      lVar6 = *(long *)(in_stack_00000020 + 0xe0);
                      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
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
                             *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__);
                in_stack_00000078 = in_stack_00000050;
                in_stack_00000070 = in_stack_00000048;
                in_stack_00000080 = in_stack_00000058;
                while (uVar11 = FUN_012b894c(&stack0x00000070,*unaff_x19), (uVar11 & 1) != 0) {
                  lVar6 = FUN_00bef118(&stack0x00000070,*unaff_x20);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(long *)(lVar6 + 0x18) != 0) {
                    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    (**(code **)(*in_stack_00000028 + 0x268))
                              (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x270));
                    FUN_00bef220(lVar6 + 0x28,*(undefined8 *)StringLiteral_9074);
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
          } while (((*(char *)(unaff_x24 + 0x38) != '\0') || (*(long *)(unaff_x24 + 0x18) == 0)) ||
                  (*(char *)(*(long *)(unaff_x24 + 0x18) + 0x80) != '\0'));
          in_stack_00000068 = *(undefined8 *)(unaff_x24 + 0x28);
          iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
          lVar6 = *(long *)(*(long *)
                             Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                           + 0x20);
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_00d5941c();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_00d5941c();
          }
          pcVar4 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar6 + 0x80));
        } while ((iVar3 == 0) && (*pcVar4 != '\0'));
        lVar6 = *(long *)(unaff_x24 + 0x18);
        unaff_x25 = *(long *)(unaff_x24 + 0x30);
        uVar11 = FUN_0187feec();
        if ((uVar11 & 1) == 0) break;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar7 = *(long **)(lVar6 + 0x68);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar6 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01881760;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(plVar7,*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                              ,0);
LAB_01881760:
        (*(code *)*puVar5)(plVar7);
        *(undefined1 *)(unaff_x24 + 0x38) = 1;
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    } while ((unaff_x25 == 0) || (*(char *)(lVar6 + 0x82) != '\0'));
    if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar7 = *(long **)(*(long *)(unaff_x22 + 0x20) + 0x40);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = *plVar7;
    uVar9 = *(undefined8 *)(lVar6 + 0x40);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_10777) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01881788;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar7,*(long *)StringLiteral_10777,0);
LAB_01881788:
    plVar7 = (long *)(*(code *)*puVar5)(plVar7,uVar9,puVar5[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)((long)plVar7 + 0x24) != 2) {
      if (*(int *)((long)plVar7 + 0x24) == 5) {
        bVar1 = *(byte *)(*(long *)sbyte___var + 300);
        if ((*(byte *)(*plVar7 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)sbyte___var)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        if ((char)plVar7[5] == '\0') {
          plVar8 = *(long **)(lVar6 + 0x68);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)
                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_01881ca4;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_00d59724(plVar8,*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                                ,1);
LAB_01881ca4:
          lVar6 = (*(code *)*puVar5)(plVar8);
          if (lVar6 != 0) {
            if ((char)plVar7[0x20] == '\0') {
              uVar9 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
              plVar8 = (long *)thunk_FUN_00d6225c(lVar6,uVar9);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(lVar6,uVar9);
              }
            }
            else {
              plVar8 = (long *)FUN_0187467c(plVar7,lVar6);
            }
            if ((char)plVar7[0x20] == '\0') {
              uVar9 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
              plVar7 = (long *)thunk_FUN_00d6225c(unaff_x25,uVar9);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(unaff_x25,uVar9);
              }
            }
            else {
              plVar7 = (long *)FUN_0187467c(plVar7,unaff_x25);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
            }
            lVar6 = *plVar7;
            uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                  goto LAB_01881d90;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_00d59724(plVar7,*(long *)
                                          System_Globalization_DateTimeFormatInfoScanner_TypeInfo,9)
            ;
LAB_01881d90:
            plVar7 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            do {
              lVar6 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)
                       Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
                  {
                    puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_01881df8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)
                       FUN_00d59724(plVar7,*(long *)
                                            Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                    ,0);
LAB_01881df8:
              uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
              if ((uVar11 & 1) == 0) goto LAB_01881ee8;
              lVar6 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)Method_System_Threading_Tasks_Task_FromCancellation<bool>__) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                    goto LAB_01881e60;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)
                       FUN_00d59724(plVar7,*(long *)
                                            Method_System_Threading_Tasks_Task_FromCancellation<bool>__
                                    ,2);
LAB_01881e60:
              auVar14 = (*(code *)*puVar5)(plVar7,puVar5[1]);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar6 = *plVar8;
              uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                    goto LAB_01881ed0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)
                       FUN_00d59724(plVar8,*(long *)
                                            System_Globalization_DateTimeFormatInfoScanner_TypeInfo,
                                    1);
LAB_01881ed0:
              (*(code *)*puVar5)(plVar8,auVar14._0_8_,auVar14._8_8_,puVar5[1]);
            } while( true );
          }
        }
      }
      goto LAB_01881c34;
    }
    bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo + 300);
    if ((*(byte *)(*plVar7 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar7);
    }
  } while ((*(char *)((long)plVar7 + 0xf2) == '\0') || ((char)plVar7[5] != '\0'));
  unaff_x26 = *(long **)(lVar6 + 0x68);
  if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  param_1 = *unaff_x26;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
  param_3 = *(long *)Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__;
  goto code_r0x01881814;
LAB_01881ee8:
  plVar7 = (long *)thunk_FUN_00d6225c(plVar7,*(undefined8 *)StringLiteral_10310);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_10310) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01881f60;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar7,*(long *)StringLiteral_10310,0);
LAB_01881f60:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_01881c34;
}


