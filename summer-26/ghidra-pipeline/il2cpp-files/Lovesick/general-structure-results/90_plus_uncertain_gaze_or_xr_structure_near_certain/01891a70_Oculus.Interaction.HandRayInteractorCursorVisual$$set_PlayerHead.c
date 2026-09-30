/*
FUNCTION_NAME: Oculus.Interaction.HandRayInteractorCursorVisual$$set_PlayerHead
ENTRY_POINT: 01891a70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x018923d0) */
/* WARNING: Removing unreachable block (ram,0x01891f44) */
/* WARNING: Removing unreachable block (ram,0x0189243c) */
/* WARNING: Removing unreachable block (ram,0x01892430) */

void Oculus_Interaction_HandRayInteractorCursorVisual__set_PlayerHead
               (undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 *unaff_x22;
  long lVar17;
  long lVar18;
  long *unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined2 uStack0000000000000030;
  undefined2 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  (**(code **)(*param_2 + 0x5d8))(param_2,*param_1,*(undefined8 *)(*param_2 + 0x5e0));
  plVar8 = (long *)*unaff_x25;
  if (plVar8 == (long *)0x0) goto LAB_01892428;
  (**(code **)(*plVar8 + 0x708))
            (plVar8,*(undefined1 *)(unaff_x20 + 0xb0),*(undefined8 *)(*plVar8 + 0x710));
  puVar6 = StringLiteral_13053;
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabs_s8__;
  puVar4 = Sirenix_OdinInspector_TitleGroupAttribute_TypeInfo;
  puVar3 = System_Text_RegularExpressions_RegexNode_TypeInfo;
  puVar2 = PTR_DAT_033f7588;
  puVar1 = PTR_DAT_033f6d58;
  FUN_0189be90();
  FUN_0189be90();
  FUN_0189c244();
  in_stack_00000048 = *(undefined8 *)(unaff_x20 + 0x60);
  in_stack_00000050 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000048);
  FUN_0189b8e8(uVar9,uVar16,*(undefined8 *)puVar3,uVar9);
  in_stack_00000038 = *(undefined8 *)(unaff_x20 + 0x70);
  in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000038);
  FUN_0189b8e8(uVar9,uVar16,*(undefined8 *)puVar4,uVar9);
  uStack0000000000000034 = *(undefined2 *)(unaff_x20 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_00d61fa0(*unaff_x22,(long)&stack0x00000030 + 4);
  FUN_0189b8e8(uVar9,uVar16,*(undefined8 *)puVar1,uVar9);
  uStack0000000000000030 = *(undefined2 *)(unaff_x20 + 0x82);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_00d61fa0(*unaff_x22,&stack0x00000030);
  FUN_0189b8e8(uVar9,uVar16,*(undefined8 *)Method_Autohand_Demo_OpenXRHandControllerLink_Grab__,
               uVar9);
  in_stack_00000028 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000028);
  FUN_0189b8e8(uVar9,uVar16,*(undefined8 *)StringLiteral_7111,uVar9);
  in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000020);
  FUN_0189b8e8(uVar9,uVar16,*(undefined8 *)StringLiteral_10636,uVar9);
  in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x84);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000018);
  FUN_0189b8e8(uVar9,uVar16,*(undefined8 *)StringLiteral_11648,uVar9);
  in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x8c);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000010);
  FUN_0189b8e8(uVar9,uVar16,*(undefined8 *)StringLiteral_13333,uVar9);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
  uVar9 = FUN_0189b8e8(uVar9,uVar16,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<Tweener>_GetEnumerator__,uVar9);
  uVar9 = FUN_0189b8e8(uVar9,*(undefined8 *)(unaff_x19 + 0x10),
                       *(undefined8 *)Method_System_Data_Listeners<DataViewListener>_Add__,
                       *(undefined8 *)(unaff_x20 + 0x100));
  FUN_0189b8e8(uVar9,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)StringLiteral_11864,
               *(undefined8 *)(unaff_x20 + 0x38));
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    plVar8 = (long *)*unaff_x25;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x5d8))
                (plVar8,*(undefined8 *)Method_Unity_Burst_Intrinsics_X86_Fma_fmadd_sd__,
                 *(undefined8 *)(*plVar8 + 0x5e0));
      plVar8 = (long *)*unaff_x25;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x598))(plVar8,*(undefined8 *)(*plVar8 + 0x5a0));
        plVar8 = *(long **)(unaff_x20 + 0xe0);
        if (plVar8 != (long *)0x0) {
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)System_Func<IActiveState,_bool>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01891d7c;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_00d59724(plVar8,*(long *)System_Func<IActiveState,_bool>_TypeInfo,0);
LAB_01891d7c:
          plVar8 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
          puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
          puVar1 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          do {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_01891dec;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,0);
LAB_01891dec:
            uVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            if ((uVar14 & 1) == 0) {
              if (plVar8 == (long *)0x0) goto LAB_01891f38;
              lVar13 = *plVar8;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 == 0) goto LAB_01891f10;
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              goto LAB_01891ef8;
            }
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_01891e48;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,0);
LAB_01891e48:
            plVar11 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
            lVar18 = *(long *)puVar6;
            lVar17 = *unaff_x25;
            lVar13 = *(long *)(lVar18 + 0x38);
            if (lVar13 == 0) {
              FUN_00d59478(lVar18);
              lVar13 = *(long *)(lVar18 + 0x38);
            }
            lVar13 = *(long *)(lVar13 + 0x10);
            if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
              lVar13 = FUN_00d5941c();
            }
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar13 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
            if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
              lVar13 = FUN_00d5941c();
            }
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            (**(code **)(*plVar11 + 0x2b8))
                      (plVar11,lVar17,**(undefined8 **)(lVar13 + 0xb8),
                       *(undefined8 *)(*plVar11 + 0x2c0));
          } while( true );
        }
      }
    }
    goto LAB_01892428;
  }
  goto LAB_01891f60;
