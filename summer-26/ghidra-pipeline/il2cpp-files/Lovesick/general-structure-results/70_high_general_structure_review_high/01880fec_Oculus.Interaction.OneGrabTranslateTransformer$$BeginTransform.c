/*
FUNCTION_NAME: Oculus.Interaction.OneGrabTranslateTransformer$$BeginTransform
ENTRY_POINT: 01880fec
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


/* WARNING: Removing unreachable block (ram,0x0188243c) */
/* WARNING: Removing unreachable block (ram,0x0188110c) */
/* WARNING: Removing unreachable block (ram,0x01881bdc) */
/* WARNING: Removing unreachable block (ram,0x01881be0) */
/* WARNING: Removing unreachable block (ram,0x01882760) */
/* WARNING: Removing unreachable block (ram,0x01881f78) */
/* WARNING: Removing unreachable block (ram,0x01881f7c) */
/* WARNING: Removing unreachable block (ram,0x0188224c) */
/* WARNING: Removing unreachable block (ram,0x018823c8) */

undefined8 Oculus_Interaction_OneGrabTranslateTransformer__BeginTransform(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long *plVar20;
  long unaff_x27;
  undefined8 uVar21;
  undefined8 *unaff_x29;
  undefined1 auVar22 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_00000098;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(unaff_x27,unaff_x26,*unaff_x25,0);
    uVar10 = FUN_010d75bc(in_stack_00000038,unaff_x27,*unaff_x29);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(unaff_x26 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar21 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x30);
      lVar11 = thunk_FUN_00d62348(*unaff_x22);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_018839cc(lVar11,uVar21,0);
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(unaff_x26 + 0x10);
      in_stack_00000048 = 0;
      in_stack_00000088._4_4_ = 0;
      FUN_01347274(&stack0x00000048,(long)&stack0x00000088 + 4,
                   *(undefined8 *)UnityEngine_InputSystem_Controls_Vector3Control_var);
      *(undefined8 *)(lVar11 + 0x28) = in_stack_00000048;
      if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00beef28(in_stack_00000038,lVar11,*unaff_x21);
    }
    do {
      lVar11 = *unaff_x23;
      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar10 != 0) {
        piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
          {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_01880f4c;
          }
          uVar10 = uVar10 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724();
LAB_01880f4c:
      uVar10 = (*(code *)*puVar9)();
      plVar20 = (long *)Method_System_Collections_Generic_List<DataTable>_get_Count__;
      if ((uVar10 & 1) == 0) {
        if (unaff_x23 == (long *)0x0) goto LAB_01881100;
        lVar11 = *unaff_x23;
        uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar10 == 0) goto LAB_018810d8;
        piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_018810c0;
      }
      unaff_x26 = thunk_FUN_00d62348(*unaff_x19);
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01883aa0(unaff_x26,0);
      lVar11 = *unaff_x23;
      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar10 != 0) {
        piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x20) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_01880fc4;
          }
          uVar10 = uVar10 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724();
LAB_01880fc4:
      lVar11 = (*(code *)*puVar9)();
      *(long *)(unaff_x26 + 0x10) = lVar11;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    } while (*(char *)(lVar11 + 0x80) != '\0');
    param_1 = thunk_FUN_00d62348(*unaff_x24);
    unaff_x27 = param_1;
  } while( true );
LAB_01881468:
  if (*(long *)(lVar11 + 0x18) == 0) goto LAB_01881194;
  uVar21 = FUN_01868c14(in_stack_00000020);
  lVar13 = *plVar20;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar13);
    lVar13 = *plVar20;
  }
  lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar15 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar13);
      lVar13 = *plVar20;
    }
    uVar16 = **(undefined8 **)(lVar13 + 0xb8);
    lVar15 = thunk_FUN_00d62348(*(undefined8 *)System_Comparison<Level2Map>_TypeInfo);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(lVar15,uVar16,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HandDescription>_GetEnumerator__,0);
    plVar20 = (long *)Method_System_Collections_Generic_List<DataTable>_get_Count__;
    *(long *)(*(long *)(*(long *)Method_System_Collections_Generic_List<DataTable>_get_Count__ +
                       0xb8) + 0x10) = lVar15;
  }
  if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_011450d0(uVar21,lVar15,*(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x60),&stack0x00000090,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB
              );
  lVar13 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  if (lVar13 == 0) goto LAB_01881194;
