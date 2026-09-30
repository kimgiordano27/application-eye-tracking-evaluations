/*
FUNCTION_NAME: FUN_0712d068
ENTRY_POINT: 0712d068
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0712d068(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar1 = Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetResult__
  ;
  if ((DAT_07eec91e & 1) == 0) {
    FUN_03642964(Method_UnityEngine_Awaitable_Awaiter<AsyncGPUReadbackRequest>_get_IsCompleted__);
    FUN_03642964(Method_OVRTask_Awaiter<bool>_GetResult__);
    FUN_03642964(Method_OVRTask_Awaiter<bool>_get_IsCompleted__);
    FUN_03642964(Method_UnityEngine_Awaitable_Awaiter<Tensor>_GetResult__);
    FUN_03642964(Method_UnityEngine_Awaitable_Awaiter<Tensor>_get_IsCompleted__);
    FUN_03642964(Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_GetResult__);
    FUN_03642964(Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_get_IsCompleted__);
    FUN_03642964(Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_GetResult__);
    FUN_03642964(Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_get_IsCompleted__);
    FUN_03642964(Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
    FUN_03642964(Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
    FUN_03642964(Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__);
    FUN_03642964(Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__);
    FUN_03642964(Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_GetResult__);
    FUN_03642964(
                Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetResult__
                );
    DAT_07eec91e = 1;
  }
  lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (param_2 == 0) {
    if (lVar4 != 0) {
      FUN_056b08f0(lVar4,param_1,*(undefined8 *)Method_OVRTask_Awaiter<bool>_get_IsCompleted__);
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_0712d388;
      iVar3 = FUN_056af08c(lVar4,*(undefined8 *)
                                  Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_get_IsCompleted__);
      if (iVar3 == 0) {
        puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *puVar6 = 0;
        thunk_FUN_036b7ad0(puVar6,0);
      }
    }
  }
  else {
    if (lVar4 == 0) {
      uVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__
                                );
      FUN_056aea28(uVar5,*(undefined8 *)Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_GetResult__);
      puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *puVar6 = uVar5;
      thunk_FUN_036b7ad0(puVar6,uVar5);
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_0712d388;
    }
    FUN_056af3c0(lVar4,param_1,param_2,
                 *(undefined8 *)Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_get_IsCompleted__
                );
  }
  lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
  if (param_3 == 0) {
    if (lVar4 != 0) {
      FUN_056b08f0(lVar4,param_1,
                   *(undefined8 *)Method_UnityEngine_Awaitable_Awaiter<Tensor>_GetResult__);
      if (**(long **)(*(long *)puVar1 + 0xb8) == 0) goto LAB_0712d388;
      iVar3 = FUN_056af08c(**(long **)(*(long *)puVar1 + 0xb8),
                           *(undefined8 *)
                            Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_GetResult__);
      if (iVar3 == 0) {
        **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
        thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar1 + 0xb8),0);
      }
    }
  }
  else {
    if (lVar4 == 0) {
      uVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
      FUN_056aea28(uVar5,*(undefined8 *)
                          Method_UnityEngine_Awaitable_Awaiter<Tensor>_get_IsCompleted__);
      **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar5;
      thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
      lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar4 == 0) {
LAB_0712d388:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
    FUN_056af3c0(lVar4,param_1,param_3,
                 *(undefined8 *)Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
  }
  puVar2 = Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_GetResult__;
  plVar8 = *(long **)(*(long *)puVar1 + 0xb8);
  if (plVar8[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)Method_OVRTask_Awaiter<bool>_GetResult__);
    FUN_0712d38c(uVar5,0,*(undefined8 *)puVar2);
    plVar8 = *(long **)(*(long *)puVar1 + 0xb8);
  }
  puVar1 = Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__;
  if (*plVar8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_UnityEngine_Awaitable_Awaiter<AsyncGPUReadbackRequest>_get_IsCompleted__
                              );
    FUN_0712d43c(uVar7,0,*(undefined8 *)puVar1);
  }
  FUN_0712d4f0(uVar5,uVar7);
  return;
}


