/*
FUNCTION_NAME: FUN_05a96bc8
ENTRY_POINT: 05a96bc8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05a96bc8(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  
  puVar11 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_SetResult__;
  puVar10 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_SetException__;
  puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_Create__;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_Start<WrappedLobbyService_<SubscribeToLobbyEventsAsync>d__11>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_AwaitUnsafeOnCompleted<TaskAwaiter,_WrappedLobbyService_<SubscribeToLobbyEventsAsync>d__11>__
  ;
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_get_Task__
  ;
  puVar6 = OVR_OpenVR_IVRInput__GetSkeletalBoneData_TypeInfo;
  puVar8 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
  puVar4 = PTR_DAT_06a10f28;
  puVar2 = PTR_DAT_069fc740;
  if ((DAT_06dc1cab & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_SetResult__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_SetStateMachine__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_get_Task__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_get_Task__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_BaselibQosRunner_<RunQosJob>d__7>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_Start<BaselibQosRunner_<RunQosJob>d__7>__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_Create__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_SetException__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_SetResult__)
    ;
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_SetStateMachine__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_get_Task__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<<JoinSession>g__JoinSessionAsClient_58_0>d>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_AwaitUnsafeOnCompleted<TaskAwaiter<SessionHandler>,_WrappedMultiplayerService_<TryHandleSessionCreationException>d__25>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_Start<SessionsManager_<<JoinSession>g__JoinSessionAsClient_58_0>d>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_Start<WrappedMultiplayerService_<TryHandleSessionCreationException>d__25>__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_Create__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_SetException__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_SetResult__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_SetStateMachine__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_get_Task__)
    ;
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<AsyncProtocolResult>,_MobileAuthenticatedStream_<StartOperation>d__57>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_BufferedReadStream_<ProcessReadAsync>d__2>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_DeflateManagedStream_<ReadAsyncCore>d__40>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_FixedSizeReadStream_<ProcessReadAsync>d__5>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_MobileAuthenticatedStream_<InnerRead>d__66>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_MonoChunkStream_<ProcessReadAsync>d__7>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_WebReadStream_<ReadAsync>d__28>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_WebResponseStream_<ReadAsync>d__40>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_WebResponseStream_<ReadAsync>d__40>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<TaskAwaiter<int>,_CryptoStream_<ReadAsyncInternal>d__37>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ValueTaskAwaiter<int>,_CryptoStream_<ReadAsyncCore>d__42>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebReadStream_<ReadAsync>d__28>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<BufferedReadStream_<ProcessReadAsync>d__2>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<CryptoStream_<ReadAsyncCore>d__42>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<CryptoStream_<ReadAsyncInternal>d__37>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<DeflateManagedStream_<ReadAsyncCore>d__40>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<InnerRead>d__66>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebReadStream_<ReadAsync>d__28>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebResponseStream_<ReadAsync>d__40>__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__);
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetException__);
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetResult__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_get_Task__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<JoinResponseBody>>,_WrappedRelayService_<JoinAllocationAsync>d__12>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_Start<WrappedRelayService_<JoinAllocationAsync>d__12>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_Create__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_SetException__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_SetResult__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_SetStateMachine__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_get_Task__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<List<string>>,_WrappedLobbyService_<LobbyConflictResolver>d__33>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<CreateLobbyAsync>d__9>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<CreateOrJoinLobbyAsync>d__10>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<GetLobbyAsync>d__16>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<JoinLobbyByCodeAsync>d__18>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<QuickJoinLobbyAsync>d__21>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<ReconnectToLobbyAsync>d__25>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<UpdateLobbyAsync>d__23>__
                );
    FUN_02d965b8(PTR_DAT_069fc740);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<UpdatePlayerAsync>d__24>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_Create__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_SetException__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<Lobby,_bool>>,_InternalDaLobbyService_<JoinLobbyByIdAsync>d__2>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_AutoMatchmakingNGO_<CreateLobby>d__11>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_AutoMatchmakingNGO_<JoinLobby>d__10>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_Start<WrappedLobbyService_<SubscribeToLobbyEventsAsync>d__11>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<CreateLobby>d__11>__
                );
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_AwaitUnsafeOnCompleted<TaskAwaiter,_WrappedLobbyService_<SubscribeToLobbyEventsAsync>d__11>__
                );
    FUN_02d965b8(PTR_DAT_06a17008);
    FUN_02d965b8(Unity_Services_Vivox_Mint_Http_HttpClient_<>c__DisplayClass4_0_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a17010);
    FUN_02d965b8(PTR_DAT_06a1a9f0);
    FUN_02d965b8(PTR_DAT_06a17020);
    FUN_02d965b8(System_Net_Http_HttpClientHandler_<>c_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRIOBuffer__Read_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRIOBuffer__Write_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10f20);
    FUN_02d965b8(System_Net_Http_HttpContent_FixedMemoryStream_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a17030);
    FUN_02d965b8(System_ComponentModel_UInt64Converter_var);
    FUN_02d965b8(System_Web_Util_HttpEncoder_<>c_TypeInfo);
    FUN_02d965b8(Unity_Hierarchy_HierarchyViewNodesEnumerable_Predicate_TypeInfo);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble_TypeInfo
                );
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetActionHandle_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_HttpHeaders_<GetEnumerator>d__19_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a1e340);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a13660);
    FUN_02d965b8(PTR_DAT_06a17038);
    FUN_02d965b8(PTR_DAT_06a19758);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<CreateOrJoinLobby>d__8>__
                );
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<JoinLobby>d__10>__
                );
    FUN_02d965b8(System_Net_Http_Headers_HttpHeaders_HeaderBucket_TypeInfo);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
                );
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetAnalogActionData_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetDigitalActionData_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_HttpRequestHeaders_<>c_TypeInfo);
    FUN_02d965b8(System_Web_HttpUtility_HttpQSCollection_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetInputSourceHandle_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo);
    FUN_02d965b8(System_Net_HttpWebRequest_NtlmAuthState_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetOriginTrackedDeviceInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetPoseActionData_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetSkeletalActionData_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a12628);
    FUN_02d965b8(Unity_Netcode_IDeferredNetworkMessageManager_TriggerType_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a1ac98);
    FUN_02d965b8(UnityEngine_InputSystem_LowLevel_IMECompositionString_Enumerator_TypeInfo);
    FUN_02d965b8(Assets_Scripts_HoleDifficulties_<>c__DisplayClass2_0_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetSkeletalBoneData_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetSkeletalBoneDataCompressed_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__SetActionManifestPath_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_IMEEvent_<>c_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<ERSORoadLog>_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__TriggerHapticVibrationAction_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRNotifications__CreateNotification_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<TryTask>d__9>__
                );
    FUN_02d965b8(UnityEngine_UIElements_IMGUIEvent_<>c_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRNotifications__RemoveNotification_TypeInfo);
    FUN_02d965b8(UnityEngine_IMGUITextHandle_TextHandleTuple_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a00020);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo);
    FUN_02d965b8(Assets_Scripts_HoleDifficultyImporter_<>c__DisplayClass3_0_TypeInfo);
    FUN_02d965b8(System_Net_IPAddress_ReadOnlyIPAddress_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a17050);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10f28);
    FUN_02d965b8(PTR_DAT_06a17068);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__AddApplicationManifest_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__CancelApplicationLaunch_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationAutoLaunch_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationKeyByIndex_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__CreateOverlay_TypeInfo);
    DAT_06dc1cab = 1;
  }
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_054948a0(uVar13,0);
  **(undefined8 **)(*(long *)puVar9 + 0xb8) = uVar13;
  LeanTween__value(*(undefined8 *)(*(long *)puVar9 + 0xb8),uVar13);
  uVar13 = FUN_02d966a4(*(undefined8 *)puVar7,0x37);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  FUN_05bca5c4(uVar13,*(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<CreateOrJoinLobby>d__8>__
               ,*(undefined8 *)puVar4,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x48);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  FUN_05bca5c4(uVar13,*(undefined8 *)puVar6,*(undefined8 *)puVar4,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x50);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_0552aca4(uVar13,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x58);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_05ab06cc(uVar13,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x60);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar10);
  FUN_0552aca4(uVar13,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x68);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar11);
  FUN_05ab0acc(uVar13,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x70);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<ReconnectToLobbyAsync>d__25>__
                             );
  FUN_0552aca4(uVar13,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x78);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<UpdateLobbyAsync>d__23>__
                             );
  FUN_0552aca4(uVar13,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x80);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<UpdatePlayerAsync>d__24>__
                             );
  FUN_05ab0da8(uVar13,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x88);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<Lobby,_bool>>,_InternalDaLobbyService_<JoinLobbyByIdAsync>d__2>__
                             );
  FUN_05ab06c4(uVar13,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x90);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<CreateLobby>d__11>__
                             );
  FUN_05ab0f58(uVar13,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x98);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_Start<WrappedMultiplayerService_<TryHandleSessionCreationException>d__25>__
                             );
  FUN_05a9a928();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xa0);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_Create__
                             );
  FUN_05a9a980();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xa8);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_SetException__
                             );
  FUN_05a9a9d4();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xb0);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_SetResult__
                             );
  FUN_05a9aa28();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xb8);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_SetStateMachine__
                             );
  FUN_05a9aa7c();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xc0);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_get_Task__
                             );
  FUN_05a9aad0();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 200);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_FixedSizeReadStream_<ProcessReadAsync>d__5>__
                             );
  FUN_05a9ab24();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xd0);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_DeflateManagedStream_<ReadAsyncCore>d__40>__
                             );
  FUN_05a9ab7c();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xd8);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<AsyncProtocolResult>,_MobileAuthenticatedStream_<StartOperation>d__57>__
                             );
  FUN_05a9abd4();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe0);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_BufferedReadStream_<ProcessReadAsync>d__2>__
                             );
  FUN_05a9ac2c();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe8);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_MonoChunkStream_<ProcessReadAsync>d__7>__
                             );
  FUN_05a9ac84();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xf0);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_WebReadStream_<ReadAsync>d__28>__
                             );
  FUN_05a9acdc();
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xf8);
  *puVar15 = uVar13;
  LeanTween__value(puVar15,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_WebResponseStream_<ReadAsync>d__40>__
                             );
  FUN_05a9ad30();
  lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
  *(undefined8 *)(lVar16 + 0x100) = uVar13;
  LeanTween__value(lVar16 + 0x100,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_WebResponseStream_<ReadAsync>d__40>__
                             );
  FUN_05a9ad84();
  lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
  *(undefined8 *)(lVar16 + 0x108) = uVar13;
  LeanTween__value(lVar16 + 0x108,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<TaskAwaiter<int>,_CryptoStream_<ReadAsyncInternal>d__37>__
                             );
  FUN_05a9add8();
  lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
  *(undefined8 *)(lVar16 + 0x110) = uVar13;
  LeanTween__value(lVar16 + 0x110,uVar13);
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_get_Task__
                             );
  FUN_05a9b49c();
  lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
  *(undefined8 *)(lVar16 + 0x118) = uVar13;
  LeanTween__value(lVar16 + 0x118,uVar13);
  lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x118);
  if (lVar16 != 0) {
    plVar14 = (long *)FUN_05a9ae30(lVar16,1,0);
    lVar16 = *(long *)puVar9;
    if (plVar14 == (long *)0x0) {
      lVar17 = *(long *)(lVar16 + 0xb8);
      *(undefined8 *)(lVar17 + 0x120) = 0;
    }
    else {
      bVar1 = *(byte *)(lVar16 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar16))
      goto LAB_05a9a8fc;
      lVar17 = *(long *)(lVar16 + 0xb8);
      *(long **)(lVar17 + 0x120) = plVar14;
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar16))
      goto LAB_05a9a8fc;
    }
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<BufferedReadStream_<ProcessReadAsync>d__2>__
    ;
    puVar5 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebReadStream_<ReadAsync>d__28>__
    ;
    puVar7 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
    ;
    puVar6 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ValueTaskAwaiter<int>,_CryptoStream_<ReadAsyncCore>d__42>__
    ;
    puVar8 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_Create__;
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_Start<BaselibQosRunner_<RunQosJob>d__7>__
    ;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_BaselibQosRunner_<RunQosJob>d__7>__
    ;
    LeanTween__value(lVar17 + 0x120,plVar14);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_05a9b49c();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x128) = uVar13;
    LeanTween__value(lVar16 + 0x128,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
    FUN_05a9afd4();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x130) = uVar13;
    LeanTween__value(lVar16 + 0x130,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_05a9b028();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x138) = uVar13;
    LeanTween__value(lVar16 + 0x138,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    FUN_05a9b07c();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x140) = uVar13;
    LeanTween__value(lVar16 + 0x140,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_05a9b0d0();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x148) = uVar13;
    LeanTween__value(lVar16 + 0x148,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
    FUN_05a9b49c();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x150) = uVar13;
    LeanTween__value(lVar16 + 0x150,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_05a9b49c();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x158) = uVar13;
    LeanTween__value(lVar16 + 0x158,uVar13);
    lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x158);
    if (lVar16 == 0) goto LAB_05a9a904;
    plVar14 = (long *)FUN_05a9ae30(lVar16,1,0);
    lVar16 = *(long *)puVar9;
    if (plVar14 == (long *)0x0) {
      lVar17 = *(long *)(lVar16 + 0xb8);
      *(undefined8 *)(lVar17 + 0x160) = 0;
    }
    else {
      bVar1 = *(byte *)(lVar16 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar16))
      goto LAB_05a9a8fc;
      lVar17 = *(long *)(lVar16 + 0xb8);
      *(long **)(lVar17 + 0x160) = plVar14;
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar16))
      goto LAB_05a9a8fc;
    }
    puVar12 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
    ;
    puVar11 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
    ;
    puVar10 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<InnerRead>d__66>__
    ;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
    ;
    puVar5 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<DeflateManagedStream_<ReadAsyncCore>d__40>__
    ;
    puVar7 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<CryptoStream_<ReadAsyncInternal>d__37>__
    ;
    puVar6 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<CryptoStream_<ReadAsyncCore>d__42>__
    ;
    puVar8 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_get_Task__;
    puVar4 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_SetResult__;
    puVar2 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_SetException__;
    LeanTween__value(lVar17 + 0x160,plVar14);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
    FUN_05a9b12c();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x168) = uVar13;
    LeanTween__value(lVar16 + 0x168,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    FUN_05a9b180();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x170) = uVar13;
    LeanTween__value(lVar16 + 0x170,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_05a9b49c();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x178) = uVar13;
    LeanTween__value(lVar16 + 0x178,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_05a9b180();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x180) = uVar13;
    LeanTween__value(lVar16 + 0x180,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar11);
    FUN_05a9b1dc();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x188) = uVar13;
    LeanTween__value(lVar16 + 0x188,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar10);
    FUN_05a9b234();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 400) = uVar13;
    LeanTween__value(lVar16 + 400,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
    FUN_05a9b49c();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x198) = uVar13;
    LeanTween__value(lVar16 + 0x198,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_05a9b49c();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x1a0) = uVar13;
    LeanTween__value(lVar16 + 0x1a0,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar12);
    FUN_05a9b294();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x1a8) = uVar13;
    LeanTween__value(lVar16 + 0x1a8,uVar13);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_05a9b49c();
    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
    *(undefined8 *)(lVar16 + 0x1b0) = uVar13;
    LeanTween__value(lVar16 + 0x1b0,uVar13);
    lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x1b0);
    if (lVar16 != 0) {
      plVar14 = (long *)FUN_05a9ae30(lVar16,1,0);
      lVar16 = *(long *)puVar9;
      if (plVar14 == (long *)0x0) {
        lVar17 = *(long *)(lVar16 + 0xb8);
        *(undefined8 *)(lVar17 + 0x1b8) = 0;
      }
      else {
        bVar1 = *(byte *)(lVar16 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar16)) {
LAB_05a9a8fc:
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar14);
        }
        lVar17 = *(long *)(lVar16 + 0xb8);
        *(long **)(lVar17 + 0x1b8) = plVar14;
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar16))
        goto LAB_05a9a8fc;
      }
      puVar12 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_get_Task__;
      puVar11 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
      ;
      puVar10 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetResult__;
      puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetException__;
      puVar5 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebResponseStream_<ReadAsync>d__40>__
      ;
      puVar7 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebReadStream_<ReadAsync>d__28>__
      ;
      puVar6 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_AwaitUnsafeOnCompleted<TaskAwaiter<SessionHandler>,_WrappedMultiplayerService_<TryHandleSessionCreationException>d__25>__
      ;
      puVar8 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<<JoinSession>g__JoinSessionAsClient_58_0>d>__
      ;
      puVar4 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_SetStateMachine__;
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_SetStateMachine__;
      LeanTween__value(lVar17 + 0x1b8,plVar14);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
      FUN_05a9b180();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x1c0) = uVar13;
      LeanTween__value(lVar16 + 0x1c0,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
      FUN_05a9b180();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x1c8) = uVar13;
      LeanTween__value(lVar16 + 0x1c8,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
      FUN_05a9b49c();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x1d0) = uVar13;
      LeanTween__value(lVar16 + 0x1d0,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_05a9b2f8();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x1d8) = uVar13;
      LeanTween__value(lVar16 + 0x1d8,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar10);
      FUN_05a9b34c();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x1e0) = uVar13;
      LeanTween__value(lVar16 + 0x1e0,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
      FUN_05a9b3a0();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x1e8) = uVar13;
      LeanTween__value(lVar16 + 0x1e8,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
      FUN_05a9b3f4();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x1f0) = uVar13;
      LeanTween__value(lVar16 + 0x1f0,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar11);
      FUN_05a9b448();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x1f8) = uVar13;
      LeanTween__value(lVar16 + 0x1f8,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar12);
      FUN_05a9b49c();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x200) = uVar13;
      LeanTween__value(lVar16 + 0x200,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_Create__
                                 );
      FUN_05a9b4f0();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x208) = uVar13;
      LeanTween__value(lVar16 + 0x208,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<JoinResponseBody>>,_WrappedRelayService_<JoinAllocationAsync>d__12>__
                                 );
      FUN_05a9b548();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x210) = uVar13;
      LeanTween__value(lVar16 + 0x210,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_Start<WrappedRelayService_<JoinAllocationAsync>d__12>__
                                 );
      FUN_05a9b5a0();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x218) = uVar13;
      LeanTween__value(lVar16 + 0x218,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_SetResult__
                                 );
      FUN_05a9b49c();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x220) = uVar13;
      LeanTween__value(lVar16 + 0x220,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_SetStateMachine__
                                 );
      FUN_05a9b5fc();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x228) = uVar13;
      LeanTween__value(lVar16 + 0x228,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_get_Task__
                                 );
      FUN_05a9b650();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x230) = uVar13;
      LeanTween__value(lVar16 + 0x230,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<List<string>>,_WrappedLobbyService_<LobbyConflictResolver>d__33>__
                                 );
      FUN_05a9b6a4();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x238) = uVar13;
      LeanTween__value(lVar16 + 0x238,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<CreateLobbyAsync>d__9>__
                                 );
      FUN_05a9b6f8();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x240) = uVar13;
      LeanTween__value(lVar16 + 0x240,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<GetLobbyAsync>d__16>__
                                 );
      FUN_05a9b74c();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x248) = uVar13;
      LeanTween__value(lVar16 + 0x248,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<QuickJoinLobbyAsync>d__21>__
                                 );
      FUN_05a9b7a0();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x250) = uVar13;
      LeanTween__value(lVar16 + 0x250,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                                 );
      FUN_05a9b7f8();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 600) = uVar13;
      LeanTween__value(lVar16 + 600,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                 );
      FUN_05a9b49c();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x260) = uVar13;
      LeanTween__value(lVar16 + 0x260,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_SetException__
                                 );
      FUN_05a9b49c();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x268) = uVar13;
      LeanTween__value(lVar16 + 0x268,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_Start<SessionsManager_<<JoinSession>g__JoinSessionAsClient_58_0>d>__
                                 );
      FUN_05a9b858();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x270) = uVar13;
      LeanTween__value(lVar16 + 0x270,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_MobileAuthenticatedStream_<InnerRead>d__66>__
                                 );
      FUN_05a9b8ac();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x278) = uVar13;
      LeanTween__value(lVar16 + 0x278,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<CreateOrJoinLobbyAsync>d__10>__
                                 );
      FUN_05a9b858();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x280) = uVar13;
      LeanTween__value(lVar16 + 0x280,uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<JoinLobbyByCodeAsync>d__18>__
                                 );
      FUN_05a9b904();
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      *(undefined8 *)(lVar16 + 0x288) = uVar13;
      LeanTween__value(lVar16 + 0x288,uVar13);
      plVar14 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,0xd);
      if (plVar14 != (long *)0x0) {
        lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x200);
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar17 == 0)) {
LAB_05a9a8f0:
          uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar13,0);
        }
        if ((int)plVar14[3] != 0) {
          plVar14[4] = lVar16;
          LeanTween__value(plVar14 + 4,lVar16);
          lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x150);
          if ((lVar16 != 0) &&
             (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
          goto LAB_05a9a8f0;
          if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
            plVar14[5] = lVar16;
            LeanTween__value(plVar14 + 5,lVar16);
            lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x158);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
            goto LAB_05a9a8f0;
            if (2 < *(uint *)(plVar14 + 3)) {
              plVar14[6] = lVar16;
              LeanTween__value(plVar14 + 6,lVar16);
              lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x160);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar17 == 0)
                 ) goto LAB_05a9a8f0;
              if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                plVar14[7] = lVar16;
                LeanTween__value(plVar14 + 7,lVar16);
                lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x118);
                if ((lVar16 != 0) &&
                   (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40)),
                   lVar17 == 0)) goto LAB_05a9a8f0;
                if (4 < *(uint *)(plVar14 + 3)) {
                  plVar14[8] = lVar16;
                  LeanTween__value(plVar14 + 8,lVar16);
                  lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x120);
                  if ((lVar16 != 0) &&
                     (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar17 == 0)) goto LAB_05a9a8f0;
                  if (5 < *(uint *)(plVar14 + 3)) {
                    plVar14[9] = lVar16;
                    LeanTween__value(plVar14 + 9,lVar16);
                    lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x1b0);
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar17 == 0)) goto LAB_05a9a8f0;
                    if (6 < *(uint *)(plVar14 + 3)) {
                      plVar14[10] = lVar16;
                      LeanTween__value(plVar14 + 10,lVar16);
                      lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x1b8);
                      if ((lVar16 != 0) &&
                         (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40)),
                         lVar17 == 0)) goto LAB_05a9a8f0;
                      if ((*(uint *)(plVar14 + 3) & 0xfffffff8) != 0) {
                        plVar14[0xb] = lVar16;
                        LeanTween__value(plVar14 + 0xb,lVar16);
                        lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x1d8);
                        if ((lVar16 != 0) &&
                           (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40)),
                           lVar17 == 0)) goto LAB_05a9a8f0;
                        if (8 < *(uint *)(plVar14 + 3)) {
                          plVar14[0xc] = lVar16;
                          LeanTween__value(plVar14 + 0xc,lVar16);
                          lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x128);
                          if ((lVar16 != 0) &&
                             (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40)),
                             lVar17 == 0)) goto LAB_05a9a8f0;
                          if (9 < *(uint *)(plVar14 + 3)) {
                            plVar14[0xd] = lVar16;
                            LeanTween__value(plVar14 + 0xd,lVar16);
                            lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x1f0);
                            if ((lVar16 != 0) &&
                               (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar14 + 0x40))
                               , lVar17 == 0)) goto LAB_05a9a8f0;
                            if (10 < *(uint *)(plVar14 + 3)) {
                              plVar14[0xe] = lVar16;
                              LeanTween__value(plVar14 + 0xe,lVar16);
                              lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x1a0);
                              if ((lVar16 != 0) &&
                                 (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                      (*plVar14 + 0x40)),
                                 lVar17 == 0)) goto LAB_05a9a8f0;
                              if (0xb < *(uint *)(plVar14 + 3)) {
                                plVar14[0xf] = lVar16;
                                LeanTween__value(plVar14 + 0xf,lVar16);
                                lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
                                *(long **)(lVar16 + 0x290) = plVar14;
                                LeanTween__value(lVar16 + 0x290,plVar14);
                                plVar14 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,0xd);
                                if (plVar14 == (long *)0x0) goto LAB_05a9a904;
                                lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x200);
                                if ((lVar16 != 0) &&
                                   (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                        (*plVar14 + 0x40)),
                                   lVar17 == 0)) goto LAB_05a9a8f0;
                                if ((int)plVar14[3] != 0) {
                                  plVar14[4] = lVar16;
                                  LeanTween__value(plVar14 + 4,lVar16);
                                  lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x150);
                                  if ((lVar16 != 0) &&
                                     (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                          (*plVar14 + 0x40)),
                                     lVar17 == 0)) goto LAB_05a9a8f0;
                                  if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
                                    plVar14[5] = lVar16;
                                    LeanTween__value(plVar14 + 5,lVar16);
                                    lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x158);
                                    if ((lVar16 != 0) &&
                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                            (*plVar14 + 0x40)),
                                       lVar17 == 0)) goto LAB_05a9a8f0;
                                    if (2 < *(uint *)(plVar14 + 3)) {
                                      plVar14[6] = lVar16;
                                      LeanTween__value(plVar14 + 6,lVar16);
                                      lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x160);
                                      if ((lVar16 != 0) &&
                                         (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                              (*plVar14 + 0x40)),
                                         lVar17 == 0)) goto LAB_05a9a8f0;
                                      if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                                        plVar14[7] = lVar16;
                                        LeanTween__value(plVar14 + 7,lVar16);
                                        lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x118
                                                          );
                                        if ((lVar16 != 0) &&
                                           (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                                (*plVar14 + 0x40)),
                                           lVar17 == 0)) goto LAB_05a9a8f0;
                                        if (4 < *(uint *)(plVar14 + 3)) {
                                          plVar14[8] = lVar16;
                                          LeanTween__value(plVar14 + 8,lVar16);
                                          lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) +
                                                            0x120);
                                          if ((lVar16 != 0) &&
                                             (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                                  (*plVar14 + 0x40))
                                             , lVar17 == 0)) goto LAB_05a9a8f0;
                                          if (5 < *(uint *)(plVar14 + 3)) {
                                            plVar14[9] = lVar16;
                                            LeanTween__value(plVar14 + 9,lVar16);
                                            lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1b0);
                                            if ((lVar16 != 0) &&
                                               (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                                    (*plVar14 + 0x40
                                                                                    )), lVar17 == 0)
                                               ) goto LAB_05a9a8f0;
                                            if (6 < *(uint *)(plVar14 + 3)) {
                                              plVar14[10] = lVar16;
                                              LeanTween__value(plVar14 + 10,lVar16);
                                              lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) +
                                                                0x1b8);
                                              if ((lVar16 != 0) &&
                                                 (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40)),
                                                 lVar17 == 0)) goto LAB_05a9a8f0;
                                              if ((*(uint *)(plVar14 + 3) & 0xfffffff8) != 0) {
                                                plVar14[0xb] = lVar16;
                                                LeanTween__value(plVar14 + 0xb,lVar16);
                                                lVar16 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8)
                                                                  + 0x1d8);
                                                if ((lVar16 != 0) &&
                                                   (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40)),
                                                   lVar17 == 0)) goto LAB_05a9a8f0;
                                                if (8 < *(uint *)(plVar14 + 3)) {
                                                  plVar14[0xc] = lVar16;
                                                  LeanTween__value(plVar14 + 0xc,lVar16);
                                                  lVar16 = *(long *)(*(long *)(*(long *)puVar9 +
                                                                              0xb8) + 0x128);
                                                  if ((lVar16 != 0) &&
                                                     (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (9 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xd] = lVar16;
                                                    LeanTween__value(plVar14 + 0xd,lVar16);
                                                    lVar16 = *(long *)(*(long *)(*(long *)puVar9 +
                                                                                0xb8) + 0x1e8);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (10 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xe] = lVar16;
                                                    LeanTween__value(plVar14 + 0xe,lVar16);
                                                    lVar16 = *(long *)(*(long *)(*(long *)puVar9 +
                                                                                0xb8) + 0x1a0);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_AutoMatchmakingNGO_<JoinLobby>d__10>__
                                                  ;
                                                  puVar4 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_AutoMatchmakingNGO_<CreateLobby>d__11>__
                                                  ;
                                                  puVar2 = 
                                                  Assets_Scripts_HoleDifficultyImporter_<>c__DisplayClass3_0_TypeInfo
                                                  ;
                                                  if (0xb < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xf] = lVar16;
                                                    LeanTween__value(plVar14 + 0xf,lVar16);
                                                    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
                                                    *(long **)(lVar16 + 0x298) = plVar14;
                                                    LeanTween__value(lVar16 + 0x298,plVar14);
                                                    plVar14 = (long *)FUN_02d966a4(*(undefined8 *)
                                                                                    puVar4,0x26);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xb0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar2,uVar13
                                                                );
                                                    if (plVar14 == (long *)0x0) goto LAB_05a9a904;
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  Unity_Hierarchy_HierarchyViewNodesEnumerable_Predicate_TypeInfo
                                                  ;
                                                  if ((int)plVar14[3] != 0) {
                                                    plVar14[4] = lVar16;
                                                    LeanTween__value(plVar14 + 4,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x148);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar2,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
                                                    plVar14[5] = lVar16;
                                                    LeanTween__value(plVar14 + 5,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xb8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar2,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = PTR_DAT_06a17030;
                                                  if (2 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[6] = lVar16;
                                                    LeanTween__value(plVar14 + 6,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              200);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar6,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  System_Net_Http_HttpClientHandler_<>c_TypeInfo;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                                                    plVar14[7] = lVar16;
                                                    LeanTween__value(plVar14 + 7,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xd0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar6,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar7 = PTR_DAT_06a1e340;
                                                  if (4 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[8] = lVar16;
                                                    LeanTween__value(plVar14 + 8,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xe0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar7,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  System_Net_Http_Headers_HttpHeaders_<GetEnumerator>d__19_TypeInfo
                                                  ;
                                                  if (5 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[9] = lVar16;
                                                    LeanTween__value(plVar14 + 9,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xe8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = PTR_DAT_06a17038;
                                                  if (6 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[10] = lVar16;
                                                    LeanTween__value(plVar14 + 10,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xf8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  System_Net_Http_Headers_HttpHeaders_HeaderBucket_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffff8) != 0) {
                                                    plVar14[0xb] = lVar16;
                                                    LeanTween__value(plVar14 + 0xb,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x120);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  System_Collections_Generic_List<ERSORoadLog>_TypeInfo
                                                  ;
                                                  if (8 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xc] = lVar16;
                                                    LeanTween__value(plVar14 + 0xc,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x118);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  Assets_Scripts_HoleDifficulties_<>c__DisplayClass2_0_TypeInfo
                                                  ;
                                                  if (9 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xd] = lVar16;
                                                    LeanTween__value(plVar14 + 0xd,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x128);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  UnityEngine_UIElements_IMEEvent_<>c_TypeInfo;
                                                  if (10 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xe] = lVar16;
                                                    LeanTween__value(plVar14 + 0xe,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x130);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = PTR_DAT_06a17068;
                                                  if (0xb < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xf] = lVar16;
                                                    LeanTween__value(plVar14 + 0xf,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x108);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<JoinLobby>d__10>__
                                                  ;
                                                  if (0xc < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x10] = lVar16;
                                                    LeanTween__value(plVar14 + 0x10,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x140);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<TryTask>d__9>__
                                                  ;
                                                  if (0xd < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x11] = lVar16;
                                                    LeanTween__value(plVar14 + 0x11,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x108);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  Unity_Netcode_IDeferredNetworkMessageManager_TriggerType_TypeInfo
                                                  ;
                                                  if (0xe < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x12] = lVar16;
                                                    LeanTween__value(plVar14 + 0x12,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xc0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  Unity_Services_Vivox_Mint_Http_HttpClient_<>c__DisplayClass4_0_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffff0) != 0) {
                                                    plVar14[0x13] = lVar16;
                                                    LeanTween__value(plVar14 + 0x13,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1f8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationAutoLaunch_TypeInfo
                                                  ;
                                                  if (0x10 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x14] = lVar16;
                                                    LeanTween__value(plVar14 + 0x14,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x168);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = System_Web_Util_HttpEncoder_<>c_TypeInfo;
                                                  if (0x11 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x15] = lVar16;
                                                    LeanTween__value(plVar14 + 0x15,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x180);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = PTR_DAT_06a1ac98;
                                                  if (0x12 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x16] = lVar16;
                                                    LeanTween__value(plVar14 + 0x16,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x150);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  System_Net_Http_Headers_HttpRequestHeaders_<>c_TypeInfo
                                                  ;
                                                  if (0x13 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x17] = lVar16;
                                                    LeanTween__value(plVar14 + 0x17,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x158);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  UnityEngine_UIElements_IMGUIEvent_<>c_TypeInfo;
                                                  if (0x14 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x18] = lVar16;
                                                    LeanTween__value(plVar14 + 0x18,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x160);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = PTR_DAT_06a17010;
                                                  if (0x15 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x19] = lVar16;
                                                    LeanTween__value(plVar14 + 0x19,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x168);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar5,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Net_HttpWebRequest_NtlmAuthState_TypeInfo;
                                                  if (0x16 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1a] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1a,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1b0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Net_Http_HttpContent_FixedMemoryStream_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1b] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1b,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1b8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRApplications__AddApplicationManifest_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1c] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1c,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1d8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Web_HttpUtility_HttpQSCollection_TypeInfo;
                                                  if (0x19 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1d] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1d,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x108);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationKeyByIndex_TypeInfo
                                                  ;
                                                  if (0x1a < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1e] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1e,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x140);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Net_IPAddress_ReadOnlyIPAddress_TypeInfo;
                                                  if (0x1b < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1f] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1f,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x108);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a10f20;
                                                  if (0x1c < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x20] = lVar16;
                                                    LeanTween__value(plVar14 + 0x20,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x200);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a13660;
                                                  if (0x1d < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x21] = lVar16;
                                                    LeanTween__value(plVar14 + 0x21,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x210);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo
                                                  ;
                                                  if (0x1e < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x22] = lVar16;
                                                    LeanTween__value(plVar14 + 0x22,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x218);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  UnityEngine_InputSystem_LowLevel_IMECompositionString_Enumerator_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar14 + 3) & 0xffffffe0) != 0) {
                                                    plVar14[0x23] = lVar16;
                                                    LeanTween__value(plVar14 + 0x23,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x228);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRApplications__CancelApplicationLaunch_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x24] = lVar16;
                                                    LeanTween__value(plVar14 + 0x24,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x240);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x25] = lVar16;
                                                    LeanTween__value(plVar14 + 0x25,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x230);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  UnityEngine_IMGUITextHandle_TextHandleTuple_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x26] = lVar16;
                                                    LeanTween__value(plVar14 + 0x26,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x238);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a1a9f0;
                                                  if (0x23 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x27] = lVar16;
                                                    LeanTween__value(plVar14 + 0x27,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xa8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a12628;
                                                  if (0x24 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x28] = lVar16;
                                                    LeanTween__value(plVar14 + 0x28,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x248);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar16,*(undefined8 *)puVar3,uVar13
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo
                                                  ;
                                                  if (0x25 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x29] = lVar16;
                                                    LeanTween__value(plVar14 + 0x29,lVar16);
                                                    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
                                                    *(long **)(lVar16 + 0x2a0) = plVar14;
                                                    LeanTween__value(lVar16 + 0x2a0,plVar14);
                                                    plVar14 = (long *)FUN_02d966a4(*(undefined8 *)
                                                                                    puVar4,0x2d);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x120);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar3,uVar13
                                                                 ,0xb);
                                                    if (plVar14 == (long *)0x0) goto LAB_05a9a904;
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = OVR_OpenVR_IVRIOBuffer__Open_TypeInfo;
                                                  if ((int)plVar14[3] != 0) {
                                                    plVar14[4] = lVar16;
                                                    LeanTween__value(plVar14 + 4,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x118);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  OVR_OpenVR_IVROverlay__CreateOverlay_TypeInfo;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
                                                    plVar14[5] = lVar16;
                                                    LeanTween__value(plVar14 + 5,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x150);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,5);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  OVR_OpenVR_IVRInput__GetActionHandle_TypeInfo;
                                                  if (2 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[6] = lVar16;
                                                    LeanTween__value(plVar14 + 6,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x158);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,5);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                                                    plVar14[7] = lVar16;
                                                    LeanTween__value(plVar14 + 7,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x160);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo;
                                                  if (4 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[8] = lVar16;
                                                    LeanTween__value(plVar14 + 8,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1a0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,9);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo
                                                  ;
                                                  if (5 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[9] = lVar16;
                                                    LeanTween__value(plVar14 + 9,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1b0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,0x28);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo
                                                  ;
                                                  if (6 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[10] = lVar16;
                                                    LeanTween__value(plVar14 + 10,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1b8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffff8) != 0) {
                                                    plVar14[0xb] = lVar16;
                                                    LeanTween__value(plVar14 + 0xb,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1d8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = PTR_DAT_06a19758;
                                                  if (8 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xc] = lVar16;
                                                    LeanTween__value(plVar14 + 0xc,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x198);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,0x28);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  OVR_OpenVR_IVRInput__GetSkeletalActionData_TypeInfo
                                                  ;
                                                  if (9 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xd] = lVar16;
                                                    LeanTween__value(plVar14 + 0xd,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1e8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (10 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xe] = lVar16;
                                                    LeanTween__value(plVar14 + 0xe,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xa0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<CreateOrJoinLobby>d__8>__
                                                  ,uVar13,0xffffffff);
                                                  if ((lVar16 != 0) &&
                                                     (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  OVR_OpenVR_IVRInput__TriggerHapticVibrationAction_TypeInfo
                                                  ;
                                                  if (0xb < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xf] = lVar16;
                                                    LeanTween__value(plVar14 + 0xf,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xa8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
                                                  ;
                                                  if (0xc < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x10] = lVar16;
                                                    LeanTween__value(plVar14 + 0x10,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xb0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar4,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0xd < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x11] = lVar16;
                                                    LeanTween__value(plVar14 + 0x11,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xb8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a17050;
                                                  if (0xe < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x12] = lVar16;
                                                    LeanTween__value(plVar14 + 0x12,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xc0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x25);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffff0) != 0) {
                                                    plVar14[0x13] = lVar16;
                                                    LeanTween__value(plVar14 + 0x13,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xd0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar6,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x10 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x14] = lVar16;
                                                    LeanTween__value(plVar14 + 0x14,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xd8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar7,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x11 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x15] = lVar16;
                                                    LeanTween__value(plVar14 + 0x15,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xf8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)
                                                                         PTR_DAT_06a17038,uVar13,0xb
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a17008;
                                                  if (0x12 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x16] = lVar16;
                                                    LeanTween__value(plVar14 + 0x16,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x100);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetInputSourceHandle_TypeInfo
                                                  ;
                                                  if (0x13 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x17] = lVar16;
                                                    LeanTween__value(plVar14 + 0x17,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x110);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x14 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x18] = lVar16;
                                                    LeanTween__value(plVar14 + 0x18,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x138);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)
                                                                         PTR_DAT_06a17068,uVar13,0xb
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__SetActionManifestPath_TypeInfo
                                                  ;
                                                  if (0x15 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x19] = lVar16;
                                                    LeanTween__value(plVar14 + 0x19,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xf0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetOriginTrackedDeviceInfo_TypeInfo
                                                  ;
                                                  if (0x16 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1a] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1a,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x188);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRNotifications__RemoveNotification_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1b] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1b,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              400);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetSkeletalBoneDataCompressed_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1c] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1c,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x250);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1d] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1d,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              600);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetAnalogActionData_TypeInfo;
                                                  if (0x1a < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1e] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1e,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x148);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0xb);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x1b < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1f] = lVar16;
                                                    LeanTween__value(plVar14 + 0x1f,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x168);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar5,uVar13
                                                                 ,0x1f);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo;
                                                  if (0x1c < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x20] = lVar16;
                                                    LeanTween__value(plVar14 + 0x20,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x170);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x12);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRNotifications__CreateNotification_TypeInfo
                                                  ;
                                                  if (0x1d < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x21] = lVar16;
                                                    LeanTween__value(plVar14 + 0x21,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x178);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x28);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a00020;
                                                  if (0x1e < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x22] = lVar16;
                                                    LeanTween__value(plVar14 + 0x22,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x180);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x1d);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo;
                                                  if ((*(uint *)(plVar14 + 3) & 0xffffffe0) != 0) {
                                                    plVar14[0x23] = lVar16;
                                                    LeanTween__value(plVar14 + 0x23,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1a8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x22);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x24] = lVar16;
                                                    LeanTween__value(plVar14 + 0x24,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1c0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x1d);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x25] = lVar16;
                                                    LeanTween__value(plVar14 + 0x25,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1c8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x1d);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetDigitalActionData_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x26] = lVar16;
                                                    LeanTween__value(plVar14 + 0x26,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1d0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x26);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = OVR_OpenVR_IVRIOBuffer__Read_TypeInfo;
                                                  if (0x23 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x27] = lVar16;
                                                    LeanTween__value(plVar14 + 0x27,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1e0);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x21);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a17020;
                                                  if (0x24 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x28] = lVar16;
                                                    LeanTween__value(plVar14 + 0x28,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x1f8);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x1c);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x25 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x29] = lVar16;
                                                    LeanTween__value(plVar14 + 0x29,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x200);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)
                                                                         PTR_DAT_06a10f20,uVar13,0xb
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x26 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2a] = lVar16;
                                                    LeanTween__value(plVar14 + 0x2a,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x208);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)
                                                                         PTR_DAT_06a13660,uVar13,0xb
                                                                );
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = System_ComponentModel_UInt64Converter_var
                                                  ;
                                                  if (0x27 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2b] = lVar16;
                                                    LeanTween__value(plVar14 + 0x2b,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x220);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x23);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo
                                                  ;
                                                  if (0x28 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2c] = lVar16;
                                                    LeanTween__value(plVar14 + 0x2c,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x228);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x2c);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetPoseActionData_TypeInfo;
                                                  if (0x29 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2d] = lVar16;
                                                    LeanTween__value(plVar14 + 0x2d,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x230);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x2b);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = OVR_OpenVR_IVRIOBuffer__Write_TypeInfo;
                                                  if (0x2a < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2e] = lVar16;
                                                    LeanTween__value(plVar14 + 0x2e,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x238);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x21);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo
                                                  ;
                                                  if (0x2b < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2f] = lVar16;
                                                    LeanTween__value(plVar14 + 0x2f,lVar16);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0x240);
                                                    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar16,*(undefined8 *)puVar2,uVar13
                                                                 ,0x2a);
                                                    if ((lVar16 != 0) &&
                                                       (lVar17 = thunk_FUN_02dd3048(lVar16,*(
                                                  undefined8 *)(*plVar14 + 0x40)), lVar17 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x2c < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x30] = lVar16;
                                                    LeanTween__value(plVar14 + 0x30,lVar16);
                                                    lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
                                                    *(long **)(lVar16 + 0x2a8) = plVar14;
                                                    LeanTween__value(lVar16 + 0x2a8,plVar14);
                                                    FUN_05a9b9f4();
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
    }
  }
LAB_05a9a904:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


