/*
FUNCTION_NAME: Oculus.Interaction.OneGrabTranslateTransformer$$UpdateTransform
ENTRY_POINT: 018811b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01881bdc) */
/* WARNING: Removing unreachable block (ram,0x01881be0) */
/* WARNING: Removing unreachable block (ram,0x0188243c) */
/* WARNING: Removing unreachable block (ram,0x01881f78) */
/* WARNING: Removing unreachable block (ram,0x01881f7c) */
/* WARNING: Removing unreachable block (ram,0x0188224c) */
/* WARNING: Removing unreachable block (ram,0x018823c8) */

undefined8 Oculus_Interaction_OneGrabTranslateTransformer__UpdateTransform(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar18;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x25;
  long lVar19;
  long *unaff_x29;
  undefined1 auVar20 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  int iStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_00000098;
  
  do {
    if (in_stack_00000040._4_4_ == 0) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    else {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar7 = *(long *)(*(long *)
                           Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                         + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        pcVar8 = (char *)thunk_FUN_00d32ed4((undefined8 *)(param_1 + 0x28),
                                            *(undefined8 *)(lVar7 + 0x80));
        if (*pcVar8 == '\0') {
          plVar15 = *(long **)(param_1 + 0x30);
          if (plVar15 == (long *)0x0) {
            iStack0000000000000090 = 1;
          }
          else {
            if (*plVar15 !=
                *(long *)
                 System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
              plVar15 = (long *)0x0;
            }
            if (plVar15 == (long *)0x0) {
              iStack0000000000000090 = 2;
            }
            else {
              lVar7 = *(long *)(param_1 + 0x18);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar9 = FUN_0187bfb0(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x48));
              iStack0000000000000090 = unaff_w24;
              if ((uVar9 & 1) == 0) {
                iStack0000000000000090 = unaff_w24 + 1;
              }
            }
          }
          in_stack_00000048 = 0;
          FUN_01347274(&stack0x00000048,&stack0x00000090,
                       *(undefined8 *)UnityEngine_InputSystem_Controls_Vector3Control_var);
          *(undefined8 *)(param_1 + 0x28) = in_stack_00000048;
        }
      }
    }
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar11 = FUN_01868c14();
        lVar7 = *unaff_x29;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
          lVar7 = *unaff_x29;
        }
        lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar10 == 0) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar7);
            lVar7 = *unaff_x29;
          }
          uVar12 = **(undefined8 **)(lVar7 + 0xb8);
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)System_Comparison<Level2Map>_TypeInfo);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_012d239c(lVar10,uVar12,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<HandDescription>_GetEnumerator__,0);
          unaff_x29 = (long *)Method_System_Collections_Generic_List<DataTable>_get_Count__;
          *(long *)(*(long *)(*(long *)Method_System_Collections_Generic_List<DataTable>_get_Count__
                             + 0xb8) + 0x10) = lVar10;
        }
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_011450d0(uVar11,lVar10,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60),
                     &stack0x00000090,
                     *(undefined8 *)
                      Field_<PrivateImplementationDetails>_C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB
                    );
        lVar7 = CONCAT44(uStack0000000000000094,iStack0000000000000090);
        if (lVar7 != 0) goto LAB_01881294;
      }
    }
    else {
LAB_01881294:
      if (*(char *)(lVar7 + 0x80) == '\0') {
        if (in_stack_00000040._4_4_ != 0) {
          in_stack_00000068 = *(undefined8 *)(param_1 + 0x28);
          iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
          lVar10 = *(long *)(*(long *)
                              Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                            + 0x20);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar10 + 0x80));
          if ((iVar3 != 0) || (*pcVar8 == '\0')) {
            in_stack_00000068 = *(undefined8 *)(param_1 + 0x28);
            iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
            lVar10 = *(long *)(*(long *)
                                Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                              + 0x20);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar10 + 0x80));
            if ((iVar3 != 1) || (*pcVar8 == '\0')) goto LAB_01881410;
          }
          if (*(long *)(lVar7 + 0x48) == 0) {
            uVar11 = FUN_018791ac();
            *(undefined8 *)(lVar7 + 0x48) = uVar11;
          }
          in_stack_00000060 = *(undefined8 *)(lVar7 + 0x90);
          if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iStack0000000000000090 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x2c);
          FUN_01347658(&stack0x00000060,&stack0x00000090,(long)&stack0x00000098 + 4,
                       *(undefined8 *)Method_OVRObjectPool_Get<List<Guid>>__);
          if ((in_stack_00000098._4_4_ >> 1 & 1) != 0) {
            uVar11 = FUN_018765b4(lVar7);
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_01731954(0);
            uVar11 = FUN_0187ba00(uVar12,in_stack_00000028,uVar11,uVar12,
                                  *(undefined8 *)(lVar7 + 0x48),*(undefined8 *)(lVar7 + 0x40));
            *(undefined8 *)(param_1 + 0x30) = uVar11;
          }
        }
