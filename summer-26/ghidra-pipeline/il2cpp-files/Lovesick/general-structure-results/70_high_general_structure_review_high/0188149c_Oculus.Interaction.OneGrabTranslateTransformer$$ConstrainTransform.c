/*
FUNCTION_NAME: Oculus.Interaction.OneGrabTranslateTransformer$$ConstrainTransform
ENTRY_POINT: 0188149c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01881bdc) */
/* WARNING: Removing unreachable block (ram,0x01881be0) */
/* WARNING: Removing unreachable block (ram,0x0188243c) */
/* WARNING: Removing unreachable block (ram,0x01881f78) */
/* WARNING: Removing unreachable block (ram,0x01881f7c) */
/* WARNING: Removing unreachable block (ram,0x0188224c) */
/* WARNING: Removing unreachable block (ram,0x018823c8) */

undefined8 Oculus_Interaction_OneGrabTranslateTransformer__ConstrainTransform(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar16;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long lVar17;
  long unaff_x28;
  long lVar18;
  long *unaff_x29;
  undefined8 uVar19;
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
  
code_r0x0188149c:
  if (unaff_x28 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_00d32864(param_1);
      param_1 = *unaff_x29;
    }
    uVar19 = **(undefined8 **)(param_1 + 0xb8);
    unaff_x28 = thunk_FUN_00d62348(*(undefined8 *)System_Comparison<Level2Map>_TypeInfo);
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(unaff_x28,uVar19,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HandDescription>_GetEnumerator__,0);
    unaff_x29 = (long *)Method_System_Collections_Generic_List<DataTable>_get_Count__;
    *(long *)(*(long *)(*(long *)Method_System_Collections_Generic_List<DataTable>_get_Count__ +
                       0xb8) + 0x10) = unaff_x28;
  }
  if (*(long *)(unaff_x26 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_011450d0(unaff_x27,unaff_x28,*(undefined8 *)(*(long *)(unaff_x26 + 0x18) + 0x60),
               &stack0x00000090,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB
              );
  lVar17 = CONCAT44(uStack0000000000000094,iStack0000000000000090);
  if (lVar17 == 0) goto LAB_01881194;
  do {
    if (*(char *)(lVar17 + 0x80) == '\0') {
      if (in_stack_00000040._4_4_ != 0) {
        in_stack_00000068 = *(undefined8 *)(unaff_x26 + 0x28);
        iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
        lVar8 = *(long *)(*(long *)
                           Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                         + 0x20);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        pcVar9 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar8 + 0x80));
        if ((iVar3 != 0) || (*pcVar9 == '\0')) {
          in_stack_00000068 = *(undefined8 *)(unaff_x26 + 0x28);
          iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
          lVar8 = *(long *)(*(long *)
                             Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                           + 0x20);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_00d5941c();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_00d5941c();
          }
          pcVar9 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar8 + 0x80));
          if ((iVar3 != 1) || (*pcVar9 == '\0')) goto LAB_01881410;
        }
        if (*(long *)(lVar17 + 0x48) == 0) {
          uVar19 = FUN_018791ac();
          *(undefined8 *)(lVar17 + 0x48) = uVar19;
        }
        in_stack_00000060 = *(undefined8 *)(lVar17 + 0x90);
        if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iStack0000000000000090 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x2c);
        FUN_01347658(&stack0x00000060,&stack0x00000090,(long)&stack0x00000098 + 4,
                     *(undefined8 *)Method_OVRObjectPool_Get<List<Guid>>__);
        if ((in_stack_00000098._4_4_ >> 1 & 1) != 0) {
          uVar19 = FUN_018765b4(lVar17);
          if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0
             ) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01731954(0);
          uVar19 = FUN_0187ba00(uVar10,in_stack_00000028,uVar19,uVar10,
                                *(undefined8 *)(lVar17 + 0x48),*(undefined8 *)(lVar17 + 0x40));
          *(undefined8 *)(unaff_x26 + 0x30) = uVar19;
        }
      }
