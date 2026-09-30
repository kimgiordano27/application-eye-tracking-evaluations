/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable$$TryGetPlacementPose
ENTRY_POINT: 05e77474
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_AR_ARPlacementInteractable__TryGetPlacementPose
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x21;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 *puVar8;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar9;
  long unaff_x25;
  undefined8 *puVar10;
  long unaff_x26;
  undefined8 *puVar11;
  long unaff_x27;
  undefined8 *puVar12;
  long unaff_x28;
  undefined8 *puVar13;
  long unaff_x29;
  undefined8 *puVar14;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xb0);
  puVar12 = *(undefined8 **)(unaff_x27 + 0x8b0);
  puVar7 = *(undefined8 **)(unaff_x21 + 0xb8);
  puVar14 = *(undefined8 **)(unaff_x29 + 0xc0);
  puVar13 = *(undefined8 **)(unaff_x28 + 200);
  puVar10 = *(undefined8 **)(unaff_x25 + 0xd0);
  puVar11 = *(undefined8 **)(unaff_x26 + 0x998);
  puVar9 = *(undefined8 **)(unaff_x24 + 0xd8);
  puVar5 = *(undefined8 **)(unaff_x20 + 0x8c8);
  if ((*(byte *)(unaff_x23 + 0x8e7) & 1) == 0) {
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
    *(undefined1 *)(unaff_x23 + 0x8e7) = 1;
  }
  FUN_058b04e0(param_1,0);
  uVar2 = FUN_03452f4c(param_1,*puVar8,*puVar12);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  thunk_FUN_02dd37b4(param_1 + 0x1a8);
  uVar2 = FUN_03452f4c(param_1,*puVar7,*puVar12);
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  thunk_FUN_02dd37b4(param_1 + 0x1b0);
  uVar2 = FUN_03452f4c(param_1,*puVar14,*puVar12);
  *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  thunk_FUN_02dd37b4(param_1 + 0x1b8);
  uVar2 = FUN_03452f4c(param_1,*puVar13,*puVar12);
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  thunk_FUN_02dd37b4(param_1 + 0x1c0);
  uVar2 = FUN_03452f4c(param_1,*puVar10,*puVar11);
  *(undefined8 *)(param_1 + 0x1c8) = uVar2;
  thunk_FUN_02dd37b4(param_1 + 0x1c8);
  uVar2 = FUN_03452f4c(param_1,*puVar9,*puVar5);
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  thunk_FUN_02dd37b4(param_1 + 0x1d0);
  uVar2 = FUN_03452f4c(param_1,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateAutomaticallyInternal>d__19>__
                       ,*puVar5);
  *(undefined8 *)(param_1 + 0x1d8) = uVar2;
  thunk_FUN_02dd37b4(param_1 + 0x1d8);
  uVar2 = FUN_03452f4c(param_1,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11>__
                       ,*puVar5);
  *(undefined8 *)(param_1 + 0x1e0) = uVar2;
  thunk_FUN_02dd37b4(param_1 + 0x1e0);
  uVar2 = FUN_03452f4c(param_1,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                       ,*puVar5);
  *(undefined8 *)(param_1 + 0x1e8) = uVar2;
  thunk_FUN_02dd37b4(param_1 + 0x1e8);
  lVar3 = FUN_058cda3c(*(undefined8 *)(param_1 + 0x120),0);
  puVar1 = UnityEngine_EnumDataUtility_<>c_TypeInfo;
  if (lVar3 == 0) {
    return;
  }
  if ((*(uint *)(lVar3 + 0x28) >> 8 & 1) == 0) {
    if ((*(uint *)(lVar3 + 0x28) >> 9 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)UnityEngine_EnumDataUtility_<>c_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar1;
    }
    lVar4 = *(long *)PTR_DAT_06768438;
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 400);
    uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x198);
  }
  else {
    lVar3 = *(long *)UnityEngine_EnumDataUtility_<>c_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar1;
    }
    lVar4 = *(long *)PTR_DAT_06768438;
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x180);
    uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x188);
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar4);
  }
  FUN_05857264(param_1,uVar2,uVar6,0);
  return;
}


