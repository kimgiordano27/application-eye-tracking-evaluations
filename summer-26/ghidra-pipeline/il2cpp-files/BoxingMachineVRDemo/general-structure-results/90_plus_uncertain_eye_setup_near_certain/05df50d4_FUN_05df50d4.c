/*
FUNCTION_NAME: FUN_05df50d4
ENTRY_POINT: 05df50d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05df50d4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_0675e1b8;
  if ((DAT_06b83204 & 1) == 0) {
    FUN_02d6084c(
                Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_SetException__
                );
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_SetResult__)
    ;
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_get_Task__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>__ctor__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>_SetCanceled__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>_SetException__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>_SetResult__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>_TrySetException__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>_TrySetResult__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>_get_Task__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__);
    FUN_02d6084c(
                Method_System_Threading_Tasks_TaskFactory<int>_FromAsyncTrim<Stream,_Stream_ReadWriteParameters>__
                );
    FUN_02d6084c(PTR_DAT_0675eda8);
    FUN_02d6084c(PTR_DAT_0675ee90);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskFactory<int>_StartNew__);
    FUN_02d6084c(PTR_DAT_0675e1b8);
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
    DAT_06b83204 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = FUN_0606f530(uVar5,0);
  if ((uVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_0606f530(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_05df5884;
      FUN_0635bfc0(*(long *)(param_1 + 0x90),1,0);
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_05df5884;
      lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0x128);
      uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06761e18);
      FUN_043e718c(uVar5,param_1,
                   *(undefined8 *)Method_System_Threading_Tasks_TaskCompletionSource<string>__ctor__
                   ,0);
      if (lVar6 == 0) goto LAB_05df5884;
      FUN_043eab28(lVar6,uVar5,*(undefined8 *)PTR_DAT_06761e20);
    }
  }
  if (*(long *)(param_1 + 0x100) == 0) goto LAB_05df5884;
  lVar6 = FUN_0335b1b8(*(long *)(param_1 + 0x100),
                       *(undefined8 *)
                        Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  uVar2 = FUN_0606f530(uVar5,0);
  if ((uVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_0606f530(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_0606f530(lVar6,0);
      if ((uVar2 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x120);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        plVar7 = (long *)(param_1 + 0x120);
        uVar2 = UnityEngine_Font__add_textureRebuilt(uVar5,0,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675ee90);
          FUN_0606ade8(lVar3,*(undefined8 *)
                              Method_System_Threading_Tasks_Task<IReadOnlyList<OVRSpatialAnchor>>_GetAwaiter__
                       ,0);
          *plVar7 = lVar3;
          thunk_FUN_02dd37b4(plVar7,lVar3);
        }
        if (*plVar7 == 0) goto LAB_05df5884;
        FUN_0606a4d0(*plVar7,0,0);
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_05df5884;
        FUN_0635bfc0(*(long *)(param_1 + 0x98),1,0);
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_05df5884;
        lVar3 = *(long *)(*(long *)(param_1 + 0x98) + 0x128);
        uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06761e18);
        FUN_043e718c(uVar5,param_1,
                     *(undefined8 *)
                      Method_System_Threading_Tasks_TaskCompletionSource<string>_SetCanceled__,0);
        if ((lVar3 == 0) || (FUN_043eab28(lVar3,uVar5,*(undefined8 *)PTR_DAT_06761e20), lVar6 == 0))
        goto LAB_05df5884;
        lVar6 = *(long *)(lVar6 + 0x28);
        uVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__);
        FUN_043e6910(uVar5,param_1,
                     *(undefined8 *)
                      Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_SetResult__
                     ,0);
        if (lVar6 == 0) goto LAB_05df5884;
        FUN_043e7f60(lVar6,uVar5,
                     *(undefined8 *)
                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                    );
      }
    }
  }
  if (*(long *)(param_1 + 0x100) == 0) goto LAB_05df5884;
  lVar6 = FUN_0335b1b8(*(long *)(param_1 + 0x100),
                       *(undefined8 *)
                        Method_System_Threading_Tasks_TaskCompletionSource<string>_get_Task__);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  uVar2 = FUN_0606f530(uVar5,0);
  if ((uVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_0606f530(uVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_0606f530(lVar6,0);
      if ((uVar2 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x130);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        plVar7 = (long *)(param_1 + 0x130);
        uVar2 = UnityEngine_Font__add_textureRebuilt(uVar5,0,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675ee90);
          FUN_0606ade8(lVar3,*(undefined8 *)
                              Method_System_Threading_Tasks_Task<HashSet<RobotType>>_GetAwaiter__,0)
          ;
          *plVar7 = lVar3;
          thunk_FUN_02dd37b4(plVar7,lVar3);
        }
        if (*plVar7 == 0) goto LAB_05df5884;
        FUN_0606a4d0(*plVar7,0,0);
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_05df5884;
        FUN_0635bfc0(*(long *)(param_1 + 0xa0),1,0);
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_05df5884;
        lVar3 = *(long *)(*(long *)(param_1 + 0xa0) + 0x128);
        uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06761e18);
        FUN_043e718c(uVar5,param_1,
                     *(undefined8 *)
                      Method_System_Threading_Tasks_TaskCompletionSource<string>_SetException__,0);
        if ((lVar3 == 0) || (FUN_043eab28(lVar3,uVar5,*(undefined8 *)PTR_DAT_06761e20), lVar6 == 0))
        goto LAB_05df5884;
        lVar6 = *(long *)(lVar6 + 0x28);
        uVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
        FUN_043e6910(uVar5,param_1,
                     *(undefined8 *)
                      Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_SetException__
                     ,0);
        if (lVar6 == 0) goto LAB_05df5884;
        FUN_043e7f60(lVar6,uVar5,
                     *(undefined8 *)
                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>__ctor__);
      }
    }
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    lVar6 = FUN_0335b1b8(*(long *)(param_1 + 0x100),
                         *(undefined8 *)
                          Method_System_Threading_Tasks_TaskFactory<int>_FromAsyncTrim<Stream,_Stream_ReadWriteParameters>__
                        );
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar1);
    }
    uVar2 = FUN_0606f530(uVar5,0);
    if ((uVar2 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_0606f530(uVar5,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar2 = FUN_0606f530(lVar6,0);
        if ((uVar2 & 1) != 0) {
          lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_System_Threading_Tasks_TaskFactory<WebResponse>_FromAsync__
                                    );
          FUN_0504920c(lVar3,0);
          if (lVar3 != 0) {
            *(long *)(lVar3 + 0x18) = param_1;
            thunk_FUN_02dd37b4((long *)(lVar3 + 0x18),param_1);
            if (*(long *)(param_1 + 0x100) != 0) {
              uVar5 = *(undefined8 *)(param_1 + 0x28);
              uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x28);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar5 = FUN_034b14f8(uVar5,uVar8,
                                   *(undefined8 *)
                                    Method_System_Threading_Tasks_TaskFactory<int>_StartNew__);
              *(undefined8 *)(param_1 + 0x128) = uVar5;
              thunk_FUN_02dd37b4(param_1 + 0x128);
              if (*(long *)(param_1 + 0x128) != 0) {
                lVar4 = FUN_0335b1b8(*(long *)(param_1 + 0x128),*(undefined8 *)PTR_DAT_0675eda8);
                plVar7 = (long *)(lVar3 + 0x10);
                *plVar7 = lVar4;
                thunk_FUN_02dd37b4(plVar7,lVar4);
                if ((*plVar7 != 0) && (FUN_060342c8(*plVar7,0,0), lVar6 != 0)) {
                  lVar6 = *(long *)(lVar6 + 0x28);
                  uVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__
                                            );
                  FUN_043e6910(uVar5,param_1,
                               *(undefined8 *)
                                Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_get_Task__
                               ,0);
                  if (lVar6 != 0) {
                    FUN_043e7f60(lVar6,uVar5,
                                 *(undefined8 *)
                                  Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_GetCompletionResponsibility__
                                );
                    if (*(long *)(param_1 + 0xa8) != 0) {
                      FUN_0635bfc0(*(long *)(param_1 + 0xa8),1,0);
                      if (*(long *)(param_1 + 0xa8) != 0) {
                        lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x128);
                        uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06761e18);
                        FUN_043e718c(uVar5,lVar3,
                                     *(undefined8 *)
                                      Method_System_Threading_Tasks_TaskFactory<VoidTaskResult>_FromAsyncTrim<Stream,_Stream_ReadWriteParameters>__
                                     ,0);
                        if (lVar6 != 0) {
                          FUN_043eab28(lVar6,uVar5,*(undefined8 *)PTR_DAT_06761e20);
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


