/*
FUNCTION_NAME: FUN_059b4010
ENTRY_POINT: 059b4010
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_059b4010(void)

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
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  puVar10 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneManager_<OnApplicationPause>d__38>__
  ;
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneManager_<<LoadSceneModel>g__AwaitTask_40_0>d>__
  ;
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<MetaXRAcousticMap_<LoadMapFromMemory>d__35>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<MetaXRAcousticGeometry_<LoadGeometryFromMemory>d__92>__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<MRUK_<LocalizeTrackable>d__135>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<MRUK_<ConfigureTrackerAndLogResult>d__132>__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopDiscoveringColocationSessions>d__22>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopAdvertisingColocationSession>d__20>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
  ;
  puVar1 = Method_System_ValueTuple<OVRPlugin_Result,_string>__ctor__;
  if ((DAT_066d3a45 & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopAdvertisingColocationSession>d__20>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<MRUK_<LocalizeTrackable>d__135>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneManager_<QueryForExistingAnchorsTransform>d__39>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<MetaXRAcousticGeometry_<LoadGeometryFromMemory>d__92>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneManager_<<LoadSceneModel>g__AwaitTask_40_0>d>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<MetaXRAcousticMap_<LoadMapFromMemory>d__35>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneModelLoader_<OnLoadSceneModelFailedPermissionNotGranted>d__10>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OpenXRExtensions_<QuerySpatialMeshAnchor>d__40>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__25>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSavingAnchorsServiceHung>d__22>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<MRUK_<ConfigureTrackerAndLogResult>d__132>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<InstantiateSpatialAnchor>d__15>__
                );
    FUN_02b3c81c(Method_System_ValueTuple<OVRPlugin_Result,_string>__ctor__);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadAndInstantiateAnchors>d__17>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadAndInstantiateAnchorsFromGroup>d__18>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__19>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuid>d__26>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<EraseAnchorsAsync>d__28>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneManager_<OnApplicationPause>d__38>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopDiscoveringColocationSessions>d__22>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
                );
    DAT_066d3a45 = 1;
  }
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  uVar12 = *(undefined8 *)puVar3;
  **(undefined4 **)(*(long *)puVar2 + 0xb8) = uVar11;
  uVar11 = FUN_05c55ed8(uVar12,0);
  uVar12 = *(undefined8 *)puVar4;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_05c55ed8(uVar12,0);
  uVar12 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_05c55ed8(uVar12,0);
  uVar12 = *(undefined8 *)puVar6;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc) = uVar11;
                    /* try { // try from 059b422c to 05ab4353 has its CatchHandler @ 059b422c
                       catch() { ... } // from try @ 059b422c with catch @ 059b422c
                       catch() { ... } // from try @ 059b44b0 with catch @ 059b422c
                       catch() { ... } // from try @ 059b456c with catch @ 059b422c
                       catch() { ... } // from try @ 059b45d8 with catch @ 059b422c */
  uVar11 = FUN_05c55ed8(uVar12,0);
  uVar12 = *(undefined8 *)puVar7;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_05c55ed8(uVar12,0);
  uVar12 = *(undefined8 *)puVar8;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_05c55ed8(uVar12,0);
  uVar12 = *(undefined8 *)puVar9;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_05c55ed8(uVar12,0);
  uVar12 = *(undefined8 *)puVar10;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_05c55ed8(uVar12,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadAndInstantiateAnchors>d__17>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__19>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<EraseAnchorsAsync>d__28>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OpenXRExtensions_<QuerySpatialMeshAnchor>d__40>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__25>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = uVar11;
                    /* try { // try from 059b4354 to 05ab437b has its CatchHandler @ 059b45a0 */
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadAndInstantiateAnchorsFromGroup>d__18>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x34) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<InstantiateSpatialAnchor>d__15>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneModelLoader_<OnLoadSceneModelFailedPermissionNotGranted>d__10>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3c) = uVar11;
                    /* try { // try from 059b43b8 to 05ab43e3 has its CatchHandler @ 059b459c */
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSavingAnchorsServiceHung>d__22>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuid>d__26>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x44) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
  ;
                    /* try { // try from 059b4418 to 05ab4423 has its CatchHandler @ 059b4584 */
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = uVar11;
                    /* try { // try from 059b4428 to 05ab442f has its CatchHandler @ 059b458c */
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneManager_<QueryForExistingAnchorsTransform>d__39>__
  ;
                    /* try { // try from 059b4438 to 05ab4443 has its CatchHandler @ 059b4580 */
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4c) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
  ;
                    /* try { // try from 059b4488 to 05ab44a3 has its CatchHandler @ 059b4578 */
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
  ;
                    /* try { // try from 059b44ac to 05ab44af has its CatchHandler @ 059b4598 */
                    /* try { // try from 059b44b0 to 05ab4553 has its CatchHandler @ 059b422c */
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58) = uVar11;
  uVar11 = FUN_05c55ed8(*(undefined8 *)puVar1,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x5c) = uVar11;
  return;
}


