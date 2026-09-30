/*
FUNCTION_NAME: UnityEngine.ObjectGUIState$$Destroy
ENTRY_POINT: 0712d0d8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 90
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_ObjectGUIState__Destroy(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  FUN_03642964();
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
  *(undefined1 *)(unaff_x22 + 0x91e) = 1;
  lVar3 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  if (unaff_x21 == 0) {
    if (lVar3 != 0) {
      FUN_056b08f0();
      lVar3 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_0712d388;
      iVar2 = FUN_056af08c(lVar3,*(undefined8 *)
                                  Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_get_IsCompleted__);
      if (iVar2 == 0) {
        puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        *puVar5 = 0;
        thunk_FUN_036b7ad0(puVar5,0);
      }
    }
  }
  else {
    if (lVar3 == 0) {
      uVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__
                                );
      FUN_056aea28(uVar4,*(undefined8 *)Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_GetResult__);
      puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
      *puVar5 = uVar4;
      thunk_FUN_036b7ad0(puVar5,uVar4);
      if (*(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) == 0) goto LAB_0712d388;
    }
    FUN_056af3c0();
  }
  if (unaff_x20 == 0) {
    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
      FUN_056b08f0();
      if (**(long **)(*unaff_x23 + 0xb8) == 0) goto LAB_0712d388;
      iVar2 = FUN_056af08c(**(long **)(*unaff_x23 + 0xb8),
                           *(undefined8 *)
                            Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_GetResult__);
      if (iVar2 == 0) {
        **(undefined8 **)(*unaff_x23 + 0xb8) = 0;
        thunk_FUN_036b7ad0(*(undefined8 *)(*unaff_x23 + 0xb8),0);
      }
    }
  }
  else {
    if (**(long **)(*unaff_x23 + 0xb8) == 0) {
      uVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
      FUN_056aea28(uVar4,*(undefined8 *)
                          Method_UnityEngine_Awaitable_Awaiter<Tensor>_get_IsCompleted__);
      **(undefined8 **)(*unaff_x23 + 0xb8) = uVar4;
      thunk_FUN_036b7ad0(*(undefined8 *)(*unaff_x23 + 0xb8),uVar4);
      if (**(long **)(*unaff_x23 + 0xb8) == 0) {
LAB_0712d388:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
    FUN_056af3c0();
  }
  puVar1 = Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_GetResult__;
  plVar7 = *(long **)(*unaff_x23 + 0xb8);
  if (plVar7[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = thunk_FUN_0367fe20(*(undefined8 *)Method_OVRTask_Awaiter<bool>_GetResult__);
    FUN_0712d38c(uVar4,0,*(undefined8 *)puVar1);
    plVar7 = *(long **)(*unaff_x23 + 0xb8);
  }
  puVar1 = Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__;
  if (*plVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_UnityEngine_Awaitable_Awaiter<AsyncGPUReadbackRequest>_get_IsCompleted__
                              );
    FUN_0712d43c(uVar6,0,*(undefined8 *)puVar1);
  }
  FUN_0712d4f0(uVar4,uVar6);
  return;
}


