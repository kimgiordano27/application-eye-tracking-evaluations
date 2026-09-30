/*
FUNCTION_NAME: UnityEngine.EventSystems.StandaloneInputModule$$ForceAutoSelect
ENTRY_POINT: 0871c914
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 162
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_7;functionality_possible_biometrics_hits_2
*/


void UnityEngine_EventSystems_StandaloneInputModule__ForceAutoSelect
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  undefined4 unaff_w22;
  undefined8 unaff_x25;
  undefined4 unaff_w26;
  int unaff_w29;
  undefined8 in_stack_00000010;
  int iStack000000000000001c;
  int iStack0000000000000024;
  int iStack000000000000002c;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  
  uStack0000000000000034 = param_3;
  FUN_06a43410();
  FUN_06a43410();
  FUN_06a43410();
  FUN_06a43410();
  iStack000000000000002c = unaff_w29 + 6;
  FUN_06a43410();
  FUN_06a43410();
  FUN_06a43410();
  FUN_06a43410();
  iStack0000000000000024 = unaff_w21 + 9;
  FUN_06a43410();
  FUN_06a43410();
  FUN_06a43410();
  iStack000000000000001c = unaff_w21 + 0xb;
  FUN_06a43410();
  FUN_06a43410();
  FUN_06a43410();
  puVar1 = System_Action<LobbyEventConnectionState>_TypeInfo;
  **(undefined8 **)(*(long *)System_Action<LobbyEventConnectionState>_TypeInfo + 0xb8) = unaff_x25;
  thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  lVar2 = thunk_FUN_03cf5234(*(undefined8 *)System_Buffers_ArrayPool<byte>_TypeInfo);
  FUN_069a34ac(lVar2,*(undefined8 *)
                      System_Action<IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_int,_Action<TransformDispatchData>>_TypeInfo
              );
  puVar1 = System_Action<long,_long,_uint,_Stream,_ZipArchiveEntry,_EventHandler>_TypeInfo;
  if (lVar2 != 0) {
    FUN_069a428c(lVar2,0x20000,*(undefined8 *)System_Action<LogData,_string>_TypeInfo,
                 *(undefined8 *)
                  System_Action<long,_long,_uint,_Stream,_ZipArchiveEntry,_EventHandler>_TypeInfo);
    FUN_069a428c(lVar2,in_stack_00000010._4_4_,
                 *(undefined8 *)System_Action<AvatarLOD,_bool>_TypeInfo,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x20002,*(undefined8 *)System_Action<VisualElement>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x40000,*(undefined8 *)PTR_DAT_08edbe40,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x70000,*(undefined8 *)System_Action<Column,_int>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack00000000000000ac,
                 *(undefined8 *)System_Action<string,_object[]>_TypeInfo,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w26,*(undefined8 *)System_Action<Object,_string,_object[]>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack00000000000000a8,
                 *(undefined8 *)System_Action<TTSSpeaker_TTSSpeakerRequestData>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack00000000000000bc,
                 *(undefined8 *)System_Action<Column,_ColumnDataType>_TypeInfo,*(undefined8 *)puVar1
                );
    FUN_069a428c(lVar2,uStack00000000000000b8,
                 *(undefined8 *)System_Action<VFXEventAttribute,_int,_float>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack00000000000000b4,
                 *(undefined8 *)System_Action<GameObject,_Mesh>_TypeInfo,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x70006,*(undefined8 *)System_Action<Column,_int,_int>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w19 + 1,
                 *(undefined8 *)System_Action<DebugUI_Field<Object>,_Object>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w22,*(undefined8 *)System_Action<int,_bool>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 1,*(undefined8 *)System_Action<ulong,_int,_int>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x40002,*(undefined8 *)System_Action<VFXEventAttribute,_int,_uint>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack00000000000000a4,
                 *(undefined8 *)
                  System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack00000000000000a0,
                 *(undefined8 *)System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x40003,*(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack000000000000009c,*(undefined8 *)System_Action<ZipArchiveEntry>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000098,
                 *(undefined8 *)System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000094,*(undefined8 *)System_Action<TurnStateType>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000090,
                 *(undefined8 *)System_Action<vx_resp_account_control_communications_t>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack000000000000008c,*(undefined8 *)System_Action<uint>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 4,*(undefined8 *)System_Action<Task,_object>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000088,
                 *(undefined8 *)System_Action<DebugUI_Field<int>,_int>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 5,*(undefined8 *)PTR_DAT_08ebe9a8,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x10000,*(undefined8 *)PTR_DAT_08ecc768,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x30000,*(undefined8 *)PTR_DAT_08e96970,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000084,
                 *(undefined8 *)System_Action<DebugLogEntry,_int>_TypeInfo,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000080,*(undefined8 *)PTR_DAT_08e95b58,*(undefined8 *)puVar1)
    ;
    FUN_069a428c(lVar2,uStack000000000000007c,
                 *(undefined8 *)System_Action<AuthenticationState,_AuthenticationState>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 8,
                 *(undefined8 *)
                  System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 9,
                 *(undefined8 *)System_Action<WitWebSocketConnectionState>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000078,
                 *(undefined8 *)
                  System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000074,*(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x10001,*(undefined8 *)System_Action<VFXEventAttribute,_int,_bool>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 0xc,*(undefined8 *)PTR_DAT_08ebe9a0,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 0xd,
                 *(undefined8 *)System_Action<NetworkManager,_ConnectionEventData>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000070,*(undefined8 *)PTR_DAT_08ea7430,*(undefined8 *)puVar1)
    ;
    FUN_069a428c(lVar2,uStack000000000000006c,
                 *(undefined8 *)System_Action<KeyboardNavigationOperation,_EventBase>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x40006,*(undefined8 *)PTR_DAT_08ecbda0,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000068,
                 *(undefined8 *)System_Action<WebSocketCloseCode>_TypeInfo,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 0x10,*(undefined8 *)System_Action<byte[],_int,_int>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 0x11,
                 *(undefined8 *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000064,
                 *(undefined8 *)System_Action<OVRManager_PassthroughInitializationState>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000060,
                 *(undefined8 *)System_Action<DebugManager_UIMode,_bool>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 0x14,*(undefined8 *)PTR_DAT_08e861c0,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 0x15,*(undefined8 *)System_Action<Type>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack000000000000005c,*(undefined8 *)PTR_DAT_08e861c8,*(undefined8 *)puVar1)
    ;
    FUN_069a428c(lVar2,unaff_w19 + 8,*(undefined8 *)PTR_DAT_08e96128,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w19 + 9,*(undefined8 *)PTR_DAT_08f16c80,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x40007,*(undefined8 *)PTR_DAT_08ecb928,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000058,*(undefined8 *)System_Action<WeatherIconData>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 0x18,*(undefined8 *)System_Action<string,_string>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 0x19,
                 *(undefined8 *)System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000054,
                 *(undefined8 *)System_Action<LocomotionEvent,_Pose>_TypeInfo,*(undefined8 *)puVar1)
    ;
    FUN_069a428c(lVar2,uStack0000000000000050,*(undefined8 *)PTR_DAT_08e96ee0,*(undefined8 *)puVar1)
    ;
    FUN_069a428c(lVar2,unaff_w20 + 0x1c,*(undefined8 *)PTR_DAT_08ebd818,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x50000,*(undefined8 *)System_Action<Format_SplitList>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x50001,*(undefined8 *)PTR_DAT_08ea7728,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack00000000000000b0,
                 *(undefined8 *)System_Action<WitConfiguration>_TypeInfo,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w21 + 2,
                 *(undefined8 *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 0x1d,*(undefined8 *)PTR_DAT_08ea7440,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack000000000000004c,
                 *(undefined8 *)
                  System_Action<NetworkManager_ConnectionApprovalRequest,_NetworkManager_ConnectionApprovalResponse>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000048,*(undefined8 *)PTR_DAT_08ecc4a0,*(undefined8 *)puVar1)
    ;
    FUN_069a428c(lVar2,0x60000,
                 *(undefined8 *)System_Action<ProjectSettingsSO_ReleaseChannelData>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000044,*(undefined8 *)System_Action<object,_object>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x60002,*(undefined8 *)System_Action<PayloadData,_bool,_bool>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x60003,*(undefined8 *)System_Action<ulong>_TypeInfo,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x50003,*(undefined8 *)PTR_DAT_08edd618,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x30002,*(undefined8 *)System_Action<int,_float>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000040,
                 *(undefined8 *)System_Action<IInteractable,_Rigidbody>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack000000000000003c,*(undefined8 *)System_Action<VivoxMessage>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w21 + 4,
                 *(undefined8 *)System_Action<NpcStateType,_NpcStatePayload>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000038,
                 *(undefined8 *)System_Action<XRLayout,_Camera>_TypeInfo,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w29 + 1,*(undefined8 *)System_Action<float,_float>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w21 + 6,*(undefined8 *)System_Action<UserBaseInfo>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,uStack0000000000000034,
                 *(undefined8 *)System_Action<DebugUI_Field<bool>,_bool>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w29 + 3,
                 *(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w29 + 4,
                 *(undefined8 *)
                  System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w29 + 5,
                 *(undefined8 *)System_Action<PointableCanvasModule_Pointer>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,iStack000000000000002c,
                 *(undefined8 *)System_Action<SplineContainer,_int>_TypeInfo,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w21 + 7,
                 *(undefined8 *)System_Action<string,_IWitWebSocketRequest>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,0x4000a,
                 *(undefined8 *)System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w21 + 8,*(undefined8 *)System_Action<int,_float[],_float>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,iStack0000000000000024,
                 *(undefined8 *)System_Action<bool,_List<OVRAnchor>>_TypeInfo,*(undefined8 *)puVar1)
    ;
    FUN_069a428c(lVar2,unaff_w29 + 7,*(undefined8 *)System_Action<Vector3,_Quaternion>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w21 + 10,*(undefined8 *)PTR_DAT_08f04f68,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,iStack000000000000001c,
                 *(undefined8 *)System_Action<TTSSpeaker_TTSSpeakerRequestData,_string>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w20 + 0x1e,*(undefined8 *)PTR_DAT_08e861f8,*(undefined8 *)puVar1);
    FUN_069a428c(lVar2,unaff_w21 + 0xc,*(undefined8 *)System_Action<LogData,_string>_TypeInfo,
                 *(undefined8 *)puVar1);
    plVar3 = (long *)(*(long *)(*(long *)System_Action<LobbyEventConnectionState>_TypeInfo + 0xb8) +
                     8);
    *plVar3 = lVar2;
    thunk_FUN_03d233cc(plVar3,lVar2);
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)
                                System_Buffers_ArrayPool<GrabFreeTransformer_GrabPointDelta>_TypeInfo
                              );
    FUN_04e2cf90(lVar2,*(undefined8 *)
                        System_Buffers_ArrayPool<GrabFreeTransformer_GrabPointDelta>_TypeInfo);
    puVar1 = System_Buffers_ArrayPool<char>_TypeInfo;
    if (lVar2 != 0) {
      FUN_04e2e194(lVar2,0x20000,*(undefined8 *)System_Buffers_ArrayPool<char>_TypeInfo);
      FUN_04e2e194(lVar2,unaff_w21 + 0x10000,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x20002,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x40000,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x70000,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,uStack00000000000000ac,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w29 + 0xffff,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,uStack00000000000000a8,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,uStack00000000000000bc,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,uStack00000000000000b8,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,uStack00000000000000b4,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x70006,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w19 + 1,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w19 + 2,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 1,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x40002,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w19 + 3,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 2,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x40003,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w19 + 4,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 3,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w19 + 5,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w19 + 6,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w19 + 7,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 4,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x40004,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 5,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x10000,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 6,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x40005,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 7,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 8,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 9,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 10,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0xb,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x10001,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0xc,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0xd,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0xe,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 1,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x40006,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0xf,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x10,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x11,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x12,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x13,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x14,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x15,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x16,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w19 + 8,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w19 + 9,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x40007,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x17,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x18,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x19,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x1a,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x1b,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x1c,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x50000,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x50001,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,uStack00000000000000b0,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 2,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x1d,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x50002,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x50003,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x30002,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x40009,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 3,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 4,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 5,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w29 + 1,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 6,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x30004,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x30005,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w29 + 4,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w29 + 5,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x30008,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 7,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x4000a,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 8,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 9,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,0x30009,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 10,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 0xb,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w20 + 0x1e,*(undefined8 *)puVar1);
      FUN_04e2e194(lVar2,unaff_w21 + 0xc,*(undefined8 *)puVar1);
      plVar3 = (long *)(*(long *)(*(long *)System_Action<LobbyEventConnectionState>_TypeInfo + 0xb8)
                       + 0x10);
      *plVar3 = lVar2;
      thunk_FUN_03d233cc(plVar3,lVar2);
      lVar2 = thunk_FUN_03cf5234(*(undefined8 *)Meta_WitAi_ArrayPool<byte>_TypeInfo);
      System_Collections_Generic_Dictionary<object,_StyleComplexSelector_PseudoStateData>__Add
                (lVar2,*(undefined8 *)
                        System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
                );
      puVar1 = System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo;
      if (lVar2 != 0) {
        FUN_069a0cb0(lVar2,0x70000,8,
                     *(undefined8 *)
                      System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo
                    );
        FUN_069a0cb0(lVar2,0x70006,8,*(undefined8 *)puVar1);
        FUN_069a0cb0(lVar2,0x40002,8,*(undefined8 *)puVar1);
        FUN_069a0cb0(lVar2,unaff_w19 + 3,8,*(undefined8 *)puVar1);
        FUN_069a0cb0(lVar2,unaff_w19 + 4,8,*(undefined8 *)puVar1);
        FUN_069a0cb0(lVar2,unaff_w19 + 5,8,*(undefined8 *)puVar1);
        FUN_069a0cb0(lVar2,0x10000,8,*(undefined8 *)puVar1);
        FUN_069a0cb0(lVar2,0x50000,1,*(undefined8 *)puVar1);
        FUN_069a0cb0(lVar2,0x50001,1,*(undefined8 *)puVar1);
        FUN_069a0cb0(lVar2,0x50002,1,*(undefined8 *)puVar1);
        FUN_069a0cb0(lVar2,0x50003,1,*(undefined8 *)puVar1);
        FUN_069a0cb0(lVar2,0x30002,8,*(undefined8 *)puVar1);
        plVar3 = (long *)(*(long *)(*(long *)System_Action<LobbyEventConnectionState>_TypeInfo +
                                   0xb8) + 0x18);
        *plVar3 = lVar2;
        thunk_FUN_03d233cc(plVar3,lVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


