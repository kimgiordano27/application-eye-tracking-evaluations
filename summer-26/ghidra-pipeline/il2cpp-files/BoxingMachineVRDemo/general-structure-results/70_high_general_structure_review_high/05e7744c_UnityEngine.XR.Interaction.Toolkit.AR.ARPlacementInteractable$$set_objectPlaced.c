/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable$$set_objectPlaced
ENTRY_POINT: 05e7744c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void UnityEngine_XR_Interaction_Toolkit_AR_ARPlacementInteractable__set_objectPlaced(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
  ;
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<Run>d__58>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<Awaitable_Awaiter,_BoundaryVisibilityFeature_<SuppressVisibilityFireAndForget>d__13>__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>,_OVRSceneManager_<<LoadSceneModel>g__AwaitTask_40_0>d>__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
  ;
  puVar3 = UnityEngine_XR_ARSubsystems_XRTextureType_TypeInfo;
  puVar2 = UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_TypeInfo;
  puVar1 = UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_TypeInfo;
  if ((DAT_06b838e7 & 1) == 0) {
    FUN_02d6084c(UnityEngine_EnumDataUtility_<>c_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRTextureType_TypeInfo);
    FUN_02d6084c(PTR_DAT_06768438);
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<Run>d__58>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateAutomaticallyInternal>d__19>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>,_OVRSceneManager_<<LoadSceneModel>g__AwaitTask_40_0>d>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<Awaitable_Awaiter,_BoundaryVisibilityFeature_<SuppressVisibilityFireAndForget>d__13>__
                );
    DAT_06b838e7 = 1;
  }
  FUN_058b04e0(param_1,0);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x1a8) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1a8);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1b0);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)puVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x1b8) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1b8);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)puVar7,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x1c0) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1c0);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)puVar8,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1c8);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)puVar9,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1d0);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateAutomaticallyInternal>d__19>__
                        ,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1d8);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11>__
                        ,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1e0);
  uVar10 = FUN_03452f4c(param_1,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                        ,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x1e8);
  lVar11 = FUN_058cda3c(*(undefined8 *)(param_1 + 0x120),0);
  puVar1 = UnityEngine_EnumDataUtility_<>c_TypeInfo;
  if (lVar11 == 0) {
    return;
  }
  if ((*(uint *)(lVar11 + 0x28) >> 8 & 1) == 0) {
    if ((*(uint *)(lVar11 + 0x28) >> 9 & 1) == 0) {
      return;
    }
    lVar11 = *(long *)UnityEngine_EnumDataUtility_<>c_TypeInfo;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar1;
    }
    lVar12 = *(long *)PTR_DAT_06768438;
    uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 400);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x198);
  }
  else {
    lVar11 = *(long *)UnityEngine_EnumDataUtility_<>c_TypeInfo;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar1;
    }
    lVar12 = *(long *)PTR_DAT_06768438;
    uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x180);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x188);
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar12);
  }
  FUN_05857264(param_1,uVar10,uVar13,0);
  return;
}