LAB_01881294:
  if (*(char *)(lVar13 + 0x80) != '\0') goto LAB_01881194;
  if (in_stack_00000040._4_4_ != 0) {
    in_stack_00000068 = *(undefined8 *)(lVar11 + 0x28);
    iVar6 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
    lVar15 = *(long *)(*(long *)
                        Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                      + 0x20);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c();
    }
    pcVar14 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar15 + 0x80));
    if ((iVar6 != 0) || (*pcVar14 == '\0')) {
      in_stack_00000068 = *(undefined8 *)(lVar11 + 0x28);
      iVar6 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
      lVar15 = *(long *)(*(long *)
                          Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                        + 0x20);
      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
        lVar15 = FUN_00d5941c();
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
      if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
        lVar15 = FUN_00d5941c();
      }
      pcVar14 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar15 + 0x80));
      if ((iVar6 != 1) || (*pcVar14 == '\0')) goto LAB_01881410;
    }
    if (*(long *)(lVar13 + 0x48) == 0) {
      uVar21 = FUN_018791ac(in_stack_00000030,*(undefined8 *)(lVar13 + 0x40));
      *(undefined8 *)(lVar13 + 0x48) = uVar21;
    }
    in_stack_00000060 = *(undefined8 *)(lVar13 + 0x90);
    if (*(long *)(in_stack_00000030 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uStack0000000000000090 = *(undefined4 *)(*(long *)(in_stack_00000030 + 0x20) + 0x2c);
    FUN_01347658(&stack0x00000060,&stack0x00000090,(long)&stack0x00000098 + 4,
                 *(undefined8 *)Method_OVRObjectPool_Get<List<Guid>>__);
    if ((in_stack_00000098._4_4_ >> 1 & 1) != 0) {
      uVar21 = FUN_018765b4(lVar13);
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_01731954(0);
      uVar21 = FUN_0187ba00(uVar16,in_stack_00000028,uVar21,uVar16,*(undefined8 *)(lVar13 + 0x48),
                            *(undefined8 *)(lVar13 + 0x40));
      *(undefined8 *)(lVar11 + 0x30) = uVar21;
    }
  }
LAB_01881410:
  lVar15 = FUN_01868c14(in_stack_00000020);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar7 = FUN_01261b4c(lVar15,lVar13,*(undefined8 *)puVar2);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar13 = *(long *)(lVar11 + 0x30);
  if ((lVar13 != 0) &&
     (lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar15 == 0)) {
    uVar21 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar21,0);
  }
  if (*(uint *)(plVar12 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar12[(long)(int)uVar7 + 4] = lVar13;
  *(undefined1 *)(lVar11 + 0x38) = 1;
  goto LAB_01881194;
LAB_01881ee8:
  plVar20 = (long *)thunk_FUN_00d6225c(plVar20,*(undefined8 *)StringLiteral_10310);
  if (plVar20 != (long *)0x0) {
    lVar13 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar10 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_10310) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01881f60;
        }
        uVar10 = uVar10 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar20,*(long *)StringLiteral_10310,0);
LAB_01881f60:
    (*(code *)*puVar9)(plVar20,puVar9[1]);
  }
  goto LAB_01881c34;
LAB_01881b4c:
  plVar20 = (long *)thunk_FUN_00d6225c(plVar20,*(undefined8 *)StringLiteral_10310);
  if (plVar20 != (long *)0x0) {
    lVar13 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar10 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_10310) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01881bc4;
        }
        uVar10 = uVar10 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar20,*(long *)StringLiteral_10310,0);
