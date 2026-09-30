/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<double,-double,-NoOptions>$$.ctor
ENTRY_POINT: 026db194
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void DG_Tweening_Core_TweenerCore<double,_double,_NoOptions>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  void *__dest;
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  void *__src;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 uVar10;
  uint unaff_w28;
  long unaff_x29;
  
code_r0x026db194:
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar9 + 8) * 0x10 + 0x138);
        goto LAB_026db3a8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_026db3a8:
  lVar4 = (*(code *)*puVar3)();
  if ((lVar4 != 0) && (lVar4 = FUN_0390b368(lVar4,0), lVar4 != 0)) {
    lVar4 = FUN_0390b70c(lVar4,0);
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,9);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) =
             *(undefined8 *)
              Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__;
        thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20));
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(unaff_x29 + -0x10);
          thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__
            ;
            thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30));
            puVar1 = 
            Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
            ;
            *(char *)(unaff_x29 + -0x30) = (char)unaff_w28;
            *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)puVar1;
            *(undefined8 *)(unaff_x29 + -0x38) = unaff_x23;
            uVar6 = FUN_0359ff90(unaff_x29 + -0x40,0);
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x38) = uVar6;
              thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38),uVar6);
              if (4 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x40) = *unaff_x24;
                thunk_FUN_01f51358();
                lVar7 = *unaff_x21;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *unaff_x25) {
                      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
                      goto LAB_026db508;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)FUN_01ecb238();
LAB_026db508:
                uVar6 = (*(code *)*puVar3)();
                if (5 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x48) = uVar6;
                  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x48),uVar6);
                  if (6 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x50) =
                         *(undefined8 *)
                          Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__
                    ;
                    thunk_FUN_01f51358();
                    uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
                    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar6 = FUN_03579868(uVar6,0);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c(*(long *)
                                          Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__
                                        );
                    }
                    uVar6 = FUN_0392f7cc(uVar6,0);
                    if (7 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x58) = uVar6;
                      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x58),uVar6);
                      if (8 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x60) =
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__
                        ;
                        thunk_FUN_01f51358();
                        uVar6 = FUN_0340efe8(lVar5,0);
                        if (lVar4 != 0) {
                          FUN_0390b988(lVar4,uVar6,0);
                          lVar4 = *unaff_x21;
                          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x25) goto LAB_026db658;
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
LAB_026db648:
                          puVar3 = (undefined8 *)FUN_01ecb238();
LAB_026db668:
                          (*(code *)*puVar3)();
                          do {
                            lVar4 = *unaff_x21;
                            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
                            if (uVar8 != 0) {
                              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar9 + -2) == *unaff_x25) {
                                  puVar3 = (undefined8 *)
                                           (lVar4 + (long)(*piVar9 + 0x10) * 0x10 + 0x138);
                                  goto LAB_026db044;
                                }
                                uVar8 = uVar8 - 1;
                                piVar9 = piVar9 + 4;
                              } while (uVar8 != 0);
                            }
                            puVar3 = (undefined8 *)FUN_01ecb238();
LAB_026db044:
                            unaff_w28 = (*(code *)*puVar3)();
                            if (((unaff_w28 & 0xff) < 0x10) &&
                               ((1 << (ulong)(unaff_w28 & 0x1f) & 0xa100U) != 0)) {
                              *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x50);
                              lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28
                                               );
                              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                                lVar4 = FUN_01ecaf44(lVar4);
                              }
                              __dest = *(void **)(unaff_x29 + -0x70);
                              lVar5 = *(long *)(unaff_x29 + -0x68);
                              __src = (void *)FUN_01f08934(*(undefined8 *)(unaff_x29 + -0x48),lVar4,
                                                           *(undefined8 *)(unaff_x29 + -0x60));
                              memcpy(__dest,__src,*(size_t *)(unaff_x29 + -0x58));
                              lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28
                                               );
                              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                                lVar4 = FUN_01ecaf44();
                              }
                              FUN_01f087b0(lVar4,__dest,__src);
                              if (*(long *)(lVar5 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                                __stack_chk_fail();
                              }
                              return;
                            }
                            uVar8 = FUN_0340eec4(*(undefined8 *)(unaff_x29 + -0x10),0);
                            if ((uVar8 & 1) != 0) goto code_r0x026db088;
                            if (unaff_x26 == 0) break;
                            uVar8 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
                            if ((uVar8 & 1) == 0) {
                              param_1 = *unaff_x21;
                              param_3 = *unaff_x25;
                              goto code_r0x026db194;
                            }
                            uVar6 = *(undefined8 *)(unaff_x29 + -0x18);
                            if (*(int *)(*(long *)
                                          Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            uVar6 = FUN_0390bad0(uVar6,0);
                            if (*(int *)(*(long *)
                                          Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c(*(long *)
                                                  Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__
                                                );
                            }
                            plVar2 = (long *)FUN_0390bc14(uVar6,0);
                            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            uVar6 = (**(code **)(*plVar2 + 0x178))();
                            uVar10 = *(undefined8 *)(unaff_x29 + -0x18);
                            if (*(int *)(*(long *)
                                          Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            FUN_0390bc6c(uVar10,*(undefined8 *)(unaff_x29 + -0x48),uVar6,0);
                          } while( true );
                        }
                        goto LAB_026db814;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_026db808:
      *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x50);
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_026db814:
  *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x50);
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x026db088:
  lVar4 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar9 + 8) * 0x10 + 0x138);
        goto LAB_026db1dc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_026db1dc:
  lVar4 = (*(code *)*puVar3)();
  if ((lVar4 == 0) || (lVar4 = FUN_0390b368(lVar4,0), lVar4 == 0)) goto LAB_026db814;
  lVar4 = FUN_0390b70c(lVar4,0);
  lVar5 = FUN_01f08890(*(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                       ,5);
  if (lVar5 == 0) goto LAB_026db814;
  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_026db808;
  *(undefined8 *)(lVar5 + 0x20) =
       *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__;
  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20));
  puVar1 = 
  Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__;
  *(char *)(unaff_x29 + -0x30) = (char)unaff_w28;
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)puVar1;
  *(undefined8 *)(unaff_x29 + -0x38) = unaff_x23;
  uVar6 = FUN_0359ff90(unaff_x29 + -0x40,0);
  if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_026db808;
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar6);
  if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_026db808;
  *(undefined8 *)(lVar5 + 0x30) = *unaff_x24;
  thunk_FUN_01f51358();
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_026db2f4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_026db2f4:
  uVar6 = (*(code *)*puVar3)();
  if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_026db808;
  *(undefined8 *)(lVar5 + 0x38) = uVar6;
  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38),uVar6);
  if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_026db808;
  *(undefined8 *)(lVar5 + 0x40) =
       *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
  thunk_FUN_01f51358();
  uVar6 = FUN_0340efe8(lVar5,0);
  if (lVar4 == 0) goto LAB_026db814;
  FUN_0390b840(lVar4,uVar6,0);
  lVar4 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 == 0) goto LAB_026db648;
  piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
  while (*(long *)(piVar9 + -2) != *unaff_x25) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) goto LAB_026db648;
  }
LAB_026db658:
  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar9 + 0x25) * 0x10 + 0x138);
  goto LAB_026db668;
}


