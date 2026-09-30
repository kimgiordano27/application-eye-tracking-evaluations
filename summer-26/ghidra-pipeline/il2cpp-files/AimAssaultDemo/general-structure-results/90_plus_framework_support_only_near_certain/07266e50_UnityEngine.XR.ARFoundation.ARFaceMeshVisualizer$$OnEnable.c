/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARFaceMeshVisualizer$$OnEnable
ENTRY_POINT: 07266e50
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 225
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_7;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_XR_ARFoundation_ARFaceMeshVisualizer__OnEnable(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_044acb74();
  puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
  *puVar1 = param_1;
  thunk_FUN_037aeb94(puVar1,param_1);
  FUN_03eb045c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x30) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Product>_TypeInfo);
    FUN_044ac678(uVar3,uVar4,*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eaf78c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x38) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo);
    FUN_044accb4(uVar3,uVar4,*(undefined8 *)OVRTask<bool>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eb0790();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x40) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<ProcessPort>_TypeInfo)
    ;
    FUN_044ac7b8(uVar3,uVar4,*(undefined8 *)OVRTask<Int32Enum>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eafac0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x48) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RegisterRequest>_TypeInfo);
    FUN_044acdf4(uVar3,uVar4,*(undefined8 *)OVRTask<OVRAnchor>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eb0ac4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x50) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RuleMatcher>_TypeInfo)
    ;
    FUN_044b4580(uVar3,uVar4,*(undefined8 *)OVRTask<object>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ebaaec();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x58) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Scene>_TypeInfo);
    FUN_044b4d4c(uVar3,uVar4,*(undefined8 *)Unity_Netcode_NetworkVariable<uint>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ebbe24();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x60) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Renderer>_TypeInfo);
    FUN_044b4990(uVar3,uVar4,*(undefined8 *)Unity_Netcode_NetworkVariable<ulong>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ebb488();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x68) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rigidbody2D>_TypeInfo)
    ;
    FUN_044b4fcc(uVar3,uVar4,
                 *(undefined8 *)
                  Unity_Netcode_NetworkVariable<EnemyEquipmentRandomizer_Equipment>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ee49e0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x70) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFCache>_TypeInfo);
    FUN_044b4ad0(uVar3,uVar4,*(undefined8 *)System_Nullable<BigInteger>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  Unity_Collections_FixedList__Capacity<FixedBytes4096Align8,_byte>();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x78) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PlayerSetupInfo>_TypeInfo);
    FUN_044b510c(uVar3,uVar4,*(undefined8 *)System_Nullable<bool>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ee4d14();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x80) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
    FUN_044b4c10(uVar3,uVar4,*(undefined8 *)System_Nullable<byte>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ebbaf0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x88) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pid>_TypeInfo);
    FUN_044af144(uVar3,uVar4,*(undefined8 *)System_Nullable<char>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eb4ad4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x90) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PlayerLoopSystemInternal>_TypeInfo);
    FUN_044af910(uVar3,uVar4,*(undefined8 *)System_Nullable<Color>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eb5e0c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x98) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SignalAsset>_TypeInfo)
    ;
    FUN_044af554(uVar3,uVar4,*(undefined8 *)System_Nullable<DateTime>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eb5470();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xa0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RuntimeType>_TypeInfo)
    ;
    FUN_044afb90(uVar3,uVar4,*(undefined8 *)System_Nullable<DateTimeOffset>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eb6474();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xa8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RenderTexture>_TypeInfo);
    FUN_044af694(uVar3,uVar4,*(undefined8 *)System_Nullable<double>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eb57a4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xb0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RaycastResult>_TypeInfo);
    FUN_044afcd0(uVar3,uVar4,*(undefined8 *)System_Nullable<Guid>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eb67a8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xb8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ShadowCaster2D>_TypeInfo);
    FUN_044af7d4(uVar3,uVar4,*(undefined8 *)System_Nullable<short>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03eb5ad8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xc0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Playable>_TypeInfo);
    FUN_044b6b94(uVar3,uVar4,*(undefined8 *)System_Nullable<int>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ee7050();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 200) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectMask2D>_TypeInfo);
    FUN_044b7360(uVar3,uVar4,*(undefined8 *)System_Nullable<long>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ee8388();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xd0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pose>_TypeInfo);
    FUN_044b6fa4(uVar3,uVar4,*(undefined8 *)System_Nullable<JsonSchemaType>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ee79ec();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xd8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectInt>_TypeInfo);
    FUN_044b75e0(uVar3,uVar4,*(undefined8 *)System_Nullable<sbyte>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ee89f0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xe0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<float>_TypeInfo);
    FUN_044b70e4(uVar3,uVar4,
                 *(undefined8 *)System_Nullable<SecureRemotingCertificateValidationResult>_TypeInfo,
                 0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ee7d20();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xe8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RegexOptions>_TypeInfo
                              );
    FUN_044b7720(uVar3,uVar4,*(undefined8 *)System_Nullable<float>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ee8d24();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xf0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RadioButton>_TypeInfo)
    ;
    FUN_044b7224(uVar3,uVar4,*(undefined8 *)System_Nullable<TimeSpan>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ee8054();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0xf8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<StageController>_TypeInfo);
    FUN_044b7860(uVar3,uVar4,*(undefined8 *)System_Nullable<uint>_TypeInfo,0);
    puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
    *puVar1 = uVar3;
    thunk_FUN_037aeb94(puVar1,uVar3);
  }
  FUN_03ee9058();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x100) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Selectable>_TypeInfo);
    FUN_044afe10(uVar3,uVar4,*(undefined8 *)System_Nullable<ulong>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x100) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x100,uVar3);
  }
  FUN_03eb6adc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x108) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo);
    FUN_044b09b4(uVar3,uVar4,*(undefined8 *)System_Nullable<Vector3>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x108) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x108,uVar3);
  }
  FUN_03eb7e14();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x110) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RendererListHandle>_TypeInfo);
    FUN_044b0220(uVar3,uVar4,
                 *(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x110) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x110,uVar3);
  }
  FUN_03eb7478();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RayfireDust>_TypeInfo)
    ;
    FUN_044b0c34(uVar3,uVar4,
                 *(undefined8 *)System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x118) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x118,uVar3);
  }
  FUN_03eb847c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ScheduledItem>_TypeInfo);
    FUN_044b04b8(uVar3,uVar4,*(undefined8 *)OVRResult<Int32Enum>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x120) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x120,uVar3);
  }
  FUN_03eb77ac();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Player>_TypeInfo);
    FUN_044b0d74(uVar3,uVar4,*(undefined8 *)OVRResult<OVRAnchor_SaveResult>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x128) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x128,uVar3);
  }
  FUN_03eb87b0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Platform>_TypeInfo);
    FUN_044b05f4(uVar3,uVar4,*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x130) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x130,uVar3);
  }
  FUN_03eb7ae0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<StudioListener>_TypeInfo);
    FUN_044b799c(uVar3,uVar4,*(undefined8 *)OVRResult<object,_Int32Enum>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x138) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x138,uVar3);
  }
  FUN_03ee938c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RendererList>_TypeInfo
                              );
    FUN_044b8164(uVar3,uVar4,*(undefined8 *)OVRResult<ulong,_Int32Enum>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x140) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x140,uVar3);
  }
  FUN_03eea6c4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Quaternion>_TypeInfo);
    FUN_044b7dac(uVar3,uVar4,*(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x148) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x148,uVar3);
  }
  FUN_03ee9d28();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFFace>_TypeInfo);
    FUN_044b83e4(uVar3,uVar4,*(undefined8 *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x150) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x150,uVar3);
  }
  FUN_03eead2c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
    FUN_044b7eec(uVar3,uVar4,*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x158) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x158,uVar3);
  }
  FUN_03eea05c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
    FUN_044b8524(uVar3,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x160) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x160,uVar3);
  }
  FUN_03eeb060();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ProBuilderMesh>_TypeInfo);
    FUN_044b8028(uVar3,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x168) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x168,uVar3);
  }
  FUN_03eea390();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RayfireDebris>_TypeInfo);
    FUN_044b8660(uVar3,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x170) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x170,uVar3);
  }
  FUN_03eeb394();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PositionType>_TypeInfo
                              );
    FUN_044b12ec(uVar3,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x178) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x178,uVar3);
  }
  FUN_03eb8ae4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
    FUN_044b1aa8(uVar3,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x180) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x180,uVar3);
  }
  FUN_03eb9e1c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<ShaderTagId>_TypeInfo)
    ;
    FUN_044b16f4(uVar3,uVar4,
                 *(undefined8 *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x188) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x188,uVar3);
  }
  FUN_03eb9480();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFShard>_TypeInfo);
    FUN_044b1d20(uVar3,uVar4,
                 *(undefined8 *)
                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 400) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 400,uVar3);
  }
  FUN_03eba484();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RenderGraph>_TypeInfo)
    ;
    FUN_044b1830(uVar3,uVar4,*(undefined8 *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x198) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x198,uVar3);
  }
  FUN_03eb97b4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
    FUN_044b1e5c(uVar3,uVar4,
                 *(undefined8 *)OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1a0) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x1a0,uVar3);
  }
  FUN_03eba7b8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rect>_TypeInfo);
    FUN_044b196c(uVar3,uVar4,*(undefined8 *)OVRTask<OVRResult<object,_Int32Enum>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1a8) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x1a8,uVar3);
  }
  FUN_03eb9ae8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<SerializedCommand>_TypeInfo);
    FUN_044b879c(uVar3,uVar4,*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b0) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x1b0,uVar3);
  }
  FUN_03eeb6c8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
    FUN_044b91bc(uVar3,uVar4,*(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b8) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x1b8,uVar3);
  }
  FUN_03eecd34();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SpriteGlyph>_TypeInfo)
    ;
    FUN_044b92f8(uVar3,uVar4,*(undefined8 *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c0) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x1c0,uVar3);
  }
  FUN_03eed068();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
    FUN_044b9434(uVar3,uVar4,
                 *(undefined8 *)
                  OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c8) = uVar3;
    thunk_FUN_037aeb94(lVar2 + 0x1c8,uVar3);
  }
  FUN_03eed39c();
  return;
}