LAB_01881bc4:
    (*(code *)*puVar9)(plVar20,puVar9[1]);
  }
LAB_01881c34:
  *(undefined1 *)(lVar11 + 0x38) = 1;
  goto LAB_018815d0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar19 = piVar19 + 4;
    if (uVar10 == 0) break;
LAB_018810c0:
    if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_10310) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_018810f4;
    }
  }
LAB_018810d8:
  puVar9 = (undefined8 *)FUN_00d59724();
LAB_018810f4:
  (*(code *)*puVar9)();
LAB_01881100:
  lVar11 = FUN_01868c14(in_stack_00000020);
  puVar2 = StringLiteral_3033;
  if (lVar11 != 0) {
    uVar5 = FUN_01261074(lVar11,*(undefined8 *)StringLiteral_7125);
    plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,uVar5);
    puVar4 = StringLiteral_108;
    puVar3 = Method_System_Collections_Generic_List<Spectrum_Point>__ctor__;
    puVar2 = Method_System_Collections_Generic_List<NavMeshModifier>_GetEnumerator__;
    if (in_stack_00000038 != 0) {
      FUN_01323390(in_stack_00000038,&stack0x00000048,
                   *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__);
      in_stack_00000078 = in_stack_00000050;
      in_stack_00000070 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000058;
LAB_01881194:
      uVar10 = FUN_012b894c(&stack0x00000070,*(undefined8 *)puVar3);
      if ((uVar10 & 1) != 0) {
        lVar11 = FUN_00bef118(&stack0x00000070,*(undefined8 *)puVar4);
        if (in_stack_00000040._4_4_ == 0) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        else {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar11 + 0x18) != 0) {
            lVar13 = *(long *)(*(long *)
                                Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                              + 0x20);
            if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
              lVar13 = FUN_00d5941c();
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
            if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
              lVar13 = FUN_00d5941c();
            }
            pcVar14 = (char *)thunk_FUN_00d32ed4((undefined8 *)(lVar11 + 0x28),
                                                 *(undefined8 *)(lVar13 + 0x80));
            if (*pcVar14 == '\0') {
              plVar17 = *(long **)(lVar11 + 0x30);
              if (plVar17 == (long *)0x0) {
                uStack0000000000000090 = 1;
              }
              else {
                if (*plVar17 !=
                    *(long *)
                     System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
                  plVar17 = (long *)0x0;
                }
                if (plVar17 == (long *)0x0) {
                  uStack0000000000000090 = 2;
                }
                else {
                  lVar13 = *(long *)(lVar11 + 0x18);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar10 = FUN_0187bfb0(*(undefined8 *)(lVar13 + 0x40),
                                        *(undefined8 *)(lVar13 + 0x48));
                  uStack0000000000000090 = 1;
                  if ((uVar10 & 1) == 0) {
                    uStack0000000000000090 = 2;
                  }
                }
              }
              in_stack_00000048 = 0;
              FUN_01347274(&stack0x00000048,&stack0x00000090,
                           *(undefined8 *)UnityEngine_InputSystem_Controls_Vector3Control_var);
              *(undefined8 *)(lVar11 + 0x28) = in_stack_00000048;
            }
          }
        }
        lVar13 = *(long *)(lVar11 + 0x20);
        if (lVar13 == 0) goto LAB_01881468;
        goto LAB_01881294;
      }
      FUN_012b8948(&stack0x00000070,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                  );
      if (in_stack_00000010 != 0) {
        uVar21 = (**(code **)(in_stack_00000010 + 0x18))
                           (*(undefined8 *)(in_stack_00000010 + 0x40),plVar12,
                            *(undefined8 *)(in_stack_00000010 + 0x28));
        if (in_stack_00000018 != 0) {
          FUN_01880014(in_stack_00000030,in_stack_00000028,in_stack_00000018,uVar21);
        }
        FUN_018803d4(in_stack_00000030,in_stack_00000028,in_stack_00000020,uVar21);
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
                uVar10 = FUN_012b894c(&stack0x00000070,*(undefined8 *)puVar3);
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
                    while (uVar10 = FUN_012b894c(&stack0x00000070,*(undefined8 *)puVar3),
                          (uVar10 & 1) != 0) {
                      lVar11 = FUN_00bef118(&stack0x00000070,*(undefined8 *)puVar4);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(char *)(lVar11 + 0x38) == '\0') {
                        in_stack_00000068 = *(undefined8 *)(lVar11 + 0x28);
                        iVar6 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
                        lVar13 = *(long *)(*(long *)
                                            Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                                          + 0x20);
                        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                          lVar13 = FUN_00d5941c();
                        }
                        lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
                        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                          lVar13 = FUN_00d5941c();
                        }
                        pcVar14 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,
                                                             *(undefined8 *)(lVar13 + 0x80));
                        if ((iVar6 != 0) || (*pcVar14 == '\0')) {
                          lVar13 = *(long *)(in_stack_00000020 + 0xe0);
                          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          (**(code **)(lVar13 + 0x18))
                                    (*(undefined8 *)(lVar13 + 0x40),uVar21,
                                     *(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x30),
                                     *(undefined8 *)(lVar13 + 0x28));
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
                    while (uVar10 = FUN_012b894c(&stack0x00000070,*(undefined8 *)puVar3),
                          (uVar10 & 1) != 0) {
                      lVar11 = FUN_00bef118(&stack0x00000070,*(undefined8 *)puVar4);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(long *)(lVar11 + 0x18) != 0) {
                        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar5 = (**(code **)(*in_stack_00000028 + 0x268))
                                          (in_stack_00000028,
                                           *(undefined8 *)(*in_stack_00000028 + 0x270));
                        uVar16 = *(undefined8 *)(lVar11 + 0x18);
                        uVar8 = FUN_00bef220(lVar11 + 0x28,*(undefined8 *)StringLiteral_9074);
                        FUN_01882ef0(in_stack_00000030,uVar21,in_stack_00000028,in_stack_00000020,
                                     uVar5,uVar16,uVar8,*(char *)(lVar11 + 0x38) == '\0');
                      }
                    }
                    FUN_012b8948(&stack0x00000070,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                                );
                  }
                  FUN_01880600(in_stack_00000030,in_stack_00000028,in_stack_00000020,uVar21);
                  return uVar21;
                }
                lVar11 = FUN_00bef118(&stack0x00000070,*(undefined8 *)puVar4);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              } while (((*(char *)(lVar11 + 0x38) != '\0') || (*(long *)(lVar11 + 0x18) == 0)) ||
                      (*(char *)(*(long *)(lVar11 + 0x18) + 0x80) != '\0'));
              in_stack_00000068 = *(undefined8 *)(lVar11 + 0x28);
              iVar6 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
              lVar13 = *(long *)(*(long *)
                                  Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                                + 0x20);
              if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                lVar13 = FUN_00d5941c();
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
              if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                lVar13 = FUN_00d5941c();
              }
              pcVar14 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar13 + 0x80));
            } while ((iVar6 == 0) && (*pcVar14 != '\0'));
            lVar15 = *(long *)(lVar11 + 0x18);
            lVar13 = *(long *)(lVar11 + 0x30);
            uVar10 = FUN_0187feec(in_stack_00000030,lVar15,in_stack_00000020,lVar13);
            if ((uVar10 & 1) == 0) break;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            plVar20 = *(long **)(lVar15 + 0x68);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar15 = *plVar20;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__)
                {
                  puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_01881760;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_00d59724(plVar20,*(long *)
                                           Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                                  ,0);
LAB_01881760:
            (*(code *)*puVar9)(plVar20,uVar21,lVar13,puVar9[1]);
            *(undefined1 *)(lVar11 + 0x38) = 1;
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        } while ((lVar13 == 0) || (*(char *)(lVar15 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000030 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar20 = *(long **)(*(long *)(in_stack_00000030 + 0x20) + 0x40);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar18 = *plVar20;
        uVar16 = *(undefined8 *)(lVar15 + 0x40);
        uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar10 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)StringLiteral_10777) {
              puVar9 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_01881788;
            }
            uVar10 = uVar10 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar20,*(long *)StringLiteral_10777,0);
