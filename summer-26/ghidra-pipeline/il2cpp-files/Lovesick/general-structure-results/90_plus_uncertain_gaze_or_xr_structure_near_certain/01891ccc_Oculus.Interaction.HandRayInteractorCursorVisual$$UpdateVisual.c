/*
FUNCTION_NAME: Oculus.Interaction.HandRayInteractorCursorVisual$$UpdateVisual
ENTRY_POINT: 01891ccc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x018923d0) */
/* WARNING: Removing unreachable block (ram,0x01891f44) */
/* WARNING: Removing unreachable block (ram,0x0189243c) */
/* WARNING: Removing unreachable block (ram,0x01892430) */

void Oculus_Interaction_HandRayInteractorCursorVisual__UpdateVisual
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long *unaff_x25;
  long *unaff_x27;
  undefined8 in_stack_00000058;
  
  FUN_0189b8e8(param_2,param_3,**(undefined8 **)(param_1 + 0x18),*(undefined8 *)(unaff_x20 + 0x38));
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    plVar5 = (long *)*unaff_x25;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x5d8))
                (plVar5,*(undefined8 *)Method_Unity_Burst_Intrinsics_X86_Fma_fmadd_sd__,
                 *(undefined8 *)(*plVar5 + 0x5e0));
      plVar5 = (long *)*unaff_x25;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0));
        plVar5 = *(long **)(unaff_x20 + 0xe0);
        if (plVar5 != (long *)0x0) {
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)System_Func<IActiveState,_bool>_TypeInfo) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_01891d7c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_00d59724(plVar5,*(long *)System_Func<IActiveState,_bool>_TypeInfo,0);
LAB_01891d7c:
          plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
          puVar1 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          do {
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_01891dec;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar2,0);
LAB_01891dec:
            uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if ((uVar10 & 1) == 0) {
              if (plVar5 == (long *)0x0) goto LAB_01891f38;
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 == 0) goto LAB_01891f10;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_01891ef8;
            }
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_01891e48;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar1,0);
LAB_01891e48:
            plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
            lVar13 = *unaff_x27;
            lVar12 = *unaff_x25;
            lVar9 = *(long *)(lVar13 + 0x38);
            if (lVar9 == 0) {
              FUN_00d59478(lVar13);
              lVar9 = *(long *)(lVar13 + 0x38);
            }
            lVar9 = *(long *)(lVar9 + 0x10);
            if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
              lVar9 = FUN_00d5941c();
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
            if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
              lVar9 = FUN_00d5941c();
            }
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            (**(code **)(*plVar7 + 0x2b8))
                      (plVar7,lVar12,**(undefined8 **)(lVar9 + 0xb8),
                       *(undefined8 *)(*plVar7 + 0x2c0));
          } while( true );
        }
      }
    }
    goto LAB_01892428;
  }
  goto LAB_01891f60;
Oculus_Interaction_HandRayInteractorCursorVisual__InjectHand:
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10310) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_018923b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)StringLiteral_10310,0);
LAB_018923b8:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  plVar5 = (long *)*unaff_x25;
  if (plVar5 == (long *)0x0) goto LAB_01892428;
  (**(code **)(*plVar5 + 0x5a8))(plVar5,*(undefined8 *)(*plVar5 + 0x5b0));
  goto LAB_018923ec;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_01891ef8:
    if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10310) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_01891f2c;
    }
  }
LAB_01891f10:
  puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)StringLiteral_10310,0);
LAB_01891f2c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_01891f38:
  plVar5 = (long *)*unaff_x25;
  if (plVar5 == (long *)0x0) goto LAB_01892428;
  (**(code **)(*plVar5 + 0x5a8))(plVar5,*(undefined8 *)(*plVar5 + 0x5b0));
LAB_01891f60:
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    plVar5 = (long *)*unaff_x25;
    if (plVar5 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar5 + 0x5d8))
              (plVar5,*(undefined8 *)Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__,
               *(undefined8 *)(*plVar5 + 0x5e0));
    lVar13 = *unaff_x27;
    plVar5 = *(long **)(unaff_x20 + 0xf0);
    lVar12 = *unaff_x25;
    lVar9 = *(long *)(lVar13 + 0x38);
    if (lVar9 == 0) {
      FUN_00d59478(lVar13);
      lVar9 = *(long *)(lVar13 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (plVar5 == (long *)0x0) goto LAB_01892428;
    (**(code **)(*plVar5 + 0x2b8))
              (plVar5,lVar12,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)(*plVar5 + 0x2c0));
  }
  in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0xe8);
  lVar9 = *(long *)(*(long *)OVRPlugin_OVRP_1_52_0_TypeInfo + 0x20);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  puVar2 = StringLiteral_1482;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  pcVar8 = (char *)thunk_FUN_00d32ed4(&stack0x00000058,*(undefined8 *)(lVar9 + 0x80));
  puVar3 = Method_Newtonsoft_Json_JsonTextReader_<ParseValueAsync>d__8_MoveNext__;
  if (*pcVar8 != '\0') {
    in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0xe8);
    lVar9 = *unaff_x25;
    uVar10 = FUN_00becc2c(&stack0x00000058,*(undefined8 *)puVar1);
    FUN_0189b94c(uVar10,*(undefined8 *)puVar3,lVar9,uVar10 & 0xffffffff);
  }
  plVar5 = *(long **)(unaff_x20 + 0xf8);
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    lVar9 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_018920e0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar5,lVar9,0);
LAB_018920e0:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (0 < iVar4) {
      plVar5 = (long *)*unaff_x25;
      if (plVar5 == (long *)0x0) goto LAB_01892428;
      (**(code **)(*plVar5 + 0x5d8))
                (plVar5,*(undefined8 *)Method_System_Net_WebRequest_GetResponse__,
                 *(undefined8 *)(*plVar5 + 0x5e0));
      plVar5 = *(long **)(unaff_x20 + 0xf8);
      if (plVar5 == (long *)0x0) goto LAB_01892428;
      lVar12 = *plVar5;
      lVar9 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0189216c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar5,lVar9,0);
LAB_0189216c:
      iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (iVar4 != 1) {
        plVar5 = (long *)*unaff_x25;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0));
          plVar5 = *(long **)(unaff_x20 + 0xf8);
          if (plVar5 != (long *)0x0) {
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)
                     Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__
                   ) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_01892270;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_00d59724(plVar5,*(long *)
                                          Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__
                                  ,0);
LAB_01892270:
            plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
            puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
            puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzq_f32__;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            do {
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_018922e0;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar2,0);
LAB_018922e0:
              uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              if ((uVar10 & 1) == 0)
              goto Oculus_Interaction_HandRayInteractorCursorVisual__InjectHand;
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0189233c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar1,0);
LAB_0189233c:
              (*(code *)*puVar6)(plVar5,puVar6[1]);
              FUN_0189b804();
            } while( true );
          }
        }
        goto LAB_01892428;
      }
      plVar5 = *(long **)(unaff_x20 + 0xf8);
      if (plVar5 == (long *)0x0) goto LAB_01892428;
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadBuffer_EnsureFilled__)
          {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01892244;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(plVar5,*(long *)
                                    Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadBuffer_EnsureFilled__
                            ,0);
LAB_01892244:
      (*(code *)*puVar6)(plVar5,0,puVar6[1]);
      FUN_0189b804();
    }
  }
LAB_018923ec:
  plVar5 = (long *)*unaff_x25;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x588))(plVar5,*(undefined8 *)(*plVar5 + 0x590));
    return;
  }
LAB_01892428:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


