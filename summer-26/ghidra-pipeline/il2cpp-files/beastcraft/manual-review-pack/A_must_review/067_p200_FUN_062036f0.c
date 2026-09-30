/*
FUNCTION_NAME: FUN_062036f0
ENTRY_POINT: 062036f0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_14;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06203fc4) */

long FUN_062036f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  ulong auStack_48 [2];
  long **pplStack_38;
  long *plStack_28;
  
  if ((bRam0000000006e96ad4 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a6d9f0);
    FUN_02e3ca1c(PTR_DAT_06a74db0);
    FUN_02e3ca1c(PTR_DAT_06a8e288);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionEnter2DHandler_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionEnterHandler_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionExit2DHandler_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a8e290);
    FUN_02e3ca1c(PTR_DAT_06a72910);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionExitHandler_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionStay2DHandler_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a33998);
    FUN_02e3ca1c(PTR_DAT_06a2ef10);
    FUN_02e3ca1c(PTR_DAT_06a6d9e0);
    FUN_02e3ca1c(System_Net_HttpValidationHelpers_TypeInfo);
    FUN_02e3ca1c(System_Threading_IAsyncLocal_TypeInfo);
    FUN_02e3ca1c(System_Net_HttpRequestCreator_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorIKHandler_TypeInfo);
    FUN_02e3ca1c(System_Net_HttpWebResponse_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorMoveHandler_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionStayHandler_TypeInfo);
    FUN_02e3ca1c(Unity_Services_Authentication_Shared_IApiConfiguration_TypeInfo);
    FUN_02e3ca1c(System_Net_HttpStatusCode_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationFocusHandler_TypeInfo);
    FUN_02e3ca1c(UnityEngine_InputSystem_HumiditySensor_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationPauseHandler_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Models_HttpTransferUpdate_TypeInfo);
    FUN_02e3ca1c(Unity_Services_Authentication_Internal_IAccessToken_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationQuitHandler_TypeInfo);
    FUN_02e3ca1c(UnityWebSocketSharp_Net_HttpVersion_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnAudioFilterReadHandler_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnBecameInvisibleHandler_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnBecameVisibleHandler_TypeInfo);
    FUN_02e3ca1c(Cysharp_Threading_Tasks_Triggers_IAsyncOnControllerColliderHitHandler_TypeInfo);
    bRam0000000006e96ad4 = 1;
  }
  puVar1 = PTR_DAT_06a33998;
  plStack_28 = (long *)0x0;
  if (param_1 != 0) {
    lVar13 = *(long *)PTR_DAT_06a33998;
    lVar11 = *(long *)(lVar13 + 0x38);
    if (lVar11 == 0) {
      FUN_02e756e8(lVar13);
      lVar11 = *(long *)(lVar13 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02e7568c();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    puVar3 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
    puVar2 = PTR_DAT_06a74db0;
    lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02e7568c();
    }
    plVar7 = (long *)FUN_039749e8(param_1,*(undefined8 *)puVar3,**(undefined8 **)(lVar11 + 0xb8),
                                  *(undefined8 *)puVar2);
    lVar13 = *(long *)puVar1;
    pplStack_38 = &plStack_28;
    lVar11 = *(long *)(lVar13 + 0x38);
    auStack_48[1] = 0;
    plStack_28 = plVar7;
    if (lVar11 == 0) {
      FUN_02e756e8(lVar13);
      lVar11 = *(long *)(lVar13 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02e7568c();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02e7568c();
    }
    puVar2 = UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar8 = FUN_039749e8(plVar7,*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo,
                         **(undefined8 **)(lVar11 + 0xb8),
                         *(undefined8 *)UnityEngine_UIElements_EventBase<PointerEnterEvent>_TypeInfo
                        );
    uVar9 = thunk_FUN_0548b788(*(undefined8 *)
                                Cysharp_Threading_Tasks_Triggers_IAsyncOnBecameVisibleHandler_TypeInfo
                               ,uVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar9 = thunk_FUN_0548b788(*(undefined8 *)
                                  Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorIKHandler_TypeInfo
                                 ,uVar8,0);
      if ((uVar9 & 1) == 0) {
        uVar9 = thunk_FUN_0548b788(*(undefined8 *)
                                    Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorMoveHandler_TypeInfo
                                   ,uVar8,0);
        if ((uVar9 & 1) == 0) {
          uVar9 = thunk_FUN_0548b788(*(undefined8 *)
                                      Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationPauseHandler_TypeInfo
                                     ,uVar8,0);
          if ((uVar9 & 1) == 0) {
            uVar9 = thunk_FUN_0548b788(*(undefined8 *)
                                        Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationQuitHandler_TypeInfo
                                       ,uVar8,0);
            if ((uVar9 & 1) == 0) {
              uVar9 = thunk_FUN_0548b788(*(undefined8 *)System_Threading_IAsyncLocal_TypeInfo,uVar8,
                                         0);
              if ((uVar9 & 1) == 0) {
                uVar9 = thunk_FUN_0548b788(*(undefined8 *)
                                            Cysharp_Threading_Tasks_Triggers_IAsyncOnBecameInvisibleHandler_TypeInfo
                                           ,uVar8,0);
                if ((uVar9 & 1) == 0) {
                  uVar9 = thunk_FUN_0548b788(*(undefined8 *)
                                              Cysharp_Threading_Tasks_Triggers_IAsyncOnAudioFilterReadHandler_TypeInfo
                                             ,uVar8,0);
                  if ((uVar9 & 1) == 0) {
                    uVar9 = thunk_FUN_0548b788(*(undefined8 *)
                                                Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationFocusHandler_TypeInfo
                                               ,uVar8,0);
                    if ((uVar9 & 1) == 0) {
                      uVar9 = thunk_FUN_0548b788(*(undefined8 *)
                                                  Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionStayHandler_TypeInfo
                                                 ,uVar8,0);
                      plVar7 = plStack_28;
                      if ((uVar9 & 1) == 0) {
                        uVar8 = FUN_02a861f0(*(undefined8 *)puVar1);
                        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02e3ccc4();
                        }
                        uVar9 = FUN_03974808(plVar7,*(undefined8 *)
                                                                                                          
                                                  Cysharp_Threading_Tasks_Triggers_IAsyncOnControllerColliderHitHandler_TypeInfo
                                             ,uVar8,*(undefined8 *)PTR_DAT_06a8e288);
                        if ((uVar9 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_06a6d9e0 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c();
                          }
                          param_1 = FUN_0620688c(param_1);
                        }
                      }
                      else {
                        if (*(long *)(param_1 + 0x10) == 0) {
                          uVar8 = 0;
                        }
                        else {
                          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
                        }
                        param_1 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a6d9f0);
                        FUN_06205440(param_1,uVar8);
                      }
                    }
                    else {
                      uVar8 = FUN_02a861f0(*(undefined8 *)puVar1);
                      param_1 = FUN_039749e8(param_1,*(undefined8 *)
                                                                                                            
                                                  Unity_Services_Authentication_Shared_IApiConfiguration_TypeInfo
                                             ,uVar8,*(undefined8 *)puVar2);
                    }
                  }
                  else {
                    uVar8 = FUN_02a861f0(*(undefined8 *)puVar1);
                    uVar5 = FUN_03974858(param_1,*(undefined8 *)
                                                  UnityEngine_InputSystem_HumiditySensor_TypeInfo,
                                         uVar8,*(undefined8 *)
                                                Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionEnter2DHandler_TypeInfo
                                        );
                    auStack_48[0] = CONCAT62(auStack_48[0]._2_6_,uVar5);
                    param_1 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x88),auStack_48
                                                );
                  }
                }
                else {
                  uVar8 = FUN_02a861f0(*(undefined8 *)puVar1);
                  auStack_48[0] =
                       FUN_039748a8(param_1,*(undefined8 *)System_Net_HttpWebResponse_TypeInfo,uVar8
                                    ,*(undefined8 *)
                                      Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionEnterHandler_TypeInfo
                                   );
                  param_1 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x80),auStack_48);
                }
              }
              else {
                uVar8 = FUN_02a861f0(*(undefined8 *)puVar1);
                uVar6 = FUN_03974a88(param_1,*(undefined8 *)
                                              UnityWebSocketSharp_Net_HttpVersion_TypeInfo,uVar8,
                                     *(undefined8 *)
                                      Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionStay2DHandler_TypeInfo
                                    );
                auStack_48[0] = CONCAT44(auStack_48[0]._4_4_,uVar6);
                param_1 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x78),auStack_48);
              }
            }
            else {
              uVar8 = FUN_02a861f0(*(undefined8 *)puVar1);
              auStack_48[0] =
                   FUN_03974998(param_1,*(undefined8 *)System_Net_HttpValidationHelpers_TypeInfo,
                                uVar8,*(undefined8 *)PTR_DAT_06a72910);
              param_1 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x68),auStack_48);
            }
          }
          else {
            lVar13 = *(long *)puVar1;
            lVar11 = *(long *)(lVar13 + 0x38);
            if (lVar11 == 0) {
              FUN_02e756e8(lVar13);
              lVar11 = *(long *)(lVar13 + 0x38);
            }
            lVar11 = *(long *)(lVar11 + 0x10);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02e7568c();
            }
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02e7568c();
            }
            uVar5 = FUN_039748f8(param_1,*(undefined8 *)System_Net_HttpStatusCode_TypeInfo,
                                 **(undefined8 **)(lVar11 + 0xb8),
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionExit2DHandler_TypeInfo
                                );
            auStack_48[0] = CONCAT62(auStack_48[0]._2_6_,uVar5);
            param_1 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x38),auStack_48);
          }
        }
        else {
          lVar13 = *(long *)puVar1;
          lVar11 = *(long *)(lVar13 + 0x38);
          if (lVar11 == 0) {
            FUN_02e756e8(lVar13);
            lVar11 = *(long *)(lVar13 + 0x38);
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02e7568c();
          }
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02e7568c();
          }
          uVar4 = FUN_03974a38(param_1,*(undefined8 *)System_Net_HttpRequestCreator_TypeInfo,
                               **(undefined8 **)(lVar11 + 0xb8),
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionExitHandler_TypeInfo
                              );
          auStack_48[0] = CONCAT71(auStack_48[0]._1_7_,uVar4);
          param_1 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x30),auStack_48);
        }
      }
      else {
        lVar13 = *(long *)puVar1;
        lVar11 = *(long *)(lVar13 + 0x38);
        if (lVar11 == 0) {
          FUN_02e756e8(lVar13);
          lVar11 = *(long *)(lVar13 + 0x38);
        }
        lVar11 = *(long *)(lVar11 + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02e7568c();
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02e7568c();
        }
        uVar4 = FUN_03974808(param_1,*(undefined8 *)
                                      Unity_Services_Authentication_Internal_IAccessToken_TypeInfo,
                             **(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)PTR_DAT_06a8e288);
        auStack_48[0] = CONCAT71(auStack_48[0]._1_7_,uVar4) & 0xffffffffffffff01;
        param_1 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x28),auStack_48);
      }
    }
    else {
      lVar13 = *(long *)puVar1;
      lVar11 = *(long *)(lVar13 + 0x38);
      if (lVar11 == 0) {
        FUN_02e756e8(lVar13);
        lVar11 = *(long *)(lVar13 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02e7568c();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02e7568c();
      }
      uVar6 = FUN_03974948(param_1,*(undefined8 *)Oculus_Platform_Models_HttpTransferUpdate_TypeInfo
                           ,**(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)PTR_DAT_06a8e290);
      auStack_48[0] = CONCAT44(auStack_48[0]._4_4_,uVar6);
      param_1 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x48),auStack_48);
    }
    plVar7 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      lVar11 = *plStack_28;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a2ef10) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06203ef0;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_02e759c0(plStack_28,*(long *)PTR_DAT_06a2ef10,0);
LAB_06203ef0:
      (*(code *)*puVar10)(plVar7,puVar10[1]);
    }
  }
  return param_1;
}