LAB_01881410:
      lVar8 = FUN_01868c14();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = FUN_01261b4c(lVar8,lVar17,*unaff_x25);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar17 = *(long *)(unaff_x26 + 0x30);
      if ((lVar17 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*unaff_x23 + 0x40)), lVar8 == 0)) {
        uVar19 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar19,0);
      }
      if (*(uint *)(unaff_x23 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      unaff_x23[(long)(int)uVar4 + 4] = lVar17;
      *(char *)(unaff_x26 + 0x38) = (char)unaff_w24;
    }
LAB_01881194:
    while( true ) {
      uVar7 = FUN_012b894c(&stack0x00000070,*unaff_x19);
      if ((uVar7 & 1) == 0) {
        FUN_012b8948(&stack0x00000070,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                    );
        if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar19 = (**(code **)(in_stack_00000010 + 0x18))(*(undefined8 *)(in_stack_00000010 + 0x40));
        if (in_stack_00000018 != 0) {
          FUN_01880014(in_stack_00000030,in_stack_00000028,in_stack_00000018,uVar19);
        }
        FUN_018803d4(in_stack_00000030,in_stack_00000028);
        FUN_01323390(in_stack_00000038,&stack0x00000048,
                     *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__);
        in_stack_00000078 = in_stack_00000050;
        in_stack_00000070 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000058;
        goto LAB_018815d0;
      }
      unaff_x26 = FUN_00bef118(&stack0x00000070,*unaff_x20);
      if (in_stack_00000040._4_4_ == 0) {
        if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      else {
        if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(unaff_x26 + 0x18) != 0) {
          lVar17 = *(long *)(*(long *)
                              Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                            + 0x20);
          if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
            lVar17 = FUN_00d5941c();
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
          if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
            lVar17 = FUN_00d5941c();
          }
          pcVar9 = (char *)thunk_FUN_00d32ed4((undefined8 *)(unaff_x26 + 0x28),
                                              *(undefined8 *)(lVar17 + 0x80));
          if (*pcVar9 == '\0') {
            plVar13 = *(long **)(unaff_x26 + 0x30);
            if (plVar13 == (long *)0x0) {
              iStack0000000000000090 = 1;
            }
            else {
              if (*plVar13 !=
                  *(long *)
                   System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
                plVar13 = (long *)0x0;
              }
              if (plVar13 == (long *)0x0) {
                iStack0000000000000090 = 2;
              }
              else {
                lVar17 = *(long *)(unaff_x26 + 0x18);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar7 = FUN_0187bfb0(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x48));
                iStack0000000000000090 = unaff_w24;
                if ((uVar7 & 1) == 0) {
                  iStack0000000000000090 = unaff_w24 + 1;
                }
              }
            }
            in_stack_00000048 = 0;
            FUN_01347274(&stack0x00000048,&stack0x00000090,
                         *(undefined8 *)UnityEngine_InputSystem_Controls_Vector3Control_var);
            *(undefined8 *)(unaff_x26 + 0x28) = in_stack_00000048;
          }
        }
      }
      lVar17 = *(long *)(unaff_x26 + 0x20);
      if (lVar17 != 0) break;
      if (*(long *)(unaff_x26 + 0x18) != 0) {
        unaff_x27 = FUN_01868c14();
        param_1 = *unaff_x29;
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_00d32864(param_1);
          param_1 = *unaff_x29;
        }
        unaff_x28 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
        goto code_r0x0188149c;
      }
    }
  } while( true );
LAB_018815d0:
  do {
    do {
      do {
        uVar7 = FUN_012b894c(&stack0x00000070,*unaff_x19);
        if ((uVar7 & 1) == 0) {
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
            while (uVar7 = FUN_012b894c(&stack0x00000070,*unaff_x19), (uVar7 & 1) != 0) {
              lVar17 = FUN_00bef118(&stack0x00000070,*unaff_x20);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(char *)(lVar17 + 0x38) == '\0') {
                in_stack_00000068 = *(undefined8 *)(lVar17 + 0x28);
                iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
                lVar8 = *(long *)(*(long *)
                                   Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                                 + 0x20);
                if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                  lVar8 = FUN_00d5941c();
                }
                lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
                if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                  lVar8 = FUN_00d5941c();
                }
                pcVar9 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar8 + 0x80));
                if ((iVar3 != 0) || (*pcVar9 == '\0')) {
                  lVar8 = *(long *)(in_stack_00000020 + 0xe0);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  (**(code **)(lVar8 + 0x18))
                            (*(undefined8 *)(lVar8 + 0x40),uVar19,*(undefined8 *)(lVar17 + 0x10),
                             *(undefined8 *)(lVar17 + 0x30),*(undefined8 *)(lVar8 + 0x28));
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
            while (uVar7 = FUN_012b894c(&stack0x00000070,*unaff_x19), (uVar7 & 1) != 0) {
              lVar17 = FUN_00bef118(&stack0x00000070,*unaff_x20);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(lVar17 + 0x18) != 0) {
                if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar5 = (**(code **)(*in_stack_00000028 + 0x268))
                                  (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x270));
                uVar10 = *(undefined8 *)(lVar17 + 0x18);
                uVar6 = FUN_00bef220(lVar17 + 0x28,*(undefined8 *)StringLiteral_9074);
                FUN_01882ef0(in_stack_00000030,uVar19,in_stack_00000028,in_stack_00000020,uVar5,
                             uVar10,uVar6,*(char *)(lVar17 + 0x38) == '\0');
              }
            }
            FUN_012b8948(&stack0x00000070,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                        );
          }
          FUN_01880600(in_stack_00000030,in_stack_00000028,in_stack_00000020,uVar19);
          return uVar19;
        }
        lVar17 = FUN_00bef118(&stack0x00000070,*unaff_x20);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      } while (((*(char *)(lVar17 + 0x38) != '\0') || (*(long *)(lVar17 + 0x18) == 0)) ||
              (*(char *)(*(long *)(lVar17 + 0x18) + 0x80) != '\0'));
      in_stack_00000068 = *(undefined8 *)(lVar17 + 0x28);
      iVar3 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
      lVar8 = *(long *)(*(long *)
                         Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                       + 0x20);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      pcVar9 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar8 + 0x80));
    } while ((iVar3 == 0) && (*pcVar9 != '\0'));
    lVar18 = *(long *)(lVar17 + 0x18);
    lVar8 = *(long *)(lVar17 + 0x30);
    uVar7 = FUN_0187feec(in_stack_00000030,lVar18,unaff_x21,lVar8);
    if ((uVar7 & 1) != 0) goto code_r0x01881694;
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  } while ((lVar8 == 0) || (*(char *)(lVar18 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000030 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar13 = *(long **)(*(long *)(in_stack_00000030 + 0x20) + 0x40);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar14 = *plVar13;
  uVar10 = *(undefined8 *)(lVar18 + 0x40);
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
  if (uVar7 != 0) {
    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_10777) {
        puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01881788;
      }
      uVar7 = uVar7 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar7 != 0);
  }
  puVar11 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_10777,0);
