/*
FUNCTION_NAME: FUN_072586ec
ENTRY_POINT: 072586ec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 244
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_17;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_16;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_072586ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo;
  puVar4 = System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo;
  puVar3 = System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo;
  puVar2 = PTR_DAT_07dc6350;
  puVar1 = PTR_DAT_07d86598;
  if ((DAT_082688c0 & 1) == 0) {
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
    FUN_0373b518(System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo)
    ;
    FUN_0373b518(System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo)
    ;
    FUN_0373b518(System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Painter2D_Painter2DJobData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<PhysicalMaterialHitHandler_ObjectMaterialPair>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<RFMesh_RFSubMeshTris>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RayfireBomb_Projectile>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RegexCharClass_SingleRange>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RichTextTagParser_Segment>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RichTextTagParser_Tag>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RuntimeManager_AttachedInstance>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<Settings_PlatformTemplate>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<ShadowShape2DProvider_Collider2D_MinMaxBounds>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<StencilMaterial_MatEntry>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<StrikerProfiler_StrikerProfilerEntry>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<StringHelper_ThreadSafeEncoding>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TMP_Dropdown_DropdownItem>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TMP_Dropdown_OptionData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TMP_MaterialManager_FallbackMaterial>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TeamSpeakClient_TeamSpeakError>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TeamSpeakClient_TeamSpeakSoundDevice>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TextSettings_FontReferenceMap>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TextureRegistry_TextureInfo>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<TimeNotificationBehaviour_NotificationEntry>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<TruckBoss_AttackType>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<UIRenderDevice_AllocToFree>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<UITKTextJobSystem_ManagedJobData>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<UnityHapticSample_SerializableHapticSample>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<UnityHapticSample_UnityPrimitiveData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<VFXHierarchyAttributeMapBinder_Bone>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<VisualEffectControlClip_ClipEvent>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<VisualEffectControlTrackController_Clip>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<VisualEffectControlTrackController_Event>_TypeInfo)
    ;
    FUN_0373b518(System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<VisualTreeAsset_SlotDefinition>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<VisualTreeAsset_UsingEntry>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<VisualTreeDataBindingsUpdater_VersionInfo>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<XRDebugLineVisualizer_DebugLine>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<XRDeviceSimulator_SimulatedHandExpression>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<XRRayInteractor_SamplePoint>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<XRUIInputModule_RegisteredInteractor>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<XRUIInputModule_RegisteredTouch>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<fsAotCompilationManager_AotCompilation>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_List<DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<DebugUI_Foldout_ContextMenuItem>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<InstructionList_DebugView_InstructionView>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<MB3_MeshBakerRoot_ZSortObjects_Item>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_List<RenderChain_VisualChangesProcessor_EntryProcessingInfo>_TypeInfo
                );
    FUN_0373b518(System_Collections_Generic_List<RenderGraph_DebugData_PassData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<TargetPositionCache_CacheCurve_Item>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<TargetPositionCache_CacheEntry_RecordingItem>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_List<RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_AttachmentInfo>_TypeInfo
                );
    FUN_0373b518(System_Data_Listeners<DataViewListener>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_LowLevelDictionary<int,_Task>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_LowLevelListWithIList<Exception>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_LowLevelListWithIList<object>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_LowLevelListWithIList<Task>_TypeInfo);
    FUN_0373b518(
                UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>_TypeInfo
                );
    FUN_0373b518(UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_TypeInfo);
    FUN_0373b518(System_Buffers_MemoryPool<IntPtr>_TypeInfo);
    FUN_0373b518(Oculus_Platform_Message<bool>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message<AchievementDefinitionList>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message<AchievementProgressList>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message<AchievementUpdate>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message<ApplicationInviteList>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message<ApplicationVersion>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message<AsrResult>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message<AssetDetailsList>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message<AssetFileDeleteForSafety>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07d86598);
    FUN_0373b518(PTR_DAT_07dc6350);
    DAT_082688c0 = 1;
  }
  FUN_07251c3c(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar4,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar6 = *(long *)puVar5;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ResourceHandle>_TypeInfo);
    FUN_044ac128(lVar8,uVar9,
                 *(undefined8 *)
                  System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo,0)
    ;
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar7 = lVar8;
    thunk_FUN_037aeb94(plVar7,lVar8);
  }
  if (param_1 != 0) {
    FUN_03eaeabc(param_1,lVar8,0,
                 *(undefined8 *)System_Collections_Generic_List<KerningPair>_TypeInfo);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Leaderboard>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<StackFrame>_TypeInfo
                                );
      FUN_044ac8f4(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_List<RFMesh_RFSubMeshTris>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eafdf4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LayoutObject>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Polygon>_TypeInfo);
      FUN_044ac538(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_TypeInfo,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    Unity_Netcode_FastBufferWriter__WriteNetworkSerializable<NetworkDeltaPosition>
              (param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LeaderboardEntry>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFJoint>_TypeInfo);
      FUN_044acb74(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb045c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LayoutObject>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Product>_TypeInfo);
      FUN_044ac678(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<UnityHapticSample_UnityPrimitiveData>_TypeInfo,0
                  );
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eaf78c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LeaderboardsBoxColumn>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo
                                );
      FUN_044accb4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualTreeDataBindingsUpdater_VersionInfo>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb0790(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LeaderBoardTableSteam>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProcessPort>_TypeInfo);
      FUN_044ac7b8(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eafac0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LeaderboardsBoxLine>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RegisterRequest>_TypeInfo);
      FUN_044acdf4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb0ac4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LeaderboardEntries>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerScoreData>_TypeInfo);
      FUN_044aca34(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb0128(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LabelScopeInfo>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireRigid>_TypeInfo);
      FUN_044ac268(lVar8,uVar9,
                   *(undefined8 *)Pico_Platform_Message<AssetFileDeleteForSafety>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eaedf0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LayoutManager>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PxrQueriedSpatialEntityInfo>_TypeInfo
                                );
      FUN_044ac3f8(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<Painter2D_Painter2DJobData>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eaf124(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NavMeshModifier>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuleMatcher>_TypeInfo);
      FUN_044b4580(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x60);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03ebaaec(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x68);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Scene>_TypeInfo);
      FUN_044b4d4c(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<PhysicalMaterialHitHandler_ObjectMaterialPair>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x68);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03ebbe24(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NavMeshSurface>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x70);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Renderer>_TypeInfo);
      FUN_044b4990(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03ebb488(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetworkClient>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x78);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<Rigidbody2D>_TypeInfo);
      FUN_044b4fcc(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x78);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03ee49e0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NavMeshSurface>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x80);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFCache>_TypeInfo);
      FUN_044b4ad0(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    Unity_Collections_FixedList__Capacity<FixedBytes4096Align8,_byte>
              (param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetworkDelivery>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x88);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerSetupInfo>_TypeInfo);
      FUN_044b510c(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x88);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03ee4d14(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetSyncSession>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x90);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
      FUN_044b4c10(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x90);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03ebbaf0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetworkBehaviour>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x98);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuntimeElement>_TypeInfo);
      FUN_044b4e8c(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x98);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03ee46ac(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NavMeshModifierVolume>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SkinSettingsDual>_TypeInfo);
      FUN_044b46c0(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa0);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03ebae20(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NavMeshModifierVolume>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SteamAudioDynamicObject>_TypeInfo)
      ;
      FUN_044b4850(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_List<RayfireBomb_Projectile>_TypeInfo,0
                  );
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa8);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03ebb154(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MarkToBaseAdjustmentRecord>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pid>_TypeInfo);
      FUN_044af144(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<RegexCharClass_SingleRange>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb0);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb4ad4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Material>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerLoopSystemInternal>_TypeInfo
                                );
      FUN_044af910(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<RichTextTagParser_Segment>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb8);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb5e0c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xc0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SignalAsset>_TypeInfo);
      FUN_044af554(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_List<RichTextTagParser_Tag>_TypeInfo,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc0);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb5470(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Matrix4x4>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 200);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RuntimeType>_TypeInfo);
      FUN_044afb90(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<RuntimeManager_AttachedInstance>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 200);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb6474(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MatAndTransformToMerged>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xd0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderTexture>_TypeInfo);
      FUN_044af694(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<Settings_PlatformTemplate>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xd0);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb57a4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MemberInfo>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xd8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RaycastResult>_TypeInfo);
      FUN_044afcd0(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<ShadowShape2DProvider_Collider2D_MinMaxBounds>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xd8);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb67a8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Match>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ShadowCaster2D>_TypeInfo);
      FUN_044af7d4(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_List<StencilMaterial_MatEntry>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xe0);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb5ad8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MaterialPropertyBlock>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StringBuilder>_TypeInfo);
      FUN_044afa50(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<StrikerProfiler_StrikerProfilerEntry>_TypeInfo,0
                  );
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xe8);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb6140(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MarkToBaseAdjustmentRecord>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xf0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Player>_TypeInfo);
      FUN_044af284(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<StringHelper_ThreadSafeEncoding>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xf0);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb4e08(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xf8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo);
      FUN_044af414(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TMP_Dropdown_DropdownItem>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xf8);
      *plVar7 = lVar8;
      thunk_FUN_037aeb94(plVar7,lVar8);
    }
    FUN_03eb513c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OVROverlay>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x100);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Playable>_TypeInfo);
      FUN_044b6b94(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_List<TMP_Dropdown_OptionData>_TypeInfo,
                   0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x100) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x100,lVar8);
    }
    FUN_03ee7050(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OVRSpaceUser>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x108);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectMask2D>_TypeInfo
                                );
      FUN_044b7360(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TMP_MaterialManager_FallbackMaterial>_TypeInfo,0
                  );
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x108) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x108,lVar8);
    }
    FUN_03ee8388(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OVRScenePlane>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x110);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pose>_TypeInfo);
      FUN_044b6fa4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x110) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x110,lVar8);
    }
    FUN_03ee79ec(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<object>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x118);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectInt>_TypeInfo);
      FUN_044b75e0(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TeamSpeakClient_TeamSpeakError>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x118) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x118,lVar8);
    }
    FUN_03ee89f0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OVRScenePrefabOverride>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x120);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<float>_TypeInfo);
      FUN_044b70e4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TeamSpeakClient_TeamSpeakSoundDevice>_TypeInfo,0
                  );
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x120) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x120,lVar8);
    }
    FUN_03ee7d20(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Object>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x128);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RegexOptions>_TypeInfo);
      FUN_044b7720(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TextSettings_FontReferenceMap>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x128) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x128,lVar8);
    }
    FUN_03ee8d24(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OVRSceneRoom>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x130);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RadioButton>_TypeInfo);
      FUN_044b7224(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo,
                   0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x130) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x130,lVar8);
    }
    FUN_03ee8054(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ObjectId>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x138);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StageController>_TypeInfo);
      FUN_044b7860(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TextureRegistry_TextureInfo>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x138) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x138,lVar8);
    }
    FUN_03ee9058(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OVRSpatialAnchor>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x140);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo);
      FUN_044b74a0(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TimeNotificationBehaviour_NotificationEntry>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x140) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x140,lVar8);
    }
    FUN_03ee86bc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OVROverlayCanvas>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x148);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PathModeObjectCollection>_TypeInfo
                                );
      FUN_044b6cd4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x148) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x148,lVar8);
    }
    FUN_03ee7384(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OVRSceneAnchor>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x150);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayableBinding>_TypeInfo);
      FUN_044b6e64(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo,
                   0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x150) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x150,lVar8);
    }
    FUN_03ee76b8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Mesh>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x158);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Selectable>_TypeInfo
                                );
      FUN_044afe10(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x158) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x158,lVar8);
    }
    FUN_03eb6adc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MethodBase>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x160);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo
                                );
      FUN_044b09b4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x160) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x160,lVar8);
    }
    FUN_03eb7e14(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MeshInfo>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x168);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RendererListHandle>_TypeInfo);
      FUN_044b0220(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_List<TruckBoss_AttackType>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x168) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x168,lVar8);
    }
    FUN_03eb7478(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Missile>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x170);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireDust>_TypeInfo);
      FUN_044b0c34(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x170) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x170,lVar8);
    }
    FUN_03eb847c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MeshRenderer>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x178);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScheduledItem>_TypeInfo);
      FUN_044b04b8(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<UIRenderDevice_AllocToFree>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x178) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x178,lVar8);
    }
    FUN_03eb77ac(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MockTouch>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x180);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Player>_TypeInfo);
      FUN_044b0d74(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x180) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x180,lVar8);
    }
    FUN_03eb87b0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MeshWriteData>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x188);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Platform>_TypeInfo);
      FUN_044b05f4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<UITKTextJobSystem_ManagedJobData>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x188) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x188,lVar8);
    }
    FUN_03eb7ae0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MethodInfo>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 400);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PolyNode>_TypeInfo);
      FUN_044b0af4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<UnityHapticSample_SerializableHapticSample>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 400) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 400,lVar8);
    }
    FUN_03eb8148(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MeshFilter>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x198);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RFDictionary>_TypeInfo);
      FUN_044aff50(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x198) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x198,lVar8);
    }
    FUN_03eb6e10(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<MeshGenerationNodeImpl>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1a0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableObject>_TypeInfo);
      FUN_044b00e0(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<VFXHierarchyAttributeMapBinder_Bone>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1a0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1a0,lVar8);
    }
    FUN_03eb7144(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OccluderContext>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1a8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StudioListener>_TypeInfo);
      FUN_044b799c(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualEffectControlClip_ClipEvent>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1a8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1a8,lVar8);
    }
    FUN_03ee938c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<PanelRaycaster>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1b0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RendererList>_TypeInfo);
      FUN_044b8164(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualEffectControlTrackController_Clip>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1b0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1b0,lVar8);
    }
    FUN_03eea6c4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OpenXRFeature>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1b8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Quaternion>_TypeInfo
                                );
      FUN_044b7dac(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualEffectControlTrackController_Event>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1b8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1b8,lVar8);
    }
    FUN_03ee9d28(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ParamRef>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1c0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFFace>_TypeInfo);
      FUN_044b83e4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1c0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1c0,lVar8);
    }
    FUN_03eead2c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OutRec>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1c8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
      FUN_044b7eec(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualTreeAsset_AssetEntry>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1c8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1c8,lVar8);
    }
    FUN_03eea05c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ParameterAutomationLink>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1d0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
      FUN_044b8524(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualTreeAsset_SlotDefinition>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1d0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1d0,lVar8);
    }
    FUN_03eeb060(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Panel>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1d8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProBuilderMesh>_TypeInfo);
      FUN_044b8028(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualTreeAsset_UsingEntry>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1d8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1d8,lVar8);
    }
    FUN_03eea390(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ParameterExpression>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1e0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RayfireDebris>_TypeInfo);
      FUN_044b8660(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1e0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1e0,lVar8);
    }
    FUN_03eeb394(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<PanelSettings>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1e8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PhysicsShape2D>_TypeInfo);
      FUN_044b82a4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRDebugLineVisualizer_DebugLine>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1e8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1e8,lVar8);
    }
    FUN_03eea9f8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OccluderSubviewUpdate>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1f0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializationCallback>_TypeInfo);
      FUN_044b7adc(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRDeviceSimulator_SimulatedHandExpression>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1f0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1f0,lVar8);
    }
    FUN_03ee96c0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Oid>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1f8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ReusableCollectionItem>_TypeInfo);
      FUN_044b7c6c(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1f8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x1f8,lVar8);
    }
    FUN_03ee99f4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ModifierSpec>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x200);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PositionType>_TypeInfo);
      FUN_044b12ec(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x200) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x200,lVar8);
    }
    FUN_03eb8ae4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NavMeshBuildSource>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x208);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
      FUN_044b1aa8(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x208) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x208,lVar8);
    }
    FUN_03eb9e1c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NameValueHeaderValue>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x210);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ShaderTagId>_TypeInfo);
      FUN_044b16f4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRRayInteractor_SamplePoint>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x210) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x210,lVar8);
    }
    FUN_03eb9480(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NavMeshLink>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x218);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFShard>_TypeInfo);
      FUN_044b1d20(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRUIInputModule_RegisteredInteractor>_TypeInfo,0
                  );
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x218) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x218,lVar8);
    }
    FUN_03eba484(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NativePassData>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x220);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderGraph>_TypeInfo);
      FUN_044b1830(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<XRUIInputModule_RegisteredTouch>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x220) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x220,lVar8);
    }
    FUN_03eb97b4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NavMeshModifier>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x228);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
      FUN_044b1e5c(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x228) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x228,lVar8);
    }
    FUN_03eba7b8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NavMeshBuildMarkup>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x230);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rect>_TypeInfo);
      FUN_044b196c(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<fsAotCompilationManager_AotCompilation>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x230) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x230,lVar8);
    }
    FUN_03eb9ae8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NavMeshLink>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x238);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<StudioEventEmitter>_TypeInfo);
      FUN_044b1be4(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x238) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x238,lVar8);
    }
    FUN_03eba150(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Module>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x240);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFTriangle>_TypeInfo
                                );
      FUN_044b1428(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x240) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x240,lVar8);
    }
    FUN_03eb8e18(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NameAndParameters>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x248);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProbeVolumePerSceneData>_TypeInfo)
      ;
      FUN_044b15b8(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<DebugUI_Foldout_ContextMenuItem>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x248) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x248,lVar8);
    }
    FUN_03eb914c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ParsedAssemblyQualifiedName>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x250);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializedCommand>_TypeInfo);
      FUN_044b879c(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x250) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x250,lVar8);
    }
    FUN_03eeb6c8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<PathFilter>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 600);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
      FUN_044b91bc(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<InstructionList_DebugView_InstructionView>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 600) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 600,lVar8);
    }
    FUN_03eecd34(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<PathModeObject>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x260);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteGlyph>_TypeInfo);
      FUN_044b92f8(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<MB3_MeshBakerRoot_ZSortObjects_Item>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x260) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x260,lVar8);
    }
    FUN_03eed068(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<PathModeObject>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x268);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
      FUN_044b9434(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x268) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x268,lVar8);
    }
    FUN_03eed39c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ParticleSystemRenderer>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x270);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyMetadata>_TypeInfo);
      FUN_044b9080(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x270) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x270,lVar8);
    }
    FUN_03eeca00(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ParticleCollisionEvent>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x278);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo
                                );
      FUN_044b88d8(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<RenderChain_VisualChangesProcessor_EntryProcessingInfo>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x278) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x278,lVar8);
    }
    FUN_03eeb9fc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ParticleSystem>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x280);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RFPoolingEmitter>_TypeInfo);
      FUN_044b8a68(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<RenderGraph_DebugData_PassData>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x280) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x280,lVar8);
    }
    FUN_03eebd30(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetworkObject>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x288);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyPath>_TypeInfo);
      FUN_044b53c8(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TargetPositionCache_CacheCurve_Item>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x288) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x288,lVar8);
    }
    FUN_03ee5048(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetworkVariableBase>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x290);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SeverityEntry>_TypeInfo);
      FUN_044b5a04(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<TargetPositionCache_CacheEntry_RecordingItem>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x290) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x290,lVar8);
    }
    FUN_03ee604c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetworkPrefabsList>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x298);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteRenderer>_TypeInfo);
      FUN_044b5648(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_AttachmentInfo>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x298) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x298,lVar8);
    }
    FUN_03ee56b0(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OTL_FeatureTag>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2a0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<string>_TypeInfo);
      FUN_044b5f30(lVar8,uVar9,*(undefined8 *)System_Data_Listeners<DataViewListener>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2a0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2a0,lVar8);
    }
    FUN_03ee66b4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetworkRigidbodyBase>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2a8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SdkAccount>_TypeInfo
                                );
      FUN_044b5788(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_LowLevelDictionary<int,_Task>_TypeInfo,
                   0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2a8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2a8,lVar8);
    }
    FUN_03ee59e4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OVRBone>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2b0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFCluster>_TypeInfo)
      ;
      FUN_044b6070(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_LowLevelListWithIList<Exception>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2b0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2b0,lVar8);
    }
    FUN_03ee69e8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetworkTransform>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2b8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PathPoint>_TypeInfo)
      ;
      FUN_044b58c8(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2b8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2b8,lVar8);
    }
    FUN_03ee5d18(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OVRBoneCapsule>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2c0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RegexNode>_TypeInfo)
      ;
      FUN_044b61b0(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_LowLevelListWithIList<object>_TypeInfo,
                   0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2c0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2c0,lVar8);
    }
    FUN_03ee6d1c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<OTL_FeatureTag>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2c8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo
                                );
      FUN_044b5c9c(lVar8,uVar9,
                   *(undefined8 *)System_Collections_Generic_LowLevelListWithIList<Task>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2c8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2c8,lVar8);
    }
    FUN_03ee6380(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<NetworkPrefab>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2d0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SpriteCharacter>_TypeInfo);
      FUN_044b5508(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_UIElements_Layout_ManagedObjectStore<WeakReference<VisualElement>>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2d0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2d0,lVar8);
    }
    FUN_03ee537c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LedCommand>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2d8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SkinnedMeshRenderer>_TypeInfo);
      FUN_044ad3dc(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2d8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2d8,lVar8);
    }
    FUN_03eb0df8(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Light2D>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2e0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<SkinSettings>_TypeInfo);
      FUN_044adba4(lVar8,uVar9,*(undefined8 *)System_Buffers_MemoryPool<IntPtr>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2e0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2e0,lVar8);
    }
    FUN_03eb1dfc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LevelSettingsSO>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2e8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RegexFC>_TypeInfo);
      FUN_044ad6f4(lVar8,uVar9,*(undefined8 *)Oculus_Platform_Message<bool>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2e8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2e8,lVar8);
    }
    FUN_03eb1460(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LinkedAccount>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2f0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PropertyInfo>_TypeInfo);
      FUN_044add34(lVar8,uVar9,
                   *(undefined8 *)Pico_Platform_Message<AchievementDefinitionList>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2f0) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2f0,lVar8);
    }
    FUN_03eb2130(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LigatureSubstitutionRecord>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2f8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<PlayableDirector>_TypeInfo);
      FUN_044ad884(lVar8,uVar9,
                   *(undefined8 *)Pico_Platform_Message<AchievementProgressList>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2f8) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x2f8,lVar8);
    }
    FUN_03eb1794(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LocalDataStore>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x300);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<ScriptableRendererFeature>_TypeInfo
                                );
      FUN_044adec4(lVar8,uVar9,*(undefined8 *)Pico_Platform_Message<AchievementUpdate>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x300) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x300,lVar8);
    }
    FUN_03eb2464(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<LigatureSubstitutionRecord>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x308);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  System_Collections_Generic_List<RangePositionInfo>_TypeInfo);
      FUN_044ada14(lVar8,uVar9,*(undefined8 *)Pico_Platform_Message<ApplicationInviteList>_TypeInfo,
                   0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x308) = lVar8;
      thunk_FUN_037aeb94(lVar6 + 0x308,lVar8);
    }
    FUN_03eb1ac8(param_1,lVar8,0,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_078d9ffc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