Oculus_Interaction_HandRayInteractorCursorVisual__InjectHand:
  if (plVar8 != (long *)0x0) {
    lVar13 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_10310) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_018923b8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_10310,0);
LAB_018923b8:
    (*(code *)*puVar10)(plVar8,puVar10[1]);
  }
  plVar8 = (long *)*unaff_x25;
  if (plVar8 == (long *)0x0) goto LAB_01892428;
  (**(code **)(*plVar8 + 0x5a8))(plVar8,*(undefined8 *)(*plVar8 + 0x5b0));
  goto LAB_018923ec;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01891ef8:
    if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_10310) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_01891f2c;
    }
  }
LAB_01891f10:
  puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_10310,0);
LAB_01891f2c:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
LAB_01891f38:
  plVar8 = (long *)*unaff_x25;
  if (plVar8 == (long *)0x0) goto LAB_01892428;
  (**(code **)(*plVar8 + 0x5a8))(plVar8,*(undefined8 *)(*plVar8 + 0x5b0));
LAB_01891f60:
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    plVar8 = (long *)*unaff_x25;
    if (plVar8 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar8 + 0x5d8))
              (plVar8,*(undefined8 *)Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__,
               *(undefined8 *)(*plVar8 + 0x5e0));
    lVar18 = *(long *)puVar6;
    plVar8 = *(long **)(unaff_x20 + 0xf0);
    lVar17 = *unaff_x25;
    lVar13 = *(long *)(lVar18 + 0x38);
    if (lVar13 == 0) {
      FUN_00d59478(lVar18);
      lVar13 = *(long *)(lVar18 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar13 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    if (plVar8 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar8 + 0x2b8))
              (plVar8,lVar17,**(undefined8 **)(lVar13 + 0xb8),*(undefined8 *)(*plVar8 + 0x2c0));
  }
  in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0xe8);
  lVar13 = *(long *)(*(long *)OVRPlugin_OVRP_1_52_0_TypeInfo + 0x20);
  if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
    lVar13 = FUN_00d5941c();
  }
  puVar2 = StringLiteral_1482;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__;
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
  if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
    lVar13 = FUN_00d5941c();
  }
  pcVar12 = (char *)thunk_FUN_00d32ed4(&stack0x00000058,*(undefined8 *)(lVar13 + 0x80));
  puVar3 = Method_Newtonsoft_Json_JsonTextReader_<ParseValueAsync>d__8_MoveNext__;
  if (*pcVar12 != '\0') {
    in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0xe8);
    lVar13 = *unaff_x25;
    uVar14 = FUN_00becc2c(&stack0x00000058,*(undefined8 *)puVar1);
    FUN_0189b94c(uVar14,*(undefined8 *)puVar3,lVar13,uVar14 & 0xffffffff);
  }
  plVar8 = *(long **)(unaff_x20 + 0xf8);
  if (plVar8 != (long *)0x0) {
    lVar17 = *plVar8;
    lVar13 = *(long *)puVar2;
    uVar14 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar10 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_018920e0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar8,lVar13,0);
LAB_018920e0:
    iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    if (0 < iVar7) {
      plVar8 = (long *)*unaff_x25;
      if (plVar8 == (long *)0x0) goto LAB_01892428;
      (**(code **)(*plVar8 + 0x5d8))
                (plVar8,*(undefined8 *)Method_System_Net_WebRequest_GetResponse__,
                 *(undefined8 *)(*plVar8 + 0x5e0));
      plVar8 = *(long **)(unaff_x20 + 0xf8);
      if (plVar8 == (long *)0x0) goto LAB_01892428;
      lVar17 = *plVar8;
      lVar13 = *(long *)puVar2;
      uVar14 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar10 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0189216c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar8,lVar13,0);
LAB_0189216c:
      iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      if (iVar7 != 1) {
        plVar8 = (long *)*unaff_x25;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x598))(plVar8,*(undefined8 *)(*plVar8 + 0x5a0));
          plVar8 = *(long **)(unaff_x20 + 0xf8);
          if (plVar8 != (long *)0x0) {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)
                     Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__
                   ) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_01892270;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_00d59724(plVar8,*(long *)
                                           Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__
                                   ,0);
LAB_01892270:
            plVar8 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
            puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
            puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzq_f32__;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            do {
              lVar13 = *plVar8;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_018922e0;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,0);
LAB_018922e0:
              uVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
              if ((uVar14 & 1) == 0)
              goto Oculus_Interaction_HandRayInteractorCursorVisual__InjectHand;
              lVar13 = *plVar8;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                    puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0189233c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,0);
LAB_0189233c:
              (*(code *)*puVar10)(plVar8,puVar10[1]);
              FUN_0189b804();
            } while( true );
          }
        }
        goto LAB_01892428;
      }
      plVar8 = *(long **)(unaff_x20 + 0xf8);
      if (plVar8 == (long *)0x0) goto LAB_01892428;
      lVar13 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadBuffer_EnsureFilled__)
          {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01892244;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_00d59724(plVar8,*(long *)
                                     Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadBuffer_EnsureFilled__
                             ,0);
LAB_01892244:
      (*(code *)*puVar10)(plVar8,0,puVar10[1]);
      FUN_0189b804();
    }
  }
LAB_018923ec:
  plVar8 = (long *)*unaff_x25;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x588))(plVar8,*(undefined8 *)(*plVar8 + 0x590));
    return;
  }
LAB_01892428:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


