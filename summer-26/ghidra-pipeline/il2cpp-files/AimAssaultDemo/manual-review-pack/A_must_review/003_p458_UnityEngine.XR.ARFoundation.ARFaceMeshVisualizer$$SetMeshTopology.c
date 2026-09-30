/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARFaceMeshVisualizer$$SetMeshTopology
ENTRY_POINT: 072663b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 300
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_9;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_7;ray_or_cast_sink_hits_7;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_13;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_17;functionality_data_collection_or_telemetry_hits_11
*/


void UnityEngine_XR_ARFoundation_ARFaceMeshVisualizer__SetMeshTopology(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_0373b518();
  FUN_0373b518(System_Collections_Generic_List<LeaderboardsBoxLine>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<MarkToBaseAdjustmentRecord>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<MatAndTransformToMerged>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Match>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Material>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Matrix4x4>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<MemberInfo>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Mesh>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<MeshInfo>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<MeshRenderer>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<MeshWriteData>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<MethodBase>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Missile>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<MockTouch>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ModifierSpec>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NameValueHeaderValue>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NativePassData>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NavMeshBuildMarkup>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NavMeshBuildSource>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NavMeshLink>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NavMeshModifier>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NavMeshModifier>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NavMeshSurface>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NavMeshSurface>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NetSyncSession>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NetworkClient>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<NetworkDelivery>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVROverlay>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRScenePlane>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRScenePrefabOverride>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRSceneRoom>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OVRSpaceUser>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<object>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Object>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ObjectId>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OccluderContext>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OpenXRFeature>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<OutRec>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Panel>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PanelRaycaster>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ParamRef>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ParameterAutomationLink>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ParameterExpression>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ParsedAssemblyQualifiedName>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PathFilter>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PathModeObject>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PathModeObject>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Pid>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Platform>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Playable>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Player>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<XmlQualifiedName>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PlayerLoopSystemInternal>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PlayerSetupInfo>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Polygon>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Pose>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PositionType>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ProBuilderMesh>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ProcessPort>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Product>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Quaternion>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RFCache>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RFFace>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RFJoint>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RFShard>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RadioButton>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RaycastHit>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RaycastResult>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RayfireDebris>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RayfireDust>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Rect>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RectInt>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RectMask2D>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RegexOptions>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RegisterRequest>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RenderGraph>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RenderTexture>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Renderer>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RendererList>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RendererListHandle>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ResourceHandle>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Rigidbody2D>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RuleMatcher>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<RuntimeType>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Scene>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ScheduledItem>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<Selectable>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<SerializedCommand>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ShaderTagId>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<ShadowCaster2D>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<SignalAsset>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<float>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<SpriteGlyph>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<StackFrame>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<StageController>_TypeInfo);
  FUN_0373b518(System_Collections_Generic_List<StudioListener>_TypeInfo);
  FUN_0373b518(Unity_Netcode_NetworkVariable<float>_TypeInfo);
  FUN_0373b518(Unity_Netcode_NetworkVariable<uint>_TypeInfo);
  FUN_0373b518(Unity_Netcode_NetworkVariable<ulong>_TypeInfo);
  FUN_0373b518(Unity_Netcode_NetworkVariable<EnemyEquipmentRandomizer_Equipment>_TypeInfo);
  FUN_0373b518(System_Nullable<BigInteger>_TypeInfo);
  FUN_0373b518(System_Nullable<bool>_TypeInfo);
  FUN_0373b518(System_Nullable<byte>_TypeInfo);
  FUN_0373b518(System_Nullable<char>_TypeInfo);
  FUN_0373b518(System_Nullable<Color>_TypeInfo);
  FUN_0373b518(System_Nullable<DateTime>_TypeInfo);
  FUN_0373b518(System_Nullable<DateTimeOffset>_TypeInfo);
  FUN_0373b518(System_Nullable<Decimal>_TypeInfo);
  FUN_0373b518(System_Nullable<double>_TypeInfo);
  FUN_0373b518(System_Nullable<Guid>_TypeInfo);
  FUN_0373b518(System_Nullable<short>_TypeInfo);
  FUN_0373b518(System_Nullable<int>_TypeInfo);
  FUN_0373b518(System_Nullable<long>_TypeInfo);
  FUN_0373b518(System_Nullable<JsonSchemaType>_TypeInfo);
  FUN_0373b518(System_Nullable<sbyte>_TypeInfo);
  FUN_0373b518(System_Nullable<SecureRemotingCertificateValidationResult>_TypeInfo);
  FUN_0373b518(System_Nullable<float>_TypeInfo);
  FUN_0373b518(System_Nullable<TimeSpan>_TypeInfo);
  FUN_0373b518(System_Nullable<ushort>_TypeInfo);
  FUN_0373b518(System_Nullable<uint>_TypeInfo);
  FUN_0373b518(System_Nullable<ulong>_TypeInfo);
  FUN_0373b518(System_Nullable<Vector3>_TypeInfo);
  FUN_0373b518(System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
  FUN_0373b518(System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo);
  FUN_0373b518(OVRResult<Int32Enum>_TypeInfo);
  FUN_0373b518(OVRResult<OVRAnchor_SaveResult>_TypeInfo);
  FUN_0373b518(OVRResult<Guid,_Int32Enum>_TypeInfo);
  FUN_0373b518(OVRResult<object,_Int32Enum>_TypeInfo);
  FUN_0373b518(OVRResult<ulong,_Int32Enum>_TypeInfo);
  FUN_0373b518(OVRTask<List<bool>>_TypeInfo);
  FUN_0373b518(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
  FUN_0373b518(OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<Int32Enum>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo);
  FUN_0373b518(
              OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
              );
  FUN_0373b518(
              OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
              );
  FUN_0373b518(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<object,_Int32Enum>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
  FUN_0373b518(OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo);
  FUN_0373b518(OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
  FUN_0373b518(OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
  FUN_0373b518(OVRTask<bool>_TypeInfo);
  FUN_0373b518(OVRTask<Int32Enum>_TypeInfo);
  FUN_0373b518(OVRTask<OVRAnchor>_TypeInfo);
  FUN_0373b518(OVRTask<object>_TypeInfo);
  FUN_0373b518(Unity_Netcode_NetworkVariable<int>_TypeInfo);
  FUN_0373b518(PTR_DAT_07dc63c0);
  FUN_0373b518(PTR_DAT_07dc6db0);
  FUN_0373b518(Unity_Netcode_NetworkVariable<FixedString128Bytes>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x8e7) = 1;
  FUN_07251c3c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<XmlQualifiedName>_TypeInfo);
    FUN_044abe74(uVar2,uVar4,*(undefined8 *)Unity_Netcode_NetworkVariable<float>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_037aeb94(puVar3,uVar2);
  }
  if (unaff_x19 != 0) {
    FUN_03eae788();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ResourceHandle>_TypeInfo);
      FUN_044ac128(uVar2,uVar4,*(undefined8 *)System_Nullable<Decimal>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eaeabc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<StackFrame>_TypeInfo
                                );
      FUN_044ac8f4(uVar2,uVar4,*(undefined8 *)System_Nullable<ushort>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eafdf4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Polygon>_TypeInfo);
      FUN_044ac538(uVar2,uVar4,*(undefined8 *)OVRTask<List<bool>>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    Unity_Netcode_FastBufferWriter__WriteNetworkSerializable<NetworkDeltaPosition>();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x28) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFJoint>_TypeInfo);
      FUN_044acb74(uVar2,uVar4,
                   *(undefined8 *)
                    OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb045c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x30) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Product>_TypeInfo);
      FUN_044ac678(uVar2,uVar4,*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eaf78c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x38) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo
                                );
      FUN_044accb4(uVar2,uVar4,*(undefined8 *)OVRTask<bool>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb0790();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x40) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProcessPort>_TypeInfo);
      FUN_044ac7b8(uVar2,uVar4,*(undefined8 *)OVRTask<Int32Enum>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eafac0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x48) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RegisterRequest>_TypeInfo);
      FUN_044acdf4(uVar2,uVar4,*(undefined8 *)OVRTask<OVRAnchor>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb0ac4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x50) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuleMatcher>_TypeInfo);
      FUN_044b4580(uVar2,uVar4,*(undefined8 *)OVRTask<object>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ebaaec();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x58) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Scene>_TypeInfo);
      FUN_044b4d4c(uVar2,uVar4,*(undefined8 *)Unity_Netcode_NetworkVariable<uint>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ebbe24();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x60) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Renderer>_TypeInfo);
      FUN_044b4990(uVar2,uVar4,*(undefined8 *)Unity_Netcode_NetworkVariable<ulong>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ebb488();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x68) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<Rigidbody2D>_TypeInfo);
      FUN_044b4fcc(uVar2,uVar4,
                   *(undefined8 *)
                    Unity_Netcode_NetworkVariable<EnemyEquipmentRandomizer_Equipment>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee49e0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x70) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFCache>_TypeInfo);
      FUN_044b4ad0(uVar2,uVar4,*(undefined8 *)System_Nullable<BigInteger>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    Unity_Collections_FixedList__Capacity<FixedBytes4096Align8,_byte>();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x78) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerSetupInfo>_TypeInfo);
      FUN_044b510c(uVar2,uVar4,*(undefined8 *)System_Nullable<bool>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee4d14();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x80) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
      FUN_044b4c10(uVar2,uVar4,*(undefined8 *)System_Nullable<byte>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ebbaf0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x88) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pid>_TypeInfo);
      FUN_044af144(uVar2,uVar4,*(undefined8 *)System_Nullable<char>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb4ad4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x90) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerLoopSystemInternal>_TypeInfo
                                );
      FUN_044af910(uVar2,uVar4,*(undefined8 *)System_Nullable<Color>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb5e0c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x98) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SignalAsset>_TypeInfo);
      FUN_044af554(uVar2,uVar4,*(undefined8 *)System_Nullable<DateTime>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb5470();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuntimeType>_TypeInfo);
      FUN_044afb90(uVar2,uVar4,*(undefined8 *)System_Nullable<DateTimeOffset>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb6474();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderTexture>_TypeInfo);
      FUN_044af694(uVar2,uVar4,*(undefined8 *)System_Nullable<double>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb57a4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RaycastResult>_TypeInfo);
      FUN_044afcd0(uVar2,uVar4,*(undefined8 *)System_Nullable<Guid>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb67a8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ShadowCaster2D>_TypeInfo);
      FUN_044af7d4(uVar2,uVar4,*(undefined8 *)System_Nullable<short>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03eb5ad8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xc0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Playable>_TypeInfo);
      FUN_044b6b94(uVar2,uVar4,*(undefined8 *)System_Nullable<int>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee7050();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 200) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectMask2D>_TypeInfo
                                );
      FUN_044b7360(uVar2,uVar4,*(undefined8 *)System_Nullable<long>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee8388();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pose>_TypeInfo);
      FUN_044b6fa4(uVar2,uVar4,*(undefined8 *)System_Nullable<JsonSchemaType>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee79ec();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectInt>_TypeInfo);
      FUN_044b75e0(uVar2,uVar4,*(undefined8 *)System_Nullable<sbyte>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee89f0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<float>_TypeInfo);
      FUN_044b70e4(uVar2,uVar4,
                   *(undefined8 *)
                    System_Nullable<SecureRemotingCertificateValidationResult>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee7d20();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RegexOptions>_TypeInfo);
      FUN_044b7720(uVar2,uVar4,*(undefined8 *)System_Nullable<float>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee8d24();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RadioButton>_TypeInfo);
      FUN_044b7224(uVar2,uVar4,*(undefined8 *)System_Nullable<TimeSpan>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee8054();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StageController>_TypeInfo);
      FUN_044b7860(uVar2,uVar4,*(undefined8 *)System_Nullable<uint>_TypeInfo,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
    }
    FUN_03ee9058();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x100) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Selectable>_TypeInfo
                                );
      FUN_044afe10(uVar2,uVar4,*(undefined8 *)System_Nullable<ulong>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x100) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x100,uVar2);
    }
    FUN_03eb6adc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x108) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo
                                );
      FUN_044b09b4(uVar2,uVar4,*(undefined8 *)System_Nullable<Vector3>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x108) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x108,uVar2);
    }
    FUN_03eb7e14();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x110) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RendererListHandle>_TypeInfo);
      FUN_044b0220(uVar2,uVar4,
                   *(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x110) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x110,uVar2);
    }
    FUN_03eb7478();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x118) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireDust>_TypeInfo);
      FUN_044b0c34(uVar2,uVar4,
                   *(undefined8 *)System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x118) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x118,uVar2);
    }
    FUN_03eb847c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x120) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScheduledItem>_TypeInfo);
      FUN_044b04b8(uVar2,uVar4,*(undefined8 *)OVRResult<Int32Enum>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x120) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x120,uVar2);
    }
    FUN_03eb77ac();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x128) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Player>_TypeInfo);
      FUN_044b0d74(uVar2,uVar4,*(undefined8 *)OVRResult<OVRAnchor_SaveResult>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x128) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x128,uVar2);
    }
    FUN_03eb87b0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x130) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Platform>_TypeInfo);
      FUN_044b05f4(uVar2,uVar4,*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x130) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x130,uVar2);
    }
    FUN_03eb7ae0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x138) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StudioListener>_TypeInfo);
      FUN_044b799c(uVar2,uVar4,*(undefined8 *)OVRResult<object,_Int32Enum>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x138) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x138,uVar2);
    }
    FUN_03ee938c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x140) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RendererList>_TypeInfo);
      FUN_044b8164(uVar2,uVar4,*(undefined8 *)OVRResult<ulong,_Int32Enum>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x140) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x140,uVar2);
    }
    FUN_03eea6c4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x148) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Quaternion>_TypeInfo
                                );
      FUN_044b7dac(uVar2,uVar4,*(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x148) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x148,uVar2);
    }
    FUN_03ee9d28();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x150) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFFace>_TypeInfo);
      FUN_044b83e4(uVar2,uVar4,*(undefined8 *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x150) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x150,uVar2);
    }
    FUN_03eead2c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x158) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
      FUN_044b7eec(uVar2,uVar4,*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x158) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x158,uVar2);
    }
    FUN_03eea05c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x160) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
      FUN_044b8524(uVar2,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x160) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x160,uVar2);
    }
    FUN_03eeb060();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x168) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProBuilderMesh>_TypeInfo);
      FUN_044b8028(uVar2,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x168) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x168,uVar2);
    }
    FUN_03eea390();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x170) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireDebris>_TypeInfo);
      FUN_044b8660(uVar2,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x170) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x170,uVar2);
    }
    FUN_03eeb394();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x178) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PositionType>_TypeInfo);
      FUN_044b12ec(uVar2,uVar4,
                   *(undefined8 *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x178) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x178,uVar2);
    }
    FUN_03eb8ae4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x180) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
      FUN_044b1aa8(uVar2,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x180) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x180,uVar2);
    }
    FUN_03eb9e1c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x188) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ShaderTagId>_TypeInfo);
      FUN_044b16f4(uVar2,uVar4,
                   *(undefined8 *)
                    OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x188) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x188,uVar2);
    }
    FUN_03eb9480();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 400) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFShard>_TypeInfo);
      FUN_044b1d20(uVar2,uVar4,
                   *(undefined8 *)
                    OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                   ,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 400) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 400,uVar2);
    }
    FUN_03eba484();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x198) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderGraph>_TypeInfo);
      FUN_044b1830(uVar2,uVar4,*(undefined8 *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x198) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x198,uVar2);
    }
    FUN_03eb97b4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
      FUN_044b1e5c(uVar2,uVar4,
                   *(undefined8 *)OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1a0,uVar2);
    }
    FUN_03eba7b8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rect>_TypeInfo);
      FUN_044b196c(uVar2,uVar4,*(undefined8 *)OVRTask<OVRResult<object,_Int32Enum>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1a8,uVar2);
    }
    FUN_03eb9ae8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializedCommand>_TypeInfo);
      FUN_044b879c(uVar2,uVar4,*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1b0,uVar2);
    }
    FUN_03eeb6c8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
      FUN_044b91bc(uVar2,uVar4,*(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,0
                  );
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1b8,uVar2);
    }
    FUN_03eecd34();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c0) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteGlyph>_TypeInfo);
      FUN_044b92f8(uVar2,uVar4,*(undefined8 *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1c0,uVar2);
    }
    FUN_03eed068();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c8) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
      FUN_044b9434(uVar2,uVar4,
                   *(undefined8 *)
                    OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo,0);
      lVar1 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
      thunk_FUN_037aeb94(lVar1 + 0x1c8,uVar2);
    }
    FUN_03eed39c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