LAB_01881788:
        plVar20 = (long *)(*(code *)*puVar9)(plVar20,uVar16,puVar9[1]);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)((long)plVar20 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo +
                           300);
          if ((*(byte *)(*plVar20 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar20);
          }
          if ((*(char *)((long)plVar20 + 0xf2) != '\0') && ((char)plVar20[5] == '\0')) {
            plVar20 = *(long **)(lVar15 + 0x68);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar15 = *plVar20;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__)
                {
                  puVar9 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_01881858;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_00d59724(plVar20,*(long *)
                                           Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                                  ,1);
LAB_01881858:
            lVar15 = (*(code *)*puVar9)(plVar20,uVar21,puVar9[1]);
            if (lVar15 != 0) {
              uVar16 = thunk_FUN_00d93c64(lVar15,0);
              plVar20 = (long *)FUN_01879238(in_stack_00000030,uVar16);
              puVar2 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo
                               + 300);
              if ((*(byte *)(*plVar20 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c();
              }
              if (*(char *)((long)plVar20 + 0xf1) == '\0') {
                uVar16 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
                plVar12 = (long *)thunk_FUN_00d6225c(lVar15,uVar16);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(lVar15,uVar16);
                }
              }
              else {
                plVar12 = (long *)FUN_01872f88(plVar20,lVar15);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              }
              lVar15 = *plVar12;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar10 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                    puVar9 = (undefined8 *)(lVar15 + (long)(*piVar19 + 6) * 0x10 + 0x138);
                    goto LAB_0188195c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar10 != 0);
              }
              puVar9 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,6);
