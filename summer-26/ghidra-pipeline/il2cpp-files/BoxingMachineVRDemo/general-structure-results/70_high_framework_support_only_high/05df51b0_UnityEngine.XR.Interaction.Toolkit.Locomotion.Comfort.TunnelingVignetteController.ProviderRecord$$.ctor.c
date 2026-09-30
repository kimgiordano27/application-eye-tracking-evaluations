/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.TunnelingVignetteController.ProviderRecord$$.ctor
ENTRY_POINT: 05df51b0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_XR_Interaction_Toolkit_Locomotion_Comfort_TunnelingVignetteController_ProviderRecord___ctor
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x23;
  undefined8 uVar7;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x1b8));
  FUN_02d6084c(
              Method_System_Threading_Tasks_TaskFactory<VoidTaskResult>_FromAsyncTrim<Stream,_Stream_ReadWriteParameters>__
              );
  FUN_02d6084c(Method_System_Threading_Tasks_TaskFactory<WebResponse>_FromAsync__);
  FUN_02d6084c(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
  FUN_02d6084c(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__);
  FUN_02d6084c(PTR_DAT_06761e18);
  FUN_02d6084c(Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__);
  FUN_02d6084c(
              Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
              );
  FUN_02d6084c(Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>__ctor__);
  FUN_02d6084c(PTR_DAT_06761e20);
  FUN_02d6084c(
              Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_GetCompletionResponsibility__
              );
  FUN_02d6084c(Method_System_Threading_Tasks_Task<HashSet<RobotType>>_GetAwaiter__);
  FUN_02d6084c(Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__);
  *(undefined1 *)(unaff_x20 + 0x204) = 1;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_0606f530(uVar4,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar1 = FUN_0606f530(uVar4,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05df5884;
      FUN_0635bfc0(*(long *)(unaff_x19 + 0x90),1,0);
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05df5884;
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0x128);
      uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06761e18);
      FUN_043e718c();
      if (lVar5 == 0) goto LAB_05df5884;
      FUN_043eab28(lVar5,uVar4,*(undefined8 *)PTR_DAT_06761e20);
    }
  }
  if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05df5884;
  lVar5 = FUN_0335b1b8(*(long *)(unaff_x19 + 0x100),
                       *(undefined8 *)
                        Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x98);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x23);
  }
  uVar1 = FUN_0606f530(uVar4,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar1 = FUN_0606f530(uVar4,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar1 = FUN_0606f530(lVar5,0);
      if ((uVar1 & 1) != 0) {
        uVar4 = *(undefined8 *)(unaff_x19 + 0x120);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        plVar6 = (long *)(unaff_x19 + 0x120);
        uVar1 = UnityEngine_Font__add_textureRebuilt(uVar4,0,0);
        if ((uVar1 & 1) != 0) {
          lVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675ee90);
          FUN_0606ade8(lVar2,*(undefined8 *)
                              Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__
                       ,0);
          *plVar6 = lVar2;
          thunk_FUN_02dd37b4(plVar6,lVar2);
        }
        if (*plVar6 == 0) goto LAB_05df5884;
        FUN_0606a4d0(*plVar6,0,0);
        if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_05df5884;
        FUN_0635bfc0(*(long *)(unaff_x19 + 0x98),1,0);
        if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_05df5884;
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x128);
        uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06761e18);
        FUN_043e718c();
        if ((lVar2 == 0) || (FUN_043eab28(lVar2,uVar4,*(undefined8 *)PTR_DAT_06761e20), lVar5 == 0))
        goto LAB_05df5884;
        lVar5 = *(long *)(lVar5 + 0x28);
        uVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__);
        FUN_043e6910();
        if (lVar5 == 0) goto LAB_05df5884;
        FUN_043e7f60(lVar5,uVar4,
                     *(undefined8 *)
                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                    );
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05df5884;
  lVar5 = FUN_0335b1b8(*(long *)(unaff_x19 + 0x100),
                       *(undefined8 *)
                        Method_System_Threading_Tasks_TaskCompletionSource<string>_get_Task__);
  uVar4 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x23);
  }
  uVar1 = FUN_0606f530(uVar4,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar1 = FUN_0606f530(uVar4,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar1 = FUN_0606f530(lVar5,0);
      if ((uVar1 & 1) != 0) {
        uVar4 = *(undefined8 *)(unaff_x19 + 0x130);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        plVar6 = (long *)(unaff_x19 + 0x130);
        uVar1 = UnityEngine_Font__add_textureRebuilt(uVar4,0,0);
        if ((uVar1 & 1) != 0) {
          lVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675ee90);
          FUN_0606ade8(lVar2,*(undefined8 *)
                              Method_System_Threading_Tasks_Task<HashSet<RobotType>>_GetAwaiter__,0)
          ;
          *plVar6 = lVar2;
          thunk_FUN_02dd37b4(plVar6,lVar2);
        }
        if (*plVar6 == 0) goto LAB_05df5884;
        FUN_0606a4d0(*plVar6,0,0);
        if (*(long *)(unaff_x19 + 0xa0) == 0) goto LAB_05df5884;
        FUN_0635bfc0(*(long *)(unaff_x19 + 0xa0),1,0);
        if (*(long *)(unaff_x19 + 0xa0) == 0) goto LAB_05df5884;
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0xa0) + 0x128);
        uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06761e18);
        FUN_043e718c();
        if ((lVar2 == 0) || (FUN_043eab28(lVar2,uVar4,*(undefined8 *)PTR_DAT_06761e20), lVar5 == 0))
        goto LAB_05df5884;
        lVar5 = *(long *)(lVar5 + 0x28);
        uVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
        FUN_043e6910();
        if (lVar5 == 0) goto LAB_05df5884;
        FUN_043e7f60(lVar5,uVar4,
                     *(undefined8 *)
                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>__ctor__);
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x100) != 0) {
    lVar5 = FUN_0335b1b8(*(long *)(unaff_x19 + 0x100),
                         *(undefined8 *)
                          Method_System_Threading_Tasks_TaskFactory<int>_FromAsyncTrim<Stream,_Stream_ReadWriteParameters>__
                        );
    uVar4 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x23);
    }
    uVar1 = FUN_0606f530(uVar4,0);
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar1 = FUN_0606f530(uVar4,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar1 = FUN_0606f530(lVar5,0);
        if ((uVar1 & 1) != 0) {
          lVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_System_Threading_Tasks_TaskFactory<WebResponse>_FromAsync__
                                    );
          FUN_0504920c(lVar2,0);
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x18) = unaff_x19;
            thunk_FUN_02dd37b4();
            if (*(long *)(unaff_x19 + 0x100) != 0) {
              uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
              uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x100) + 0x28);
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar4 = FUN_034b14f8(uVar4,uVar7,
                                   *(undefined8 *)
                                    Method_System_Threading_Tasks_TaskFactory<int>_StartNew__);
              *(undefined8 *)(unaff_x19 + 0x128) = uVar4;
              thunk_FUN_02dd37b4(unaff_x19 + 0x128);
              if (*(long *)(unaff_x19 + 0x128) != 0) {
                lVar3 = FUN_0335b1b8(*(long *)(unaff_x19 + 0x128),*(undefined8 *)PTR_DAT_0675eda8);
                plVar6 = (long *)(lVar2 + 0x10);
                *plVar6 = lVar3;
                thunk_FUN_02dd37b4(plVar6,lVar3);
                if ((*plVar6 != 0) && (FUN_060342c8(*plVar6,0,0), lVar5 != 0)) {
                  lVar5 = *(long *)(lVar5 + 0x28);
                  uVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__
                                            );
                  FUN_043e6910();
                  if (lVar5 != 0) {
                    FUN_043e7f60(lVar5,uVar4,
                                 *(undefined8 *)
                                  Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_GetCompletionResponsibility__
                                );
                    if (*(long *)(unaff_x19 + 0xa8) != 0) {
                      FUN_0635bfc0(*(long *)(unaff_x19 + 0xa8),1,0);
                      if (*(long *)(unaff_x19 + 0xa8) != 0) {
                        lVar5 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x128);
                        uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06761e18);
                        FUN_043e718c(uVar4,lVar2,
                                     *(undefined8 *)
                                      Method_System_Threading_Tasks_TaskFactory<VoidTaskResult>_FromAsyncTrim<Stream,_Stream_ReadWriteParameters>__
                                     ,0);
                        if (lVar5 != 0) {
                          FUN_043eab28(lVar5,uVar4,*(undefined8 *)PTR_DAT_06761e20);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_05df5884;
        }
      }
    }
    return;
  }
LAB_05df5884:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


