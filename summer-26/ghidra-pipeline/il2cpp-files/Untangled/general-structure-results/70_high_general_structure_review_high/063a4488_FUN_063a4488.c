/*
FUNCTION_NAME: FUN_063a4488
ENTRY_POINT: 063a4488
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void FUN_063a4488(long param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_160 [128];
  undefined1 auStack_e0 [128];
  
  puVar1 = UnityEngine_ExecuteInEditMode_var;
  if ((DAT_071cd4bb & 1) == 0) {
    FUN_02f07e70(System_Action<ARPlaneBoundaryChangedEventArgs>_TypeInfo);
    FUN_02f07e70(UnityEngine_ExecuteInEditMode_var);
    FUN_02f07e70(PTR_DAT_06d02fa8);
    FUN_02f07e70(PTR_DAT_06d38bf0);
    FUN_02f07e70(PTR_DAT_06d45398);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_var);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_var);
    FUN_02f07e70(System_Action<ARPlanesChangedEventArgs>_TypeInfo);
    FUN_02f07e70(System_Action<ARPointCloudChangedEventArgs>_TypeInfo);
    FUN_02f07e70(System_Action<ARPointCloudUpdatedEventArgs>_TypeInfo);
    FUN_02f07e70(System_Action<ARRaycastUpdatedEventArgs>_TypeInfo);
    FUN_02f07e70(System_Action<ARSessionStateChangedEventArgs>_TypeInfo);
    FUN_02f07e70(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_var
                );
    FUN_02f07e70(System_Action<ARTrackablesParentTransformChangedEventArgs>_TypeInfo);
    FUN_02f07e70(System_Action<ARTrackedImagesChangedEventArgs>_TypeInfo);
    FUN_02f07e70(System_Action<ARTrackedObjectsChangedEventArgs>_TypeInfo);
    FUN_02f07e70(System_Action<Animator>_TypeInfo);
    FUN_02f07e70(System_Action<AsyncGPUReadbackRequest>_TypeInfo);
    DAT_071cd4bb = 1;
  }
  puVar7 = System_Action<ARTrackedImagesChangedEventArgs>_TypeInfo;
  puVar6 = System_Action<ARRaycastUpdatedEventArgs>_TypeInfo;
  puVar5 = System_Action<ARPlaneBoundaryChangedEventArgs>_TypeInfo;
  puVar4 = 
  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_var;
  puVar3 = UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_var;
  puVar2 = UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_var;
  FUN_05645a04(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  bVar8 = FUN_0636d3d0(0);
  *(byte *)(param_1 + 0x50) = bVar8 & 1;
  *(byte *)(param_1 + 0x51) = param_3 & 1;
  uVar9 = FUN_066a0664(*(undefined8 *)puVar4,0);
  **(undefined4 **)(*(long *)puVar5 + 0xb8) = uVar9;
  uVar9 = FUN_066a0664(*(undefined8 *)puVar2,0);
  *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 4) = uVar9;
  uVar9 = FUN_066a0664(*(undefined8 *)puVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = uVar9;
  uVar9 = FUN_066a0664(*(undefined8 *)puVar3,0);
  *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc) = uVar9;
  uVar9 = FUN_066a0664(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = uVar9;
  puVar1 = System_Action<ARTrackablesParentTransformChangedEventArgs>_TypeInfo;
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar9 = FUN_066a0664(*(undefined8 *)System_Action<ARTrackedObjectsChangedEventArgs>_TypeInfo,0);
    *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14) = uVar9;
    uVar9 = FUN_066a0664(*(undefined8 *)System_Action<ARPointCloudChangedEventArgs>_TypeInfo,0);
    *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = uVar9;
    uVar9 = FUN_066a0664(*(undefined8 *)System_Action<AsyncGPUReadbackRequest>_TypeInfo,0);
    *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1c) = uVar9;
    uVar9 = FUN_066a0664(*(undefined8 *)System_Action<ARPointCloudUpdatedEventArgs>_TypeInfo,0);
    *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20) = uVar9;
    uVar9 = FUN_066a0664(*(undefined8 *)System_Action<ARPlanesChangedEventArgs>_TypeInfo,0);
    *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x24) = uVar9;
    uVar9 = FUN_066a0664(*(undefined8 *)System_Action<ARSessionStateChangedEventArgs>_TypeInfo,0);
    *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28) = uVar9;
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_06386dd0(0);
    puVar1 = PTR_DAT_06d45398;
    uVar10 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d45398,uVar9);
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    thunk_FUN_02f411dc();
    uVar10 = FUN_02f07f14(*(undefined8 *)puVar1,uVar9);
    *(undefined8 *)(param_1 + 0x28) = uVar10;
    thunk_FUN_02f411dc();
    uVar10 = FUN_02f07f14(*(undefined8 *)puVar1,uVar9);
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    thunk_FUN_02f411dc();
    uVar10 = FUN_02f07f14(*(undefined8 *)puVar1,uVar9);
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    thunk_FUN_02f411dc();
    uVar10 = FUN_02f07f14(*(undefined8 *)puVar1,uVar9);
    *(undefined8 *)(param_1 + 0x40) = uVar10;
    thunk_FUN_02f411dc();
    uVar10 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02fa8,uVar9);
    *(undefined8 *)(param_1 + 0x48) = uVar10;
    thunk_FUN_02f411dc();
  }
  else {
    uVar9 = FUN_066a0664(*(undefined8 *)System_Action<Animator>_TypeInfo,0);
    *(undefined4 *)(param_1 + 0x10) = uVar9;
    uVar9 = FUN_066a0664(*(undefined8 *)puVar1,0);
    *(undefined4 *)(param_1 + 0x14) = uVar9;
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    FUN_063a48d4(param_1);
    Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTreeAdaptor__DupTree(auStack_160,0);
    memcpy(auStack_e0,auStack_160,0x80);
    memcpy((void *)(param_1 + 0xb0),auStack_e0,0x80);
    thunk_FUN_02f411dc(param_1 + 0xb8,0);
  }
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  thunk_FUN_02f411dc((undefined8 *)(param_1 + 0xa8),param_2);
  return;
}


