/*
FUNCTION_NAME: FUN_0526f968
ENTRY_POINT: 0526f968
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


long FUN_0526f968(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_06320908;
  if ((DAT_066cfe53 & 1) == 0) {
    FUN_02b3c81c(Unity_Services_Core_Internal_TaskAsyncOperation_TypeInfo);
    FUN_02b3c81c(System_Threading_Tasks_TaskCanceledException_TypeInfo);
    FUN_02b3c81c(System_Threading_Tasks_TaskContinuation_TypeInfo);
    FUN_02b3c81c(System_Threading_Tasks_TaskExceptionHolder_TypeInfo);
    FUN_02b3c81c(System_Threading_Tasks_TaskFactory_TypeInfo);
    FUN_02b3c81c(System_Threading_Tasks_TaskScheduler_TypeInfo);
    FUN_02b3c81c(System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_TypeInfo);
    FUN_02b3c81c(System_Threading_Tasks_TaskSchedulerException_TypeInfo);
    FUN_02b3c81c(Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    FUN_02b3c81c(System_Net_Sockets_TcpClient_TypeInfo);
    FUN_02b3c81c(System_Net_Sockets_TcpListener_TypeInfo);
    FUN_02b3c81c(Meta_XR_ImmersiveDebugger_Telemetry_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Locomotion_TeleportArcGravity_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Locomotion_TeleportHit_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettings_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettingsDatumProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationMultiAnchorVolume_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportingEvent_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportingEventArgs_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_TemplateAsset_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_TemplateContainer_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_Universal_TemporalAA_TypeInfo);
    FUN_02b3c81c(System_TermInfoDriver_TypeInfo);
    FUN_02b3c81c(System_TermInfoReader_TypeInfo);
    FUN_02b3c81c(System_TermInfoStrings_TypeInfo);
    FUN_02b3c81c(System_Xml_TernaryTreeReadOnly_TypeInfo);
    FUN_02b3c81c(UnityEngine_TerrainCallbacks_TypeInfo);
    FUN_02b3c81c(UnityEngine_TerrainData_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06320908);
    DAT_066cfe53 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_0527afd8(param_1,0);
  puVar1 = UnityEngine_TerrainData_TypeInfo;
  switch(uVar2) {
  case 3:
    if (**(long **)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) != 0) {
      return **(long **)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8);
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettingsDatumProperty_TypeInfo
                              );
    FUN_03fc6f38(lVar3,*(undefined8 *)System_Threading_Tasks_TaskScheduler_TypeInfo);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar3;
    plVar4 = *(long **)(*(long *)puVar1 + 0xb8);
    break;
  case 4:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x10);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettings_TypeInfo
                              );
    FUN_03fc70b0(lVar3,*(undefined8 *)Meta_XR_ImmersiveDebugger_Telemetry_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar4 = lVar3;
    break;
  case 5:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x48);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportingEventArgs_TypeInfo
                              );
    FUN_03fc76b8(lVar3,*(undefined8 *)System_Threading_Tasks_TaskExceptionHolder_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
    *plVar4 = lVar3;
    break;
  case 6:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 8);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)System_TermInfoDriver_TypeInfo);
    FUN_03fc6ff4(lVar3,*(undefined8 *)Oculus_Interaction_Locomotion_TeleportHit_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar3;
    break;
  case 7:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x30);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)System_TermInfoStrings_TypeInfo);
    FUN_03fc73ec(lVar3,*(undefined8 *)System_Net_Sockets_TcpListener_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    *plVar4 = lVar3;
    break;
  case 8:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x60);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)System_TermInfoReader_TypeInfo);
    FUN_03fc7830(lVar3,*(undefined8 *)System_Net_Sockets_TcpClient_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60);
    *plVar4 = lVar3;
    break;
  case 9:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x38);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_TypeInfo);
    FUN_03fc74a8(lVar3,*(undefined8 *)System_Threading_Tasks_TaskCanceledException_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
    *plVar4 = lVar3;
    break;
  case 10:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x68);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Rendering_Universal_TemporalAA_TypeInfo);
    FUN_03fc78ec(lVar3,*(undefined8 *)System_Threading_Tasks_TaskSchedulerException_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
    *plVar4 = lVar3;
    break;
  case 0xb:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x40);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_TypeInfo
                              );
    Unity_Collections_LowLevel_Unsafe_UnsafeParallelHashMap<int,_CPUPerCameraInstanceData_PerCameraInstanceDataArrays>__System_Collections_IEnumerable_GetEnumerator
              (lVar3,*(undefined8 *)System_Threading_Tasks_TaskContinuation_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
    *plVar4 = lVar3;
    break;
  case 0xc:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x70);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportingEvent_TypeInfo
                              );
    FUN_03fc79a8(lVar3,*(undefined8 *)
                        System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70);
    *plVar4 = lVar3;
    break;
  case 0xd:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x50);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_TerrainCallbacks_TypeInfo);
    FUN_03fc7774(lVar3,*(undefined8 *)System_Threading_Tasks_TaskFactory_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
    *plVar4 = lVar3;
    break;
  case 0xe:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x28);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)System_Xml_TernaryTreeReadOnly_TypeInfo);
    FUN_03fc7330(lVar3,*(undefined8 *)
                        Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
    *plVar4 = lVar3;
    break;
  case 0xf:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x20);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_TemplateAsset_TypeInfo);
    FUN_03fc7274(lVar3,*(undefined8 *)Unity_Services_Core_Internal_TaskAsyncOperation_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
    *plVar4 = lVar3;
    break;
  case 0x10:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x18);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationMultiAnchorVolume_TypeInfo
                              );
    FUN_03fc716c(lVar3,*(undefined8 *)Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar4 = lVar3;
    break;
  default:
    lVar3 = FUN_0526fff0(param_1);
    return lVar3;
  case 0x12:
    lVar3 = *(long *)(*(long *)(*(long *)UnityEngine_TerrainData_TypeInfo + 0xb8) + 0x58);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_TemplateContainer_TypeInfo);
    FUN_03fc75fc(lVar3,*(undefined8 *)Oculus_Interaction_Locomotion_TeleportArcGravity_TypeInfo);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
    *plVar4 = lVar3;
  }
  thunk_FUN_02bb0e9c(plVar4,lVar3);
  return lVar3;
}