LAB_01881410:
        lVar10 = FUN_01868c14();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar4 = FUN_01261b4c(lVar10,lVar7,*unaff_x25);
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar7 = *(long *)(param_1 + 0x30);
        if ((lVar7 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x23 + 0x40)), lVar10 == 0)) {
          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,0);
        }
        if (*(uint *)(unaff_x23 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        unaff_x23[(long)(int)uVar4 + 4] = lVar7;
        *(char *)(param_1 + 0x38) = (char)unaff_w24;
      }
    }
    uVar9 = FUN_012b894c(&stack0x00000070,*unaff_x19);
    if ((uVar9 & 1) == 0) break;
    param_1 = FUN_00bef118(&stack0x00000070,*unaff_x20);
  } while( true );
  FUN_012b8948(&stack0x00000070,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
              );
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar11 = (**(code **)(in_stack_00000010 + 0x18))(*(undefined8 *)(in_stack_00000010 + 0x40));
  if (in_stack_00000018 != 0) {
    FUN_01880014(in_stack_00000030,in_stack_00000028,in_stack_00000018,uVar11);
  }
  FUN_018803d4(in_stack_00000030,in_stack_00000028);
  FUN_01323390(in_stack_00000038,&stack0x00000048,
               *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__);
  in_stack_00000078 = in_stack_00000050;
  in_stack_00000070 = in_stack_00000048;
  in_stack_00000080 = in_stack_00000058;
LAB_018815d0:
  do {
    while( true ) {
      do {
        do {
          uVar9 = FUN_012b894c(&stack0x00000070,*unaff_x19);
          if ((uVar9 & 1) == 0) {
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
              while (uVar9 = FUN_012b894c(&stack0x00000070,*unaff_x19), (uVar9 & 1) != 0) {
                lVar7 = FUN_00bef118(&stack0x00000070,*unaff_x20);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(char *)(lVar7 + 0x38) == '\0') {
                  in_stack_00000068 = *(undefined8 *)(lVar7 + 0x28);
                  iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
                  lVar10 = *(long *)(*(long *)
                                      Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                                    + 0x20);
                  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                    lVar10 = FUN_00d5941c();
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                    lVar10 = FUN_00d5941c();
                  }
                  pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,
                                                      *(undefined8 *)(lVar10 + 0x80));
                  if ((iVar3 != 0) || (*pcVar8 == '\0')) {
                    lVar10 = *(long *)(in_stack_00000020 + 0xe0);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    (**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),uVar11,*(undefined8 *)(lVar7 + 0x10),
                               *(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(lVar10 + 0x28));
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
              while (uVar9 = FUN_012b894c(&stack0x00000070,*unaff_x19), (uVar9 & 1) != 0) {
                lVar7 = FUN_00bef118(&stack0x00000070,*unaff_x20);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(long *)(lVar7 + 0x18) != 0) {
                  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar5 = (**(code **)(*in_stack_00000028 + 0x268))
                                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x270));
                  uVar12 = *(undefined8 *)(lVar7 + 0x18);
                  uVar6 = FUN_00bef220(lVar7 + 0x28,*(undefined8 *)StringLiteral_9074);
                  FUN_01882ef0(in_stack_00000030,uVar11,in_stack_00000028,in_stack_00000020,uVar5,
                               uVar12,uVar6,*(char *)(lVar7 + 0x38) == '\0');
                }
              }
              FUN_012b8948(&stack0x00000070,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                          );
            }
            FUN_01880600(in_stack_00000030,in_stack_00000028,in_stack_00000020,uVar11);
            return uVar11;
          }
          lVar7 = FUN_00bef118(&stack0x00000070,*unaff_x20);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        } while (((*(char *)(lVar7 + 0x38) != '\0') || (*(long *)(lVar7 + 0x18) == 0)) ||
                (*(char *)(*(long *)(lVar7 + 0x18) + 0x80) != '\0'));
        in_stack_00000068 = *(undefined8 *)(lVar7 + 0x28);
        iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
        lVar10 = *(long *)(*(long *)
                            Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                          + 0x20);
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_00d5941c();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_00d5941c();
        }
        pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar10 + 0x80));
      } while ((iVar3 == 0) && (*pcVar8 != '\0'));
      lVar19 = *(long *)(lVar7 + 0x18);
      lVar10 = *(long *)(lVar7 + 0x30);
      uVar9 = FUN_0187feec(in_stack_00000030,lVar19,unaff_x21,lVar10);
      if ((uVar9 & 1) == 0) break;
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar15 = *(long **)(lVar19 + 0x68);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar19 = *plVar15;
      uVar9 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01881760;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_00d59724(plVar15,*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                             ,0);
