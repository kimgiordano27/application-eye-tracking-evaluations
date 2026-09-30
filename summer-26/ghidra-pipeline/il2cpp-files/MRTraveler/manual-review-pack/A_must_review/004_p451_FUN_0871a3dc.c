/*
FUNCTION_NAME: FUN_0871a3dc
ENTRY_POINT: 0871a3dc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 271
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_20;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_21;functionality_possible_biometrics_hits_4
*/


void FUN_0871a3dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  
  puVar2 = PTR_DAT_08e7a2d0;
  puVar1 = PTR_DAT_08e7a2c8;
  if ((DAT_0943c8a8 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e7a2d8);
    FUN_03c8f898(PTR_DAT_08e7a2d0);
    FUN_03c8f898(PTR_DAT_08e7a2c8);
    FUN_03c8f898(System_Action<Transform>_TypeInfo);
    FUN_03c8f898(System_Action<TurnStateType>_TypeInfo);
    FUN_03c8f898(System_Action<Type>_TypeInfo);
    FUN_03c8f898(System_Action<uint>_TypeInfo);
    FUN_03c8f898(System_Action<ulong>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08ebe9a8);
    FUN_03c8f898(PTR_DAT_08e80970);
    FUN_03c8f898(System_Action<UnityWebRequestAsyncOperation>_TypeInfo);
    FUN_03c8f898(System_Action<UseMovementItemDirectingValue>_TypeInfo);
    FUN_03c8f898(System_Action<UserBaseInfo>_TypeInfo);
    FUN_03c8f898(System_Action<VFXOutputEventArgs>_TypeInfo);
    FUN_03c8f898(System_Action<Vector3>_TypeInfo);
    FUN_03c8f898(System_Action<VectorImageRenderInfo>_TypeInfo);
    FUN_03c8f898(System_Action<VisualElement>_TypeInfo);
    FUN_03c8f898(System_Action<VivoxMessage>_TypeInfo);
    FUN_03c8f898(System_Action<VivoxParticipant>_TypeInfo);
    FUN_03c8f898(System_Action<VoiceAudioInputState>_TypeInfo);
    FUN_03c8f898(System_Action<WeatherIconData>_TypeInfo);
    FUN_03c8f898(System_Action<WebSocketCloseCode>_TypeInfo);
    FUN_03c8f898(System_Action<WebSocketFrame>_TypeInfo);
    FUN_03c8f898(System_Action<WebSocketFrame>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e861c0);
    FUN_03c8f898(System_Action<WebSocketFrame>_TypeInfo);
    FUN_03c8f898(System_Action<WitChunk>_TypeInfo);
    FUN_03c8f898(System_Action<WitConfiguration>_TypeInfo);
    FUN_03c8f898(System_Action<WitRequest>_TypeInfo);
    FUN_03c8f898(System_Action<WitResponseNode>_TypeInfo);
    FUN_03c8f898(System_Action<WitWebSocketConnectionState>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08ecb928);
    FUN_03c8f898(System_Action<ZipArchiveEntry>_TypeInfo);
    FUN_03c8f898(System_Action<vx_resp_account_control_communications_t>_TypeInfo);
    FUN_03c8f898(System_Action<Allocator2D_Row>_TypeInfo);
    FUN_03c8f898(System_Action<BestFitAllocator_Block>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e861c8);
    FUN_03c8f898(System_Action<BodyPoseAlignmentDetector_AlignmentState>_TypeInfo);
    FUN_03c8f898(System_Action<DebugUI_Panel>_TypeInfo);
    FUN_03c8f898(System_Action<DynamicAtlas_TextureInfo>_TypeInfo);
    FUN_03c8f898(System_Action<Format_SplitList>_TypeInfo);
    FUN_03c8f898(System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo);
    FUN_03c8f898(
                System_Action<MacroFacialExpressionDetector_MacroExpressionStateChangeEventArgs>_TypeInfo
                );
    FUN_03c8f898(System_Action<OVRColocationSession_Data>_TypeInfo);
    FUN_03c8f898(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_03c8f898(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_03c8f898(System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_03c8f898(System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo);
    FUN_03c8f898(System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo);
    FUN_03c8f898(System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo);
    FUN_03c8f898(System_Action<PointableCanvasModule_Pointer>_TypeInfo);
    FUN_03c8f898(System_Action<ProjectSettingsSO_ReleaseChannelData>_TypeInfo);
    FUN_03c8f898(System_Action<ResourceManager_DiagnosticEventContext>_TypeInfo);
    FUN_03c8f898(System_Action<TTSSpeaker_TTSSpeakerRequestData>_TypeInfo);
    FUN_03c8f898(System_Action<DebugUI_Field<bool>,_bool>_TypeInfo);
    FUN_03c8f898(System_Action<DebugUI_Field<int>,_int>_TypeInfo);
    FUN_03c8f898(System_Action<DebugUI_Field<Object>,_Object>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08edd618);
    FUN_03c8f898(System_Action<List<OVRAnchor>,_int>_TypeInfo);
    FUN_03c8f898(
                System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_03c8f898(PTR_DAT_08e96128);
    FUN_03c8f898(System_Action<AsyncOperationHandle,_Exception>_TypeInfo);
    FUN_03c8f898(System_Action<AuthenticationState,_AuthenticationState>_TypeInfo);
    FUN_03c8f898(System_Action<AvatarLOD,_bool>_TypeInfo);
    FUN_03c8f898(System_Action<bool,_List<OVRAnchor>>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08ebe9a0);
    FUN_03c8f898(System_Action<bool,_string>_TypeInfo);
    FUN_03c8f898(System_Action<Column,_ColumnDataType>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08ecbda0);
    FUN_03c8f898(System_Action<Column,_int>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08f16c80);
    FUN_03c8f898(System_Action<Component,_ProximaComponentCommands_ComponentInfo>_TypeInfo);
    FUN_03c8f898(System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo);
    FUN_03c8f898(System_Action<DebugLogEntry,_int>_TypeInfo);
    FUN_03c8f898(System_Action<Exception,_Object>_TypeInfo);
    FUN_03c8f898(System_Action<GameObject,_Mesh>_TypeInfo);
    FUN_03c8f898(System_Action<IInteractable,_Rigidbody>_TypeInfo);
    FUN_03c8f898(System_Action<int,_bool>_TypeInfo);
    FUN_03c8f898(System_Action<int,_int>_TypeInfo);
    FUN_03c8f898(System_Action<int,_NetworkDriver>_TypeInfo);
    FUN_03c8f898(System_Action<int,_float>_TypeInfo);
    FUN_03c8f898(System_Action<KeyboardNavigationOperation,_EventBase>_TypeInfo);
    FUN_03c8f898(System_Action<LightCompiler,_Expression>_TypeInfo);
    FUN_03c8f898(System_Action<LobbyExceptionReason,_string>_TypeInfo);
    FUN_03c8f898(System_Action<LocomotionEvent,_Pose>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08ea7430);
    FUN_03c8f898(System_Action<LogData,_string>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e96ee0);
    FUN_03c8f898(System_Action<LogData,_string>_TypeInfo);
    FUN_03c8f898(System_Action<LogData,_string>_TypeInfo);
    FUN_03c8f898(System_Action<Material,_int>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e96970);
    FUN_03c8f898(System_Action<NetworkManager,_ConnectionEventData>_TypeInfo);
    FUN_03c8f898(System_Action<NpcStateType,_NpcStatePayload>_TypeInfo);
    FUN_03c8f898(System_Action<object,_object>_TypeInfo);
    FUN_03c8f898(System_Action<object,_Object>_TypeInfo);
    FUN_03c8f898(System_Action<RewardTargetType,_int>_TypeInfo);
    FUN_03c8f898(System_Action<ScriptableRenderContext,_Camera>_TypeInfo);
    FUN_03c8f898(System_Action<float,_float>_TypeInfo);
    FUN_03c8f898(System_Action<SplineContainer,_int>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08ea7440);
    FUN_03c8f898(System_Action<string,_object[]>_TypeInfo);
    FUN_03c8f898(System_Action<string,_bool>_TypeInfo);
    FUN_03c8f898(System_Action<string,_IWitWebSocketRequest>_TypeInfo);
    FUN_03c8f898(System_Action<string,_string>_TypeInfo);
    FUN_03c8f898(System_Action<TTSClipData,_string>_TypeInfo);
    FUN_03c8f898(System_Action<Task,_object>_TypeInfo);
    FUN_03c8f898(System_Action<ulong,_bool>_TypeInfo);
    FUN_03c8f898(System_Action<ulong,_string>_TypeInfo);
    FUN_03c8f898(System_Action<ulong,_NetworkEventManager_ConnectionStatus>_TypeInfo);
    FUN_03c8f898(System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_03c8f898(System_Action<Vector3,_Quaternion>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08ebd818);
    FUN_03c8f898(System_Action<Vector3,_Vector3>_TypeInfo);
    FUN_03c8f898(System_Action<VisualElement,_MatchResultInfo>_TypeInfo);
    FUN_03c8f898(System_Action<VisualElement,_StyleValues>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08f04f68);
    FUN_03c8f898(System_Action<XRLayout,_Camera>_TypeInfo);
    FUN_03c8f898(System_Action<DebugManager_UIMode,_bool>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08ecc4a0);
    FUN_03c8f898(
                System_Action<NetworkManager_ConnectionApprovalRequest,_NetworkManager_ConnectionApprovalResponse>_TypeInfo
                );
    FUN_03c8f898(
                System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_03c8f898(System_Action<TTSSpeaker_TTSSpeakerRequestData,_string>_TypeInfo);
    FUN_03c8f898(System_Action<byte[],_int,_int>_TypeInfo);
    FUN_03c8f898(System_Action<bool,_ulong,_ulong>_TypeInfo);
    FUN_03c8f898(System_Action<Column,_int,_int>_TypeInfo);
    FUN_03c8f898(System_Action<int,_float[],_float>_TypeInfo);
    FUN_03c8f898(System_Action<Object,_string,_object[]>_TypeInfo);
    FUN_03c8f898(System_Action<PayloadData,_bool,_bool>_TypeInfo);
    FUN_03c8f898(System_Action<PayloadData,_bool,_bool>_TypeInfo);
    FUN_03c8f898(System_Action<Spline,_int,_SplineModification>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08ecc768);
    FUN_03c8f898(System_Action<SplineContainer,_int,_int>_TypeInfo);
    FUN_03c8f898(System_Action<string,_string,_LogType>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e95b58);
    FUN_03c8f898(System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo);
    FUN_03c8f898(System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo);
    FUN_03c8f898(System_Action<ulong,_bool,_List<SubGameRankingInfo>>_TypeInfo);
    FUN_03c8f898(System_Action<ulong,_int,_int>_TypeInfo);
    FUN_03c8f898(System_Action<VFXEventAttribute,_int,_bool>_TypeInfo);
    FUN_03c8f898(System_Action<VFXEventAttribute,_int,_int>_TypeInfo);
    FUN_03c8f898(System_Action<VFXEventAttribute,_int,_float>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e861f8);
    FUN_03c8f898(System_Action<VFXEventAttribute,_int,_uint>_TypeInfo);
    FUN_03c8f898(System_Action<VFXEventAttribute,_int,_Vector2>_TypeInfo);
    FUN_03c8f898(System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo);
    FUN_03c8f898(System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo);
    FUN_03c8f898(
                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                );
    FUN_03c8f898(
                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                );
    FUN_03c8f898(PTR_DAT_08edbe40);
    FUN_03c8f898(System_Action<PathOptions,_Tween,_Quaternion,_Transform>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08ea7728);
    FUN_03c8f898(System_Action<PayloadData,_bool,_bool,_bool>_TypeInfo);
    DAT_0943c8a8 = 1;
  }
  lVar11 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_06a4d5c4(lVar11,*(undefined8 *)puVar2);
  puVar9 = 
  System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
  ;
  puVar10 = System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo;
  puVar8 = System_Action<int,_NetworkDriver>_TypeInfo;
  puVar7 = System_Action<ResourceManager_DiagnosticEventContext>_TypeInfo;
  puVar6 = System_Action<BestFitAllocator_Block>_TypeInfo;
  puVar5 = System_Action<ZipArchiveEntry>_TypeInfo;
  puVar4 = System_Action<VectorImageRenderInfo>_TypeInfo;
  puVar3 = System_Action<UseMovementItemDirectingValue>_TypeInfo;
  puVar2 = System_Action<Transform>_TypeInfo;
  puVar1 = PTR_DAT_08e7a2d8;
  if (lVar11 != 0) {
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<LogData,_string>_TypeInfo,
                 *(undefined8 *)
                  System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                 ,*(undefined8 *)PTR_DAT_08e7a2d8);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<AvatarLOD,_bool>_TypeInfo,*(undefined8 *)puVar9
                 ,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<VisualElement>_TypeInfo,*(undefined8 *)puVar9,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08edbe40,*(undefined8 *)PTR_DAT_08e80970,
                 *(undefined8 *)puVar1);
    puVar9 = System_Action<TTSClipData,_string>_TypeInfo;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<Column,_int>_TypeInfo,
                 *(undefined8 *)System_Action<TTSClipData,_string>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<string,_object[]>_TypeInfo,
                 *(undefined8 *)System_Action<Vector3>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<Object,_string,_object[]>_TypeInfo,
                 *(undefined8 *)System_Action<SplineContainer,_int,_int>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<TTSSpeaker_TTSSpeakerRequestData>_TypeInfo,
                 *(undefined8 *)System_Action<Vector3,_Vector3>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<Column,_ColumnDataType>_TypeInfo,
                 *(undefined8 *)System_Action<AsyncOperationHandle,_Exception>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<VFXEventAttribute,_int,_float>_TypeInfo,
                 *(undefined8 *)System_Action<UnityWebRequestAsyncOperation>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<GameObject,_Mesh>_TypeInfo,
                 *(undefined8 *)System_Action<VivoxParticipant>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<Column,_int,_int>_TypeInfo,
                 *(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<DebugUI_Field<Object>,_Object>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<int,_bool>_TypeInfo,*(undefined8 *)puVar4,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<ulong,_int,_int>_TypeInfo,*(undefined8 *)puVar7
                 ,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<VFXEventAttribute,_int,_uint>_TypeInfo,
                 *(undefined8 *)System_Action<VFXOutputEventArgs>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo
                 ,*(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)puVar6,*(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<TurnStateType>_TypeInfo,*(undefined8 *)puVar9,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<vx_resp_account_control_communications_t>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<uint>_TypeInfo,*(undefined8 *)puVar4,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<Task,_object>_TypeInfo,*(undefined8 *)puVar7,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<DebugUI_Field<int>,_int>_TypeInfo,
                 *(undefined8 *)System_Action<WitChunk>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08ebe9a8,*(undefined8 *)puVar3,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08ecc768,*(undefined8 *)puVar9,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08e96970,
                 *(undefined8 *)System_Action<bool,_string>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<DebugLogEntry,_int>_TypeInfo,
                 *(undefined8 *)System_Action<List<OVRAnchor>,_int>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08e95b58,
                 *(undefined8 *)System_Action<Allocator2D_Row>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<AuthenticationState,_AuthenticationState>_TypeInfo,
                 *(undefined8 *)System_Action<BodyPoseAlignmentDetector_AlignmentState>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                 ,*(undefined8 *)System_Action<VFXEventAttribute,_int,_int>_TypeInfo,
                 *(undefined8 *)puVar1);
    puVar6 = System_Action<Component,_ProximaComponentCommands_ComponentInfo>_TypeInfo;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<WitWebSocketConnectionState>_TypeInfo,
                 *(undefined8 *)
                  System_Action<Component,_ProximaComponentCommands_ComponentInfo>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                 ,*(undefined8 *)puVar6,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo,
                 *(undefined8 *)System_Action<WebSocketFrame>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<VFXEventAttribute,_int,_bool>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08ebe9a0,*(undefined8 *)puVar3,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<NetworkManager,_ConnectionEventData>_TypeInfo,
                 *(undefined8 *)System_Action<LightCompiler,_Expression>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08ea7430,*(undefined8 *)puVar3,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<KeyboardNavigationOperation,_EventBase>_TypeInfo,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08ecbda0,
                 *(undefined8 *)System_Action<ulong,_bool,_List<SubGameRankingInfo>>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<WebSocketCloseCode>_TypeInfo,
                 *(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<byte[],_int,_int>_TypeInfo,
                 *(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,
                 *(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<OVRManager_PassthroughInitializationState>_TypeInfo,
                 *(undefined8 *)puVar3,*(undefined8 *)puVar1);
    puVar5 = System_Action<WebSocketFrame>_TypeInfo;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<DebugManager_UIMode,_bool>_TypeInfo,
                 *(undefined8 *)System_Action<WebSocketFrame>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08e861c0,*(undefined8 *)puVar5,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<Type>_TypeInfo,*(undefined8 *)puVar3,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08e861c8,*(undefined8 *)puVar3,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08e96128,*(undefined8 *)puVar6,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08f16c80,
                 *(undefined8 *)System_Action<string,_bool>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08ecb928,*(undefined8 *)puVar8,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<WeatherIconData>_TypeInfo,*(undefined8 *)puVar4
                 ,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<string,_string>_TypeInfo,*(undefined8 *)puVar4,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<LocomotionEvent,_Pose>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08e96ee0,
                 *(undefined8 *)System_Action<VoiceAudioInputState>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08ebd818,*(undefined8 *)puVar3,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<Format_SplitList>_TypeInfo,
                 *(undefined8 *)
                  System_Action<MacroFacialExpressionDetector_MacroExpressionStateChangeEventArgs>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08ea7728,
                 *(undefined8 *)System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<WitConfiguration>_TypeInfo,
                 *(undefined8 *)System_Action<PathOptions,_Tween,_Quaternion,_Transform>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo,
                 *(undefined8 *)System_Action<VFXEventAttribute,_int,_Vector2>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08ea7440,*(undefined8 *)puVar3,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<NetworkManager_ConnectionApprovalRequest,_NetworkManager_ConnectionApprovalResponse>_TypeInfo
                 ,*(undefined8 *)System_Action<WebSocketFrame>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08ecc4a0,
                 *(undefined8 *)System_Action<ulong,_string>_TypeInfo,*(undefined8 *)puVar1);
    puVar4 = System_Action<ScriptableRenderContext,_Camera>_TypeInfo;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<ProjectSettingsSO_ReleaseChannelData>_TypeInfo,
                 *(undefined8 *)System_Action<ScriptableRenderContext,_Camera>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<object,_object>_TypeInfo,*(undefined8 *)puVar4,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<PayloadData,_bool,_bool>_TypeInfo,
                 *(undefined8 *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<ulong>_TypeInfo,
                 *(undefined8 *)System_Action<LogData,_string>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08edd618,
                 *(undefined8 *)System_Action<int,_int>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<int,_float>_TypeInfo,*(undefined8 *)puVar9,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<IInteractable,_Rigidbody>_TypeInfo,
                 *(undefined8 *)System_Action<object,_Object>_TypeInfo,*(undefined8 *)puVar1);
    puVar4 = System_Action<bool,_ulong,_ulong>_TypeInfo;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<VivoxMessage>_TypeInfo,
                 *(undefined8 *)System_Action<bool,_ulong,_ulong>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<NpcStateType,_NpcStatePayload>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<XRLayout,_Camera>_TypeInfo,
                 *(undefined8 *)System_Action<Exception,_Object>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<float,_float>_TypeInfo,
                 *(undefined8 *)System_Action<string,_string,_LogType>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<UserBaseInfo>_TypeInfo,*(undefined8 *)puVar7,
                 *(undefined8 *)puVar1);
    puVar4 = System_Action<ulong,_bool>_TypeInfo;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<DebugUI_Field<bool>,_bool>_TypeInfo,
                 *(undefined8 *)System_Action<ulong,_bool>_TypeInfo,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<PointableCanvasModule_Pointer>_TypeInfo,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<SplineContainer,_int>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<string,_IWitWebSocketRequest>_TypeInfo,
                 *(undefined8 *)System_Action<ulong,_NetworkEventManager_ConnectionStatus>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo,
                 *(undefined8 *)System_Action<RewardTargetType,_int>_TypeInfo,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<int,_float[],_float>_TypeInfo,
                 *(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<bool,_List<OVRAnchor>>_TypeInfo,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<Vector3,_Quaternion>_TypeInfo,
                 *(undefined8 *)System_Action<PayloadData,_bool,_bool>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08f04f68,
                 *(undefined8 *)System_Action<VisualElement,_MatchResultInfo>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)
                         System_Action<TTSSpeaker_TTSSpeakerRequestData,_string>_TypeInfo,
                 *(undefined8 *)System_Action<PayloadData,_bool,_bool,_bool>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_06a4e380(lVar11,*(undefined8 *)PTR_DAT_08e861f8,*(undefined8 *)puVar3,*(undefined8 *)puVar1)
    ;
    FUN_06a4e380(lVar11,*(undefined8 *)System_Action<LogData,_string>_TypeInfo,*(undefined8 *)puVar7
                 ,*(undefined8 *)puVar1);
    **(long **)(*(long *)puVar2 + 0xb8) = lVar11;
    thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar11);
    lVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e7a2c8);
    FUN_06a4d5c4(lVar11,*(undefined8 *)PTR_DAT_08e7a2d0);
    puVar9 = System_Action<Spline,_int,_SplineModification>_TypeInfo;
    puVar10 = System_Action<VisualElement,_StyleValues>_TypeInfo;
    puVar8 = System_Action<Material,_int>_TypeInfo;
    puVar7 = System_Action<LobbyExceptionReason,_string>_TypeInfo;
    puVar6 = System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
    ;
    puVar5 = System_Action<OVRColocationSession_Data>_TypeInfo;
    puVar4 = System_Action<DynamicAtlas_TextureInfo>_TypeInfo;
    puVar3 = System_Action<WitResponseNode>_TypeInfo;
    if (lVar11 != 0) {
      FUN_06a4e380(lVar11,*(undefined8 *)System_Action<WitRequest>_TypeInfo,
                   *(undefined8 *)System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_06a4e380(lVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
      FUN_06a4e380(lVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar6,*(undefined8 *)puVar1);
      FUN_06a4e380(lVar11,*(undefined8 *)puVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
      FUN_06a4e380(lVar11,*(undefined8 *)puVar8,*(undefined8 *)puVar7,*(undefined8 *)puVar1);
      plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar12 = lVar11;
      thunk_FUN_03d233cc(plVar12,lVar11);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


