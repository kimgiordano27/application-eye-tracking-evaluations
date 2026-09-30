/*
FUNCTION_NAME: FUN_07269794
ENTRY_POINT: 07269794
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 256
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_18;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_7
*/


void FUN_07269794(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo;
  puVar3 = OVRTask<OVRPlugin_Result>_TypeInfo;
  puVar2 = PTR_DAT_07dc63a8;
  puVar1 = PTR_DAT_07d980d0;
  if ((DAT_082688e9 & 1) == 0) {
    FUN_0373b518(System_Collections_Generic_List<KerningPair>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LabelScopeInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LayoutManager>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LayoutObject>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LayoutObject>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LeaderBoardTableSteam>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Leaderboard>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LeaderboardEntries>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LeaderboardEntry>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LeaderboardsBoxColumn>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LeaderboardsBoxLine>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LedCommand>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Level2Map>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LevelSettingsSO>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LigatureSubstitutionRecord>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LigatureSubstitutionRecord>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Light2D>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LinkedAccount>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LocalDataStore>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LocomotionProvider>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LocomotionVignetteProvider>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LogEntry>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<LogicalExpression>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB3_MeshBakerCommon>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB_MaterialAndUVRect>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB_TexArrayForProperty>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB_TexArraySlice>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB_TexArraySliceRendererMatPair>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MB_TexSet>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ManipulatorActivationFilter>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MarkToBaseAdjustmentRecord>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MarkToBaseAdjustmentRecord>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MatAndTransformToMerged>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Match>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Material>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MaterialPropertyBlock>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Matrix4x4>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MemberInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Mesh>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MeshFilter>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MeshGenerationNodeImpl>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MeshInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MeshRenderer>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MeshWriteData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MethodBase>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MethodInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Missile>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<MockTouch>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ModifierSpec>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Module>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NameAndParameters>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NameValueHeaderValue>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NativePassData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NavMeshBuildMarkup>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NavMeshBuildSource>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NavMeshLink>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NavMeshLink>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NavMeshModifier>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NavMeshModifier>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NavMeshModifierVolume>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NavMeshModifierVolume>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NavMeshSurface>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NavMeshSurface>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetSyncSession>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetworkBehaviour>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetworkClient>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetworkDelivery>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetworkObject>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetworkPrefab>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetworkPrefabsList>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetworkRigidbodyBase>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetworkTransform>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<NetworkVariableBase>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OTL_FeatureTag>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OTL_FeatureTag>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRBone>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRBoneCapsule>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVROverlay>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVROverlayCanvas>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRSceneAnchor>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRScenePlane>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRScenePrefabOverride>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRSceneRoom>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRSpaceUser>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRSpatialAnchor>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<object>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Object>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ObjectId>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OccluderContext>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OccluderSubviewUpdate>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Oid>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OpenXRFeature>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OutRec>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Panel>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PanelRaycaster>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PanelSettings>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ParamRef>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ParameterAutomationLink>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ParameterExpression>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ParsedAssemblyQualifiedName>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ParticleCollisionEvent>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ParticleSystem>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ParticleSystemRenderer>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PathFilter>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PathModeObject>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PathModeObject>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PathPoint>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PersistentCall>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PhysicsShape2D>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Pid>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Platform>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Playable>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PlayableBinding>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PlayableDirector>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Player>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Player>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PlayerLoopSystemInternal>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PlayerScoreData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PlayerSetupInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PolyNode>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Polygon>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Pose>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PositionType>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ProBuilderMesh>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ProbeVolumePerSceneData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ProcessPort>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Product>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PropertyInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PropertyMetadata>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PropertyPath>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Purchase>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PxrQueriedSpatialEntityInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Quaternion>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<QueryExpression>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RFCache>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RFCluster>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RFDictionary>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RFFace>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RFJoint>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RFPoolingEmitter>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RFShard>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RFTriangle>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RadioButton>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RangeItemHeaderValue>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RangePositionInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RaycastHit>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RaycastHit>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RaycastResult>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RayfireDebris>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RayfireDust>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RayfireRigid>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Rect>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RectInt>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RectMask2D>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RectTransform>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RegexFC>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RegexNode>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RegexOptions>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RegisterRequest>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RenderGraph>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RenderTexture>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Renderer>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RendererList>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RendererListHandle>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ResourceHandle>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ReusableCollectionItem>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Rigidbody>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Rigidbody2D>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RuleMatcher>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RuntimeElement>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RuntimeType>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Scene>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SceneOverride>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ScheduledItem>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ScriptableObject>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ScriptableRendererFeature>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SdkAccount>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Selectable>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SerializationCallback>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SerializedCommand>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SerializedData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SeverityEntry>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ShaderTagId>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ShaderTextureProperty>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ShadowCaster2D>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ShadowCasterGroup2D>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SharedVertex>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SignalAsset>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<float>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SkinSettings>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SkinSettingsDual>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SkinnedMeshRenderer>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SortColumnDescription>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SpriteCharacter>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SpriteGlyph>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SpriteRenderer>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<StackFrame>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<StageController>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<SteamAudioDynamicObject>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<string>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<StringBuilder>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<StudioEventEmitter>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<StudioListener>_TypeInfo);
    FUN_0373b518(OVRTask<OVRSceneManager_Metrics>_TypeInfo);
    FUN_0373b518(OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_0373b518(OVRTask<OVRAnchor_Tracker_AsyncLock>_TypeInfo);
    FUN_0373b518(Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_ObjectListPool<string>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<Result<ARAnchor>>>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<List<NativeSlice<ushort>>>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<List<NativeSlice<Vertex>>>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<List<GlyphRenderMode>>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<List<Material>>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<Queue<EventBase>>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<AutoCompletePathVisitor>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<Awaitable>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<GameObject>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<LayoutRebuilder>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<StringBuilder>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<TypePathVisitor>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<PropertyContainer_GetPropertyVisitor>_TypeInfo);
    FUN_0373b518(UnityEngine_Pool_ObjectPool<UITKTextJobSystem_ManagedJobData>_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_ObjectPool<CommandBuffer>_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_ObjectPool<AtlasAllocator_AtlasNode>_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_Cell>_TypeInfo);
    FUN_0373b518(
                UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                );
    FUN_0373b518(UnityEngine_UIElements_ObjectPool<List<VisualElement>>_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_ObjectPool<PropagationPaths>_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo);
    FUN_0373b518(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_0373b518(Unity_Netcode_NetworkVariable_OnValueChangedDelegate<FixedString128Bytes>_TypeInfo)
    ;
    FUN_0373b518(Unity_Netcode_NetworkVariable_OnValueChangedDelegate<int>_TypeInfo);
    FUN_0373b518(Unity_Netcode_NetworkVariable_OnValueChangedDelegate<ulong>_TypeInfo);
    FUN_0373b518(
                Unity_Netcode_NetworkVariable_OnValueChangedDelegate<EnemyEquipmentRandomizer_Equipment>_TypeInfo
                );
    FUN_0373b518(Microsoft_MixedReality_OpenXR_OpenXRFeaturePlugin<AppRemotingPlugin>_TypeInfo);
    FUN_0373b518(
                Microsoft_MixedReality_OpenXR_OpenXRFeaturePlugin<HandTrackingFeaturePlugin>_TypeInfo
                );
    FUN_0373b518(
                Microsoft_MixedReality_OpenXR_OpenXRFeaturePlugin<MixedRealityFeaturePlugin>_TypeInfo
                );
    FUN_0373b518(
                Microsoft_MixedReality_OpenXR_OpenXRFeaturePlugin<MotionControllerFeaturePlugin>_TypeInfo
                );
    FUN_0373b518(Microsoft_MixedReality_OpenXR_OpenXRFeaturePlugin<PlayModeRemotingPlugin>_TypeInfo)
    ;
    FUN_0373b518(UnityEngine_UIElements_UIR_TempAllocator_Page<ushort>_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UIR_TempAllocator_Page<Vertex>_TypeInfo);
    FUN_0373b518(Unity_Netcode_NetworkMessageManager_PointerListWrapper<ulong>_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_PopupField<string>_TypeInfo);
    FUN_0373b518(System_Predicate<ValueTuple<string,_Type>>_TypeInfo);
    FUN_0373b518(System_Predicate<BaseInvokableCall>_TypeInfo);
    FUN_0373b518(System_Predicate<Camera>_TypeInfo);
    FUN_0373b518(System_Predicate<ClientId>_TypeInfo);
    FUN_0373b518(System_Predicate<CodecChannelCount>_TypeInfo);
    FUN_0373b518(System_Predicate<Collider>_TypeInfo);
    FUN_0373b518(System_Predicate<Column>_TypeInfo);
    FUN_0373b518(System_Predicate<Component>_TypeInfo);
    FUN_0373b518(System_Predicate<DebugUIHandlerValue>_TypeInfo);
    FUN_0373b518(System_Predicate<DropdownMenuItem>_TypeInfo);
    FUN_0373b518(System_Predicate<Enemy>_TypeInfo);
    FUN_0373b518(System_Predicate<Face>_TypeInfo);
    FUN_0373b518(System_Predicate<GameObject>_TypeInfo);
    FUN_0373b518(System_Predicate<InputBinding>_TypeInfo);
    FUN_0373b518(System_Predicate<InputControlScheme>_TypeInfo);
    FUN_0373b518(System_Predicate<int>_TypeInfo);
    FUN_0373b518(System_Predicate<JobTask>_TypeInfo);
    FUN_0373b518(System_Predicate<KerningPair>_TypeInfo);
    FUN_0373b518(System_Predicate<LogEntry>_TypeInfo);
    FUN_0373b518(System_Predicate<MB_TexSet>_TypeInfo);
    FUN_0373b518(System_Predicate<NameValueHeaderValue>_TypeInfo);
    FUN_0373b518(System_Predicate<NavMeshBuildSource>_TypeInfo);
    FUN_0373b518(System_Predicate<NavMeshModifier>_TypeInfo);
    FUN_0373b518(System_Predicate<NavMeshModifier>_TypeInfo);
    FUN_0373b518(System_Predicate<NavMeshModifierVolume>_TypeInfo);
    FUN_0373b518(System_Predicate<NavMeshModifierVolume>_TypeInfo);
    FUN_0373b518(System_Predicate<NetworkObject>_TypeInfo);
    FUN_0373b518(System_Predicate<OVRSpaceUser>_TypeInfo);
    FUN_0373b518(System_Predicate<object>_TypeInfo);
    FUN_0373b518(System_Predicate<ParamRef>_TypeInfo);
    FUN_0373b518(System_Predicate<Platform>_TypeInfo);
    FUN_0373b518(System_Predicate<RFCluster>_TypeInfo);
    FUN_0373b518(System_Predicate<RFShard>_TypeInfo);
    FUN_0373b518(System_Predicate<ReferenceSet>_TypeInfo);
    FUN_0373b518(System_Predicate<Renderer>_TypeInfo);
    FUN_0373b518(System_Predicate<SceneOverride>_TypeInfo);
    FUN_0373b518(System_Predicate<ScriptableObject>_TypeInfo);
    FUN_0373b518(System_Predicate<ScriptableRenderPass>_TypeInfo);
    FUN_0373b518(System_Predicate<ShaderTextureProperty>_TypeInfo);
    FUN_0373b518(System_Predicate<StageController>_TypeInfo);
    FUN_0373b518(System_Predicate<string>_TypeInfo);
    FUN_0373b518(System_Predicate<StyleSelectorPart>_TypeInfo);
    FUN_0373b518(System_Predicate<Tab>_TypeInfo);
    FUN_0373b518(System_Predicate<Task>_TypeInfo);
    FUN_0373b518(System_Predicate<Terrain>_TypeInfo);
    FUN_0373b518(System_Predicate<TextSpan>_TypeInfo);
    FUN_0373b518(System_Predicate<Toggle>_TypeInfo);
    FUN_0373b518(System_Predicate<TransferCodingHeaderValue>_TypeInfo);
    FUN_0373b518(System_Predicate<Transform>_TypeInfo);
    FUN_0373b518(System_Predicate<Type>_TypeInfo);
    FUN_0373b518(System_Predicate<VisualElement>_TypeInfo);
    FUN_0373b518(System_Predicate<Volume>_TypeInfo);
    FUN_0373b518(System_Predicate<VolumeComponent>_TypeInfo);
    FUN_0373b518(System_Predicate<VolumeProfile>_TypeInfo);
    FUN_0373b518(System_Predicate<CarTraffic_SpawnedCar>_TypeInfo);
    FUN_0373b518(System_Predicate<DebugUI_Panel>_TypeInfo);
    FUN_0373b518(System_Predicate<DebugUI_ValueTuple>_TypeInfo);
    FUN_0373b518(System_Predicate<DeviceConfigManager_DeviceConfig>_TypeInfo);
    FUN_0373b518(System_Predicate<EventProvider_Registration>_TypeInfo);
    FUN_0373b518(System_Predicate<HID_HIDElementDescriptor>_TypeInfo);
    FUN_0373b518(System_Predicate<InputEventTrace_DeviceInfo>_TypeInfo);
    FUN_0373b518(System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo);
    FUN_0373b518(System_Predicate<MB3_AgglomerativeClustering_item_s>_TypeInfo);
    FUN_0373b518(System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo);
    FUN_0373b518(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
    FUN_0373b518(OVRTask<OVRPlugin_Result>_TypeInfo);
    FUN_0373b518(PTR_DAT_07dc63a8);
    FUN_0373b518(PTR_DAT_07d980d0);
    DAT_082688e9 = 1;
  }
  FUN_07251c3c(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar3,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2,0);
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
                                System_Collections_Generic_List<ResourceHandle>_TypeInfo);
    FUN_044ac128(lVar7,uVar8,*(undefined8 *)OVRTask<OVRSceneManager_Metrics>_TypeInfo,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_037aeb94(plVar6,lVar7);
  }
  if (param_1 != 0) {
    FUN_03eaeabc(param_1,lVar7,0,
                 *(undefined8 *)System_Collections_Generic_List<KerningPair>_TypeInfo);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Leaderboard>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<StackFrame>_TypeInfo
                                );
      FUN_044ac8f4(lVar7,uVar8,
                   *(undefined8 *)UnityEngine_Rendering_ObjectPool<CommandBuffer>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Polygon>_TypeInfo);
      FUN_044ac538(lVar7,uVar8,
                   *(undefined8 *)
                    OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFJoint>_TypeInfo);
      FUN_044acb74(lVar7,uVar8,
                   *(undefined8 *)UnityEngine_UIElements_UIR_TempAllocator_Page<Vertex>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Product>_TypeInfo);
      FUN_044ac678(lVar7,uVar8,*(undefined8 *)System_Predicate<DebugUIHandlerValue>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo
                                );
      FUN_044accb4(lVar7,uVar8,*(undefined8 *)System_Predicate<MB_TexSet>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProcessPort>_TypeInfo);
      FUN_044ac7b8(lVar7,uVar8,*(undefined8 *)System_Predicate<Platform>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RegisterRequest>_TypeInfo);
      FUN_044acdf4(lVar7,uVar8,*(undefined8 *)System_Predicate<StyleSelectorPart>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb0ac4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LeaderboardEntries>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerScoreData>_TypeInfo);
      FUN_044aca34(lVar7,uVar8,*(undefined8 *)System_Predicate<VolumeComponent>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb0128(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LabelScopeInfo>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireRigid>_TypeInfo);
      FUN_044ac268(lVar7,uVar8,
                   *(undefined8 *)
                    System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo,0
                  );
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eaedf0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LayoutManager>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PxrQueriedSpatialEntityInfo>_TypeInfo
                                );
      FUN_044ac3f8(lVar7,uVar8,*(undefined8 *)UnityEngine_Pool_ObjectPool<List<Material>>_TypeInfo,0
                  );
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eaf124(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshModifier>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuleMatcher>_TypeInfo);
      FUN_044b4580(lVar7,uVar8,*(undefined8 *)UnityEngine_Pool_ObjectPool<Queue<EventBase>>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Scene>_TypeInfo);
      FUN_044b4d4c(lVar7,uVar8,
                   *(undefined8 *)UnityEngine_Pool_ObjectPool<AutoCompletePathVisitor>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Renderer>_TypeInfo);
      FUN_044b4990(lVar7,uVar8,*(undefined8 *)UnityEngine_Pool_ObjectPool<Awaitable>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<Rigidbody2D>_TypeInfo);
      FUN_044b4fcc(lVar7,uVar8,*(undefined8 *)UnityEngine_Pool_ObjectPool<GameObject>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFCache>_TypeInfo);
      FUN_044b4ad0(lVar7,uVar8,*(undefined8 *)UnityEngine_Pool_ObjectPool<LayoutRebuilder>_TypeInfo,
                   0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x88);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerSetupInfo>_TypeInfo);
      FUN_044b510c(lVar7,uVar8,*(undefined8 *)UnityEngine_Pool_ObjectPool<StringBuilder>_TypeInfo,0)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x90);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
      FUN_044b4c10(lVar7,uVar8,*(undefined8 *)UnityEngine_Pool_ObjectPool<TypePathVisitor>_TypeInfo,
                   0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ebbaf0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkBehaviour>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuntimeElement>_TypeInfo);
      FUN_044b4e8c(lVar7,uVar8,
                   *(undefined8 *)
                    UnityEngine_Pool_ObjectPool<PropertyContainer_GetPropertyVisitor>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ee46ac(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshModifierVolume>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SkinSettingsDual>_TypeInfo);
      FUN_044b46c0(lVar7,uVar8,
                   *(undefined8 *)
                    UnityEngine_Pool_ObjectPool<UITKTextJobSystem_ManagedJobData>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ebae20(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshModifierVolume>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SteamAudioDynamicObject>_TypeInfo)
      ;
      FUN_044b4850(lVar7,uVar8,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<AtlasAllocator_AtlasNode>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03ebb154(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MarkToBaseAdjustmentRecord>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pid>_TypeInfo);
      FUN_044af144(lVar7,uVar8,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_Cell>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerLoopSystemInternal>_TypeInfo
                                );
      FUN_044af910(lVar7,uVar8,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xc0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SignalAsset>_TypeInfo);
      FUN_044af554(lVar7,uVar8,
                   *(undefined8 *)UnityEngine_UIElements_ObjectPool<List<VisualElement>>_TypeInfo,0)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc0);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 200);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuntimeType>_TypeInfo);
      FUN_044afb90(lVar7,uVar8,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>_TypeInfo,0
                  );
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 200);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderTexture>_TypeInfo);
      FUN_044af694(lVar7,uVar8,
                   *(undefined8 *)UnityEngine_UIElements_ObjectPool<PropagationPaths>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd0);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RaycastResult>_TypeInfo);
      FUN_044afcd0(lVar7,uVar8,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd8);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ShadowCaster2D>_TypeInfo);
      FUN_044af7d4(lVar7,uVar8,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe0);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb5ad8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MaterialPropertyBlock>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StringBuilder>_TypeInfo);
      FUN_044afa50(lVar7,uVar8,
                   *(undefined8 *)UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo,
                   0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe8);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb6140(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MarkToBaseAdjustmentRecord>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Player>_TypeInfo);
      FUN_044af284(lVar7,uVar8,
                   *(undefined8 *)UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf0);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb4e08(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo);
      FUN_044af414(lVar7,uVar8,
                   *(undefined8 *)
                    Unity_Netcode_NetworkVariable_OnValueChangedDelegate<FixedString128Bytes>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf8);
      *plVar6 = lVar7;
      thunk_FUN_037aeb94(plVar6,lVar7);
    }
    FUN_03eb513c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVROverlay>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x100);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Playable>_TypeInfo);
      FUN_044b6b94(lVar7,uVar8,
                   *(undefined8 *)Unity_Netcode_NetworkVariable_OnValueChangedDelegate<int>_TypeInfo
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x100) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x100,lVar7);
    }
    FUN_03ee7050(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRSpaceUser>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x108);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectMask2D>_TypeInfo
                                );
      FUN_044b7360(lVar7,uVar8,
                   *(undefined8 *)
                    Unity_Netcode_NetworkVariable_OnValueChangedDelegate<ulong>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x108) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x108,lVar7);
    }
    FUN_03ee8388(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRScenePlane>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x110);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pose>_TypeInfo);
      FUN_044b6fa4(lVar7,uVar8,
                   *(undefined8 *)
                    Unity_Netcode_NetworkVariable_OnValueChangedDelegate<EnemyEquipmentRandomizer_Equipment>_TypeInfo
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x110) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x110,lVar7);
    }
    FUN_03ee79ec(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<object>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x118);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectInt>_TypeInfo);
      FUN_044b75e0(lVar7,uVar8,
                   *(undefined8 *)
                    Microsoft_MixedReality_OpenXR_OpenXRFeaturePlugin<AppRemotingPlugin>_TypeInfo,0)
      ;
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x118) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x118,lVar7);
    }
    FUN_03ee89f0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRScenePrefabOverride>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x120);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<float>_TypeInfo);
      FUN_044b70e4(lVar7,uVar8,
                   *(undefined8 *)
                    Microsoft_MixedReality_OpenXR_OpenXRFeaturePlugin<HandTrackingFeaturePlugin>_TypeInfo
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x120) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x120,lVar7);
    }
    FUN_03ee7d20(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Object>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x128);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RegexOptions>_TypeInfo);
      FUN_044b7720(lVar7,uVar8,
                   *(undefined8 *)
                    Microsoft_MixedReality_OpenXR_OpenXRFeaturePlugin<MixedRealityFeaturePlugin>_TypeInfo
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x128) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x128,lVar7);
    }
    FUN_03ee8d24(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRSceneRoom>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x130);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RadioButton>_TypeInfo);
      FUN_044b7224(lVar7,uVar8,
                   *(undefined8 *)
                    Microsoft_MixedReality_OpenXR_OpenXRFeaturePlugin<MotionControllerFeaturePlugin>_TypeInfo
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x130) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x130,lVar7);
    }
    FUN_03ee8054(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ObjectId>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x138);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StageController>_TypeInfo);
      FUN_044b7860(lVar7,uVar8,
                   *(undefined8 *)
                    Microsoft_MixedReality_OpenXR_OpenXRFeaturePlugin<PlayModeRemotingPlugin>_TypeInfo
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x138) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x138,lVar7);
    }
    FUN_03ee9058(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRSpatialAnchor>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x140);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo);
      FUN_044b74a0(lVar7,uVar8,
                   *(undefined8 *)UnityEngine_UIElements_UIR_TempAllocator_Page<ushort>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x140) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x140,lVar7);
    }
    FUN_03ee86bc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVROverlayCanvas>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x148);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo
                                );
      FUN_044b6cd4(lVar7,uVar8,
                   *(undefined8 *)
                    Unity_Netcode_NetworkMessageManager_PointerListWrapper<ulong>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x148) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x148,lVar7);
    }
    FUN_03ee7384(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRSceneAnchor>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x150);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayableBinding>_TypeInfo);
      FUN_044b6e64(lVar7,uVar8,*(undefined8 *)UnityEngine_UIElements_PopupField<string>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x150) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x150,lVar7);
    }
    FUN_03ee76b8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Mesh>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x158);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Selectable>_TypeInfo
                                );
      FUN_044afe10(lVar7,uVar8,*(undefined8 *)System_Predicate<ValueTuple<string,_Type>>_TypeInfo,0)
      ;
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x158) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x158,lVar7);
    }
    FUN_03eb6adc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MethodBase>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x160);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo
                                );
      FUN_044b09b4(lVar7,uVar8,*(undefined8 *)System_Predicate<BaseInvokableCall>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x160) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x160,lVar7);
    }
    FUN_03eb7e14(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MeshInfo>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x168);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RendererListHandle>_TypeInfo);
      FUN_044b0220(lVar7,uVar8,*(undefined8 *)System_Predicate<Camera>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x168) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x168,lVar7);
    }
    FUN_03eb7478(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Missile>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x170);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireDust>_TypeInfo);
      FUN_044b0c34(lVar7,uVar8,*(undefined8 *)System_Predicate<ClientId>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x170) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x170,lVar7);
    }
    FUN_03eb847c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MeshRenderer>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x178);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScheduledItem>_TypeInfo);
      FUN_044b04b8(lVar7,uVar8,*(undefined8 *)System_Predicate<CodecChannelCount>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x178) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x178,lVar7);
    }
    FUN_03eb77ac(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MockTouch>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x180);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Player>_TypeInfo);
      FUN_044b0d74(lVar7,uVar8,*(undefined8 *)System_Predicate<Collider>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x180) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x180,lVar7);
    }
    FUN_03eb87b0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MeshWriteData>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x188);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Platform>_TypeInfo);
      FUN_044b05f4(lVar7,uVar8,*(undefined8 *)System_Predicate<Column>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x188) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x188,lVar7);
    }
    FUN_03eb7ae0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MethodInfo>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 400);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PolyNode>_TypeInfo);
      FUN_044b0af4(lVar7,uVar8,*(undefined8 *)System_Predicate<Component>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 400) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 400,lVar7);
    }
    FUN_03eb8148(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MeshFilter>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x198);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RFDictionary>_TypeInfo);
      FUN_044aff50(lVar7,uVar8,*(undefined8 *)System_Predicate<DropdownMenuItem>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x198) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x198,lVar7);
    }
    FUN_03eb6e10(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<MeshGenerationNodeImpl>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1a0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableObject>_TypeInfo);
      FUN_044b00e0(lVar7,uVar8,*(undefined8 *)System_Predicate<Enemy>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1a0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1a0,lVar7);
    }
    FUN_03eb7144(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OccluderContext>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1a8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StudioListener>_TypeInfo);
      FUN_044b799c(lVar7,uVar8,*(undefined8 *)System_Predicate<Face>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1a8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1a8,lVar7);
    }
    FUN_03ee938c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<PanelRaycaster>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RendererList>_TypeInfo);
      FUN_044b8164(lVar7,uVar8,*(undefined8 *)System_Predicate<GameObject>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1b0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1b0,lVar7);
    }
    FUN_03eea6c4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OpenXRFeature>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Quaternion>_TypeInfo
                                );
      FUN_044b7dac(lVar7,uVar8,*(undefined8 *)System_Predicate<InputBinding>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1b8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1b8,lVar7);
    }
    FUN_03ee9d28(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParamRef>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1c0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFFace>_TypeInfo);
      FUN_044b83e4(lVar7,uVar8,*(undefined8 *)System_Predicate<InputControlScheme>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1c0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1c0,lVar7);
    }
    FUN_03eead2c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OutRec>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1c8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
      FUN_044b7eec(lVar7,uVar8,*(undefined8 *)System_Predicate<int>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1c8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1c8,lVar7);
    }
    FUN_03eea05c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParameterAutomationLink>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1d0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
      FUN_044b8524(lVar7,uVar8,*(undefined8 *)System_Predicate<JobTask>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1d0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1d0,lVar7);
    }
    FUN_03eeb060(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Panel>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1d8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProBuilderMesh>_TypeInfo);
      FUN_044b8028(lVar7,uVar8,*(undefined8 *)System_Predicate<KerningPair>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1d8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1d8,lVar7);
    }
    FUN_03eea390(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParameterExpression>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1e0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireDebris>_TypeInfo);
      FUN_044b8660(lVar7,uVar8,*(undefined8 *)System_Predicate<LogEntry>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1e0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1e0,lVar7);
    }
    FUN_03eeb394(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<PanelSettings>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1e8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PhysicsShape2D>_TypeInfo);
      FUN_044b82a4(lVar7,uVar8,*(undefined8 *)System_Predicate<NameValueHeaderValue>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1e8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1e8,lVar7);
    }
    FUN_03eea9f8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OccluderSubviewUpdate>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1f0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializationCallback>_TypeInfo);
      FUN_044b7adc(lVar7,uVar8,*(undefined8 *)System_Predicate<NavMeshBuildSource>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1f0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1f0,lVar7);
    }
    FUN_03ee96c0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Oid>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1f8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ReusableCollectionItem>_TypeInfo);
      FUN_044b7c6c(lVar7,uVar8,*(undefined8 *)System_Predicate<NavMeshModifier>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1f8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x1f8,lVar7);
    }
    FUN_03ee99f4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ModifierSpec>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x200);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PositionType>_TypeInfo);
      FUN_044b12ec(lVar7,uVar8,*(undefined8 *)System_Predicate<NavMeshModifier>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x200) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x200,lVar7);
    }
    FUN_03eb8ae4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshBuildSource>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x208);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
      FUN_044b1aa8(lVar7,uVar8,*(undefined8 *)System_Predicate<NavMeshModifierVolume>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x208) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x208,lVar7);
    }
    FUN_03eb9e1c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NameValueHeaderValue>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x210);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ShaderTagId>_TypeInfo);
      FUN_044b16f4(lVar7,uVar8,*(undefined8 *)System_Predicate<NavMeshModifierVolume>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x210) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x210,lVar7);
    }
    FUN_03eb9480(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshLink>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x218);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFShard>_TypeInfo);
      FUN_044b1d20(lVar7,uVar8,*(undefined8 *)System_Predicate<NetworkObject>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x218) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x218,lVar7);
    }
    FUN_03eba484(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NativePassData>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x220);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderGraph>_TypeInfo);
      FUN_044b1830(lVar7,uVar8,*(undefined8 *)System_Predicate<OVRSpaceUser>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x220) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x220,lVar7);
    }
    FUN_03eb97b4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshModifier>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x228);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
      FUN_044b1e5c(lVar7,uVar8,*(undefined8 *)System_Predicate<object>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x228) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x228,lVar7);
    }
    FUN_03eba7b8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshBuildMarkup>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x230);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rect>_TypeInfo);
      FUN_044b196c(lVar7,uVar8,*(undefined8 *)System_Predicate<ParamRef>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x230) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x230,lVar7);
    }
    FUN_03eb9ae8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NavMeshLink>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x238);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StudioEventEmitter>_TypeInfo);
      FUN_044b1be4(lVar7,uVar8,*(undefined8 *)System_Predicate<RFCluster>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x238) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x238,lVar7);
    }
    FUN_03eba150(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Module>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x240);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFTriangle>_TypeInfo
                                );
      FUN_044b1428(lVar7,uVar8,*(undefined8 *)System_Predicate<RFShard>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x240) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x240,lVar7);
    }
    FUN_03eb8e18(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NameAndParameters>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x248);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProbeVolumePerSceneData>_TypeInfo)
      ;
      FUN_044b15b8(lVar7,uVar8,*(undefined8 *)System_Predicate<ReferenceSet>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x248) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x248,lVar7);
    }
    FUN_03eb914c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParsedAssemblyQualifiedName>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x250);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializedCommand>_TypeInfo);
      FUN_044b879c(lVar7,uVar8,*(undefined8 *)System_Predicate<Renderer>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x250) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x250,lVar7);
    }
    FUN_03eeb6c8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<PathFilter>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 600);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
      FUN_044b91bc(lVar7,uVar8,*(undefined8 *)System_Predicate<SceneOverride>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 600) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 600,lVar7);
    }
    FUN_03eecd34(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<PathModeObject>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x260);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteGlyph>_TypeInfo);
      FUN_044b92f8(lVar7,uVar8,*(undefined8 *)System_Predicate<ScriptableObject>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x260) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x260,lVar7);
    }
    FUN_03eed068(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<PathModeObject>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x268);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
      FUN_044b9434(lVar7,uVar8,*(undefined8 *)System_Predicate<ScriptableRenderPass>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x268) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x268,lVar7);
    }
    FUN_03eed39c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParticleSystemRenderer>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x270);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyMetadata>_TypeInfo);
      FUN_044b9080(lVar7,uVar8,*(undefined8 *)System_Predicate<ShaderTextureProperty>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x270) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x270,lVar7);
    }
    FUN_03eeca00(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParticleCollisionEvent>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x278);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo
                                );
      FUN_044b88d8(lVar7,uVar8,*(undefined8 *)System_Predicate<StageController>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x278) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x278,lVar7);
    }
    FUN_03eeb9fc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<ParticleSystem>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x280);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RFPoolingEmitter>_TypeInfo);
      FUN_044b8a68(lVar7,uVar8,*(undefined8 *)System_Predicate<string>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x280) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x280,lVar7);
    }
    FUN_03eebd30(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkObject>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x288);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyPath>_TypeInfo);
      FUN_044b53c8(lVar7,uVar8,*(undefined8 *)System_Predicate<Tab>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x288) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x288,lVar7);
    }
    FUN_03ee5048(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkVariableBase>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x290);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SeverityEntry>_TypeInfo);
      FUN_044b5a04(lVar7,uVar8,*(undefined8 *)System_Predicate<Task>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x290) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x290,lVar7);
    }
    FUN_03ee604c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkPrefabsList>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x298);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteRenderer>_TypeInfo);
      FUN_044b5648(lVar7,uVar8,*(undefined8 *)System_Predicate<Terrain>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x298) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x298,lVar7);
    }
    FUN_03ee56b0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OTL_FeatureTag>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2a0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<string>_TypeInfo);
      FUN_044b5f30(lVar7,uVar8,*(undefined8 *)System_Predicate<TextSpan>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2a0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2a0,lVar7);
    }
    FUN_03ee66b4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkRigidbodyBase>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2a8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SdkAccount>_TypeInfo
                                );
      FUN_044b5788(lVar7,uVar8,*(undefined8 *)System_Predicate<Toggle>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2a8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2a8,lVar7);
    }
    FUN_03ee59e4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRBone>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2b0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFCluster>_TypeInfo)
      ;
      FUN_044b6070(lVar7,uVar8,*(undefined8 *)System_Predicate<TransferCodingHeaderValue>_TypeInfo,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2b0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2b0,lVar7);
    }
    FUN_03ee69e8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkTransform>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2b8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PathPoint>_TypeInfo)
      ;
      FUN_044b58c8(lVar7,uVar8,*(undefined8 *)System_Predicate<Transform>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2b8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2b8,lVar7);
    }
    FUN_03ee5d18(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OVRBoneCapsule>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2c0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RegexNode>_TypeInfo)
      ;
      FUN_044b61b0(lVar7,uVar8,*(undefined8 *)System_Predicate<Type>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2c0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2c0,lVar7);
    }
    FUN_03ee6d1c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<OTL_FeatureTag>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2c8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo
                                );
      FUN_044b5c9c(lVar7,uVar8,*(undefined8 *)System_Predicate<VisualElement>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2c8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2c8,lVar7);
    }
    FUN_03ee6380(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<NetworkPrefab>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2d0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteCharacter>_TypeInfo);
      FUN_044b5508(lVar7,uVar8,*(undefined8 *)System_Predicate<Volume>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2d0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2d0,lVar7);
    }
    FUN_03ee537c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LedCommand>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2d8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SkinnedMeshRenderer>_TypeInfo);
      FUN_044ad3dc(lVar7,uVar8,*(undefined8 *)System_Predicate<VolumeProfile>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2d8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2d8,lVar7);
    }
    FUN_03eb0df8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<Light2D>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2e0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SkinSettings>_TypeInfo);
      FUN_044adba4(lVar7,uVar8,*(undefined8 *)System_Predicate<CarTraffic_SpawnedCar>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2e0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2e0,lVar7);
    }
    FUN_03eb1dfc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LevelSettingsSO>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2e8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RegexFC>_TypeInfo);
      FUN_044ad6f4(lVar7,uVar8,*(undefined8 *)System_Predicate<DebugUI_Panel>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2e8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2e8,lVar7);
    }
    FUN_03eb1460(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LinkedAccount>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2f0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyInfo>_TypeInfo);
      FUN_044add34(lVar7,uVar8,*(undefined8 *)System_Predicate<DebugUI_ValueTuple>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2f0) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2f0,lVar7);
    }
    FUN_03eb2130(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LigatureSubstitutionRecord>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2f8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayableDirector>_TypeInfo);
      FUN_044ad884(lVar7,uVar8,
                   *(undefined8 *)System_Predicate<DeviceConfigManager_DeviceConfig>_TypeInfo,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x2f8) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x2f8,lVar7);
    }
    FUN_03eb1794(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = System_Collections_Generic_List<LocalDataStore>_TypeInfo;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x300);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableRendererFeature>_TypeInfo
                                );
      FUN_044adec4(lVar7,uVar8,*(undefined8 *)System_Predicate<EventProvider_Registration>_TypeInfo,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x300) = lVar7;
      thunk_FUN_037aeb94(lVar5 + 0x300,lVar7);
    }
    FUN_03eb2464(param_1,lVar7,0,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_078da004();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


