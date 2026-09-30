/*
FUNCTION_NAME: FUN_054cdb04
ENTRY_POINT: 054cdb04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_054cdb04(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if ((DAT_066d115b & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceSharedLib>d__93>__
                );
    FUN_02b3c81c(PTR_DAT_0632cdb8);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonSharedLib>d__94>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__83>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromPrefab>d__80>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromPrefabSharedLib>d__96>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromSharedRooms>d__73>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<WaitForDiscoveryFinished>d__118>__
                );
    FUN_02b3c81c(PTR_DAT_06336d38);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Create__
                );
    FUN_02b3c81c(PTR_DAT_0632cdd0);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetException__
                );
    FUN_02b3c81c(FruitSpawner_GameModeSettings_TypeInfo);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetResult__
                );
    FUN_02b3c81c(PTR_DAT_063141b8);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_get_Task__
                );
    FUN_02b3c81c(PTR_DAT_0632cdd8);
    FUN_02b3c81c(PTR_DAT_0632a918);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter<int>,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                );
    FUN_02b3c81c(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__);
    FUN_02b3c81c(PTR_DAT_0632cde0);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                );
    FUN_02b3c81c(
                Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_TypeInfo
                );
    FUN_02b3c81c(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                );
    FUN_02b3c81c(Firebase_FutureVoid_SWIG_CompletionDelegate_TypeInfo);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                );
    FUN_02b3c81c(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__)
    ;
    FUN_02b3c81c(Method_OVRTask_Awaiter<List<bool>>_GetResult__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02b3c81c(PTR_DAT_0632d250);
    FUN_02b3c81c(PTR_DAT_0632f898);
    FUN_02b3c81c(Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetResult__);
    FUN_02b3c81c(
                Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ConfigureTrackerResult>>_get_IsCompleted__
                );
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__);
    FUN_02b3c81c(PTR_DAT_0632ce28);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__);
    DAT_066d115b = 1;
  }
  switch(param_2) {
  case 0:
    puVar2 = (undefined8 *)PTR_DAT_063141b8;
    break;
  case 1:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__;
    break;
  default:
    local_38 = *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceSharedLib>d__93>__
    ;
    uStack_30 = 0xffffffffffffffff;
    local_28 = param_2;
    uVar1 = FUN_04db1580(&local_38,0);
    return uVar1;
  case 10:
    puVar2 = (undefined8 *)Method_OVRTask_Awaiter<List<bool>>_GetResult__;
    break;
  case 0xc:
    puVar2 = (undefined8 *)PTR_DAT_0632d250;
    break;
  case 0xd:
    puVar2 = (undefined8 *)PTR_DAT_0632cde0;
    break;
  case 0xe:
    puVar2 = (undefined8 *)PTR_DAT_0632cdd8;
    break;
  case 0xf:
    puVar2 = (undefined8 *)
             Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_TypeInfo
    ;
    break;
  case 0x10:
    puVar2 = (undefined8 *)PTR_DAT_0632ce28;
    break;
  case 0x11:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
    ;
    break;
  case 0x12:
    puVar2 = (undefined8 *)PTR_DAT_0632cdd0;
    break;
  case 0x13:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter<int>,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
    ;
    break;
  case 0x14:
    puVar2 = (undefined8 *)PTR_DAT_06336d38;
    break;
  case 0x15:
    puVar2 = (undefined8 *)Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__;
    break;
  case 0x16:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonSharedLib>d__94>__
    ;
    break;
  case 0x17:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
    ;
    break;
  case 0x18:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromPrefabSharedLib>d__96>__
    ;
    break;
  case 0x19:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetException__
    ;
    break;
  case 0x1a:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__83>__
    ;
    break;
  case 0x1b:
    puVar2 = (undefined8 *)Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__;
    break;
  case 0x1c:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
    ;
    break;
  case 0x1d:
    puVar2 = (undefined8 *)Firebase_FutureVoid_SWIG_CompletionDelegate_TypeInfo;
    break;
  case 0x1e:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
    ;
    break;
  case 0x1f:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<WaitForDiscoveryFinished>d__118>__
    ;
    break;
  case 0x20:
    puVar2 = (undefined8 *)Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__;
    break;
  case 0x21:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromPrefab>d__80>__
    ;
    break;
  case 0x22:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__;
    break;
  case 0x23:
    puVar2 = (undefined8 *)PTR_DAT_0632a918;
    break;
  case 0x24:
    puVar2 = (undefined8 *)FruitSpawner_GameModeSettings_TypeInfo;
    break;
  case 0x25:
    puVar2 = (undefined8 *)PTR_DAT_0632f898;
    break;
  case 0x26:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromSharedRooms>d__73>__
    ;
    break;
  case 0x27:
    puVar2 = (undefined8 *)
             Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetResult__;
    break;
  case 0x28:
    puVar2 = (undefined8 *)
             Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ConfigureTrackerResult>>_get_IsCompleted__;
    break;
  case 0x29:
    puVar2 = (undefined8 *)
             Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__;
    break;
  case 0x2a:
    puVar2 = (undefined8 *)Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__;
    break;
  case 0x2b:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__;
    break;
  case 0x2c:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetResult__
    ;
    break;
  case 0x2d:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
    ;
    break;
  case 0x2e:
    puVar2 = (undefined8 *)PTR_DAT_0632cdb8;
    break;
  case 0x2f:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_get_Task__
    ;
    break;
  case 0x30:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Create__
    ;
    break;
  case 0x31:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
    ;
    break;
  case 0x32:
    puVar2 = (undefined8 *)Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__;
    break;
  case 0x33:
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__;
    break;
  case 0x34:
    puVar2 = (undefined8 *)Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__;
  }
  return *puVar2;
}


