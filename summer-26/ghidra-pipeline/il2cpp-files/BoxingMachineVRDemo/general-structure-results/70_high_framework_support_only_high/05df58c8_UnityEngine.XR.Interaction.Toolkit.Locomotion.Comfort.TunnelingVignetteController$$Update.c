/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.TunnelingVignetteController$$Update
ENTRY_POINT: 05df58c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_XR_Interaction_Toolkit_Locomotion_Comfort_TunnelingVignetteController__Update
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0xd10));
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
  *(undefined1 *)(unaff_x20 + 0x1fd) = 1;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x100);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_0606a004(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05df5b6c;
    lVar2 = FUN_0335b1b8(*(long *)(unaff_x19 + 0x100),
                         *(undefined8 *)
                          Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__
                        );
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x22);
    }
    uVar1 = FUN_0606a004(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (lVar2 == 0) goto LAB_05df5b6c;
      lVar2 = *(long *)(lVar2 + 0x28);
      uVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__);
      FUN_043e6910();
      if (lVar2 == 0) goto LAB_05df5b6c;
      FUN_043e7f9c(lVar2,uVar3,
                   *(undefined8 *)
                    Method_System_Threading_Tasks_Task<List<PackageInitializationInfo>>_GetAwaiter__
                  );
    }
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05df5b6c;
    lVar2 = FUN_0335b1b8(*(long *)(unaff_x19 + 0x100),
                         *(undefined8 *)
                          Method_System_Threading_Tasks_TaskCompletionSource<string>_get_Task__);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x22);
    }
    uVar1 = FUN_0606a004(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (lVar2 == 0) goto LAB_05df5b6c;
      lVar2 = *(long *)(lVar2 + 0x28);
      uVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
      FUN_043e6910();
      if (lVar2 == 0) goto LAB_05df5b6c;
      FUN_043e7f9c(lVar2,uVar3,
                   *(undefined8 *)Method_System_Threading_Tasks_Task<List<RobotType>>_GetAwaiter__);
    }
    if (*(long *)(unaff_x19 + 0x100) != 0) {
      lVar2 = FUN_0335b1b8(*(long *)(unaff_x19 + 0x100),
                           *(undefined8 *)
                            Method_System_Threading_Tasks_TaskFactory<int>_FromAsyncTrim<Stream,_Stream_ReadWriteParameters>__
                          );
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*unaff_x22);
      }
      uVar1 = FUN_0606a004(lVar2,0,0);
      if ((uVar1 & 1) == 0) goto LAB_05df5b58;
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x28);
        uVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__
                                  );
        FUN_043e6910();
        if (lVar2 != 0) {
          FUN_043e7f9c(lVar2,uVar3,
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
  FUN_05df5b70();
  return;
}


