/*
FUNCTION_NAME: FUN_064c2658
ENTRY_POINT: 064c2658
PROGRAM: Untangled-libil2cpp.so
SCORE: 252
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_20;functionality_data_collection_or_telemetry_hits_21
*/


void FUN_064c2658(long param_1)

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
  
  puVar5 = OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo;
  puVar4 = OVRTask<OVRPlugin_Result>_TypeInfo;
  puVar3 = OVRTask<OVRAnchor>_TypeInfo;
  puVar2 = PTR_DAT_06d6f8e0;
  puVar1 = PTR_DAT_06d02128;
  if ((DAT_071cdf30 & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_List<RegexNode>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RegexOptions>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Region>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Region>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RegionInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RegionPinger>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RegionPinger>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RemoteVoiceLink>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RenderChain>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RenderGraph>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RenderSetupData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RenderSetupSerializeData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RenderTexture>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Renderer>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RendererList>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RendererListHandle>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ResourceHandle>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Response>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ReusableCollectionItem>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Rigidbody2D>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RoomInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RoomInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RpcInvokeData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RuleMatcher>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RunnerVisibilityLink>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RuntimeElement>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RuntimeType>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<sbyte>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Saver>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ScheduledItem>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ScriptableObject>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ScriptableRendererFeature>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SdkAccount>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Selectable>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SequencerCommand>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SerializationCallback>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SessionInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SeverityEntry>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ShaderTagId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ShadowCaster2D>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ShadowCasterGroup2D>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SharePreBuildData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SignalAsset>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SimulationBehaviour>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SimulationInput>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<float>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SkinnedMeshRenderer>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SocketPose>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SolverManager>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SortColumnDescription>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SpawnWaypoint>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SpawnedObject>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SpawnedObjectList>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Speaker>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Sprite>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SpriteCharacter>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SpriteGlyph>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StackFrame>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StandardUIContentTemplate>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StandardUIMenuPanel>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StandardUIQuestTrackTemplate>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StandardUISelectorElements>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StandardUISubtitlePanel>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Statement>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StatisticUpdate>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StreamBuffer>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StreetCrossingComponent>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<string>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StylePropertyId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StylePropertyName>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StylePropertyValue>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StyleSelector>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StyleSelectorPart>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StyleSheet>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StyleSyntaxToken>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StyleValue>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StyleVariable>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Subsystem>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SubsystemDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SubsystemDescriptorWithProvider>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SubsystemWithProvider>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SubtitlePanelNumber>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SuitCosmetic>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TEdge>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TMP_Character>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TMP_FontAsset>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TMP_GlyphPairAdjustmentRecord>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TMP_SpriteCharacter>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TMP_Style>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TMP_Text>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Task>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TcpClient>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Terrain>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Text>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TextStyle>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TextTableField>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Texture2D>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Thread>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TimeProviderCallback>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TimeValue>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TimelineClip>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Timer>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Toggle>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TrackAsset>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TrafficWaypoint>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Transform>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TransformRecord>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TransformRecordSerializeData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TreeViewItemWrapper>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TrialOffer>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Type>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TypeIdentifier>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TypeSpec>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UICharInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UIDocument>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UILineInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UIPanel>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UIVertex>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ushort>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<uint>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ulong>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UnityEvent>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UnityUIQuestGroupTemplate>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UnityUIQuestTemplate>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UnityUIQuestTrackTemplate>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UntangledEntity>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Uri>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Usable>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<User>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UserCapability>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UserVariable>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UxmlObjectAsset>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VFXBinderBase>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Value>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ValueInput>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ValueOutput>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Var>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Variable>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Vector2>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Vector2Int>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Vector3>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Vector4>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VectorImageManager>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VehicleBehaviour>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VehicleComponent>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VehicleTypes>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VertexAttribute>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VirtualMesh>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VirtualMeshContainer>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VisualElement>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VisualElementAsset>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Volume>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VolumeComponent>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VolumeFog>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VolumeParameter>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<VolumeStack>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<WaypointSettings>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<WaypointSettingsBase>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<WeakReference>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<WearableCosmetic>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<WebHelperPoint>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<X509CertificateImpl>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<X509ChainStatus>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<X509Extension>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRCameraSubsystemDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRInputSubsystem>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRLoader>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRNodeState>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRPlaneSubsystemDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRRaycastSubsystemDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRReferenceImage>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRReferenceObject>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRReferenceObjectEntry>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XRView>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XmlAttribute>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XmlNode>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XmlQualifiedName>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XmlReflectionMember>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XmlSchema>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XmlSchemaElement>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<XmlSchemaObject>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<YogaNode>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<float3>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<fsConverter>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<fsData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<fsMetaProperty>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<fsObjectProcessor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<fsVersionedType>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<int2>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<Allocator2D_Area>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<AnimatorSaver_TriggerData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<BitmapAllocator32_Page>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<BsonReader_ContainerContext>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<CFXR_Effect_CameraShake>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ClothProcess_PaintMapData>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRSceneManager_Metrics>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRAnchor_Tracker_AsyncLock>_TypeInfo);
    FUN_02f07e70(Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
    FUN_02f07e70(Photon_Voice_ObjectFactory<short[],_int>_TypeInfo);
    FUN_02f07e70(Photon_Voice_ObjectFactory<float[],_int>_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ObjectListPool<string>_TypeInfo);
    FUN_02f07e70(UnityEngine_Pool_ObjectPool<Queue<EventBase>>_TypeInfo);
    FUN_02f07e70(UnityEngine_Pool_ObjectPool<LayoutRebuilder>_TypeInfo);
    FUN_02f07e70(UnityEngine_Pool_ObjectPool<StringBuilder>_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_ObjectPool<CommandBuffer>_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_ObjectPool<AtlasAllocator_AtlasNode>_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_ObjectPool<ProbeBrickIndex_BrickMeta>_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_ObjectPool<ProbeBrickIndex_VoxelMeta>_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_BlendingCellInfo>_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_CellInfo>_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ObjectPool<List<VisualElement>>_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ObjectPool<PropagationPaths>_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo);
    FUN_02f07e70(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_02f07e70(Language_Lua_ParserInput<char>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AbortFileUploadsRequest>_TypeInfo)
    ;
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AcceptGroupApplicationRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AcceptGroupInvitationRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AcceptTradeRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddFriendRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddGenericIDRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddInventoryItemsRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddMembersRequest>_TypeInfo);
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddOrUpdateContactEmailRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddSharedGroupMembersRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddUserVirtualCurrencyRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddUsernamePasswordRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AndroidDevicePushNotificationRegistrationRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ApplyToGroupRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AttributeInstallRequest>_TypeInfo)
    ;
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AuthenticateCustomIdRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<BlockEntityRequest>_TypeInfo);
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelAllMatchmakingTicketsForPlayerRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelAllServerBackfillTicketsForPlayerRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelMatchmakingTicketRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelServerBackfillTicketRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelTradeRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ChangeMemberRoleRequest>_TypeInfo)
    ;
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConfirmPurchaseRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumeItemRequest>_TypeInfo);
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumeMicrosoftStoreEntitlementsRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumePS5EntitlementsRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumePSNEntitlementsRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumeXboxEntitlementsRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildAliasRequest>_TypeInfo)
    ;
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildWithCustomContainerRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildWithManagedContainerRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildWithProcessBasedServerRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateDraftItemRequest>_TypeInfo);
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateExclusionGroupRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateExperimentRequest>_TypeInfo)
    ;
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateGroupRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateGroupRoleRequest>_TypeInfo);
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateLeaderboardDefinitionRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateLobbyRequest>_TypeInfo);
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateMatchmakingTicketRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateAppleRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateFacebookInstantGamesRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateFacebookRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateGoogleRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateKongregateRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateNintendoRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdatePSNRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateSteamRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateTwitchRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateRemoteUserRequest>_TypeInfo)
    ;
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateServerBackfillTicketRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateServerMatchmakingTicketRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateSharedGroupRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateStatisticDefinitionRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateTelemetryKeyRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateTitleMultiplayerServersQuotaChangeRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateUploadUrlsRequest>_TypeInfo)
    ;
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteAppleRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteAssetRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildAliasRequest>_TypeInfo)
    ;
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildRegionRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteCertificateRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteContainerImageRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteEntityItemReviewsRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteExclusionGroupRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteExperimentRequest>_TypeInfo)
    ;
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFacebookInstantGamesRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFacebookRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFilesRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteGoogleRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteGroupRequest>_TypeInfo);
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteInventoryCollectionRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteInventoryItemsRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteItemRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteKongregateRequest>_TypeInfo)
    ;
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLeaderboardDefinitionRequest>_TypeInfo
                );
    FUN_02f07e70(
                PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLeaderboardEntriesRequest>_TypeInfo
                );
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLobbyRequest>_TypeInfo);
    FUN_02f07e70(PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteNintendoRequest>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRPlugin_Result>_TypeInfo);
    FUN_02f07e70(OVRTask<OVRAnchor>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02128);
    FUN_02f07e70(PTR_DAT_06d6f8e0);
    DAT_071cdf30 = 1;
  }
  FUN_064b9884(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar4,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar6 = *(long *)puVar5;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                System_Collections_Generic_List<X509CertificateImpl>_TypeInfo);
    FUN_0516bc18(lVar8,uVar9,*(undefined8 *)OVRTask<OVRSceneManager_Metrics>_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar7 = lVar8;
    thunk_FUN_02f411dc(plVar7,lVar8);
  }
  if (param_1 != 0) {
    FUN_037cbdf4(param_1,lVar8,0,*(undefined8 *)System_Collections_Generic_List<RegexNode>_TypeInfo)
    ;
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RegionPinger>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<AnimatorSaver_TriggerData>_TypeInfo
                                );
      FUN_0516c050(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>_TypeInfo,0
                  );
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037cd1a4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Region>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIPanel>_TypeInfo);
      FUN_0516be34(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AcceptTradeRequest>_TypeInfo,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037cc7cc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RenderChain>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Var>_TypeInfo);
      FUN_0516c1b8(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AttributeInstallRequest>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037cd834(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RegionInfo>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UnityUIQuestGroupTemplate>_TypeInfo
                                );
      FUN_0516bee8(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumeMicrosoftStoreEntitlementsRequest>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037ccb14(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RenderGraph>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo
                                );
      FUN_0516c26c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateGroupRequest>_TypeInfo,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037cdb7c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RegionPinger>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UnityEvent>_TypeInfo
                                );
      FUN_0516bf9c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdatePSNRequest>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037cce5c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RenderGraphPass>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VolumeParameter>_TypeInfo);
      FUN_0516c320(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteAppleRequest>_TypeInfo,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037cdec4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RemoteVoiceLink>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UICharInfo>_TypeInfo
                                );
      FUN_0516c104(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFacebookRequest>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037cd4ec(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RegexOptions>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VirtualMeshContainer>_TypeInfo);
      FUN_0516bccc(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteNintendoRequest>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037cc13c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Region>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UserCapability>_TypeInfo);
      FUN_0516bd80(lVar8,uVar9,*(undefined8 *)UnityEngine_Pool_ObjectPool<LayoutRebuilder>_TypeInfo,
                   0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037cc484(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SpriteCharacter>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRCameraSubsystemDescriptor>_TypeInfo
                                );
      FUN_05171f48(lVar8,uVar9,*(undefined8 *)UnityEngine_Pool_ObjectPool<StringBuilder>_TypeInfo,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x60);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d82d4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StandardUISelectorElements>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x68);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRInputSubsystem>_TypeInfo);
      FUN_05172380(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x68);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d9684(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StandardUIContentTemplate>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x70);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<WeakReference>_TypeInfo);
      FUN_05172164(lVar8,uVar9,
                   *(undefined8 *)UnityEngine_Rendering_ObjectPool<CommandBuffer>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d8cac(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Statement>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x78);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo
                                );
      FUN_051724e8(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<AtlasAllocator_AtlasNode>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x78);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d9d14(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StandardUIMenuPanel>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x80);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VFXBinderBase>_TypeInfo);
      FUN_05172218(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<ProbeBrickIndex_BrickMeta>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d8ff4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StatisticUpdate>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x88);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIDocument>_TypeInfo
                                );
      FUN_0517259c(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<ProbeBrickIndex_VoxelMeta>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x88);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037da05c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StandardUIQuestTrackTemplate>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x90);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UnityUIQuestTrackTemplate>_TypeInfo
                                );
      FUN_051722cc(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_BlendingCellInfo>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x90);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d933c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StandardUISubtitlePanel>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x98);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo);
      FUN_05172434(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_CellInfo>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x98);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d99cc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SpriteGlyph>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<fsObjectProcessor>_TypeInfo);
      FUN_05171ffc(lVar8,uVar9,
                   *(undefined8 *)UnityEngine_UIElements_ObjectPool<List<VisualElement>>_TypeInfo,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa0);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d861c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StackFrame>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<BitmapAllocator32_Page>_TypeInfo);
      FUN_051720b0(lVar8,uVar9,
                   *(undefined8 *)UnityEngine_UIElements_ObjectPool<PropagationPaths>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa8);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d8964(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ScheduledItem>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TransformRecordSerializeData>_TypeInfo
                                );
      FUN_0516d34c(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb0);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d2064(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
      FUN_0516d784(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb8);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d3414(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ScriptableRendererFeature>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xc0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<fsConverter>_TypeInfo);
      FUN_0516d568(lVar8,uVar9,
                   *(undefined8 *)UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo,
                   0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc0);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d2a3c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SerializationCallback>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 200);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo
                                );
      FUN_0516d8ec(lVar8,uVar9,
                   *(undefined8 *)UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 200);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d3aa4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SdkAccount>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xd0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<WaypointSettingsBase>_TypeInfo);
      FUN_0516d61c(lVar8,uVar9,
                   *(undefined8 *)
                    OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xd0);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d2d84(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xd8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VehicleTypes>_TypeInfo);
      FUN_0516d9a0(lVar8,uVar9,*(undefined8 *)Language_Lua_ParserInput<char>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xd8);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d3dec(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Selectable>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XmlSchemaObject>_TypeInfo);
      FUN_0516d6d0(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AbortFileUploadsRequest>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xe0);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d30cc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SequencerCommand>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<CFXR_Effect_CameraShake>_TypeInfo)
      ;
      FUN_0516d838(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AcceptGroupApplicationRequest>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xe8);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d375c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ScriptableObject>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xf0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TypeSpec>_TypeInfo);
      FUN_0516d400(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AcceptGroupInvitationRequest>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xf0);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d23ac(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xf8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XmlAttribute>_TypeInfo);
      FUN_0516d4b4(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddFriendRequest>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xf8);
      *plVar7 = lVar8;
      thunk_FUN_02f411dc(plVar7,lVar8);
    }
    FUN_037d26f4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StyleValue>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x100);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      FUN_05173250(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddGenericIDRequest>_TypeInfo,0
                  );
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x100) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x100,lVar8);
    }
    FUN_037dc474(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SubtitlePanelNumber>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x108);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VisualElement>_TypeInfo);
      FUN_05173688(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddInventoryItemsRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x108) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x108,lVar8);
    }
    FUN_037dd824(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SubsystemDescriptor>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x110);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UIVertex>_TypeInfo);
      FUN_0517346c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddMembersRequest>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x110) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x110,lVar8);
    }
    FUN_037dce4c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TEdge>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x118);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_TypeInfo
                                );
      FUN_051737f0(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddOrUpdateContactEmailRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x118) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x118,lVar8);
    }
    FUN_037ddeb4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SubsystemDescriptorWithProvider>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x120);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<fsData>_TypeInfo);
      FUN_05173520(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddSharedGroupMembersRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x120) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x120,lVar8);
    }
    FUN_037dd194(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TMP_Character>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x128);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<VolumeFog>_TypeInfo)
      ;
      FUN_051738a4(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddUserVirtualCurrencyRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x128) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x128,lVar8);
    }
    FUN_037de1fc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SubsystemWithProvider>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x130);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector3>_TypeInfo);
      FUN_051735d4(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AddUsernamePasswordRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x130) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x130,lVar8);
    }
    FUN_037dd4dc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x138);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo
                                );
      FUN_05173958(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AndroidDevicePushNotificationRegistrationRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x138) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x138,lVar8);
    }
    FUN_037de544(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SuitCosmetic>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x140);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRReferenceObjectEntry>_TypeInfo);
      FUN_0517373c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ApplyToGroupRequest>_TypeInfo,0
                  );
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x140) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x140,lVar8);
    }
    FUN_037ddb6c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StyleVariable>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x148);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo);
      FUN_05173304(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<AuthenticateCustomIdRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x148) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x148,lVar8);
    }
    FUN_037dc7bc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Subsystem>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x150);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Type>_TypeInfo);
      FUN_051733b8(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<BlockEntityRequest>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x150) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x150,lVar8);
    }
    FUN_037dcb04(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x158);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRReferenceObject>_TypeInfo);
      FUN_0516da54(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelAllMatchmakingTicketsForPlayerRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x158) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x158,lVar8);
    }
    FUN_037d4134(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SharePreBuildData>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x160);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VehicleComponent>_TypeInfo);
      FUN_0516e0a8(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelAllServerBackfillTicketsForPlayerRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x160) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x160,lVar8);
    }
    FUN_037d54e4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ShaderTagId>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x168);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<WebHelperPoint>_TypeInfo);
      FUN_0516dc70(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelMatchmakingTicketRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x168) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x168,lVar8);
    }
    FUN_037d4b0c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SimulationBehaviour>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x170);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VirtualMesh>_TypeInfo);
      FUN_0516e210(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelServerBackfillTicketRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x170) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x170,lVar8);
    }
    FUN_037d5b74(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ShadowCaster2D>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x178);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRLoader>_TypeInfo);
      FUN_0516ddd8(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CancelTradeRequest>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x178) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x178,lVar8);
    }
    FUN_037d4e54(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SimulationInput>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x180);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<TypeName>_TypeInfo);
      FUN_0516e2c4(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ChangeMemberRoleRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x180) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x180,lVar8);
    }
    FUN_037d5ebc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ShadowCasterGroup2D>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x188);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TreeViewItemWrapper>_TypeInfo);
      FUN_0516de8c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConfirmPurchaseRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x188) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x188,lVar8);
    }
    FUN_037d519c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SignalAsset>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 400);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<UILineInfo>_TypeInfo
                                );
      FUN_0516e15c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumeItemRequest>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 400) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 400,lVar8);
    }
    FUN_037d582c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SessionInfo>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x198);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ValueInput>_TypeInfo
                                );
      FUN_0516db08(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumePS5EntitlementsRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x198) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x198,lVar8);
    }
    FUN_037d447c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SeverityEntry>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1a0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRNodeState>_TypeInfo);
      FUN_0516dbbc(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumePSNEntitlementsRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1a0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1a0,lVar8);
    }
    FUN_037d47c4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TMP_GlyphPairAdjustmentRecord>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1a8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<ClothProcess_PaintMapData>_TypeInfo
                                );
      FUN_05173a0c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<ConsumeXboxEntitlementsRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1a8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1a8,lVar8);
    }
    FUN_037de88c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TcpClient>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1b0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<WearableCosmetic>_TypeInfo);
      FUN_05173e44(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildAliasRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1b0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1b0,lVar8);
    }
    FUN_037dfc3c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TMP_Style>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1b8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UserVariable>_TypeInfo);
      FUN_05173c28(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildWithCustomContainerRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1b8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1b8,lVar8);
    }
    FUN_037df264(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Text>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1c0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<ValueOutput>_TypeInfo);
      FUN_05173fac(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildWithManagedContainerRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1c0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1c0,lVar8);
    }
    FUN_037e02cc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TMP_Text>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1c8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TrafficWaypoint>_TypeInfo);
      FUN_05173cdc(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateBuildWithProcessBasedServerRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1c8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1c8,lVar8);
    }
    FUN_037df5ac(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TextStyle>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1d0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRPlaneSubsystemDescriptor>_TypeInfo
                                );
      FUN_05174060(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateDraftItemRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1d0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1d0,lVar8);
    }
    FUN_037e0614(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Task>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1d8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<uint>_TypeInfo);
      FUN_05173d90(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateExclusionGroupRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1d8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1d8,lVar8);
    }
    FUN_037df8f4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TextTableField>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1e0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VertexAttribute>_TypeInfo);
      FUN_05174114(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateExperimentRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1e0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1e0,lVar8);
    }
    FUN_037e095c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Terrain>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1e8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TransformRecord>_TypeInfo);
      FUN_05173ef8(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateGroupRoleRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1e8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1e8,lVar8);
    }
    FUN_037dff84(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TMP_SpriteCharacter>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1f0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo
                                );
      FUN_05173ac0(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateLeaderboardDefinitionRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1f0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1f0,lVar8);
    }
    FUN_037debd4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1f8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<X509ChainStatus>_TypeInfo);
      FUN_05173b74(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateLobbyRequest>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x1f8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x1f8,lVar8);
    }
    FUN_037def1c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<float>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x200);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ushort>_TypeInfo);
      FUN_0516e378(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateMatchmakingTicketRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x200) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x200,lVar8);
    }
    FUN_037d6204(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SpawnedObject>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x208);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
      FUN_0516e7b0(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateAppleRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x208) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x208,lVar8);
    }
    FUN_037d75b4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SolverManager>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x210);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlSchema>_TypeInfo)
      ;
      FUN_0516e594(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateFacebookInstantGamesRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x210) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x210,lVar8);
    }
    FUN_037d6bdc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Speaker>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x218);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo);
      FUN_0516e918(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateFacebookRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x218) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x218,lVar8);
    }
    FUN_037d7c44(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SortColumnDescription>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x220);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VolumeStack>_TypeInfo);
      FUN_0516e648(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateGoogleRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x220) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x220,lVar8);
    }
    FUN_037d6f24(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Sprite>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x228);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TypedLobbyInfo>_TypeInfo);
      FUN_0516e9cc(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateKongregateRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x228) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x228,lVar8);
    }
    FUN_037d7f8c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SpawnWaypoint>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x230);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_TypeInfo
                                );
      FUN_0516e6fc(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateNintendoRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x230) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x230,lVar8);
    }
    FUN_037d726c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SpawnedObjectList>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x238);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_TypeInfo
                                );
      FUN_0516e864(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateSteamRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x238) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x238,lVar8);
    }
    FUN_037d78fc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SkinnedMeshRenderer>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x240);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector2Int>_TypeInfo
                                );
      FUN_0516e42c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateOrUpdateTwitchRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x240) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x240,lVar8);
    }
    FUN_037d654c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<SocketPose>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x248);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<ulong>_TypeInfo);
      FUN_0516e4e0(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateRemoteUserRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x248) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x248,lVar8);
    }
    FUN_037d6894(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Texture2D>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x250);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XmlNode>_TypeInfo);
      FUN_051741c8(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateServerBackfillTicketRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x250) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x250,lVar8);
    }
    FUN_037e0ca4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TimelineClip>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 600);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UnityUIQuestTemplate>_TypeInfo);
      FUN_051746b4(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateServerMatchmakingTicketRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 600) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 600,lVar8);
    }
    FUN_037e239c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Timer>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x260);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<Allocator2D_Area>_TypeInfo);
      FUN_05174768(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateSharedGroupRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x260) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x260,lVar8);
    }
    FUN_037e26e4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Toggle>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x268);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<WaypointSettings>_TypeInfo);
      FUN_0517481c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateStatisticDefinitionRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x268) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x268,lVar8);
    }
    FUN_037e2a2c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TimeValue>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x270);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Uri>_TypeInfo);
      FUN_05174600(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateTelemetryKeyRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x270) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x270,lVar8);
    }
    FUN_037e2054(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Thread>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x278);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<XRView>_TypeInfo);
      FUN_0517427c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateTitleMultiplayerServersQuotaChangeRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x278) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x278,lVar8);
    }
    FUN_037e0fec(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<TimeProviderCallback>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x280);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Variable>_TypeInfo);
      FUN_05174330(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<CreateUploadUrlsRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x280) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x280,lVar8);
    }
    FUN_037e1334(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StreamBuffer>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x288);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Usable>_TypeInfo);
      FUN_05172704(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteAssetRequest>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x288) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x288,lVar8);
    }
    FUN_037da3a4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StylePropertyValue>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x290);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XmlReflectionMember>_TypeInfo);
      FUN_05172a88(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildAliasRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x290) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x290,lVar8);
    }
    FUN_037db40c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<string>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x298);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_TypeInfo
                                );
      FUN_0517286c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildRegionRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x298) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x298,lVar8);
    }
    FUN_037daa34(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StyleSelectorPart>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2a0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<BsonReader_ContainerContext>_TypeInfo
                                );
      FUN_05172d58(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteBuildRequest>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2a0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2a0,lVar8);
    }
    FUN_037dba9c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StylePropertyId>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2a8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRReferenceImage>_TypeInfo);
      FUN_05172920(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteCertificateRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2a8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2a8,lVar8);
    }
    FUN_037dad7c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StyleSheet>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2b0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Value>_TypeInfo);
      FUN_05172e0c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteContainerImageRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2b0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2b0,lVar8);
    }
    FUN_037dbde4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StylePropertyName>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2b8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                                );
      FUN_051729d4(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteEntityItemReviewsRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2b8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2b8,lVar8);
    }
    FUN_037db0c4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StyleSyntaxToken>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2c0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VolumeComponent>_TypeInfo);
      FUN_05172ec0(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteExclusionGroupRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2c0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2c0,lVar8);
    }
    FUN_037dc12c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StyleSelector>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2c8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VehicleBehaviour>_TypeInfo);
      FUN_05172bf0(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteExperimentRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2c8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2c8,lVar8);
    }
    FUN_037db754(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<StreetCrossingComponent>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2d0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_TypeInfo
                                );
      FUN_051727b8(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFacebookInstantGamesRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2d0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2d0,lVar8);
    }
    FUN_037da6ec(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RenderSetupData>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2d8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<fsVersionedType>_TypeInfo);
      FUN_0516c488(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteFilesRequest>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2d8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2d8,lVar8);
    }
    FUN_037ce20c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RendererListHandle>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2e0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<fsMetaProperty>_TypeInfo);
      FUN_0516c80c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteGoogleRequest>_TypeInfo,0
                  );
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2e0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2e0,lVar8);
    }
    FUN_037cf274(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RenderTexture>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2e8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Volume>_TypeInfo);
      FUN_0516c5f0(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteGroupRequest>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2e8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2e8,lVar8);
    }
    FUN_037ce89c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ResourceHandle>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2f0);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UntangledEntity>_TypeInfo);
      FUN_0516c8c0(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteInventoryCollectionRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2f0) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2f0,lVar8);
    }
    FUN_037cf5bc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Renderer>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2f8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<TypeIdentifier>_TypeInfo);
      FUN_0516c6a4(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteInventoryItemsRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x2f8) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x2f8,lVar8);
    }
    FUN_037cebe4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Response>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x300);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRRaycastSubsystemDescriptor>_TypeInfo
                                );
      FUN_0516c974(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteItemRequest>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x300) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x300,lVar8);
    }
    FUN_037cf904(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RendererList>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x308);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VectorImageManager>_TypeInfo);
      FUN_0516c758(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteKongregateRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x308) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x308,lVar8);
    }
    FUN_037cef2c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<ReusableCollectionItem>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x310);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<UxmlObjectAsset>_TypeInfo);
      FUN_0516ca28(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLeaderboardDefinitionRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x310) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x310,lVar8);
    }
    FUN_037cfc4c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RenderSetupSerializeData>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x318);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<User>_TypeInfo);
      FUN_0516c53c(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLeaderboardEntriesRequest>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x318) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x318,lVar8);
    }
    FUN_037ce554(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Rigidbody2D>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 800);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XmlQualifiedName>_TypeInfo);
      FUN_0516cadc(lVar8,uVar9,
                   *(undefined8 *)
                    PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<DeleteLobbyRequest>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 800) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 800,lVar8);
    }
    FUN_037cff94(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RunnerVisibilityLink>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x328);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Vector4>_TypeInfo);
      FUN_0516ce60(lVar8,uVar9,*(undefined8 *)OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x328) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x328,lVar8);
    }
    FUN_037d0ffc(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RoomInfo>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x330);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<Transform>_TypeInfo)
      ;
      FUN_0516cc44(lVar8,uVar9,*(undefined8 *)OVRTask<OVRAnchor_Tracker_AsyncLock>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x330) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x330,lVar8);
    }
    FUN_037d0624(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RuntimeType>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x338);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<X509Extension>_TypeInfo);
      FUN_0516cfc8(lVar8,uVar9,
                   *(undefined8 *)Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo,0
                  );
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x338) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x338,lVar8);
    }
    FUN_037d168c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RpcInvokeData>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x340);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<YogaNode>_TypeInfo);
      FUN_0516ccf8(lVar8,uVar9,*(undefined8 *)Photon_Voice_ObjectFactory<short[],_int>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x340) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x340,lVar8);
    }
    FUN_037d096c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<sbyte>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x348);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<int2>_TypeInfo);
      FUN_0516d07c(lVar8,uVar9,*(undefined8 *)Photon_Voice_ObjectFactory<float[],_int>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x348) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x348,lVar8);
    }
    FUN_037d19d4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RuleMatcher>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x350);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo
                                );
      FUN_0516cdac(lVar8,uVar9,
                   *(undefined8 *)UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo,0)
      ;
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x350) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x350,lVar8);
    }
    FUN_037d0cb4(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<Saver>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x358);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)System_Collections_Generic_List<float3>_TypeInfo);
      FUN_0516d130(lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x358) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x358,lVar8);
    }
    FUN_037d1d1c(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RuntimeElement>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x360);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<XmlSchemaElement>_TypeInfo);
      FUN_0516cf14(lVar8,uVar9,*(undefined8 *)UnityEngine_UIElements_ObjectListPool<string>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x360) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x360,lVar8);
    }
    FUN_037d1344(param_1,lVar8,0,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = System_Collections_Generic_List<RoomInfo>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x368);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                  System_Collections_Generic_List<VisualElementAsset>_TypeInfo);
      FUN_0516cb90(lVar8,uVar9,*(undefined8 *)UnityEngine_Pool_ObjectPool<Queue<EventBase>>_TypeInfo
                   ,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x368) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x368,lVar8);
    }
    FUN_037d02dc(param_1,lVar8,0,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


