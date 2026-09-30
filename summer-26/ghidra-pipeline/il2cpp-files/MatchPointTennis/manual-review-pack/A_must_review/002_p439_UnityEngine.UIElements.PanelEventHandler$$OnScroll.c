/*
FUNCTION_NAME: UnityEngine.UIElements.PanelEventHandler$$OnScroll
ENTRY_POINT: 09732edc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 276
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_18;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_9;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_7;functionality_possible_biometrics_hits_4
*/


void UnityEngine_UIElements_PanelEventHandler__OnScroll(void)

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
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_04447ba8();
                    /* try { // try from 09732ee8 to 09832f0f has its CatchHandler @ 09732f24 */
  FUN_04447ba8(PTR_DAT_09f619c0);
  FUN_04447ba8(System_Action<XRInputButtonReader>_TypeInfo);
  FUN_04447ba8(System_Action<XRInputSubsystem>_TypeInfo);
  FUN_04447ba8(System_Action<XRInputValueReader>_TypeInfo);
                    /* try { // try from 09732f10 to 09832f3b has its CatchHandler @ 09732e84 */
  FUN_04447ba8(System_Action<XRMovableBody>_TypeInfo);
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 09732ee8 with catch @ 09732f24
                        */
  FUN_04447ba8(System_Action<XRNodeState>_TypeInfo);
  FUN_04447ba8(System_Action<float3>_TypeInfo);
                    /* try { // try from 09732f3c to 09832f3f has its CatchHandler @ 09732f6c */
  FUN_04447ba8(System_Action<vx_resp_account_control_communications_t>_TypeInfo);
                    /* try { // try from 09732f40 to 09832f6f has its CatchHandler @ 09732e84 */
  FUN_04447ba8(System_Action<Allocator2D_Row>_TypeInfo);
  FUN_04447ba8(System_Action<BestFitAllocator_Block>_TypeInfo);
  FUN_04447ba8(System_Action<DebugUI_Panel>_TypeInfo);
                    /* catch() { ... } // from try @ 09732f3c with catch @ 09732f6c */
  FUN_04447ba8(System_Action<DynamicAtlas_TextureInfo>_TypeInfo);
                    /* try { // try from 09732f70 to 09832f7b has its CatchHandler @ 09732f90 */
  FUN_04447ba8(System_Action<InputAction_CallbackContext>_TypeInfo);
                    /* try { // try from 09732f7c to 09832f87 has its CatchHandler @ 09732e84 */
  FUN_04447ba8(PTR_DAT_09f5be20);
                    /* try { // try from 09732f88 to 09832f8f has its CatchHandler @ 09732f90 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 09732f70 with catch @ 09732f90
                       catch(type#2 @ 00000000) { ... } // from try @ 09732f88 with catch @ 09732f90
                        */
  FUN_04447ba8(System_Action<InputStateHistory_Record>_TypeInfo);
  FUN_04447ba8(System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo);
  FUN_04447ba8(System_Action<OVRColocationSession_Data>_TypeInfo);
  FUN_04447ba8(System_Action<OVRHand_MicrogestureType>_TypeInfo);
  FUN_04447ba8(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
  FUN_04447ba8(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
  FUN_04447ba8(System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
  FUN_04447ba8(System_Action<PointableCanvasModule_Pointer>_TypeInfo);
  FUN_04447ba8(System_Action<Promise_ResolveHandler>_TypeInfo);
  FUN_04447ba8(System_Action<PropertyContainer_GetPropertyVisitor>_TypeInfo);
  FUN_04447ba8(System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo);
  FUN_04447ba8(PTR_DAT_09f5be28);
  FUN_04447ba8(System_Action<UserAvatarElement_AvatarListItemAction>_TypeInfo);
  FUN_04447ba8(System_Action<XRInputModalityManager_InputMode>_TypeInfo);
  FUN_04447ba8(System_Action<DebugUI_Field<bool>,_bool>_TypeInfo);
  FUN_04447ba8(System_Action<DebugUI_Field<int>,_int>_TypeInfo);
  FUN_04447ba8(System_Action<DebugUI_Field<Object>,_Object>_TypeInfo);
  FUN_04447ba8(System_Action<List<OVRAnchor>,_int>_TypeInfo);
  FUN_04447ba8(
              System_Action<NetworkList<NetworkGameManager_NetworkPlayerInfo>,_NetworkListEvent<NetworkGameManager_NetworkPlayerInfo>>_TypeInfo
              );
  FUN_04447ba8(
              System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
              );
  FUN_04447ba8(System_Action<AsyncOperationHandle,_Exception>_TypeInfo);
  FUN_04447ba8(System_Action<AuthenticationState,_AuthenticationState>_TypeInfo);
  FUN_04447ba8(System_Action<BinaryDataWriter,_object>_TypeInfo);
  FUN_04447ba8(System_Action<bool,_List<OVRAnchor>>_TypeInfo);
  FUN_04447ba8(System_Action<bool,_bool>_TypeInfo);
  FUN_04447ba8(System_Action<bool,_string>_TypeInfo);
  FUN_04447ba8(System_Action<bool,_Texture2D>_TypeInfo);
  FUN_04447ba8(System_Action<Column,_ColumnDataType>_TypeInfo);
  FUN_04447ba8(System_Action<Column,_int>_TypeInfo);
  FUN_04447ba8(System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo);
  FUN_04447ba8(System_Action<ControllerHand,_RepositionMode>_TypeInfo);
  FUN_04447ba8(System_Action<GameObject,_AxisEventData>_TypeInfo);
  FUN_04447ba8(System_Action<GameObject,_BaseEventData>_TypeInfo);
  FUN_04447ba8(System_Action<GameObject,_Mesh>_TypeInfo);
  FUN_04447ba8(System_Action<GameObject,_PointerEventData>_TypeInfo);
  FUN_04447ba8(System_Action<Handedness,_int>_TypeInfo);
  FUN_04447ba8(System_Action<IInteractable,_Rigidbody>_TypeInfo);
  FUN_04447ba8(System_Action<IPromise,_int>_TypeInfo);
  FUN_04447ba8(System_Action<InputControl,_InputEventPtr>_TypeInfo);
  FUN_04447ba8(System_Action<InputDevice,_InputDeviceChange>_TypeInfo);
  FUN_04447ba8(System_Action<InputEventPtr,_InputDevice>_TypeInfo);
  FUN_04447ba8(System_Action<int,_bool>_TypeInfo);
  FUN_04447ba8(System_Action<int,_GameObject>_TypeInfo);
  FUN_04447ba8(System_Action<int,_HierarchyNode>_TypeInfo);
  FUN_04447ba8(System_Action<int,_int>_TypeInfo);
  FUN_04447ba8(System_Action<int,_MovementDirection>_TypeInfo);
  FUN_04447ba8(System_Action<int,_NetworkDriver>_TypeInfo);
  FUN_04447ba8(System_Action<int,_float>_TypeInfo);
  FUN_04447ba8(System_Action<int,_string>_TypeInfo);
  FUN_04447ba8(System_Action<InventoryBundleUI,_SmartBundlePrice>_TypeInfo);
  FUN_04447ba8(System_Action<InventoryItem,_VirtualPurchaseDefinition>_TypeInfo);
  FUN_04447ba8(System_Action<KeyboardNavigationOperation,_EventBase>_TypeInfo);
  FUN_04447ba8(System_Action<LightCompiler,_Expression>_TypeInfo);
  FUN_04447ba8(System_Action<LocomotionEvent,_Pose>_TypeInfo);
  FUN_04447ba8(System_Action<LogData,_string>_TypeInfo);
  FUN_04447ba8(System_Action<LogData,_string>_TypeInfo);
  FUN_04447ba8(System_Action<MovementEventArgs,_float>_TypeInfo);
  FUN_04447ba8(System_Action<NetworkManager,_ConnectionEventData>_TypeInfo);
  FUN_04447ba8(System_Action<NetworkPlayer,_bool>_TypeInfo);
  FUN_04447ba8(System_Action<NetworkPlayer,_int>_TypeInfo);
  FUN_04447ba8(System_Action<NetworkPlayer,_ulong>_TypeInfo);
  FUN_04447ba8(System_Action<object,_AssetType>_TypeInfo);
  FUN_04447ba8(System_Action<object,_InputActionChange>_TypeInfo);
  FUN_04447ba8(System_Action<object,_object>_TypeInfo);
  FUN_04447ba8(System_Action<OculusLoadingProcess,_Error>_TypeInfo);
  FUN_04447ba8(System_Action<PointerEventData,_List<RaycastResult>>_TypeInfo);
  FUN_04447ba8(System_Action<PointerEventData,_TouchPhase>_TypeInfo);
  FUN_04447ba8(System_Action<RPMManualConfigurator,_RPMManualAssetData>_TypeInfo);
  FUN_04447ba8(PTR_DAT_09f72bc0);
  *(undefined1 *)(unaff_x20 + 0x594) = 1;
  lVar11 = thunk_FUN_0448520c(*unaff_x21);
  FUN_07412c18(lVar11,*unaff_x19);
  puVar10 = System_Action<KeyboardNavigationOperation,_EventBase>_TypeInfo;
  puVar9 = System_Action<Column,_int>_TypeInfo;
  puVar8 = System_Action<List<OVRAnchor>,_int>_TypeInfo;
  puVar7 = System_Action<UserAvatarElement_AvatarListItemAction>_TypeInfo;
  puVar6 = System_Action<Vector3>_TypeInfo;
  puVar5 = System_Action<Vector2Int>_TypeInfo;
  puVar4 = System_Action<VFXOutputEventArgs>_TypeInfo;
  puVar3 = System_Action<uint>_TypeInfo;
  puVar2 = System_Action<RequestFailedException>_TypeInfo;
  puVar1 = System_Action<Quaternion>_TypeInfo;
  if (lVar11 != 0) {
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<RectTransform>_TypeInfo,0xfffff8f0,
                 *(undefined8 *)System_Action<Quaternion>_TypeInfo);
    FUN_074139e4(lVar11,*(undefined8 *)puVar2,0xffd7ebfa,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)puVar8,0xffffff00,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)puVar5,0xffd4ff7f,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)puVar3,0xfffffff0,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)puVar10,0xffdcf5f5,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)puVar6,0xffc4e4ff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)puVar4,0xff000000,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)puVar9,0xffcdebff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)puVar7,0xffff0000,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<object,_object>_TypeInfo,0xffe22b8a,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<UnityWebRequest>_TypeInfo,0xff2a2aa5,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<object,_AssetType>_TypeInfo,0xff87b8de,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<DynamicAtlas_TextureInfo>_TypeInfo,0xffa09e5f,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<object,_InputActionChange>_TypeInfo,0xff00ff7f,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo,0xff1e69d2,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TutorialModule>_TypeInfo,0xff507fff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TMP_TextInfo>_TypeInfo,0xffed9564,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<VivoxParticipant>_TypeInfo,0xffdcf8ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<string>_TypeInfo,0xff3c14dc,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<GameObject,_PointerEventData>_TypeInfo,
                 0xffffff00,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<StringBuilder>_TypeInfo,0xff8b0000,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<ControllerHand,_RepositionMode>_TypeInfo,
                 0xff8b8b00,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<InputStateHistory_Record>_TypeInfo,0xff0b86b8,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<ServeModeOption>_TypeInfo,0xffa9a9a9,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<IPromise,_int>_TypeInfo,0xff006400,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<ReusableCollectionItem>_TypeInfo,0xffa9a9a9,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Task>_TypeInfo,0xff6bb7bd,*(undefined8 *)puVar1
                );
    FUN_074139e4(lVar11,*(undefined8 *)
                         System_Action<LocomotionGate_LocomotionModeEventArgs>_TypeInfo,0xff8b008b,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<UploadResponse>_TypeInfo,0xff2f6b55,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<SortColumnDescription>_TypeInfo,0xff008cff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TeleportInteractable>_TypeInfo,0xffcc3299,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Vector2>_TypeInfo,0xff00008b,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<DebugUI_Panel>_TypeInfo,0xff7a96e9,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<GameObject,_AxisEventData>_TypeInfo,0xff8fbc8f,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<ShareAndLocalizeParams>_TypeInfo,0xff8b3d48,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Tab>_TypeInfo,0xff4f4f2f,*(undefined8 *)puVar1)
    ;
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<bool,_string>_TypeInfo,0xff4f4f2f,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<InputEventPtr,_InputDevice>_TypeInfo,0xffd1ce00
                 ,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<AsyncOperationHandle,_Exception>_TypeInfo,
                 0xffd30094,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<bool,_bool>_TypeInfo,0xff9314ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<OVRHand_MicrogestureType>_TypeInfo,0xffffbf00,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TransformDispatchData>_TypeInfo,0xff696969,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<DebugUI_Field<int>,_int>_TypeInfo,0xff696969,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<int,_string>_TypeInfo,0xffff901e,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<int,_NetworkDriver>_TypeInfo,0xff2222b2,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TrackedDevice>_TypeInfo,0xfff0faff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)
                         System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                 ,0xff228b22,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Column,_ColumnDataType>_TypeInfo,0xffff00ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<UnityWebRequestAsyncOperation>_TypeInfo,
                 0xffdcdcdc,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<ResponseHelper>_TypeInfo,0xfffff8f8,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<MovementEventArgs,_float>_TypeInfo,0xff20a5da,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)PTR_DAT_09f5be20,0xff00d7ff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<SignUpResponse>_TypeInfo,0xff808080,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<SignInCodeInfo>_TypeInfo,0xff008000,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)
                         System_Action<InventoryItem,_VirtualPurchaseDefinition>_TypeInfo,0xff2fffad
                 ,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<VivoxMessage>_TypeInfo,0xff808080,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TimerState>_TypeInfo,0xfff0fff0,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<XRInputModalityManager_InputMode>_TypeInfo,
                 0xffb469ff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Texture>_TypeInfo,0xff5c5ccd,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<int,_MovementDirection>_TypeInfo,0xff82004b,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<PropertyContainer_GetPropertyVisitor>_TypeInfo,
                 0xfff0ffff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<RejectHandler>_TypeInfo,0xff8ce6f0,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<RPMManualConfigurator>_TypeInfo,0xfff5f0ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<UpdateProfileResponse>_TypeInfo,0xfffae6e6,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TreeViewExpansionChangedArgs>_TypeInfo,
                 0xff00fc7c,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<InventoryBundleUI,_SmartBundlePrice>_TypeInfo,
                 0xffcdfaff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TypePathVisitor>_TypeInfo,0xffe6d8ad,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo,0xff8080f0,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<PointerEventData,_List<RaycastResult>>_TypeInfo
                 ,0xffffffe0,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo,
                 0xffd2fafa,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<BinaryDataWriter,_object>_TypeInfo,0xffd3d3d3,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TypeDispatchData>_TypeInfo,0xff90ee90,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<ScrollerDirection>_TypeInfo,0xffd3d3d3,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<VectorImageRenderInfo>_TypeInfo,0xffc1b6ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<PointableCanvasModule_Pointer>_TypeInfo,
                 0xff7aa0ff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<SignalAsset>_TypeInfo,0xffaab220,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<VisualElement>_TypeInfo,0xffface87,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<RenderTexture>_TypeInfo,0xff998877,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<IInteractable,_Rigidbody>_TypeInfo,0xff998877,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<int,_int>_TypeInfo,0xffdec4b0,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<float>_TypeInfo,0xffe0ffff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)
                         System_Action<AuthenticationState,_AuthenticationState>_TypeInfo,0xff00ff00
                 ,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo,
                 0xff32cd32,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Transform>_TypeInfo,0xffe6f0fa,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<SignInResponse>_TypeInfo,0xffff00ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<LightCompiler,_Expression>_TypeInfo,0xff000080,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<InputDevice,_InputDeviceChange>_TypeInfo,
                 0xffaacd66,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<XRMovableBody>_TypeInfo,0xffcd0000,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<LogData,_string>_TypeInfo,0xffd355ba,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<int,_bool>_TypeInfo,0xffdb7093,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<NetworkPlayer,_int>_TypeInfo,0xff71b33c,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<OculusLoadingProcess,_Error>_TypeInfo,
                 0xffee687b,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<ReleaseVelocityInformation>_TypeInfo,0xff9afa00
                 ,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)
                         System_Action<NetworkList<NetworkGameManager_NetworkPlayerInfo>,_NetworkListEvent<NetworkGameManager_NetworkPlayerInfo>>_TypeInfo
                 ,0xffccd148,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<DebugUI_Field<bool>,_bool>_TypeInfo,0xff8515c7,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<GameObject,_BaseEventData>_TypeInfo,0xff701919,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<SubscriptionState>_TypeInfo,0xfffafff5,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Type>_TypeInfo,0xffe1e4ff,*(undefined8 *)puVar1
                );
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<XRInputSubsystem>_TypeInfo,0xffb5e4ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<int,_GameObject>_TypeInfo,0xffaddeff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<bool,_Texture2D>_TypeInfo,0xff800000,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<XRNodeState>_TypeInfo,0xffe6f5fd,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<WebSocketFrame>_TypeInfo,0xff008080,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TimeSpan>_TypeInfo,0xff238e6b,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<DebugUI_Field<Object>,_Object>_TypeInfo,
                 0xff00a5ff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo,
                 0xff0045ff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Promise_ResolveHandler>_TypeInfo,0xffd670da,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TeleportationMultiAnchorVolume>_TypeInfo,
                 0xffaae8ee,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Handedness,_int>_TypeInfo,0xff98fb98,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<ulong>_TypeInfo,0xffeeeeaf,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<XRInputValueReader>_TypeInfo,0xff9370db,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<XRInputButtonReader>_TypeInfo,0xffd5efff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Allocator2D_Row>_TypeInfo,0xffb9daff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<RPMAnimatorLocomotionState>_TypeInfo,0xff3f85cd
                 ,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<WebSocketFrame>_TypeInfo,0xffcbc0ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TennisPlayer>_TypeInfo,0xffdda0dd,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo,
                 0xffe6e0b0,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<XRHand>_TypeInfo,0xff800080,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<RPMManualConfiguration>_TypeInfo,0xff993366,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<TennisLocomotionMethod>_TypeInfo,0xff0000ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)
                         System_Action<RPMManualConfigurator,_RPMManualAssetData>_TypeInfo,
                 0xff8f8fbc,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<XRBodyTransformer>_TypeInfo,0xffe16941,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<float3>_TypeInfo,0xff13458b,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<LocomotionEvent,_Pose>_TypeInfo,0xff7280fa,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<InputControl,_InputEventPtr>_TypeInfo,
                 0xff60a4f4,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<LogData,_string>_TypeInfo,0xff578b2e,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<NetworkPlayer,_ulong>_TypeInfo,0xffeef5ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<SpriteAtlas>_TypeInfo,0xff2d52a0,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)PTR_DAT_09f5be28,0xffc0c0c0,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<SetItemBatchResponseResultsInner>_TypeInfo,
                 0xffebce87,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<NetworkPlayer,_bool>_TypeInfo,0xffcd5a6a,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<NetworkManager,_ConnectionEventData>_TypeInfo,
                 0xff908070,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Texture2D>_TypeInfo,0xff908070,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)PTR_DAT_09f619c0,0xfffafaff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)
                         System_Action<vx_resp_account_control_communications_t>_TypeInfo,0xff7fff00
                 ,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<GameObject,_Mesh>_TypeInfo,0xffb48246,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)PTR_DAT_09fd4a28,0xff8cb4d2,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<Score>_TypeInfo,0xff808000,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<InputAction_CallbackContext>_TypeInfo,
                 0xffd8bfd8,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<UserSession>_TypeInfo,0xff4763ff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)
                         System_Action<OVRManager_PassthroughInitializationState>_TypeInfo,0,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<RacketComponentConfiguration>_TypeInfo,
                 0xffd0e040,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<int,_float>_TypeInfo,0xffee82ee,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<User>_TypeInfo,0xffb3def5,*(undefined8 *)puVar1
                );
    FUN_074139e4(lVar11,*(undefined8 *)PTR_DAT_09f72bc0,0xffffffff,*(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<int,_HierarchyNode>_TypeInfo,0xfff5f5f5,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<bool,_List<OVRAnchor>>_TypeInfo,0xff00ffff,
                 *(undefined8 *)puVar1);
    FUN_074139e4(lVar11,*(undefined8 *)System_Action<PointerEventData,_TouchPhase>_TypeInfo,
                 0xff32cd9a,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_09fdd978;
    **(long **)(*(long *)PTR_DAT_09fdd978 + 0xb8) = lVar11;
    thunk_FUN_044bb4b4(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