LAB_01881760:
      (*(code *)*puVar13)(plVar15,uVar11,lVar10,puVar13[1]);
      *(undefined1 *)(lVar7 + 0x38) = 1;
    }
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  } while ((lVar10 == 0) || (*(char *)(lVar19 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000030 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar15 = *(long **)(*(long *)(in_stack_00000030 + 0x20) + 0x40);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar16 = *plVar15;
  uVar12 = *(undefined8 *)(lVar19 + 0x40);
  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12a);
  if (uVar9 != 0) {
    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10777) {
        puVar13 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_01881788;
      }
      uVar9 = uVar9 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar9 != 0);
  }
  puVar13 = (undefined8 *)FUN_00d59724(plVar15,*(long *)StringLiteral_10777,0);
LAB_01881788:
  plVar15 = (long *)(*(code *)*puVar13)(plVar15,uVar12,puVar13[1]);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)((long)plVar15 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo + 300);
    if ((*(byte *)(*plVar15 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar15);
    }
    if ((*(char *)((long)plVar15 + 0xf2) != '\0') && ((char)plVar15[5] == '\0')) {
      plVar15 = *(long **)(lVar19 + 0x68);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar19 = *plVar15;
      uVar9 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
            puVar13 = (undefined8 *)(lVar19 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01881858;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_00d59724(plVar15,*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                             ,1);
LAB_01881858:
      lVar19 = (*(code *)*puVar13)(plVar15,uVar11,puVar13[1]);
      if (lVar19 != 0) {
        uVar12 = thunk_FUN_00d93c64(lVar19,0);
        plVar15 = (long *)FUN_01879238(in_stack_00000030,uVar12);
        puVar2 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo + 300
                         );
        if ((*(byte *)(*plVar15 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        if (*(char *)((long)plVar15 + 0xf1) == '\0') {
          uVar12 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
          plVar14 = (long *)thunk_FUN_00d6225c(lVar19,uVar12);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar19,uVar12);
          }
        }
        else {
          plVar14 = (long *)FUN_01872f88(plVar15,lVar19);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        lVar19 = *plVar14;
        uVar9 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar9 != 0) {
          piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar19 + (long)(*piVar17 + 6) * 0x10 + 0x138);
              goto LAB_0188195c;
            }
            uVar9 = uVar9 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar2,6);
LAB_0188195c:
        uVar9 = (*(code *)*puVar13)(plVar14,puVar13[1]);
        plVar18 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
        if ((uVar9 & 1) == 0) {
          if (*(char *)((long)plVar15 + 0xf1) == '\0') {
            uVar12 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
            plVar15 = (long *)thunk_FUN_00d6225c(lVar10,uVar12);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(lVar10,uVar12);
            }
          }
          else {
            plVar15 = (long *)FUN_01872f88(plVar15,lVar10);
            plVar18 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          }
          lVar10 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
                puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_01881a08;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_00d59724(plVar15,*(long *)
                                          Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                 ,0);
LAB_01881a08:
          plVar15 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          do {
            lVar10 = *plVar15;
            uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar9 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) ==
                    *(long *)
                     Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                  puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_01881a70;
                }
                uVar9 = uVar9 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar9 != 0);
            }
            puVar13 = (undefined8 *)
                      FUN_00d59724(plVar15,*(long *)
                                            Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                   ,0);
LAB_01881a70:
            uVar9 = (*(code *)*puVar13)(plVar15,puVar13[1]);
            if ((uVar9 & 1) == 0) goto LAB_01881b4c;
            lVar10 = *plVar15;
            uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar9 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) ==
                    *(long *)
                     Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                  puVar13 = (undefined8 *)(lVar10 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_01881ad8;
                }
                uVar9 = uVar9 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar9 != 0);
            }
            puVar13 = (undefined8 *)
                      FUN_00d59724(plVar15,*(long *)
                                            Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                   ,1);
