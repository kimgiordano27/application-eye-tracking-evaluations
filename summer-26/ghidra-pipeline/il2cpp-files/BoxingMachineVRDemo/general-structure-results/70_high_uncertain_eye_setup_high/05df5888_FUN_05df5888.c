/*
FUNCTION_NAME: FUN_05df5888
ENTRY_POINT: 05df5888
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05df5888(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0675e1b8;
  if ((DAT_06b831fd & 1) == 0) {
    FUN_02d6084c(
                Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_SetException__
                );
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_SetResult__)
    ;
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_get_Task__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>_SetResult__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>_TrySetException__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>_TrySetResult__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskCompletionSource<string>_get_Task__);
    FUN_02d6084c(Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__);
    FUN_02d6084c(
                Method_System_Threading_Tasks_TaskFactory<int>_FromAsyncTrim<Stream,_Stream_ReadWriteParameters>__
                );
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
    FUN_02d6084c(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__);
    FUN_02d6084c(Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__);
    FUN_02d6084c(Method_System_Threading_Tasks_Task<List<LeaderboardEntryModel>>_GetAwaiter__);
    FUN_02d6084c(Method_System_Threading_Tasks_Task<List<PackageInitializationInfo>>_GetAwaiter__);
    FUN_02d6084c(Method_System_Threading_Tasks_Task<List<RobotType>>_GetAwaiter__);
    DAT_06b831fd = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = FUN_0606a004(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_05df5b6c;
    lVar3 = FUN_0335b1b8(*(long *)(param_1 + 0x100),
                         *(undefined8 *)
                          Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__
                        );
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar1);
    }
    uVar2 = FUN_0606a004(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar3 == 0) goto LAB_05df5b6c;
      lVar3 = *(long *)(lVar3 + 0x28);
      uVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__);
      FUN_043e6910(uVar4,param_1,
                   *(undefined8 *)
                    Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_SetResult__
                   ,0);
      if (lVar3 == 0) goto LAB_05df5b6c;
      FUN_043e7f9c(lVar3,uVar4,
                   *(undefined8 *)
                    Method_System_Threading_Tasks_Task<List<PackageInitializationInfo>>_GetAwaiter__
                  );
    }
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_05df5b6c;
    lVar3 = FUN_0335b1b8(*(long *)(param_1 + 0x100),
                         *(undefined8 *)
                          Method_System_Threading_Tasks_TaskCompletionSource<string>_get_Task__);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar1);
    }
    uVar2 = FUN_0606a004(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar3 == 0) goto LAB_05df5b6c;
      lVar3 = *(long *)(lVar3 + 0x28);
      uVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
      FUN_043e6910(uVar4,param_1,
                   *(undefined8 *)
                    Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_SetException__
                   ,0);
      if (lVar3 == 0) goto LAB_05df5b6c;
      FUN_043e7f9c(lVar3,uVar4,
                   *(undefined8 *)Method_System_Threading_Tasks_Task<List<RobotType>>_GetAwaiter__);
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar3 = FUN_0335b1b8(*(long *)(param_1 + 0x100),
                           *(undefined8 *)
                            Method_System_Threading_Tasks_TaskFactory<int>_FromAsyncTrim<Stream,_Stream_ReadWriteParameters>__
                          );
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)puVar1);
      }
      uVar2 = FUN_0606a004(lVar3,0,0);
      if ((uVar2 & 1) == 0) goto LAB_05df5b58;
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x28);
        uVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__
                                  );
        FUN_043e6910(uVar4,param_1,
                     *(undefined8 *)
                      Method_System_Threading_Tasks_TaskCompletionSource<QuerySnapshotProxy>_get_Task__
                     ,0);
        if (lVar3 != 0) {
          FUN_043e7f9c(lVar3,uVar4,
                       *(undefined8 *)
                        Method_System_Threading_Tasks_Task<List<LeaderboardEntryModel>>_GetAwaiter__
                      );
          goto LAB_05df5b58;
        }
      }
    }
LAB_05df5b6c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_05df5b58:
  FUN_05df5b70(param_1);
  return;
}