LAB_01881788:
  plVar13 = (long *)(*(code *)*puVar11)(plVar13,uVar10,puVar11[1]);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)((long)plVar13 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo + 300);
    if ((*(byte *)(*plVar13 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar13);
    }
    if ((*(char *)((long)plVar13 + 0xf2) != '\0') && ((char)plVar13[5] == '\0')) {
      plVar13 = *(long **)(lVar18 + 0x68);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar18 = *plVar13;
      uVar7 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
            puVar11 = (undefined8 *)(lVar18 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_01881858;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_00d59724(plVar13,*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                             ,1);
LAB_01881858:
      lVar18 = (*(code *)*puVar11)(plVar13,uVar19,puVar11[1]);
      if (lVar18 != 0) {
        uVar10 = thunk_FUN_00d93c64(lVar18,0);
        plVar13 = (long *)FUN_01879238(in_stack_00000030,uVar10);
        puVar2 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo + 300
                         );
        if ((*(byte *)(*plVar13 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        if (*(char *)((long)plVar13 + 0xf1) == '\0') {
          uVar10 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
          plVar12 = (long *)thunk_FUN_00d6225c(lVar18,uVar10);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar18,uVar10);
          }
        }
        else {
          plVar12 = (long *)FUN_01872f88(plVar13,lVar18);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        lVar18 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar18 + (long)(*piVar15 + 6) * 0x10 + 0x138);
              goto LAB_0188195c;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,6);
LAB_0188195c:
        uVar7 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        plVar16 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
        if ((uVar7 & 1) == 0) {
          if (*(char *)((long)plVar13 + 0xf1) == '\0') {
            uVar10 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
            plVar13 = (long *)thunk_FUN_00d6225c(lVar8,uVar10);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(lVar8,uVar10);
            }
          }
          else {
            plVar13 = (long *)FUN_01872f88(plVar13,lVar8);
            plVar16 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          }
          lVar8 = *plVar13;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
                puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01881a08;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_00d59724(plVar13,*(long *)
                                          Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                 ,0);
LAB_01881a08:
          plVar13 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          do {
            lVar8 = *plVar13;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar7 != 0) {
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)
                     Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                  puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_01881a70;
                }
                uVar7 = uVar7 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_00d59724(plVar13,*(long *)
                                            Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                   ,0);
LAB_01881a70:
            uVar7 = (*(code *)*puVar11)(plVar13,puVar11[1]);
            if ((uVar7 & 1) == 0) goto LAB_01881b4c;
            lVar8 = *plVar13;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar7 != 0) {
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)
                     Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                  puVar11 = (undefined8 *)(lVar8 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_01881ad8;
                }
                uVar7 = uVar7 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_00d59724(plVar13,*(long *)
                                            Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                   ,1);
LAB_01881ad8:
            uVar10 = (*(code *)*puVar11)(plVar13,puVar11[1]);
            lVar8 = *plVar12;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar7 != 0) {
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *plVar16) {
                  puVar11 = (undefined8 *)(lVar8 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                  goto LAB_01881b38;
                }
                uVar7 = uVar7 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_00d59724(plVar12,*plVar16,2);
LAB_01881b38:
            (*(code *)*puVar11)(plVar12,uVar10,puVar11[1]);
          } while( true );
        }
      }
    }
  }
  else if (*(int *)((long)plVar13 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)sbyte___var + 300);
    if ((*(byte *)(*plVar13 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)sbyte___var)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    if ((char)plVar13[5] == '\0') {
      plVar12 = *(long **)(lVar18 + 0x68);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar18 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
            puVar11 = (undefined8 *)(lVar18 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_01881ca4;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_00d59724(plVar12,*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                             ,1);
LAB_01881ca4:
      lVar18 = (*(code *)*puVar11)(plVar12,uVar19,puVar11[1]);
      if (lVar18 != 0) {
        if ((char)plVar13[0x20] == '\0') {
          uVar10 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
          plVar12 = (long *)thunk_FUN_00d6225c(lVar18,uVar10);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar18,uVar10);
          }
        }
        else {
          plVar12 = (long *)FUN_0187467c(plVar13,lVar18);
        }
        if ((char)plVar13[0x20] == '\0') {
          uVar10 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
          plVar13 = (long *)thunk_FUN_00d6225c(lVar8,uVar10);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar8,uVar10);
          }
        }
        else {
          plVar13 = (long *)FUN_0187467c(plVar13,lVar8);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        lVar8 = *plVar13;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar11 = (undefined8 *)(lVar8 + (long)(*piVar15 + 9) * 0x10 + 0x138);
              goto LAB_01881d90;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_00d59724(plVar13,*(long *)
                                        System_Globalization_DateTimeFormatInfoScanner_TypeInfo,9);
LAB_01881d90:
        plVar13 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar8 = *plVar13;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)
                   Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01881df8;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_00d59724(plVar13,*(long *)
                                          Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                 ,0);