LAB_01881ad8:
            uVar12 = (*(code *)*puVar13)(plVar15,puVar13[1]);
            lVar10 = *plVar14;
            uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar9 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *plVar18) {
                  puVar13 = (undefined8 *)(lVar10 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_01881b38;
                }
                uVar9 = uVar9 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar9 != 0);
            }
            puVar13 = (undefined8 *)FUN_00d59724(plVar14,*plVar18,2);
LAB_01881b38:
            (*(code *)*puVar13)(plVar14,uVar12,puVar13[1]);
          } while( true );
        }
      }
    }
  }
  else if (*(int *)((long)plVar15 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)sbyte___var + 300);
    if ((*(byte *)(*plVar15 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)sbyte___var)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    if ((char)plVar15[5] == '\0') {
      plVar14 = *(long **)(lVar19 + 0x68);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar19 = *plVar14;
      uVar9 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
            puVar13 = (undefined8 *)(lVar19 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01881ca4;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_00d59724(plVar14,*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                             ,1);
LAB_01881ca4:
      lVar19 = (*(code *)*puVar13)(plVar14,uVar11,puVar13[1]);
      if (lVar19 != 0) {
        if ((char)plVar15[0x20] == '\0') {
          uVar12 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
          plVar14 = (long *)thunk_FUN_00d6225c(lVar19,uVar12);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar19,uVar12);
          }
        }
        else {
          plVar14 = (long *)FUN_0187467c(plVar15,lVar19);
        }
        if ((char)plVar15[0x20] == '\0') {
          uVar12 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
          plVar15 = (long *)thunk_FUN_00d6225c(lVar10,uVar12);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar10,uVar12);
          }
        }
        else {
          plVar15 = (long *)FUN_0187467c(plVar15,lVar10);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        lVar10 = *plVar15;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar9 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar17 + 9) * 0x10 + 0x138);
              goto LAB_01881d90;
            }
            uVar9 = uVar9 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_00d59724(plVar15,*(long *)
                                        System_Globalization_DateTimeFormatInfoScanner_TypeInfo,9);
LAB_01881d90:
        plVar15 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar10 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)
                   Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_01881df8;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_00d59724(plVar15,*(long *)
                                          Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                 ,0);
LAB_01881df8:
          uVar9 = (*(code *)*puVar13)(plVar15,puVar13[1]);
          if ((uVar9 & 1) == 0) goto LAB_01881ee8;
          lVar10 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)Method_System_Threading_Tasks_Task_FromCancellation<bool>__) {
                puVar13 = (undefined8 *)(lVar10 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                goto LAB_01881e60;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_00d59724(plVar15,*(long *)
                                          Method_System_Threading_Tasks_Task_FromCancellation<bool>__
                                 ,2);
LAB_01881e60:
          auVar20 = (*(code *)*puVar13)(plVar15,puVar13[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar10 = *plVar14;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar13 = (undefined8 *)(lVar10 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_01881ed0;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_00d59724(plVar14,*(long *)
                                          System_Globalization_DateTimeFormatInfoScanner_TypeInfo,1)
          ;
LAB_01881ed0:
          (*(code *)*puVar13)(plVar14,auVar20._0_8_,auVar20._8_8_,puVar13[1]);
        } while( true );
      }
    }
  }
  goto LAB_01881c34;
LAB_01881ee8:
  plVar15 = (long *)thunk_FUN_00d6225c(plVar15,*(undefined8 *)StringLiteral_10310);
  if (plVar15 != (long *)0x0) {
    lVar10 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10310) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01881f60;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar15,*(long *)StringLiteral_10310,0);
LAB_01881f60:
    (*(code *)*puVar13)(plVar15,puVar13[1]);
  }
  goto LAB_01881c34;
LAB_01881b4c:
  plVar15 = (long *)thunk_FUN_00d6225c(plVar15,*(undefined8 *)StringLiteral_10310);
  if (plVar15 != (long *)0x0) {
    lVar10 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10310) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01881bc4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar15,*(long *)StringLiteral_10310,0);
LAB_01881bc4:
    (*(code *)*puVar13)(plVar15,puVar13[1]);
  }
LAB_01881c34:
  *(undefined1 *)(lVar7 + 0x38) = 1;
  unaff_x21 = in_stack_00000020;
  goto LAB_018815d0;
}


