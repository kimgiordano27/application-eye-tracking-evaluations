/*
FUNCTION_NAME: Oculus.Interaction.OneGrabTranslateTransformer$$get_Constraints
ENTRY_POINT: 01880c54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
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

undefined8
Oculus_Interaction_OneGrabTranslateTransformer__get_Constraints
          (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 in_ZR;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long in_x9;
  ulong uVar21;
  int *in_x10;
  int *piVar22;
  long *unaff_x19;
  long unaff_x21;
  long *plVar23;
  long *unaff_x24;
  long *plVar24;
  undefined8 uVar25;
  long lVar26;
  long *unaff_x29;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
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
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar13 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto FUN_01880c74;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar13 = (undefined8 *)FUN_00d59724();
FUN_01880c74:
  iVar9 = (*(code *)*puVar13)();
  puVar2 = PTR_DAT_033f38b8;
  if (2 < iVar9) {
    uVar14 = FUN_01868c14();
    lVar17 = *unaff_x29;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar17);
      lVar17 = *unaff_x29;
    }
    uVar25 = *(undefined8 *)puVar2;
    lVar26 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
    if (lVar26 == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *unaff_x29;
      }
      uVar27 = **(undefined8 **)(lVar17 + 0xb8);
      lVar26 = thunk_FUN_00d62348(*(undefined8 *)System_Comparison<Level2Map>_TypeInfo);
      if (lVar26 == 0) goto LAB_01882398;
      FUN_012d239c(lVar26,uVar27,*(undefined8 *)PTR_DAT_033f57d8,0);
      unaff_x29 = (long *)Method_System_Collections_Generic_List<DataTable>_get_Count__;
      *(long *)(*(long *)(*(long *)Method_System_Collections_Generic_List<DataTable>_get_Count__ +
                         0xb8) + 8) = lVar26;
    }
    uVar14 = FUN_010dcdb8(uVar14,lVar26,
                          *(undefined8 *)
                           Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>__ctor__
                         );
    uVar14 = FUN_0160107c(uVar25,uVar14,0);
    puVar4 = StringLiteral_13945;
    puVar2 = Method_System_Collections_Generic_List<IXmlNode>__ctor__;
    if (unaff_x24 == (long *)0x0) goto LAB_01882398;
    plVar24 = *(long **)(in_stack_00000030 + 0x28);
    uVar25 = (**(code **)(*unaff_x24 + 0x278))();
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    }
    puVar3 = PTR_DAT_033f3b78;
    uVar27 = FUN_01731954(0);
    uVar14 = FUN_018652e8(*(undefined8 *)puVar4,uVar27,*(undefined8 *)(in_stack_00000020 + 0x60),
                          uVar14);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar27 = thunk_FUN_00d6225c(in_stack_00000028,*(undefined8 *)puVar3);
    uVar14 = FUN_01802a3c(uVar27,uVar25,uVar14,0);
    if (plVar24 == (long *)0x0) goto LAB_01882398;
    lVar17 = *plVar24;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *unaff_x19) {
          puVar13 = (undefined8 *)(lVar17 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_01880e60;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar24,*unaff_x19,1);
LAB_01880e60:
    (*(code *)*puVar13)(plVar24,3,uVar14,0,puVar13[1]);
    unaff_x21 = in_stack_00000020;
  }
  lVar17 = FUN_01882850(in_stack_00000030,unaff_x21);
  if (in_stack_00000040._4_4_ != 0) {
    if (*(long *)(in_stack_00000020 + 0xd8) != 0) {
      plVar24 = (long *)FUN_01261aa8(*(long *)(in_stack_00000020 + 0xd8),
                                     *(undefined8 *)
                                      Oculus_Interaction_Locomotion_LocomotionEventsConnection_<>c_TypeInfo
                                    );
      puVar8 = StringLiteral_7820;
      puVar7 = StringLiteral_7451;
      puVar6 = Method_UnityEngine_InputSystem_PlayerInputManager_JoinPlayerFromUI__;
      puVar5 = Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__;
      puVar3 = Method_System_Collections_Generic_List_Enumerator<UIDocument>_Dispose__;
      puVar4 = PTR_DAT_033f5a40;
      puVar2 = PTR_DAT_033f18b0;
      if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar26 = *plVar24;
        uVar21 = (ulong)*(ushort *)(lVar26 + 0x12a);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) ==
                *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
               ) {
              puVar13 = (undefined8 *)(lVar26 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_01880f4c;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_00d59724(plVar24,*(long *)
                                        Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                               ,0);
LAB_01880f4c:
        uVar21 = (*(code *)*puVar13)(plVar24,puVar13[1]);
        unaff_x29 = (long *)Method_System_Collections_Generic_List<DataTable>_get_Count__;
        if ((uVar21 & 1) == 0) {
          if (plVar24 == (long *)0x0) goto LAB_01881110;
          lVar26 = *plVar24;
          uVar21 = (ulong)*(ushort *)(lVar26 + 0x12a);
          if (uVar21 == 0) goto LAB_018810d8;
          piVar22 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          goto LAB_018810c0;
        }
        lVar26 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01883aa0(lVar26,0);
        lVar18 = *plVar24;
        uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar8) {
              puVar13 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_01880fc4;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar24,*(long *)puVar8,0);
LAB_01880fc4:
        lVar18 = (*(code *)*puVar13)(plVar24,puVar13[1]);
        *(long *)(lVar26 + 0x10) = lVar18;
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(char *)(lVar18 + 0x80) == '\0') {
          lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_012d239c(lVar18,lVar26,*(undefined8 *)puVar2,0);
          uVar21 = FUN_010d75bc(lVar17,lVar18,*(undefined8 *)puVar4);
          if ((uVar21 & 1) != 0) {
            if (*(long *)(lVar26 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar14 = *(undefined8 *)(*(long *)(lVar26 + 0x10) + 0x30);
            lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_018839cc(lVar18,uVar14,0);
            *(undefined8 *)(lVar18 + 0x18) = *(undefined8 *)(lVar26 + 0x10);
            in_stack_00000048 = 0;
            in_stack_00000088._4_4_ = 0;
            FUN_01347274(&stack0x00000048,(long)&stack0x00000088 + 4,
                         *(undefined8 *)UnityEngine_InputSystem_Controls_Vector3Control_var);
            *(undefined8 *)(lVar18 + 0x28) = in_stack_00000048;
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00beef28(lVar17,lVar18,*(undefined8 *)puVar3);
          }
        }
      } while( true );
    }
    goto LAB_01882398;
  }
  goto LAB_01881110;
LAB_01881468:
  if (*(long *)(lVar26 + 0x18) == 0) goto LAB_01881194;
  uVar14 = FUN_01868c14(in_stack_00000020);
  lVar18 = *unaff_x29;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar18);
    lVar18 = *unaff_x29;
  }
  lVar16 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x10);
  if (lVar16 == 0) {
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar18);
      lVar18 = *unaff_x29;
    }
    uVar25 = **(undefined8 **)(lVar18 + 0xb8);
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)System_Comparison<Level2Map>_TypeInfo);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(lVar16,uVar25,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HandDescription>_GetEnumerator__,0);
    unaff_x29 = (long *)Method_System_Collections_Generic_List<DataTable>_get_Count__;
    *(long *)(*(long *)(*(long *)Method_System_Collections_Generic_List<DataTable>_get_Count__ +
                       0xb8) + 0x10) = lVar16;
  }
  if (*(long *)(lVar26 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_011450d0(uVar14,lVar16,*(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x60),&stack0x00000090,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB
              );
  lVar18 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  if (lVar18 == 0) goto LAB_01881194;
LAB_01881294:
  if (*(char *)(lVar18 + 0x80) != '\0') goto LAB_01881194;
  if (in_stack_00000040._4_4_ != 0) {
    in_stack_00000068 = *(undefined8 *)(lVar26 + 0x28);
    iVar9 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
    lVar16 = *(long *)(*(long *)
                        Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                      + 0x20);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    pcVar15 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar16 + 0x80));
    if ((iVar9 != 0) || (*pcVar15 == '\0')) {
      in_stack_00000068 = *(undefined8 *)(lVar26 + 0x28);
      iVar9 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
      lVar16 = *(long *)(*(long *)
                          Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                        + 0x20);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c();
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c();
      }
      pcVar15 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar16 + 0x80));
      if ((iVar9 != 1) || (*pcVar15 == '\0')) goto LAB_01881410;
    }
    if (*(long *)(lVar18 + 0x48) == 0) {
      uVar14 = FUN_018791ac(in_stack_00000030,*(undefined8 *)(lVar18 + 0x40));
      *(undefined8 *)(lVar18 + 0x48) = uVar14;
    }
    in_stack_00000060 = *(undefined8 *)(lVar18 + 0x90);
    if (*(long *)(in_stack_00000030 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uStack0000000000000090 = *(undefined4 *)(*(long *)(in_stack_00000030 + 0x20) + 0x2c);
    FUN_01347658(&stack0x00000060,&stack0x00000090,(long)&stack0x00000098 + 4,
                 *(undefined8 *)Method_OVRObjectPool_Get<List<Guid>>__);
    if ((in_stack_00000098._4_4_ >> 1 & 1) != 0) {
      uVar14 = FUN_018765b4(lVar18);
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar25 = FUN_01731954(0);
      uVar14 = FUN_0187ba00(uVar25,in_stack_00000028,uVar14,uVar25,*(undefined8 *)(lVar18 + 0x48),
                            *(undefined8 *)(lVar18 + 0x40));
      *(undefined8 *)(lVar26 + 0x30) = uVar14;
    }
  }
LAB_01881410:
  lVar16 = FUN_01868c14(in_stack_00000020);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar11 = FUN_01261b4c(lVar16,lVar18,*(undefined8 *)puVar2);
  if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar18 = *(long *)(lVar26 + 0x30);
  if ((lVar18 != 0) &&
     (lVar16 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar24 + 0x40)), lVar16 == 0)) {
    uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar14,0);
  }
  if (*(uint *)(plVar24 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar24[(long)(int)uVar11 + 4] = lVar18;
  *(undefined1 *)(lVar26 + 0x38) = 1;
  goto LAB_01881194;
LAB_01881ee8:
  plVar24 = (long *)thunk_FUN_00d6225c(plVar24,*(undefined8 *)StringLiteral_10310);
  if (plVar24 != (long *)0x0) {
    lVar18 = *plVar24;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_10310) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_01881f60;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar24,*(long *)StringLiteral_10310,0);
LAB_01881f60:
    (*(code *)*puVar13)(plVar24,puVar13[1]);
  }
  goto LAB_01881c34;
LAB_01881b4c:
  plVar24 = (long *)thunk_FUN_00d6225c(plVar24,*(undefined8 *)StringLiteral_10310);
  if (plVar24 != (long *)0x0) {
    lVar18 = *plVar24;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_10310) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_01881bc4;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar24,*(long *)StringLiteral_10310,0);
LAB_01881bc4:
    (*(code *)*puVar13)(plVar24,puVar13[1]);
  }
LAB_01881c34:
  *(undefined1 *)(lVar26 + 0x38) = 1;
  goto LAB_018815d0;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_018810c0:
    if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_10310) {
      puVar13 = (undefined8 *)(lVar26 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_018810f4;
    }
  }
LAB_018810d8:
  puVar13 = (undefined8 *)FUN_00d59724(plVar24,*(long *)StringLiteral_10310,0);
LAB_018810f4:
  (*(code *)*puVar13)(plVar24,puVar13[1]);
LAB_01881110:
  lVar26 = FUN_01868c14(in_stack_00000020);
  puVar2 = StringLiteral_3033;
  if (lVar26 != 0) {
    uVar10 = FUN_01261074(lVar26,*(undefined8 *)StringLiteral_7125);
    plVar24 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,uVar10);
    puVar3 = StringLiteral_108;
    puVar4 = Method_System_Collections_Generic_List<Spectrum_Point>__ctor__;
    puVar2 = Method_System_Collections_Generic_List<NavMeshModifier>_GetEnumerator__;
    if (lVar17 != 0) {
      FUN_01323390(lVar17,&stack0x00000048,
                   *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__);
      in_stack_00000078 = in_stack_00000050;
      in_stack_00000070 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000058;
LAB_01881194:
      uVar21 = FUN_012b894c(&stack0x00000070,*(undefined8 *)puVar4);
      if ((uVar21 & 1) != 0) {
        lVar26 = FUN_00bef118(&stack0x00000070,*(undefined8 *)puVar3);
        if (in_stack_00000040._4_4_ == 0) {
          if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        else {
          if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar26 + 0x18) != 0) {
            lVar18 = *(long *)(*(long *)
                                Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                              + 0x20);
            if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
              lVar18 = FUN_00d5941c();
            }
            lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 8);
            if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
              lVar18 = FUN_00d5941c();
            }
            pcVar15 = (char *)thunk_FUN_00d32ed4((undefined8 *)(lVar26 + 0x28),
                                                 *(undefined8 *)(lVar18 + 0x80));
            if (*pcVar15 == '\0') {
              plVar19 = *(long **)(lVar26 + 0x30);
              if (plVar19 == (long *)0x0) {
                uStack0000000000000090 = 1;
              }
              else {
                if (*plVar19 !=
                    *(long *)
                     System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
                  plVar19 = (long *)0x0;
                }
                if (plVar19 == (long *)0x0) {
                  uStack0000000000000090 = 2;
                }
                else {
                  lVar18 = *(long *)(lVar26 + 0x18);
                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar21 = FUN_0187bfb0(*(undefined8 *)(lVar18 + 0x40),
                                        *(undefined8 *)(lVar18 + 0x48));
                  uStack0000000000000090 = 1;
                  if ((uVar21 & 1) == 0) {
                    uStack0000000000000090 = 2;
                  }
                }
              }
              in_stack_00000048 = 0;
              FUN_01347274(&stack0x00000048,&stack0x00000090,
                           *(undefined8 *)UnityEngine_InputSystem_Controls_Vector3Control_var);
              *(undefined8 *)(lVar26 + 0x28) = in_stack_00000048;
            }
          }
        }
        lVar18 = *(long *)(lVar26 + 0x20);
        if (lVar18 == 0) goto LAB_01881468;
        goto LAB_01881294;
      }
      FUN_012b8948(&stack0x00000070,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                  );
      if (in_stack_00000010 != 0) {
        uVar14 = (**(code **)(in_stack_00000010 + 0x18))
                           (*(undefined8 *)(in_stack_00000010 + 0x40),plVar24,
                            *(undefined8 *)(in_stack_00000010 + 0x28));
        if (in_stack_00000018 != 0) {
          FUN_01880014(in_stack_00000030,in_stack_00000028,in_stack_00000018,uVar14);
        }
        FUN_018803d4(in_stack_00000030,in_stack_00000028,in_stack_00000020,uVar14);
        FUN_01323390(lVar17,&stack0x00000048,
                     *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__);
        in_stack_00000078 = in_stack_00000050;
        in_stack_00000070 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000058;
LAB_018815d0:
        do {
          while( true ) {
            do {
              do {
                uVar21 = FUN_012b894c(&stack0x00000070,*(undefined8 *)puVar4);
                if ((uVar21 & 1) == 0) {
                  FUN_012b8948(&stack0x00000070,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                              );
                  if (*(long *)(in_stack_00000020 + 0xe0) != 0) {
                    FUN_01323390(lVar17,&stack0x00000048,
                                 *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__
                                );
                    in_stack_00000078 = in_stack_00000050;
                    in_stack_00000070 = in_stack_00000048;
                    in_stack_00000080 = in_stack_00000058;
                    while (uVar21 = FUN_012b894c(&stack0x00000070,*(undefined8 *)puVar4),
                          (uVar21 & 1) != 0) {
                      lVar26 = FUN_00bef118(&stack0x00000070,*(undefined8 *)puVar3);
                      if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(char *)(lVar26 + 0x38) == '\0') {
                        in_stack_00000068 = *(undefined8 *)(lVar26 + 0x28);
                        iVar9 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
                        lVar18 = *(long *)(*(long *)
                                            Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                                          + 0x20);
                        if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
                          lVar18 = FUN_00d5941c();
                        }
                        lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 8);
                        if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
                          lVar18 = FUN_00d5941c();
                        }
                        pcVar15 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,
                                                             *(undefined8 *)(lVar18 + 0x80));
                        if ((iVar9 != 0) || (*pcVar15 == '\0')) {
                          lVar18 = *(long *)(in_stack_00000020 + 0xe0);
                          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          (**(code **)(lVar18 + 0x18))
                                    (*(undefined8 *)(lVar18 + 0x40),uVar14,
                                     *(undefined8 *)(lVar26 + 0x10),*(undefined8 *)(lVar26 + 0x30),
                                     *(undefined8 *)(lVar18 + 0x28));
                        }
                      }
                    }
                    FUN_012b8948(&stack0x00000070,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                                );
                  }
                  if (in_stack_00000040._4_4_ != 0) {
                    FUN_01323390(lVar17,&stack0x00000048,
                                 *(undefined8 *)Method_Newtonsoft_Json_Linq_JContainer_CopyItemsTo__
                                );
                    in_stack_00000078 = in_stack_00000050;
                    in_stack_00000070 = in_stack_00000048;
                    in_stack_00000080 = in_stack_00000058;
                    while (uVar21 = FUN_012b894c(&stack0x00000070,*(undefined8 *)puVar4),
                          (uVar21 & 1) != 0) {
                      lVar17 = FUN_00bef118(&stack0x00000070,*(undefined8 *)puVar3);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(long *)(lVar17 + 0x18) != 0) {
                        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar10 = (**(code **)(*in_stack_00000028 + 0x268))
                                           (in_stack_00000028,
                                            *(undefined8 *)(*in_stack_00000028 + 0x270));
                        uVar25 = *(undefined8 *)(lVar17 + 0x18);
                        uVar12 = FUN_00bef220(lVar17 + 0x28,*(undefined8 *)StringLiteral_9074);
                        FUN_01882ef0(in_stack_00000030,uVar14,in_stack_00000028,in_stack_00000020,
                                     uVar10,uVar25,uVar12,*(char *)(lVar17 + 0x38) == '\0');
                      }
                    }
                    FUN_012b8948(&stack0x00000070,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<ShapeRecognizerActiveState_FingerFeatureStateUsage>_get_Current__
                                );
                  }
                  FUN_01880600(in_stack_00000030,in_stack_00000028,in_stack_00000020,uVar14);
                  return uVar14;
                }
                lVar26 = FUN_00bef118(&stack0x00000070,*(undefined8 *)puVar3);
                if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              } while (((*(char *)(lVar26 + 0x38) != '\0') || (*(long *)(lVar26 + 0x18) == 0)) ||
                      (*(char *)(*(long *)(lVar26 + 0x18) + 0x80) != '\0'));
              in_stack_00000068 = *(undefined8 *)(lVar26 + 0x28);
              iVar9 = FUN_00bef220(&stack0x00000068,*(undefined8 *)StringLiteral_9074);
              lVar18 = *(long *)(*(long *)
                                  Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_get_result__
                                + 0x20);
              if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
                lVar18 = FUN_00d5941c();
              }
              lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 8);
              if ((*(byte *)(lVar18 + 0x132) & 1) == 0) {
                lVar18 = FUN_00d5941c();
              }
              pcVar15 = (char *)thunk_FUN_00d32ed4(&stack0x00000068,*(undefined8 *)(lVar18 + 0x80));
            } while ((iVar9 == 0) && (*pcVar15 != '\0'));
            lVar16 = *(long *)(lVar26 + 0x18);
            lVar18 = *(long *)(lVar26 + 0x30);
            uVar21 = FUN_0187feec(in_stack_00000030,lVar16,in_stack_00000020,lVar18);
            if ((uVar21 & 1) == 0) break;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            plVar24 = *(long **)(lVar16 + 0x68);
            if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar16 = *plVar24;
            uVar21 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) ==
                    *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__)
                {
                  puVar13 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_01881760;
                }
                uVar21 = uVar21 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar21 != 0);
            }
            puVar13 = (undefined8 *)
                      FUN_00d59724(plVar24,*(long *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                                   ,0);
LAB_01881760:
            (*(code *)*puVar13)(plVar24,uVar14,lVar18,puVar13[1]);
            *(undefined1 *)(lVar26 + 0x38) = 1;
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        } while ((lVar18 == 0) || (*(char *)(lVar16 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000030 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar24 = *(long **)(*(long *)(in_stack_00000030 + 0x20) + 0x40);
        if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar20 = *plVar24;
        uVar25 = *(undefined8 *)(lVar16 + 0x40);
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_10777) {
              puVar13 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_01881788;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar24,*(long *)StringLiteral_10777,0);
LAB_01881788:
        plVar24 = (long *)(*(code *)*puVar13)(plVar24,uVar25,puVar13[1]);
        if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)((long)plVar24 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo +
                           300);
          if ((*(byte *)(*plVar24 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar24);
          }
          if ((*(char *)((long)plVar24 + 0xf2) != '\0') && ((char)plVar24[5] == '\0')) {
            plVar24 = *(long **)(lVar16 + 0x68);
            if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar16 = *plVar24;
            uVar21 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) ==
                    *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__)
                {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                  goto LAB_01881858;
                }
                uVar21 = uVar21 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar21 != 0);
            }
            puVar13 = (undefined8 *)
                      FUN_00d59724(plVar24,*(long *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                                   ,1);
LAB_01881858:
            lVar16 = (*(code *)*puVar13)(plVar24,uVar14,puVar13[1]);
            if (lVar16 != 0) {
              uVar25 = thunk_FUN_00d93c64(lVar16,0);
              plVar24 = (long *)FUN_01879238(in_stack_00000030,uVar25);
              puVar2 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
              if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              bVar1 = *(byte *)(*(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo
                               + 300);
              if ((*(byte *)(*plVar24 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c();
              }
              if (*(char *)((long)plVar24 + 0xf1) == '\0') {
                uVar25 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
                plVar19 = (long *)thunk_FUN_00d6225c(lVar16,uVar25);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(lVar16,uVar25);
                }
              }
              else {
                plVar19 = (long *)FUN_01872f88(plVar24,lVar16);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              }
              lVar16 = *plVar19;
              uVar21 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar21 != 0) {
                piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                    puVar13 = (undefined8 *)(lVar16 + (long)(*piVar22 + 6) * 0x10 + 0x138);
                    goto LAB_0188195c;
                  }
                  uVar21 = uVar21 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar21 != 0);
              }
              puVar13 = (undefined8 *)FUN_00d59724(plVar19,*(long *)puVar2,6);
LAB_0188195c:
              uVar21 = (*(code *)*puVar13)(plVar19,puVar13[1]);
              plVar23 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
              if ((uVar21 & 1) == 0) {
                if (*(char *)((long)plVar24 + 0xf1) == '\0') {
                  uVar25 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
                  plVar24 = (long *)thunk_FUN_00d6225c(lVar18,uVar25);
                  if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c(lVar18,uVar25);
                  }
                }
                else {
                  plVar24 = (long *)FUN_01872f88(plVar24,lVar18);
                  plVar23 = (long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
                  if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                }
                lVar18 = *plVar24;
                uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) ==
                        *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
                      puVar13 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
                      goto LAB_01881a08;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                puVar13 = (undefined8 *)
                          FUN_00d59724(plVar24,*(long *)
                                                Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                       ,0);
LAB_01881a08:
                plVar24 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
                if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                do {
                  lVar18 = *plVar24;
                  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar21 != 0) {
                    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) ==
                          *(long *)
                           Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ) {
                        puVar13 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
                        goto LAB_01881a70;
                      }
                      uVar21 = uVar21 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar21 != 0);
                  }
                  puVar13 = (undefined8 *)
                            FUN_00d59724(plVar24,*(long *)
                                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                         ,0);
LAB_01881a70:
                  uVar21 = (*(code *)*puVar13)(plVar24,puVar13[1]);
                  if ((uVar21 & 1) == 0) goto LAB_01881b4c;
                  lVar18 = *plVar24;
                  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar21 != 0) {
                    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) ==
                          *(long *)
                           Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ) {
                        puVar13 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                        goto LAB_01881ad8;
                      }
                      uVar21 = uVar21 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar21 != 0);
                  }
                  puVar13 = (undefined8 *)
                            FUN_00d59724(plVar24,*(long *)
                                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                         ,1);
LAB_01881ad8:
                  uVar25 = (*(code *)*puVar13)(plVar24,puVar13[1]);
                  lVar18 = *plVar19;
                  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar21 != 0) {
                    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *plVar23) {
                        puVar13 = (undefined8 *)(lVar18 + (long)(*piVar22 + 2) * 0x10 + 0x138);
                        goto LAB_01881b38;
                      }
                      uVar21 = uVar21 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar21 != 0);
                  }
                  puVar13 = (undefined8 *)FUN_00d59724(plVar19,*plVar23,2);
LAB_01881b38:
                  (*(code *)*puVar13)(plVar19,uVar25,puVar13[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar24 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)sbyte___var + 300);
          if ((*(byte *)(*plVar24 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)sbyte___var))
          {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
          if ((char)plVar24[5] == '\0') {
            plVar19 = *(long **)(lVar16 + 0x68);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar16 = *plVar19;
            uVar21 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) ==
                    *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__)
                {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                  goto LAB_01881ca4;
                }
                uVar21 = uVar21 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar21 != 0);
            }
            puVar13 = (undefined8 *)
                      FUN_00d59724(plVar19,*(long *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_ToArray__
                                   ,1);
LAB_01881ca4:
            lVar16 = (*(code *)*puVar13)(plVar19,uVar14,puVar13[1]);
            if (lVar16 != 0) {
              if ((char)plVar24[0x20] == '\0') {
                uVar25 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
                plVar19 = (long *)thunk_FUN_00d6225c(lVar16,uVar25);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(lVar16,uVar25);
                }
              }
              else {
                plVar19 = (long *)FUN_0187467c(plVar24,lVar16);
              }
              if ((char)plVar24[0x20] == '\0') {
                uVar25 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
                plVar24 = (long *)thunk_FUN_00d6225c(lVar18,uVar25);
                if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(lVar18,uVar25);
                }
              }
              else {
                plVar24 = (long *)FUN_0187467c(plVar24,lVar18);
                if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              }
              lVar18 = *plVar24;
              uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
              if (uVar21 != 0) {
                piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) ==
                      *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                    puVar13 = (undefined8 *)(lVar18 + (long)(*piVar22 + 9) * 0x10 + 0x138);
                    goto LAB_01881d90;
                  }
                  uVar21 = uVar21 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar21 != 0);
              }
              puVar13 = (undefined8 *)
                        FUN_00d59724(plVar24,*(long *)
                                              System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                                     ,9);
LAB_01881d90:
              plVar24 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
              if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              do {
                lVar18 = *plVar24;
                uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) ==
                        *(long *)
                         Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                       ) {
                      puVar13 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
                      goto LAB_01881df8;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                puVar13 = (undefined8 *)
                          FUN_00d59724(plVar24,*(long *)
                                                Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                       ,0);
LAB_01881df8:
                uVar21 = (*(code *)*puVar13)(plVar24,puVar13[1]);
                if ((uVar21 & 1) == 0) goto LAB_01881ee8;
                lVar18 = *plVar24;
                uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) ==
                        *(long *)Method_System_Threading_Tasks_Task_FromCancellation<bool>__) {
                      puVar13 = (undefined8 *)(lVar18 + (long)(*piVar22 + 2) * 0x10 + 0x138);
                      goto LAB_01881e60;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                puVar13 = (undefined8 *)
                          FUN_00d59724(plVar24,*(long *)
                                                Method_System_Threading_Tasks_Task_FromCancellation<bool>__
                                       ,2);
LAB_01881e60:
                auVar28 = (*(code *)*puVar13)(plVar24,puVar13[1]);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar18 = *plVar19;
                uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) ==
                        *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                      puVar13 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                      goto LAB_01881ed0;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                puVar13 = (undefined8 *)
                          FUN_00d59724(plVar19,*(long *)
                                                System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                                       ,1);
LAB_01881ed0:
                (*(code *)*puVar13)(plVar19,auVar28._0_8_,auVar28._8_8_,puVar13[1]);
              } while( true );
            }
          }
        }
        goto LAB_01881c34;
      }
    }
  }
LAB_01882398:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


