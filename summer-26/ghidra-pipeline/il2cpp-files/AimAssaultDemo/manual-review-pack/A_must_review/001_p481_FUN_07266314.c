/*
FUNCTION_NAME: FUN_07266314
ENTRY_POINT: 07266314
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 315
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_14;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_20;functionality_data_collection_or_telemetry_hits_12
*/


void FUN_07266314(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = Unity_Netcode_NetworkVariable<int>_TypeInfo;
  puVar3 = Unity_Netcode_NetworkVariable<FixedString128Bytes>_TypeInfo;
  puVar2 = PTR_DAT_07dc6db0;
  puVar1 = PTR_DAT_07dc63c0;
  if ((DAT_082688e7 & 1) == 0) {
    FUN_0373b518(System_Collections_Generic_List<XmlNode>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<KerningPair>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LayoutObject>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LayoutObject>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LeaderBoardTableSteam>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Leaderboard>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LeaderboardEntry>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LeaderboardsBoxColumn>_TypeInfo);
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
    DAT_082688e7 = 1;
  }
  FUN_07251c3c(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar3,*(undefined8 *)puVar2,
               *(undefined8 *)puVar1,0);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar5 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<XmlQualifiedName>_TypeInfo);
    FUN_044abe74(lVar7,uVar8,*(undefined8 *)Unity_Netcode_NetworkVariable<float>_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_037aeb94(plVar6,lVar7);
  }
  if (param_1 != 0) {
    FUN_03eae788(param_1,lVar7,0,*(undefined8 *)System_Collections_Generic_List<XmlNode>_TypeInfo);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<KerningPair>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ResourceHandle>_TypeInfo);
      FUN_044ac128(lVar7,uVar8,*(undefined8 *)System_Nullable<Decimal>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eaeabc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Leaderboard>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<StackFrame>_TypeInfo
                                );
      FUN_044ac8f4(lVar7,uVar8,*(undefined8 *)System_Nullable<ushort>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eafdf4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LayoutObject>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Polygon>_TypeInfo);
      FUN_044ac538(lVar7,uVar8,*(undefined8 *)OVRTask<List<bool>>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    Unity_Netcode_FastBufferWriter__WriteNetworkSerializable<NetworkDeltaPosition>
              (param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LeaderboardEntry>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFJoint>_TypeInfo);
      FUN_044acb74(lVar7,uVar8,
                   *(undefined8 *)
                    OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb045c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LayoutObject>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Product>_TypeInfo);
      FUN_044ac678(lVar7,uVar8,*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eaf78c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LeaderboardsBoxColumn>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo
                                );
      FUN_044accb4(lVar7,uVar8,*(undefined8 *)OVRTask<bool>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb0790(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LeaderBoardTableSteam>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProcessPort>_TypeInfo);
      FUN_044ac7b8(lVar7,uVar8,*(undefined8 *)OVRTask<Int32Enum>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eafac0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LeaderboardsBoxLine>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RegisterRequest>_TypeInfo);
      FUN_044acdf4(lVar7,uVar8,*(undefined8 *)OVRTask<OVRAnchor>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb0ac4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshModifier>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuleMatcher>_TypeInfo);
      FUN_044b4580(lVar7,uVar8,*(undefined8 *)OVRTask<object>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ebaaec(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Scene>_TypeInfo);
      FUN_044b4d4c(lVar7,uVar8,*(undefined8 *)Unity_Netcode_NetworkVariable<uint>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ebbe24(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshSurface>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Renderer>_TypeInfo);
      FUN_044b4990(lVar7,uVar8,*(undefined8 *)Unity_Netcode_NetworkVariable<ulong>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ebb488(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkClient>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<Rigidbody2D>_TypeInfo);
      FUN_044b4fcc(lVar7,uVar8,
                   *(undefined8 *)
                    Unity_Netcode_NetworkVariable<EnemyEquipmentRandomizer_Equipment>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee49e0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshSurface>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFCache>_TypeInfo);
      FUN_044b4ad0(lVar7,uVar8,*(undefined8 *)System_Nullable<BigInteger>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    Unity_Collections_FixedList__Capacity<FixedBytes4096Align8,_byte>
              (param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkDelivery>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerSetupInfo>_TypeInfo);
      FUN_044b510c(lVar7,uVar8,*(undefined8 *)System_Nullable<bool>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee4d14(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetSyncSession>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
      FUN_044b4c10(lVar7,uVar8,*(undefined8 *)System_Nullable<byte>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ebbaf0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MarkToBaseAdjustmentRecord>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x88);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pid>_TypeInfo);
      FUN_044af144(lVar7,uVar8,*(undefined8 *)System_Nullable<char>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb4ad4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Material>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x90);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerLoopSystemInternal>_TypeInfo
                                );
      FUN_044af910(lVar7,uVar8,*(undefined8 *)System_Nullable<Color>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb5e0c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SignalAsset>_TypeInfo);
      FUN_044af554(lVar7,uVar8,*(undefined8 *)System_Nullable<DateTime>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb5470(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Matrix4x4>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuntimeType>_TypeInfo);
      FUN_044afb90(lVar7,uVar8,*(undefined8 *)System_Nullable<DateTimeOffset>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb6474(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MatAndTransformToMerged>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderTexture>_TypeInfo);
      FUN_044af694(lVar7,uVar8,*(undefined8 *)System_Nullable<double>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb57a4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MemberInfo>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RaycastResult>_TypeInfo);
      FUN_044afcd0(lVar7,uVar8,*(undefined8 *)System_Nullable<Guid>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb67a8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Match>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ShadowCaster2D>_TypeInfo);
      FUN_044af7d4(lVar7,uVar8,*(undefined8 *)System_Nullable<short>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb5ad8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVROverlay>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xc0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Playable>_TypeInfo);
      FUN_044b6b94(lVar7,uVar8,*(undefined8 *)System_Nullable<int>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc0);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee7050(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRSpaceUser>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 200);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectMask2D>_TypeInfo
                                );
      FUN_044b7360(lVar7,uVar8,*(undefined8 *)System_Nullable<long>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 200);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee8388(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRScenePlane>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pose>_TypeInfo);
      FUN_044b6fa4(lVar7,uVar8,*(undefined8 *)System_Nullable<JsonSchemaType>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd0);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee79ec(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<object>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectInt>_TypeInfo);
      FUN_044b75e0(lVar7,uVar8,*(undefined8 *)System_Nullable<sbyte>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd8);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee89f0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRScenePrefabOverride>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<float>_TypeInfo);
      FUN_044b70e4(lVar7,uVar8,
                   *(undefined8 *)
                    System_Nullable<SecureRemotingCertificateValidationResult>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe0);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee7d20(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Object>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RegexOptions>_TypeInfo);
      FUN_044b7720(lVar7,uVar8,*(undefined8 *)System_Nullable<float>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe8);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee8d24(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRSceneRoom>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RadioButton>_TypeInfo);
      FUN_044b7224(lVar7,uVar8,*(undefined8 *)System_Nullable<TimeSpan>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf0);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee8054(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ObjectId>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StageController>_TypeInfo);
      FUN_044b7860(lVar7,uVar8,*(undefined8 *)System_Nullable<uint>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf8);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee9058(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Mesh>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x100);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Selectable>_TypeInfo
                                );
      FUN_044afe10(lVar7,uVar8,*(undefined8 *)System_Nullable<ulong>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x100) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x100,lVar7);
    }
    FUN_03eb6adc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MethodBase>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x108);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo
                                );
      FUN_044b09b4(lVar7,uVar8,*(undefined8 *)System_Nullable<Vector3>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x108) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x108,lVar7);
    }
    FUN_03eb7e14(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MeshInfo>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x110);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RendererListHandle>_TypeInfo);
      FUN_044b0220(lVar7,uVar8,
                   *(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x110) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x110,lVar7);
    }
    FUN_03eb7478(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Missile>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x118);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireDust>_TypeInfo);
      FUN_044b0c34(lVar7,uVar8,
                   *(undefined8 *)System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x118) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x118,lVar7);
    }
    FUN_03eb847c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MeshRenderer>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x120);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScheduledItem>_TypeInfo);
      FUN_044b04b8(lVar7,uVar8,*(undefined8 *)OVRResult<Int32Enum>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x120) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x120,lVar7);
    }
    FUN_03eb77ac(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MockTouch>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x128);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Player>_TypeInfo);
      FUN_044b0d74(lVar7,uVar8,*(undefined8 *)OVRResult<OVRAnchor_SaveResult>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x128) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x128,lVar7);
    }
    FUN_03eb87b0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MeshWriteData>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x130);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Platform>_TypeInfo);
      FUN_044b05f4(lVar7,uVar8,*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x130) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x130,lVar7);
    }
    FUN_03eb7ae0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OccluderContext>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x138);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StudioListener>_TypeInfo);
      FUN_044b799c(lVar7,uVar8,*(undefined8 *)OVRResult<object,_Int32Enum>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x138) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x138,lVar7);
    }
    FUN_03ee938c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<PanelRaycaster>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x140);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RendererList>_TypeInfo);
      FUN_044b8164(lVar7,uVar8,*(undefined8 *)OVRResult<ulong,_Int32Enum>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x140) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x140,lVar7);
    }
    FUN_03eea6c4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OpenXRFeature>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x148);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Quaternion>_TypeInfo
                                );
      FUN_044b7dac(lVar7,uVar8,*(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x148) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x148,lVar7);
    }
    FUN_03ee9d28(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParamRef>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x150);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFFace>_TypeInfo);
      FUN_044b83e4(lVar7,uVar8,*(undefined8 *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x150) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x150,lVar7);
    }
    FUN_03eead2c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OutRec>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x158);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
      FUN_044b7eec(lVar7,uVar8,*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x158) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x158,lVar7);
    }
    FUN_03eea05c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParameterAutomationLink>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x160);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
      FUN_044b8524(lVar7,uVar8,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x160) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x160,lVar7);
    }
    FUN_03eeb060(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Panel>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x168);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProBuilderMesh>_TypeInfo);
      FUN_044b8028(lVar7,uVar8,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x168) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x168,lVar7);
    }
    FUN_03eea390(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParameterExpression>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x170);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireDebris>_TypeInfo);
      FUN_044b8660(lVar7,uVar8,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x170) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x170,lVar7);
    }
    FUN_03eeb394(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ModifierSpec>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x178);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PositionType>_TypeInfo);
      FUN_044b12ec(lVar7,uVar8,
                   *(undefined8 *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x178) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x178,lVar7);
    }
    FUN_03eb8ae4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshBuildSource>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x180);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
      FUN_044b1aa8(lVar7,uVar8,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x180) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x180,lVar7);
    }
    FUN_03eb9e1c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NameValueHeaderValue>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x188);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ShaderTagId>_TypeInfo);
      FUN_044b16f4(lVar7,uVar8,
                   *(undefined8 *)
                    OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x188) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x188,lVar7);
    }
    FUN_03eb9480(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshLink>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 400);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFShard>_TypeInfo);
      FUN_044b1d20(lVar7,uVar8,
                   *(undefined8 *)
                    OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 400) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 400,lVar7);
    }
    FUN_03eba484(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NativePassData>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x198);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderGraph>_TypeInfo);
      FUN_044b1830(lVar7,uVar8,*(undefined8 *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x198) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x198,lVar7);
    }
    FUN_03eb97b4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshModifier>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1a0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
      FUN_044b1e5c(lVar7,uVar8,
                   *(undefined8 *)OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1a0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1a0,lVar7);
    }
    FUN_03eba7b8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshBuildMarkup>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1a8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rect>_TypeInfo);
      FUN_044b196c(lVar7,uVar8,*(undefined8 *)OVRTask<OVRResult<object,_Int32Enum>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1a8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1a8,lVar7);
    }
    FUN_03eb9ae8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParsedAssemblyQualifiedName>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializedCommand>_TypeInfo);
      FUN_044b879c(lVar7,uVar8,*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1b0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1b0,lVar7);
    }
    FUN_03eeb6c8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<PathFilter>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
      FUN_044b91bc(lVar7,uVar8,*(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1b8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1b8,lVar7);
    }
    FUN_03eecd34(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<PathModeObject>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1c0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteGlyph>_TypeInfo);
      FUN_044b92f8(lVar7,uVar8,*(undefined8 *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1c0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1c0,lVar7);
    }
    FUN_03eed068(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<PathModeObject>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1c8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
      FUN_044b9434(lVar7,uVar8,
                   *(undefined8 *)
                    OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1c8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1c8,lVar7);
    }
    FUN_03eed39c(param_1,lVar7,0,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