LAB_01881df8:
          uVar7 = (*(code *)*puVar11)(plVar13,puVar11[1]);
          if ((uVar7 & 1) == 0) goto LAB_01881ee8;
          lVar8 = *plVar13;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_System_Threading_Tasks_Task_FromCancellation<bool>__) {
                puVar11 = (undefined8 *)(lVar8 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_01881e60;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_00d59724(plVar13,*(long *)
                                          Method_System_Threading_Tasks_Task_FromCancellation<bool>__
                                 ,2);
LAB_01881e60:
          auVar20 = (*(code *)*puVar11)(plVar13,puVar11[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar8 = *plVar12;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar11 = (undefined8 *)(lVar8 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_01881ed0;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_00d59724(plVar12,*(long *)
                                          System_Globalization_DateTimeFormatInfoScanner_TypeInfo,1)
          ;
LAB_01881ed0:
          (*(code *)*puVar11)(plVar12,auVar20._0_8_,auVar20._8_8_,puVar11[1]);
        } while( true );
      }
    }
  }
  goto LAB_01881c34;
code_r0x01881694:
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar13 = *(long **)(lVar18 + 0x68);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar18 = *plVar13;
  uVar7 = (ulong)*(ushort *)(lVar18 + 0x12a);
  if (uVar7 != 0) {
    piVar15 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__) {
        puVar11 = (undefined8 *)(lVar18 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01881760;
      }
      uVar7 = uVar7 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar7 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_00d59724(plVar13,*(long *)
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                         ,0);
LAB_01881760:
  (*(code *)*puVar11)(plVar13,uVar19,lVar8,puVar11[1]);
  *(undefined1 *)(lVar17 + 0x38) = 1;
  goto LAB_018815d0;
LAB_01881ee8:
  plVar13 = (long *)thunk_FUN_00d6225c(plVar13,*(undefined8 *)StringLiteral_10310);
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_10310) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01881f60;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_10310,0);
LAB_01881f60:
    (*(code *)*puVar11)(plVar13,puVar11[1]);
  }
  goto LAB_01881c34;
LAB_01881b4c:
  plVar13 = (long *)thunk_FUN_00d6225c(plVar13,*(undefined8 *)StringLiteral_10310);
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_10310) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01881bc4;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar13,*(long *)StringLiteral_10310,0);
LAB_01881bc4:
    (*(code *)*puVar11)(plVar13,puVar11[1]);
  }
LAB_01881c34:
  *(undefined1 *)(lVar17 + 0x38) = 1;
  unaff_x21 = in_stack_00000020;
  goto LAB_018815d0;
}


