/*
FUNCTION_NAME: FUN_05ff2078
ENTRY_POINT: 05ff2078
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_16;frame_or_lifecycle_behavior
*/


void FUN_05ff2078(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  undefined1 local_70 [16];
  
  if ((DAT_06dc495a & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>,_LocalMatchmaking_<StartDiscoveringColocationSessions>d__21>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>,_LocalMatchmaking_<StopAdvertisingColocationSession>d__20>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>,_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>,_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>,_SharedSpatialAnchorCore_<LoadAndInstantiateAnchors>d__17>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>,_SharedSpatialAnchorCore_<LoadAndInstantiateAnchorsFromGroup>d__18>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>,_LocalMatchmaking_<StartAdvertisingColocationSession>d__19>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<OnApplicationPause>d__38>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<QueryForExistingAnchorsTransform>d__39>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneModelLoader_<OnLoadSceneModelFailedPermissionNotGranted>d__10>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__19>__
                );
    DAT_06dc495a = 1;
  }
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__19>__
  ;
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneModelLoader_<OnLoadSceneModelFailedPermissionNotGranted>d__10>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<OnApplicationPause>d__38>__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>,_LocalMatchmaking_<StartAdvertisingColocationSession>d__19>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>,_SharedSpatialAnchorCore_<LoadAndInstantiateAnchorsFromGroup>d__18>__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>,_SharedSpatialAnchorCore_<LoadAndInstantiateAnchors>d__17>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>,_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>,_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22>__
  ;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>,_LocalMatchmaking_<StopAdvertisingColocationSession>d__20>__
  ;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (param_2 != 0) {
    local_70 = FUN_035c07e8(param_2,param_1,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>,_LocalMatchmaking_<StartDiscoveringColocationSessions>d__21>__
                           );
    auVar10 = FUN_035c09e4(local_70,*(undefined8 *)puVar3);
    local_70 = auVar10;
    auVar10 = FUN_035c09e4(local_70,*(undefined8 *)puVar1);
    local_70 = auVar10;
    auVar10 = FUN_035c09e4(local_70,*(undefined8 *)puVar2);
    local_70 = auVar10;
    auVar10 = FUN_035c09e4(local_70,*(undefined8 *)puVar5);
    local_70 = auVar10;
    auVar10 = FUN_035c09e4(local_70,*(undefined8 *)puVar4);
    local_70 = auVar10;
    auVar10 = FUN_035c0ce4(local_70,*(undefined8 *)puVar8);
    local_70 = auVar10;
    auVar10 = FUN_035c0ce4(local_70,*(undefined8 *)puVar9);
    local_70 = auVar10;
    auVar10 = FUN_035c0ce4(local_70,*(undefined8 *)puVar7);
    local_70 = auVar10;
    auVar10 = FUN_035c0ce4(local_70,*(undefined8 *)puVar6);
    local_70 = auVar10;
    FUN_035c0ce4(local_70,*(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<QueryForExistingAnchorsTransform>d__39>__
                );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


