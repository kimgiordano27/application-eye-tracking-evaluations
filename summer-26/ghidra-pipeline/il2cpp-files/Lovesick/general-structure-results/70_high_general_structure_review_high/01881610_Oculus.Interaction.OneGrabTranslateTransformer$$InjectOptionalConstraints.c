/*
FUNCTION_NAME: Oculus.Interaction.OneGrabTranslateTransformer$$InjectOptionalConstraints
ENTRY_POINT: 01881610
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01881bdc) */
/* WARNING: Removing unreachable block (ram,0x01881be0) */
/* WARNING: Removing unreachable block (ram,0x0188243c) */
/* WARNING: Removing unreachable block (ram,0x01881f78) */
/* WARNING: Removing unreachable block (ram,0x01881f7c) */
/* WARNING: Removing unreachable block (ram,0x0188224c) */
/* WARNING: Removing unreachable block (ram,0x018823c8) */

void Oculus_Interaction_OneGrabTranslateTransformer__InjectOptionalConstraints(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined **in_x9;
  int *piVar10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar11;
  long unaff_x22;
  long unaff_x24;
  long *plVar12;
  undefined1 unaff_w27;
  undefined8 uVar13;
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
  undefined8 uStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
code_r0x01881610:
  uStack0000000000000068 = *(undefined8 *)(unaff_x24 + 0x28);
  iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)in_x9[0x11d]);
  lVar4 = *(long *)(*(long *)
                     Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__ +
                   0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  pcVar5 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar4 + 0x80));
  if ((iVar3 != 0) || (*pcVar5 == '\0')) {
    lVar14 = *(long *)(unaff_x24 + 0x18);
    lVar4 = *(long *)(unaff_x24 + 0x30);
    uVar6 = FUN_0187feec();
    if ((uVar6 & 1) != 0) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar12 = *(long **)(lVar14 + 0x68);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar4 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01881760;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_00d59724(plVar12,*(long *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                            ,0);
LAB_01881760:
      (*(code *)*puVar7)(plVar12);
      *(undefined1 *)(unaff_x24 + 0x38) = unaff_w27;
      goto LAB_018815d0;
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((lVar4 == 0) || (*(char *)(lVar14 + 0x82) != '\0')) goto LAB_018815d0;
    if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar12 = *(long **)(*(long *)(unaff_x22 + 0x20) + 0x40);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar9 = *plVar12;
    uVar13 = *(undefined8 *)(lVar14 + 0x40);
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_10777) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01881788;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10777,0);
LAB_01881788:
    plVar12 = (long *)(*(code *)*puVar7)(plVar12,uVar13,puVar7[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)((long)plVar12 + 0x24) == 2) {
      bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo + 300);
      if ((*(byte *)(*plVar12 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar12);
      }
      if ((*(char *)((long)plVar12 + 0xf2) != '\0') && ((char)plVar12[5] == '\0')) {
        plVar12 = *(long **)(lVar14 + 0x68);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar14 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)
                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
              puVar7 = (undefined8 *)(lVar14 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_01881858;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_00d59724(plVar12,*(long *)
                                       Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                              ,1);
LAB_01881858:
        lVar14 = (*(code *)*puVar7)(plVar12);
        if (lVar14 != 0) {
          thunk_FUN_00d93c64(lVar14,0);
          plVar12 = (long *)FUN_01879238();
          puVar2 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo +
                           300);
          if ((*(byte *)(*plVar12 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
          if (*(char *)((long)plVar12 + 0xf1) == '\0') {
            uVar13 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
            plVar8 = (long *)thunk_FUN_00d6225c(lVar14,uVar13);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(lVar14,uVar13);
            }
          }
          else {
            plVar8 = (long *)FUN_01872f88(plVar12,lVar14);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          }
          lVar14 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar6 != 0) {
            piVar10 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                goto LAB_0188195c;
              }
              uVar6 = uVar6 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,6);
LAB_0188195c:
          uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          plVar11 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
          if ((uVar6 & 1) == 0) {
            if (*(char *)((long)plVar12 + 0xf1) == '\0') {
              uVar13 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
              plVar12 = (long *)thunk_FUN_00d6225c(lVar4,uVar13);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(lVar4,uVar13);
              }
            }
            else {
              plVar12 = (long *)FUN_01872f88(plVar12,lVar4);
              plVar11 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
            }
            lVar4 = *plVar12;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
                  puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_01881a08;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_00d59724(plVar12,*(long *)
                                           Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                  ,0);
LAB_01881a08:
            plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            do {
              lVar4 = *plVar12;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) ==
                      *(long *)
                       Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
                  {
                    puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_01881a70;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)
                       FUN_00d59724(plVar12,*(long *)
                                             Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                    ,0);
LAB_01881a70:
              uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
              if ((uVar6 & 1) == 0) goto LAB_01881b4c;
              lVar4 = *plVar12;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) ==
                      *(long *)
                       Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
                  {
                    puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_01881ad8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)
                       FUN_00d59724(plVar12,*(long *)
                                             Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                    ,1);
LAB_01881ad8:
              uVar13 = (*(code *)*puVar7)(plVar12,puVar7[1]);
              lVar4 = *plVar8;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *plVar11) {
                    puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                    goto LAB_01881b38;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)FUN_00d59724(plVar8,*plVar11,2);
