/*
FUNCTION_NAME: FUN_076c3b58
ENTRY_POINT: 076c3b58
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_076c3b58(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  puVar1 = Method_UnityEngine_Awaitable<Result<ARAnchor>>_GetAwaiter__;
  if ((DAT_082713e3 & 1) == 0) {
    FUN_0373b518(Method_UnityEngine_AwaitableCompletionSource<Result<ARAnchor>>_get_Awaitable__);
    FUN_0373b518(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    FUN_0373b518(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_0373b518(Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__);
    FUN_0373b518(Method_UnityEngine_Awaitable<Result<ARAnchor>>_GetAwaiter__);
    FUN_0373b518(Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__);
    DAT_082713e3 = 1;
  }
  lVar3 = *(long *)puVar1;
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
              (**(long **)(lVar3 + 0xb8),param_1,&local_28,
               *(undefined8 *)
                Method_UnityEngine_AwaitableCompletionSource<Result<ARAnchor>>_get_Awaitable__);
    puVar2 = Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__;
    puVar1 = Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__;
    if (local_28 != 0) {
      FUN_045b99ec(&local_40,local_28,
                   *(undefined8 *)
                    Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__);
      while (uVar4 = FUN_05d6471c(&local_40,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
        if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_078af550(local_30,0);
      }
      FUN_05d64718(&local_40,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


