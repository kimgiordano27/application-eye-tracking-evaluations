/*
FUNCTION_NAME: Oculus.Interaction.HandRayInteractorCursorVisual$$set_OffsetAlongNormal
ENTRY_POINT: 01891ad8
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

void Oculus_Interaction_HandRayInteractorCursorVisual__set_OffsetAlongNormal(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar14;
  undefined8 *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined2 in_stack_00000030;
  undefined2 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  puVar2 = StringLiteral_13053;
  FUN_0189be90();
  FUN_0189be90();
  FUN_0189c244();
  in_stack_00000048 = *(undefined8 *)(unaff_x20 + 0x60);
  in_stack_00000050 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = thunk_FUN_00d61fa0(*unaff_x26,&stack0x00000048);
  FUN_0189b8e8(uVar5,uVar13,*unaff_x24,uVar5);
  in_stack_00000038 = *(undefined8 *)(unaff_x20 + 0x70);
  in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = thunk_FUN_00d61fa0(*unaff_x26,&stack0x00000038);
  FUN_0189b8e8(uVar5,uVar13,*unaff_x28,uVar5);
  uStack0000000000000034 = *(undefined2 *)(unaff_x20 + 0x80);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = thunk_FUN_00d61fa0(*unaff_x22,&stack0x00000034);
  FUN_0189b8e8(uVar5,uVar13,*unaff_x29,uVar5);
  in_stack_00000030 = *(undefined2 *)(unaff_x20 + 0x82);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = thunk_FUN_00d61fa0(*unaff_x22,&stack0x00000030);
  FUN_0189b8e8(uVar5,uVar13,*(undefined8 *)Method_Autohand_Demo_OpenXRHandControllerLink_Grab__,
               uVar5);
  in_stack_00000028 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = thunk_FUN_00d61fa0(*unaff_x23,&stack0x00000028);
  FUN_0189b8e8(uVar5,uVar13,*(undefined8 *)StringLiteral_7111,uVar5);
  in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = thunk_FUN_00d61fa0(*unaff_x23,&stack0x00000020);
  FUN_0189b8e8(uVar5,uVar13,*(undefined8 *)StringLiteral_10636,uVar5);
  in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x84);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = thunk_FUN_00d61fa0(*unaff_x23,&stack0x00000018);
  FUN_0189b8e8(uVar5,uVar13,*(undefined8 *)StringLiteral_11648,uVar5);
  in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x8c);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = thunk_FUN_00d61fa0(*unaff_x23,&stack0x00000010);
  FUN_0189b8e8(uVar5,uVar13,*(undefined8 *)StringLiteral_13333,uVar5);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = thunk_FUN_00d61fa0(*unaff_x26);
  uVar5 = FUN_0189b8e8(uVar5,uVar13,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<Tweener>_GetEnumerator__,uVar5);
  uVar5 = FUN_0189b8e8(uVar5,*(undefined8 *)(unaff_x19 + 0x10),
                       *(undefined8 *)Method_System_Data_Listeners<DataViewListener>_Add__,
                       *(undefined8 *)(unaff_x20 + 0x100));
  FUN_0189b8e8(uVar5,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)StringLiteral_11864,
               *(undefined8 *)(unaff_x20 + 0x38));
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    plVar6 = (long *)*unaff_x25;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x5d8))
                (plVar6,*(undefined8 *)Method_Unity_Burst_Intrinsics_X86_Fma_fmadd_sd__,
                 *(undefined8 *)(*plVar6 + 0x5e0));
      plVar6 = (long *)*unaff_x25;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x598))(plVar6,*(undefined8 *)(*plVar6 + 0x5a0));
        plVar6 = *(long **)(unaff_x20 + 0xe0);
        if (plVar6 != (long *)0x0) {
          lVar10 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)System_Func<IActiveState,_bool>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01891d7c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_00d59724(plVar6,*(long *)System_Func<IActiveState,_bool>_TypeInfo,0);
LAB_01891d7c:
          plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
          puVar1 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          do {
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_01891dec;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01891dec:
            uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            if ((uVar11 & 1) == 0) {
              if (plVar6 == (long *)0x0) goto LAB_01891f38;
              lVar10 = *plVar6;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 == 0) goto LAB_01891f10;
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_01891ef8;
            }
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_01891e48;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar1,0);
LAB_01891e48:
            plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
            lVar15 = *(long *)puVar2;
            lVar14 = *unaff_x25;
            lVar10 = *(long *)(lVar15 + 0x38);
            if (lVar10 == 0) {
              FUN_00d59478(lVar15);
              lVar10 = *(long *)(lVar15 + 0x38);
            }
            lVar10 = *(long *)(lVar10 + 0x10);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar10 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,lVar14,**(undefined8 **)(lVar10 + 0xb8),
                       *(undefined8 *)(*plVar8 + 0x2c0));
          } while( true );
        }
      }
    }
    goto LAB_01892428;
  }
  goto LAB_01891f60;
Oculus_Interaction_HandRayInteractorCursorVisual__InjectHand:
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_10310) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_018923b8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_10310,0);
LAB_018923b8:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  plVar6 = (long *)*unaff_x25;
  if (plVar6 == (long *)0x0) goto LAB_01892428;
  (**(code **)(*plVar6 + 0x5a8))(plVar6,*(undefined8 *)(*plVar6 + 0x5b0));
  goto LAB_018923ec;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_01891ef8:
    if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_10310) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_01891f2c;
    }
  }
LAB_01891f10:
  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_10310,0);
LAB_01891f2c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_01891f38:
  plVar6 = (long *)*unaff_x25;
  if (plVar6 == (long *)0x0) goto LAB_01892428;
  (**(code **)(*plVar6 + 0x5a8))(plVar6,*(undefined8 *)(*plVar6 + 0x5b0));
LAB_01891f60:
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    plVar6 = (long *)*unaff_x25;
    if (plVar6 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar6 + 0x5d8))
              (plVar6,*(undefined8 *)Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__,
               *(undefined8 *)(*plVar6 + 0x5e0));
    lVar15 = *(long *)puVar2;
    plVar6 = *(long **)(unaff_x20 + 0xf0);
    lVar14 = *unaff_x25;
    lVar10 = *(long *)(lVar15 + 0x38);
    if (lVar10 == 0) {
      FUN_00d59478(lVar15);
      lVar10 = *(long *)(lVar15 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar10 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    if (plVar6 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar6 + 0x2b8))
              (plVar6,lVar14,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)(*plVar6 + 0x2c0));
  }
  in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0xe8);
  lVar10 = *(long *)(*(long *)OVRPlugin_OVRP_1_52_0_TypeInfo + 0x20);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  puVar1 = StringLiteral_1482;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__;
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  pcVar9 = (char *)thunk_FUN_00d32ed4(&stack0x00000058,*(undefined8 *)(lVar10 + 0x80));
  puVar3 = Method_Newtonsoft_Json_JsonTextReader_<ParseValueAsync>d__8_MoveNext__;
  if (*pcVar9 != '\0') {
    in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0xe8);
    lVar10 = *unaff_x25;
    uVar11 = FUN_00becc2c(&stack0x00000058,*(undefined8 *)puVar2);
    FUN_0189b94c(uVar11,*(undefined8 *)puVar3,lVar10,uVar11 & 0xffffffff);
  }
  plVar6 = *(long **)(unaff_x20 + 0xf8);
  if (plVar6 != (long *)0x0) {
    lVar14 = *plVar6;
    lVar10 = *(long *)puVar1;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_018920e0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,lVar10,0);
LAB_018920e0:
    iVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (0 < iVar4) {
      plVar6 = (long *)*unaff_x25;
      if (plVar6 == (long *)0x0) goto LAB_01892428;
      (**(code **)(*plVar6 + 0x5d8))
                (plVar6,*(undefined8 *)Method_System_Net_WebRequest_GetResponse__,
                 *(undefined8 *)(*plVar6 + 0x5e0));
      plVar6 = *(long **)(unaff_x20 + 0xf8);
      if (plVar6 == (long *)0x0) goto LAB_01892428;
      lVar14 = *plVar6;
      lVar10 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0189216c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar6,lVar10,0);
LAB_0189216c:
      iVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (iVar4 != 1) {
        plVar6 = (long *)*unaff_x25;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x598))(plVar6,*(undefined8 *)(*plVar6 + 0x5a0));
          plVar6 = *(long **)(unaff_x20 + 0xf8);
          if (plVar6 != (long *)0x0) {
            lVar10 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)
                     Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__
                   ) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_01892270;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_00d59724(plVar6,*(long *)
                                          Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__
                                  ,0);
LAB_01892270:
            plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
            puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
            puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzq_f32__;
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            do {
              lVar10 = *plVar6;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_018922e0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar1,0);
LAB_018922e0:
              uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
              if ((uVar11 & 1) == 0)
              goto Oculus_Interaction_HandRayInteractorCursorVisual__InjectHand;
              lVar10 = *plVar6;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0189233c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_0189233c:
              (*(code *)*puVar7)(plVar6,puVar7[1]);
              FUN_0189b804();
            } while( true );
          }
        }
        goto LAB_01892428;
      }
      plVar6 = *(long **)(unaff_x20 + 0xf8);
      if (plVar6 == (long *)0x0) goto LAB_01892428;
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadBuffer_EnsureFilled__)
          {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01892244;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_00d59724(plVar6,*(long *)
                                    Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadBuffer_EnsureFilled__
                            ,0);
LAB_01892244:
      (*(code *)*puVar7)(plVar6,0,puVar7[1]);
      FUN_0189b804();
    }
  }
LAB_018923ec:
  plVar6 = (long *)*unaff_x25;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x588))(plVar6,*(undefined8 *)(*plVar6 + 0x590));
    return;
  }
LAB_01892428:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