LAB_0188195c:
              uVar10 = (*(code *)*puVar9)(plVar12,puVar9[1]);
              plVar17 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
              if ((uVar10 & 1) == 0) {
                if (*(char *)((long)plVar20 + 0xf1) == '\0') {
                  uVar16 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
                  plVar20 = (long *)thunk_FUN_00d6225c(lVar13,uVar16);
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c(lVar13,uVar16);
                  }
                }
                else {
                  plVar20 = (long *)FUN_01872f88(plVar20,lVar13);
                  plVar17 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                }
                lVar13 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar10 != 0) {
                  piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
                      puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_01881a08;
                    }
                    uVar10 = uVar10 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar10 != 0);
                }
                puVar9 = (undefined8 *)
                         FUN_00d59724(plVar20,*(long *)
                                               Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                      ,0);
LAB_01881a08:
                plVar20 = (long *)(*(code *)*puVar9)(plVar20,puVar9[1]);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                do {
                  lVar13 = *plVar20;
                  uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar10 != 0) {
                    piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) ==
                          *(long *)
                           Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ) {
                        puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_01881a70;
                      }
                      uVar10 = uVar10 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_00d59724(plVar20,*(long *)
                                                 Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                        ,0);
LAB_01881a70:
                  uVar10 = (*(code *)*puVar9)(plVar20,puVar9[1]);
                  if ((uVar10 & 1) == 0) goto LAB_01881b4c;
                  lVar13 = *plVar20;
                  uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar10 != 0) {
                    piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) ==
                          *(long *)
                           Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ) {
                        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                        goto LAB_01881ad8;
                      }
                      uVar10 = uVar10 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_00d59724(plVar20,*(long *)
                                                 Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                        ,1);