LAB_01881b38:
              (*(code *)*puVar7)(plVar8,uVar13,puVar7[1]);
            } while( true );
          }
        }
      }
    }
    else if (*(int *)((long)plVar12 + 0x24) == 5) {
      bVar1 = *(byte *)(*(long *)sbyte___var + 300);
      if ((*(byte *)(*plVar12 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)sbyte___var)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      if ((char)plVar12[5] == '\0') {
        plVar8 = *(long **)(lVar14 + 0x68);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar14 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)
                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
              puVar7 = (undefined8 *)(lVar14 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_01881ca4;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_00d59724(plVar8,*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                              ,1);
LAB_01881ca4:
        lVar14 = (*(code *)*puVar7)(plVar8);
        if (lVar14 != 0) {
          if ((char)plVar12[0x20] == '\0') {
            uVar13 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
            plVar8 = (long *)thunk_FUN_00d6225c(lVar14,uVar13);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(lVar14,uVar13);
            }
          }
          else {
            plVar8 = (long *)FUN_0187467c(plVar12,lVar14);
          }
          if ((char)plVar12[0x20] == '\0') {
            uVar13 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
            plVar12 = (long *)thunk_FUN_00d6225c(lVar4,uVar13);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(lVar4,uVar13);
            }
          }
          else {
            plVar12 = (long *)FUN_0187467c(plVar12,lVar4);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          }
          lVar4 = *plVar12;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar6 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 9) * 0x10 + 0x138);
                goto LAB_01881d90;
              }
              uVar6 = uVar6 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_00d59724(plVar12,*(long *)
                                         System_Globalization_DateTimeFormatInfoScanner_TypeInfo,9);
LAB_01881d90:
          plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          do {
            lVar4 = *plVar12;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)
                     Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                  puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_01881df8;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_00d59724(plVar12,*(long *)
                                           Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                  ,0);
LAB_01881df8:
            uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
            if ((uVar6 & 1) == 0) goto LAB_01881ee8;
            lVar4 = *plVar12;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)Method_System_Threading_Tasks_Task_FromCancellation<bool>__) {
                  puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_01881e60;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_00d59724(plVar12,*(long *)
                                           Method_System_Threading_Tasks_Task_FromCancellation<bool>__
                                  ,2);
LAB_01881e60:
            auVar15 = (*(code *)*puVar7)(plVar12,puVar7[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_01881ed0;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_00d59724(plVar8,*(long *)
                                          System_Globalization_DateTimeFormatInfoScanner_TypeInfo,1)
            ;
LAB_01881ed0:
            (*(code *)*puVar7)(plVar8,auVar15._0_8_,auVar15._8_8_,puVar7[1]);
          } while( true );
        }
      }
    }
    goto LAB_01881c34;
  }
  goto LAB_018815d0;
LAB_01881ee8:
  plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)StringLiteral_10310);
  if (plVar12 != (long *)0x0) {
    lVar4 = *plVar12;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_10310) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01881f60;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10310,0);
LAB_01881f60:
    (*(code *)*puVar7)(plVar12,puVar7[1]);
  }
  goto LAB_01881c34;
LAB_01881b4c:
  plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)StringLiteral_10310);
  if (plVar12 != (long *)0x0) {
    lVar4 = *plVar12;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_10310) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01881bc4;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10310,0);
LAB_01881bc4:
    (*(code *)*puVar7)(plVar12,puVar7[1]);
  }
LAB_01881c34:
  unaff_w27 = 1;
  *(undefined1 *)(unaff_x24 + 0x38) = 1;
LAB_018815d0:
  do {
    uVar6 = FUN_012b894c(&stack0x00000070,*unaff_x19);
    if ((uVar6 & 1) == 0) {
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
        while (uVar6 = FUN_012b894c(&stack0x00000070,*unaff_x19), (uVar6 & 1) != 0) {
          lVar4 = FUN_00bef118(&stack0x00000070,*unaff_x20);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(char *)(lVar4 + 0x38) == '\0') {
            uStack0000000000000068 = *(undefined8 *)(lVar4 + 0x28);
            iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
            lVar4 = *(long *)(*(long *)
                               Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                             + 0x20);
            if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
              lVar4 = FUN_00d5941c();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
            if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
              lVar4 = FUN_00d5941c();
            }
            pcVar5 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar4 + 0x80));
            if ((iVar3 != 0) || (*pcVar5 == '\0')) {
              lVar4 = *(long *)(in_stack_00000020 + 0xe0);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
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
        while (uVar6 = FUN_012b894c(&stack0x00000070,*unaff_x19), (uVar6 & 1) != 0) {
          lVar4 = FUN_00bef118(&stack0x00000070,*unaff_x20);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar4 + 0x18) != 0) {
            if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            (**(code **)(*in_stack_00000028 + 0x268))
                      (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x270));
            FUN_00bef220(lVar4 + 0x28,*(undefined8 *)StringLiteral_9074);
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
  in_x9 = &StringLiteral_8789;
  goto code_r0x01881610;
}


