/*
FUNCTION_NAME: FUN_064b4838
ENTRY_POINT: 064b4838
PROGRAM: Untangled-libil2cpp.so
SCORE: 244
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_15;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_9;ui_or_gameplay_sink_hits_19;telemetry_or_network_hits_18;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_9
*/


void FUN_064b4838(long param_1)

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
  
  puVar5 = System_Collections_Generic_List<RegexFC>_TypeInfo;
  puVar4 = System_Collections_Generic_List<RectTransform>_TypeInfo;
  puVar3 = PTR_DAT_06d6f8c8;
  puVar2 = PTR_DAT_06d0e068;
  puVar1 = PTR_DAT_06d03f98;
  if ((DAT_071cde70 & 1) == 0) {
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
                    /* try { // try from 064b4d18 to 065b4e5f has its CatchHandler @ 064b4d18
                       catch() { ... } // from try @ 064b4d18 with catch @ 064b4d18
                       catch() { ... } // from try @ 064b505c with catch @ 064b4d18
                       catch() { ... } // from try @ 064b51a4 with catch @ 064b4d18
                       catch() { ... } // from try @ 064b5200 with catch @ 064b4d18
                       catch() { ... } // from try @ 064b5268 with catch @ 064b4d18
                       catch() { ... } // from try @ 064b52a8 with catch @ 064b4d18
                       catch() { ... } // from try @ 064b52c4 with catch @ 064b4d18
                       catch() { ... } // from try @ 064b52f4 with catch @ 064b4d18 */
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
                    /* try { // try from 064b4e60 to 065b4e73 has its CatchHandler @ 064b5244 */
    FUN_02f07e70(System_Collections_Generic_List<UIDocument>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UILineInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UIPanel>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UIVertex>_TypeInfo);
                    /* try { // try from 064b4e90 to 065b4e9b has its CatchHandler @ 064b521c */
    FUN_02f07e70(System_Collections_Generic_List<ushort>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<uint>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ulong>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UnityEvent>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<UnityUIQuestGroupTemplate>_TypeInfo);
                    /* try { // try from 064b4ecc to 065b4ecf has its CatchHandler @ 064b5200 */
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
    FUN_02f07e70(System_Collections_Generic_List<ClothProcess_RenderMeshInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<CosmeticController_EquippedWearable>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DebugInputActions_IInputActions>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DebugUI_Panel>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DebugUI_ValueTuple>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DebugUI_Widget>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DemoHelper_ResetState>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DemoInputControls_IDemoActionMapActions>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DensityManager_VehicleRequest>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DiscriminatedUnionConverter_UnionCase>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<DiskSavedGameDataStorer_SavedGameInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Dropdown_DropdownItem>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<Dropdown_OptionData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<EarlyInitHelpers_EarlyInitFunction>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<EasyColliderAutoSkinned_ShiftData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<EasyColliderQuickHull_Face>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<EasyColliderQuickHull_Horizon>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<FocusController_FocusedElement>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<FusionStatistics_FusionStatisticsStatCustomConfig>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<HID_HIDCollectionDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<HID_HIDElementDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<HIDParser_HIDReportData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<HVRGunBase_HVRBulletTracker>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<HVRInputActions_IHMDActions>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<HVRInputActions_ILeftHandActions>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<HVRInputActions_IRightHandActions>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<HVRInputActions_IUIActions>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<HVRPooledEmitter_HVRPooledObjectTracker>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<InputActionMap_BindingOverrideJson>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<InputControlLayout_ControlItem>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<JsonParser_JsonValue>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<JsonSchemaGenerator_TypeSchema>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<LckRecorder_CaptureData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<LckRecorder_FrameTexture>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<LckRecorder_TrackInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<LckTelemetry_TelemetryData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<LocalVariables_VariableScope>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<LocalizedFonts_FontForLanguage>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<LocalizedTextTable_LocalizedTextField>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<MagicLightProbes_VolumeParameters>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<MaskedTextProvider_CharDescriptor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<MessageSystem_ListenerInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<MonoChunkParser_Chunk>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<MultiColumnCollectionHeader_ColumnData>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<MultiColumnCollectionHeader_SortedColumnState>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<NetworkObjectBaker_TransformPath>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<NetworkObjectMeta_List>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<NetworkSceneManagerDefault_MultiPeerSceneRoot>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                );
    FUN_02f07e70(
                System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo)
    ;
    FUN_02f07e70(System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo)
    ;
    FUN_02f07e70(System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<PedestrianWaypointManager_PositionWaypoint>_TypeInfo
                );
    FUN_02f07e70(
                System_Collections_Generic_List<PersistentActiveDataMultiple_TargetConditionPair>_TypeInfo
                );
    FUN_02f07e70(
                System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<PositionSaver_ScenePositionData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ProbeBrickIndex_ReservedBrick>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<ProbeVolumeSceneData_BakingSet>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<ProbeVolumeSceneData_SerializableBoundItem>_TypeInfo
                );
    FUN_02f07e70(
                System_Collections_Generic_List<ProbeVolumeSceneData_SerializableHasPVItem>_TypeInfo
                );
    FUN_02f07e70(
                System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_TypeInfo
                );
    FUN_02f07e70(
                System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVProfile>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<QuestLog_QuestWatchItem>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<QuestLogWindow_QuestInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<QuestTracker_QuestTrackerLine>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RegexCharClass_SingleRange>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RenderChain_RenderNodeData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RenderGraphDebugData_PassDebugData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RenderGraphDebugData_ResourceDebugData>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_List<RenderGraphObjectPool_SharedObjectPoolBase>_TypeInfo
                );
    FUN_02f07e70(System_Collections_Generic_List<RenderSetupData_ShareSerializationData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RenderSetupData_UniqueSerializationData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SMSDialogueUI_DialogueEntryRecord>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SavedGameData_SaveRecord>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SelectorUseStandardUIElements_LayerInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SelectorUseStandardUIElements_TagInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<ShadowUtility_Edge>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<SimulationBehaviourUpdater_BehaviourList>_TypeInfo)
    ;
    FUN_02f07e70(System_Collections_Generic_List<SpawnedObjectManager_SpawnedObjectData>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StencilMaterial_MatEntry>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<StunServers_StunServer>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<RegexFC>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d03f98);
    FUN_02f07e70(PTR_DAT_06d0e068);
    FUN_02f07e70(PTR_DAT_06d6f8c8);
    FUN_02f07e70(System_Collections_Generic_List<RectTransform>_TypeInfo);
    DAT_071cde70 = 1;
  }
  FUN_064b9884(param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar1,*(undefined8 *)puVar2,
               *(undefined8 *)puVar3);
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
    FUN_0516bc18(lVar8,uVar9,
                 *(undefined8 *)
                  System_Collections_Generic_List<ClothProcess_RenderMeshInfo>_TypeInfo,0);
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
                    System_Collections_Generic_List<FocusController_FocusedElement>_TypeInfo,0);
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
                    System_Collections_Generic_List<HVRPooledEmitter_HVRPooledObjectTracker>_TypeInfo
                   ,0);
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
                    System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo,0
                  );
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
                   *(undefined8 *)System_Collections_Generic_List<NetworkObjectMeta_List>_TypeInfo,0
                  );
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
                    System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo,0);
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
                    System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo,0);
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
                    System_Collections_Generic_List<ProbeVolumeSceneData_SerializableBoundItem>_TypeInfo
                   ,0);
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
                    System_Collections_Generic_List<RenderGraphObjectPool_SharedObjectPoolBase>_TypeInfo
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
                   *(undefined8 *)System_Collections_Generic_List<StunServers_StunServer>_TypeInfo,0
                  );
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
      FUN_0516bd80(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<DensityManager_VehicleRequest>_TypeInfo,0);
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
      FUN_05171f48(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<DiscriminatedUnionConverter_UnionCase>_TypeInfo,
                   0);
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
                    System_Collections_Generic_List<DiskSavedGameDataStorer_SavedGameInfo>_TypeInfo,
                   0);
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
                   *(undefined8 *)System_Collections_Generic_List<Dropdown_DropdownItem>_TypeInfo,0)
      ;
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
                   *(undefined8 *)System_Collections_Generic_List<Dropdown_OptionData>_TypeInfo,0);
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
                    System_Collections_Generic_List<EarlyInitHelpers_EarlyInitFunction>_TypeInfo,0);
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
                    System_Collections_Generic_List<EasyColliderAutoSkinned_ShiftData>_TypeInfo,0);
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
                    System_Collections_Generic_List<EasyColliderQuickHull_Face>_TypeInfo,0);
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
                    System_Collections_Generic_List<EasyColliderQuickHull_Horizon>_TypeInfo,0);
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
                   *(undefined8 *)System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo,0);
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
                   *(undefined8 *)
                    System_Collections_Generic_List<FusionStatistics_FusionStatisticsStatCustomConfig>_TypeInfo
                   ,0);
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
                    System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_TypeInfo,0);
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
                    System_Collections_Generic_List<HID_HIDCollectionDescriptor>_TypeInfo,0);
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
                   *(undefined8 *)System_Collections_Generic_List<HID_HIDElementDescriptor>_TypeInfo
                   ,0);
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
                   *(undefined8 *)System_Collections_Generic_List<HIDParser_HIDReportData>_TypeInfo,
                   0);
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
                    System_Collections_Generic_List<HVRGunBase_HVRBulletTracker>_TypeInfo,0);
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
      FUN_0516d9a0(lVar8,uVar9,
                   *(undefined8 *)
                    System_Collections_Generic_List<HVRInputActions_IHMDActions>_TypeInfo,0);
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
                    System_Collections_Generic_List<HVRInputActions_ILeftHandActions>_TypeInfo,0);
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
                    System_Collections_Generic_List<HVRInputActions_IRightHandActions>_TypeInfo,0);
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
                    System_Collections_Generic_List<HVRInputActions_IUIActions>_TypeInfo,0);
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
                    System_Collections_Generic_List<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo>_TypeInfo
                   ,0);
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
                    System_Collections_Generic_List<InputActionMap_BindingOverrideJson>_TypeInfo,0);
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
                    System_Collections_Generic_List<InputControlLayout_ControlItem>_TypeInfo,0);
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
                   *(undefined8 *)System_Collections_Generic_List<JsonParser_JsonValue>_TypeInfo,0);
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
                    System_Collections_Generic_List<JsonSchemaGenerator_TypeSchema>_TypeInfo,0);
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
                    System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_TypeInfo
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
                   *(undefined8 *)System_Collections_Generic_List<LckRecorder_CaptureData>_TypeInfo,
                   0);
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
                   *(undefined8 *)System_Collections_Generic_List<LckRecorder_FrameTexture>_TypeInfo
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
                   *(undefined8 *)System_Collections_Generic_List<LckRecorder_TrackInfo>_TypeInfo,0)
      ;
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
                    System_Collections_Generic_List<LckTelemetry_TelemetryData>_TypeInfo,0);
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
                    System_Collections_Generic_List<LocalVariables_VariableScope>_TypeInfo,0);
      lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
      *(long *)(lVar6 + 0x148) = lVar8;
      thunk_FUN_02f411dc(lVar6 + 0x148,lVar8);
    }
    FUN_037dc7bc(param_1,lVar8,0,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06931a44();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


