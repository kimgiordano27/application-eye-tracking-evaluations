/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.FaceSubsystemParams$$get_supportsFaceMeshUVs
ENTRY_POINT: 06508bac
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure
*/


void UnityEngine_XR_ARSubsystems_FaceSubsystemParams__get_supportsFaceMeshUVs(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  if (unaff_x20 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      param_1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(param_1 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlQualifiedName>_TypeInfo);
    FUN_0516cadc(uVar1,uVar3,*(undefined8 *)Fusion_RingBuffer<double>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 800) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 800,uVar1);
  }
  FUN_037cff94();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x328) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector4>_TypeInfo);
    FUN_0516ce60(uVar1,uVar3,
                 *(undefined8 *)System_Collections_Generic_Queue<WaypointSettings>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x328) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x328,uVar1);
  }
  FUN_037d0ffc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x330) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Transform>_TypeInfo);
    FUN_0516cc44(uVar1,uVar3,
                 *(undefined8 *)System_Collections_Generic_Queue<WaypointSettingsBase>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x330) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x330,uVar1);
  }
  FUN_037d0624();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x338) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<X509Extension>_TypeInfo);
    FUN_0516cfc8(uVar1,uVar3,
                 *(undefined8 *)System_Collections_Generic_Queue<fsVersionedType>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x338) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x338,uVar1);
  }
  FUN_037d168c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x340) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<YogaNode>_TypeInfo);
    FUN_0516ccf8(uVar1,uVar3,
                 *(undefined8 *)
                  System_Collections_Generic_Queue<BarkGroupManager_BarkRequest>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x340) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x340,uVar1);
  }
  FUN_037d096c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x348) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<int2>_TypeInfo);
    FUN_0516d07c(uVar1,uVar3,
                 *(undefined8 *)
                  System_Collections_Generic_Queue<EventDispatcher_EventRecord>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x348) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x348,uVar1);
  }
  FUN_037d19d4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x350) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo
                              );
    FUN_0516cdac(uVar1,uVar3,
                 *(undefined8 *)
                  System_Collections_Generic_Queue<LoadBalancingClient_CallbackTargetChange>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x350) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x350,uVar1);
  }
  FUN_037d0cb4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x358) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<float3>_TypeInfo);
    FUN_0516d130(uVar1,uVar3,
                 *(undefined8 *)
                  System_Collections_Generic_Queue<LoadBalancingClient_CallbackTargetChange>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x358) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x358,uVar1);
  }
  FUN_037d1d1c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x360) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<XmlSchemaElement>_TypeInfo);
    FUN_0516cf14(uVar1,uVar3,
                 *(undefined8 *)System_Collections_Generic_Queue<NetworkRunner_SpawnArgs>_TypeInfo,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x360) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x360,uVar1);
  }
  FUN_037d1344();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x368) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<VisualElementAsset>_TypeInfo);
    FUN_0516cb90(uVar1,uVar3,
                 *(undefined8 *)
                  System_Collections_Generic_Queue<PedestrianDensityManager_PedestrianRequest>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x368) = uVar1;
    thunk_FUN_02f411dc(lVar2 + 0x368,uVar1);
  }
  FUN_037d02dc();
  return;
}


