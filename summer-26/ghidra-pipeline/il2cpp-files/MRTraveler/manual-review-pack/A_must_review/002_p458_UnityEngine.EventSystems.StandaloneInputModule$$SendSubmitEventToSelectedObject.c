/*
FUNCTION_NAME: UnityEngine.EventSystems.StandaloneInputModule$$SendSubmitEventToSelectedObject
ENTRY_POINT: 0871bc1c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 281
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_15;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_18;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_20;functionality_possible_biometrics_hits_6
*/


void UnityEngine_EventSystems_StandaloneInputModule__SendSubmitEventToSelectedObject(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_03c8f898();
  FUN_03c8f898(System_Action<TTSSpeaker_TTSSpeakerRequestData>_TypeInfo);
  FUN_03c8f898(System_Action<DebugUI_Field<bool>,_bool>_TypeInfo);
  FUN_03c8f898(System_Action<DebugUI_Field<int>,_int>_TypeInfo);
  FUN_03c8f898(System_Action<DebugUI_Field<Object>,_Object>_TypeInfo);
  FUN_03c8f898(PTR_DAT_08edd618);
  FUN_03c8f898(PTR_DAT_08e96128);
  FUN_03c8f898(System_Action<AuthenticationState,_AuthenticationState>_TypeInfo);
  FUN_03c8f898(System_Action<AvatarLOD,_bool>_TypeInfo);
  FUN_03c8f898(System_Action<bool,_List<OVRAnchor>>_TypeInfo);
  FUN_03c8f898(PTR_DAT_08ebe9a0);
  FUN_03c8f898(System_Action<Column,_ColumnDataType>_TypeInfo);
  FUN_03c8f898(PTR_DAT_08ecbda0);
  FUN_03c8f898(System_Action<Column,_int>_TypeInfo);
  FUN_03c8f898(PTR_DAT_08f16c80);
  FUN_03c8f898(System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo);
  FUN_03c8f898(System_Action<DebugLogEntry,_int>_TypeInfo);
  FUN_03c8f898(System_Action<GameObject,_Mesh>_TypeInfo);
  FUN_03c8f898(System_Action<IInteractable,_Rigidbody>_TypeInfo);
  FUN_03c8f898(System_Action<int,_bool>_TypeInfo);
  FUN_03c8f898(System_Action<int,_float>_TypeInfo);
  FUN_03c8f898(System_Action<KeyboardNavigationOperation,_EventBase>_TypeInfo);
  FUN_03c8f898(System_Action<LocomotionEvent,_Pose>_TypeInfo);
  FUN_03c8f898(PTR_DAT_08ea7430);
  FUN_03c8f898(PTR_DAT_08e96ee0);
  FUN_03c8f898(System_Action<LogData,_string>_TypeInfo);
  FUN_03c8f898(System_Action<LogData,_string>_TypeInfo);
  FUN_03c8f898(PTR_DAT_08e96970);
  FUN_03c8f898(System_Action<NetworkManager,_ConnectionEventData>_TypeInfo);
  FUN_03c8f898(System_Action<NpcStateType,_NpcStatePayload>_TypeInfo);
  FUN_03c8f898(System_Action<object,_object>_TypeInfo);
  FUN_03c8f898(System_Action<float,_float>_TypeInfo);
  FUN_03c8f898(System_Action<SplineContainer,_int>_TypeInfo);
  FUN_03c8f898(PTR_DAT_08ea7440);
  FUN_03c8f898(System_Action<string,_object[]>_TypeInfo);
  FUN_03c8f898(System_Action<string,_IWitWebSocketRequest>_TypeInfo);
  FUN_03c8f898(System_Action<string,_string>_TypeInfo);
  FUN_03c8f898(System_Action<Task,_object>_TypeInfo);
  FUN_03c8f898(System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo);
  FUN_03c8f898(System_Action<Vector3,_Quaternion>_TypeInfo);
  FUN_03c8f898(PTR_DAT_08ebd818);
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
  FUN_03c8f898(System_Action<Column,_int,_int>_TypeInfo);
  FUN_03c8f898(System_Action<int,_float[],_float>_TypeInfo);
  FUN_03c8f898(System_Action<Object,_string,_object[]>_TypeInfo);
  FUN_03c8f898(System_Action<PayloadData,_bool,_bool>_TypeInfo);
  FUN_03c8f898(PTR_DAT_08ecc768);
  FUN_03c8f898(PTR_DAT_08e95b58);
  FUN_03c8f898(System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo);
  FUN_03c8f898(System_Action<ulong,_int,_int>_TypeInfo);
  FUN_03c8f898(System_Action<VFXEventAttribute,_int,_bool>_TypeInfo);
  FUN_03c8f898(System_Action<VFXEventAttribute,_int,_float>_TypeInfo);
  FUN_03c8f898(PTR_DAT_08e861f8);
  FUN_03c8f898(System_Action<VFXEventAttribute,_int,_uint>_TypeInfo);
  FUN_03c8f898(System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo);
  FUN_03c8f898(System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo);
  FUN_03c8f898(
              System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
              );
  FUN_03c8f898(PTR_DAT_08edbe40);
  FUN_03c8f898(PTR_DAT_08ea7728);
  *(undefined1 *)(unaff_x20 + 0x8ab) = 1;
  lVar7 = thunk_FUN_03cf5234(*unaff_x21);
  FUN_06a42650(lVar7,*unaff_x19);
  puVar6 = System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo;
  puVar5 = System_Action<string,_object[]>_TypeInfo;
  puVar4 = System_Action<Column,_int>_TypeInfo;
  puVar3 = System_Action<AvatarLOD,_bool>_TypeInfo;
  puVar2 = System_Action<VisualElement>_TypeInfo;
  puVar1 = PTR_DAT_08edbe40;
  if (lVar7 != 0) {
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<LogData,_string>_TypeInfo,0x20000,
                 *(undefined8 *)System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
    FUN_06a43410(lVar7,*(undefined8 *)puVar3,0x20001,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)puVar2,0x20002,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)puVar1,0x40000,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)puVar4,0x70000,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)puVar5,0x70001,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<Object,_string,_object[]>_TypeInfo,0x40001,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<TTSSpeaker_TTSSpeakerRequestData>_TypeInfo,
                 0x70002,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<Column,_ColumnDataType>_TypeInfo,0x70003,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<VFXEventAttribute,_int,_float>_TypeInfo,0x70004,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<GameObject,_Mesh>_TypeInfo,0x70005,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<Column,_int,_int>_TypeInfo,0x70006,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<DebugUI_Field<Object>,_Object>_TypeInfo,0x70007,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<int,_bool>_TypeInfo,0x70008,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<ulong,_int,_int>_TypeInfo,0x20003,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<VFXEventAttribute,_int,_uint>_TypeInfo,0x40002,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo
                 ,0x70009,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo,
                 0x20004,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo,0x40003,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<ZipArchiveEntry>_TypeInfo,0x7000a,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo,0x20005,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<TurnStateType>_TypeInfo,0x7000b,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Action<vx_resp_account_control_communications_t>_TypeInfo,0x7000c,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<uint>_TypeInfo,0x7000d,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<Task,_object>_TypeInfo,0x20006,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<DebugUI_Field<int>,_int>_TypeInfo,0x40004,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08ebe9a8,0x20007,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08ecc768,0x10000,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08e96970,0x30000,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<DebugLogEntry,_int>_TypeInfo,0x20008,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08e95b58,0x40005,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Action<AuthenticationState,_AuthenticationState>_TypeInfo,0x20009,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                 ,0x2000a,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<WitWebSocketConnectionState>_TypeInfo,0x2000b,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                 ,0x2000c,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo,0x2000d,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<VFXEventAttribute,_int,_bool>_TypeInfo,0x10001,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08ebe9a0,0x2000e,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<NetworkManager,_ConnectionEventData>_TypeInfo,
                 0x2000f,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08ea7430,0x20010,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<KeyboardNavigationOperation,_EventBase>_TypeInfo
                 ,0x10002,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08ecbda0,0x40006,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<WebSocketCloseCode>_TypeInfo,0x20011,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<byte[],_int,_int>_TypeInfo,0x20012,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,
                 0x20013,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Action<OVRManager_PassthroughInitializationState>_TypeInfo,0x20014,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<DebugManager_UIMode,_bool>_TypeInfo,0x20015,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08e861c0,0x20016,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<Type>_TypeInfo,0x20017,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08e861c8,0x20018,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08e96128,0x7000e,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08f16c80,0x7000f,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08ecb928,0x40007,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<WeatherIconData>_TypeInfo,0x20019,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<string,_string>_TypeInfo,0x2001a,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo,0x2001b,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<LocomotionEvent,_Pose>_TypeInfo,0x2001c,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08e96ee0,0x2001d,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08ebd818,0x2001e,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<Format_SplitList>_TypeInfo,0x50000,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08ea7728,0x50001,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<WitConfiguration>_TypeInfo,0x30001,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo,
                 0x10003,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08ea7440,0x2001f,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Action<NetworkManager_ConnectionApprovalRequest,_NetworkManager_ConnectionApprovalResponse>_TypeInfo
                 ,0x50002,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08ecc4a0,0x40008,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<ProjectSettingsSO_ReleaseChannelData>_TypeInfo,
                 0x60000,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<object,_object>_TypeInfo,0x60001,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<PayloadData,_bool,_bool>_TypeInfo,0x60002,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<ulong>_TypeInfo,0x60003,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08edd618,0x50003,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<int,_float>_TypeInfo,0x30002,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<IInteractable,_Rigidbody>_TypeInfo,0x40009,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<VivoxMessage>_TypeInfo,0x10004,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<NpcStateType,_NpcStatePayload>_TypeInfo,0x10005,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<XRLayout,_Camera>_TypeInfo,0x10006,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<float,_float>_TypeInfo,0x30003,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<UserBaseInfo>_TypeInfo,0x10007,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<DebugUI_Field<bool>,_bool>_TypeInfo,0x30004,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo,
                 0x30005,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo,
                 0x30006,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<PointableCanvasModule_Pointer>_TypeInfo,0x30007,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<SplineContainer,_int>_TypeInfo,0x30008,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<string,_IWitWebSocketRequest>_TypeInfo,0x10008,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo,
                 0x4000a,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<int,_float[],_float>_TypeInfo,0x10009,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<bool,_List<OVRAnchor>>_TypeInfo,0x1000a,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<Vector3,_Quaternion>_TypeInfo,0x30009,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08f04f68,0x1000b,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)
                        System_Action<TTSSpeaker_TTSSpeakerRequestData,_string>_TypeInfo,0x1000c,
                 *(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)PTR_DAT_08e861f8,0x20020,*(undefined8 *)puVar6);
    FUN_06a43410(lVar7,*(undefined8 *)System_Action<LogData,_string>_TypeInfo,0x1000d,
                 *(undefined8 *)puVar6);
    puVar1 = System_Action<LobbyEventConnectionState>_TypeInfo;
    **(long **)(*(long *)System_Action<LobbyEventConnectionState>_TypeInfo + 0xb8) = lVar7;
    thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar7);
    lVar7 = thunk_FUN_03cf5234(*(undefined8 *)System_Buffers_ArrayPool<byte>_TypeInfo);
    FUN_069a34ac(lVar7,*(undefined8 *)
                        System_Action<IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_int,_Action<TransformDispatchData>>_TypeInfo
                );
    puVar1 = System_Action<long,_long,_uint,_Stream,_ZipArchiveEntry,_EventHandler>_TypeInfo;
    if (lVar7 != 0) {
      FUN_069a428c(lVar7,0x20000,*(undefined8 *)System_Action<LogData,_string>_TypeInfo,
                   *(undefined8 *)
                    System_Action<long,_long,_uint,_Stream,_ZipArchiveEntry,_EventHandler>_TypeInfo)
      ;
      FUN_069a428c(lVar7,0x20001,*(undefined8 *)System_Action<AvatarLOD,_bool>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20002,*(undefined8 *)System_Action<VisualElement>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x40000,*(undefined8 *)PTR_DAT_08edbe40,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x70000,*(undefined8 *)System_Action<Column,_int>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x70001,*(undefined8 *)System_Action<string,_object[]>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x40001,*(undefined8 *)System_Action<Object,_string,_object[]>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x70002,
                   *(undefined8 *)System_Action<TTSSpeaker_TTSSpeakerRequestData>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x70003,*(undefined8 *)System_Action<Column,_ColumnDataType>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x70004,
                   *(undefined8 *)System_Action<VFXEventAttribute,_int,_float>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x70005,*(undefined8 *)System_Action<GameObject,_Mesh>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x70006,*(undefined8 *)System_Action<Column,_int,_int>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x70007,
                   *(undefined8 *)System_Action<DebugUI_Field<Object>,_Object>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x70008,*(undefined8 *)System_Action<int,_bool>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20003,*(undefined8 *)System_Action<ulong,_int,_int>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x40002,*(undefined8 *)System_Action<VFXEventAttribute,_int,_uint>_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x70009,
                   *(undefined8 *)
                    System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20004,
                   *(undefined8 *)System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x40003,*(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x7000a,*(undefined8 *)System_Action<ZipArchiveEntry>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20005,
                   *(undefined8 *)System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x7000b,*(undefined8 *)System_Action<TurnStateType>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x7000c,
                   *(undefined8 *)System_Action<vx_resp_account_control_communications_t>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x7000d,*(undefined8 *)System_Action<uint>_TypeInfo,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20006,*(undefined8 *)System_Action<Task,_object>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x40004,*(undefined8 *)System_Action<DebugUI_Field<int>,_int>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20007,*(undefined8 *)PTR_DAT_08ebe9a8,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x10000,*(undefined8 *)PTR_DAT_08ecc768,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x30000,*(undefined8 *)PTR_DAT_08e96970,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20008,*(undefined8 *)System_Action<DebugLogEntry,_int>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x40005,*(undefined8 *)PTR_DAT_08e95b58,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20009,
                   *(undefined8 *)System_Action<AuthenticationState,_AuthenticationState>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2000a,
                   *(undefined8 *)
                    System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2000b,*(undefined8 *)System_Action<WitWebSocketConnectionState>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2000c,
                   *(undefined8 *)
                    System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2000d,*(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x10001,*(undefined8 *)System_Action<VFXEventAttribute,_int,_bool>_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2000e,*(undefined8 *)PTR_DAT_08ebe9a0,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2000f,
                   *(undefined8 *)System_Action<NetworkManager,_ConnectionEventData>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20010,*(undefined8 *)PTR_DAT_08ea7430,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x10002,
                   *(undefined8 *)System_Action<KeyboardNavigationOperation,_EventBase>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x40006,*(undefined8 *)PTR_DAT_08ecbda0,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20011,*(undefined8 *)System_Action<WebSocketCloseCode>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20012,*(undefined8 *)System_Action<byte[],_int,_int>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20013,
                   *(undefined8 *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20014,
                   *(undefined8 *)System_Action<OVRManager_PassthroughInitializationState>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20015,*(undefined8 *)System_Action<DebugManager_UIMode,_bool>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20016,*(undefined8 *)PTR_DAT_08e861c0,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20017,*(undefined8 *)System_Action<Type>_TypeInfo,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20018,*(undefined8 *)PTR_DAT_08e861c8,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x7000e,*(undefined8 *)PTR_DAT_08e96128,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x7000f,*(undefined8 *)PTR_DAT_08f16c80,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x40007,*(undefined8 *)PTR_DAT_08ecb928,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20019,*(undefined8 *)System_Action<WeatherIconData>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2001a,*(undefined8 *)System_Action<string,_string>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2001b,
                   *(undefined8 *)System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2001c,*(undefined8 *)System_Action<LocomotionEvent,_Pose>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2001d,*(undefined8 *)PTR_DAT_08e96ee0,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2001e,*(undefined8 *)PTR_DAT_08ebd818,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x50000,*(undefined8 *)System_Action<Format_SplitList>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x50001,*(undefined8 *)PTR_DAT_08ea7728,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x30001,*(undefined8 *)System_Action<WitConfiguration>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x10003,
                   *(undefined8 *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x2001f,*(undefined8 *)PTR_DAT_08ea7440,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x50002,
                   *(undefined8 *)
                    System_Action<NetworkManager_ConnectionApprovalRequest,_NetworkManager_ConnectionApprovalResponse>_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x40008,*(undefined8 *)PTR_DAT_08ecc4a0,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x60000,
                   *(undefined8 *)System_Action<ProjectSettingsSO_ReleaseChannelData>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x60001,*(undefined8 *)System_Action<object,_object>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x60002,*(undefined8 *)System_Action<PayloadData,_bool,_bool>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x60003,*(undefined8 *)System_Action<ulong>_TypeInfo,*(undefined8 *)puVar1)
      ;
      FUN_069a428c(lVar7,0x50003,*(undefined8 *)PTR_DAT_08edd618,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x30002,*(undefined8 *)System_Action<int,_float>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x40009,*(undefined8 *)System_Action<IInteractable,_Rigidbody>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x10004,*(undefined8 *)System_Action<VivoxMessage>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x10005,
                   *(undefined8 *)System_Action<NpcStateType,_NpcStatePayload>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x10006,*(undefined8 *)System_Action<XRLayout,_Camera>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x30003,*(undefined8 *)System_Action<float,_float>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x10007,*(undefined8 *)System_Action<UserBaseInfo>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x30004,*(undefined8 *)System_Action<DebugUI_Field<bool>,_bool>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x30005,
                   *(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x30006,
                   *(undefined8 *)
                    System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x30007,
                   *(undefined8 *)System_Action<PointableCanvasModule_Pointer>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x30008,*(undefined8 *)System_Action<SplineContainer,_int>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x10008,*(undefined8 *)System_Action<string,_IWitWebSocketRequest>_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x4000a,
                   *(undefined8 *)System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x10009,*(undefined8 *)System_Action<int,_float[],_float>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x1000a,*(undefined8 *)System_Action<bool,_List<OVRAnchor>>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x30009,*(undefined8 *)System_Action<Vector3,_Quaternion>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x1000b,*(undefined8 *)PTR_DAT_08f04f68,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x1000c,
                   *(undefined8 *)System_Action<TTSSpeaker_TTSSpeakerRequestData,_string>_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x20020,*(undefined8 *)PTR_DAT_08e861f8,*(undefined8 *)puVar1);
      FUN_069a428c(lVar7,0x1000d,*(undefined8 *)System_Action<LogData,_string>_TypeInfo,
                   *(undefined8 *)puVar1);
      plVar8 = (long *)(*(long *)(*(long *)System_Action<LobbyEventConnectionState>_TypeInfo + 0xb8)
                       + 8);
      *plVar8 = lVar7;
      thunk_FUN_03d233cc(plVar8,lVar7);
      lVar7 = thunk_FUN_03cf5234(*(undefined8 *)
                                  System_Buffers_ArrayPool<GrabFreeTransformer_GrabPointDelta>_TypeInfo
                                );
      FUN_04e2cf90(lVar7,*(undefined8 *)
                          System_Buffers_ArrayPool<GrabFreeTransformer_GrabPointDelta>_TypeInfo);
      puVar1 = System_Buffers_ArrayPool<char>_TypeInfo;
      if (lVar7 != 0) {
        FUN_04e2e194(lVar7,0x20000,*(undefined8 *)System_Buffers_ArrayPool<char>_TypeInfo);
        FUN_04e2e194(lVar7,0x20001,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20002,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x40000,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x70000,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x70001,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x40001,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x70002,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x70003,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x70004,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x70005,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x70006,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x70007,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x70008,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20003,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x40002,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x70009,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20004,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x40003,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x7000a,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20005,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x7000b,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x7000c,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x7000d,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20006,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x40004,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20007,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x10000,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20008,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x40005,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20009,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2000a,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2000b,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2000c,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2000d,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x10001,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2000e,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2000f,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20010,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x10002,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x40006,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20011,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20012,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20013,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20014,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20015,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20016,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20017,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20018,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x7000e,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x7000f,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x40007,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20019,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2001a,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2001b,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2001c,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2001d,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2001e,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x50000,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x50001,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x30001,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x10003,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x2001f,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x50002,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x50003,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x30002,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x40009,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x10004,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x10005,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x10006,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x30003,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x10007,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x30004,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x30005,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x30006,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x30007,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x30008,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x10008,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x4000a,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x10009,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x1000a,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x30009,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x1000b,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x1000c,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x20020,*(undefined8 *)puVar1);
        FUN_04e2e194(lVar7,0x1000d,*(undefined8 *)puVar1);
        plVar8 = (long *)(*(long *)(*(long *)System_Action<LobbyEventConnectionState>_TypeInfo +
                                   0xb8) + 0x10);
        *plVar8 = lVar7;
        thunk_FUN_03d233cc(plVar8,lVar7);
        lVar7 = thunk_FUN_03cf5234(*(undefined8 *)Meta_WitAi_ArrayPool<byte>_TypeInfo);
        System_Collections_Generic_Dictionary<object,_StyleComplexSelector_PseudoStateData>__Add
                  (lVar7,*(undefined8 *)
                          System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
                  );
        puVar1 = 
        System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo;
        if (lVar7 != 0) {
          FUN_069a0cb0(lVar7,0x70000,8,
                       *(undefined8 *)
                        System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo
                      );
          FUN_069a0cb0(lVar7,0x70006,8,*(undefined8 *)puVar1);
          FUN_069a0cb0(lVar7,0x40002,8,*(undefined8 *)puVar1);
          FUN_069a0cb0(lVar7,0x70009,8,*(undefined8 *)puVar1);
          FUN_069a0cb0(lVar7,0x7000a,8,*(undefined8 *)puVar1);
          FUN_069a0cb0(lVar7,0x7000b,8,*(undefined8 *)puVar1);
          FUN_069a0cb0(lVar7,0x10000,8,*(undefined8 *)puVar1);
          FUN_069a0cb0(lVar7,0x50000,1,*(undefined8 *)puVar1);
          FUN_069a0cb0(lVar7,0x50001,1,*(undefined8 *)puVar1);
          FUN_069a0cb0(lVar7,0x50002,1,*(undefined8 *)puVar1);
          FUN_069a0cb0(lVar7,0x50003,1,*(undefined8 *)puVar1);
          FUN_069a0cb0(lVar7,0x30002,8,*(undefined8 *)puVar1);
          plVar8 = (long *)(*(long *)(*(long *)System_Action<LobbyEventConnectionState>_TypeInfo +
                                     0xb8) + 0x18);
          *plVar8 = lVar7;
          thunk_FUN_03d233cc(plVar8,lVar7);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