LAB_01881ad8:
                  uVar16 = (*(code *)*puVar9)(plVar20,puVar9[1]);
                  lVar13 = *plVar12;
                  uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar10 != 0) {
                    piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *plVar17) {
                        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                        goto LAB_01881b38;
                      }
                      uVar10 = uVar10 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_00d59724(plVar12,*plVar17,2);
LAB_01881b38:
                  (*(code *)*puVar9)(plVar12,uVar16,puVar9[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar20 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)sbyte___var + 300);
          if ((*(byte *)(*plVar20 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)sbyte___var))
          {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
          if ((char)plVar20[5] == '\0') {
            plVar12 = *(long **)(lVar15 + 0x68);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar15 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__)
                {
                  puVar9 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_01881ca4;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_00d59724(plVar12,*(long *)
                                           Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                                  ,1);
LAB_01881ca4:
            lVar15 = (*(code *)*puVar9)(plVar12,uVar21,puVar9[1]);
            if (lVar15 != 0) {
              if ((char)plVar20[0x20] == '\0') {
                uVar16 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
                plVar12 = (long *)thunk_FUN_00d6225c(lVar15,uVar16);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(lVar15,uVar16);
                }
              }
              else {
                plVar12 = (long *)FUN_0187467c(plVar20,lVar15);
              }
              if ((char)plVar20[0x20] == '\0') {
                uVar16 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
                plVar20 = (long *)thunk_FUN_00d6225c(lVar13,uVar16);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(lVar13,uVar16);
                }
              }
              else {
                plVar20 = (long *)FUN_0187467c(plVar20,lVar13);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              }
              lVar13 = *plVar20;
              uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar10 != 0) {
                piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) ==
                      *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                    puVar9 = (undefined8 *)(lVar13 + (long)(*piVar19 + 9) * 0x10 + 0x138);
                    goto LAB_01881d90;
                  }
                  uVar10 = uVar10 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar10 != 0);
              }
              puVar9 = (undefined8 *)
                       FUN_00d59724(plVar20,*(long *)
                                             System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                                    ,9);
LAB_01881d90:
              plVar20 = (long *)(*(code *)*puVar9)(plVar20,puVar9[1]);
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              do {
                lVar13 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar10 != 0) {
                  piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        *(long *)
                         Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                       ) {
                      puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_01881df8;
                    }
                    uVar10 = uVar10 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar10 != 0);
                }
                puVar9 = (undefined8 *)
                         FUN_00d59724(plVar20,*(long *)
                                               Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                      ,0);
LAB_01881df8:
                uVar10 = (*(code *)*puVar9)(plVar20,puVar9[1]);
                if ((uVar10 & 1) == 0) goto LAB_01881ee8;
                lVar13 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar10 != 0) {
                  piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        *(long *)Method_System_Threading_Tasks_Task_FromCancellation<bool>__) {
                      puVar9 = (undefined8 *)(lVar13 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                      goto LAB_01881e60;
                    }
                    uVar10 = uVar10 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar10 != 0);
                }
                puVar9 = (undefined8 *)
                         FUN_00d59724(plVar20,*(long *)
                                               Method_System_Threading_Tasks_Task_FromCancellation<bool>__
                                      ,2);
LAB_01881e60:
                auVar22 = (*(code *)*puVar9)(plVar20,puVar9[1]);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar13 = *plVar12;
                uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar10 != 0) {
                  piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                      puVar9 = (undefined8 *)(lVar13 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                      goto LAB_01881ed0;
                    }
                    uVar10 = uVar10 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar10 != 0);
                }
                puVar9 = (undefined8 *)
                         FUN_00d59724(plVar12,*(long *)
                                               System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                                      ,1);
LAB_01881ed0:
                (*(code *)*puVar9)(plVar12,auVar22._0_8_,auVar22._8_8_,puVar9[1]);
              } while( true );
            }
          }
        }
        goto LAB_01881c34;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


