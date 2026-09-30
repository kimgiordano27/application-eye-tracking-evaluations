/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch3indirectTouch
ENTRY_POINT: 0642f660
PROGRAM: waitwhat-libil2cpp.so
SCORE: 167
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_21;validity_or_gating_hits_5;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_20;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_14;functionality_possible_biometrics_hits_4
*/


long UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch3indirectTouch
               (long param_1)

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
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xf08));
  FUN_03188a78(System_Net_NetworkInformation_ifaddrs_var);
  FUN_03188a78(System_Net_NetworkInformation_MacOsStructs_ifaddrs_var);
  FUN_03188a78(PTR_DAT_071038b8);
  FUN_03188a78(System_Net_NetworkInformation_AixStructs_ifreq_var);
  FUN_03188a78(System_Net_NetworkInformation_MacOsStructs_sockaddr_var);
  FUN_03188a78(System_Net_NetworkInformation_sockaddr_in_var);
  FUN_03188a78(System_Net_NetworkInformation_AixStructs_sockaddr_in_var);
  FUN_03188a78(System_Net_NetworkInformation_MacOsStructs_sockaddr_in_var);
  FUN_03188a78(System_Net_NetworkInformation_sockaddr_in6_var);
  FUN_03188a78(System_Net_NetworkInformation_AixStructs_sockaddr_in6_var);
  FUN_03188a78(PTR_DAT_071038c0);
  FUN_03188a78(System_Net_NetworkInformation_MacOsStructs_sockaddr_in6_var);
  FUN_03188a78(System_Net_NetworkInformation_sockaddr_ll_var);
  FUN_03188a78(UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_var);
  FUN_03188a78(System_Array_SorterGenericArray_var);
  FUN_03188a78(System_Array_SorterObjectArray_var);
  FUN_03188a78(AttachablesAuthoringSceneManager_SocketCreationInfo_var);
  FUN_03188a78(PTR_DAT_071038c8);
  FUN_03188a78(PTR_DAT_071038d0);
  FUN_03188a78(System_ComponentModel_AttributeCollection_AttributeEntry_var);
  FUN_03188a78(UnityEngine_UIElements_Internal_AutoCompletePathVisitor_VisitedPropertyScope_var);
  FUN_03188a78(UnityEngine_Awaitable_AwaitableAndFrameIndex_var);
  FUN_03188a78(PTR_DAT_071038d8);
  FUN_03188a78(UnityEngine_Awaitable_AwaitableAsyncMethodBuilder_var);
  FUN_03188a78(UnityEngine_Awaitable_Awaiter_var);
  FUN_03188a78(Fusion_BehaviourUtils_DeferredJoin_var);
  FUN_03188a78(Fusion_BehaviourUtils_NameDeferred_var);
  FUN_03188a78(UnityEngine_Rendering_Blitter_BlitColorAndDepthPassNames_var);
  FUN_03188a78(PTR_DAT_071038f0);
  FUN_03188a78(UnityEngine_Rendering_Blitter_BlitShaderPassNames_var);
  FUN_03188a78(Oculus_Avatar2_CAPI_ovrAvatar2EntityManifestationFlags_var);
  FUN_03188a78(PTR_DAT_071038f8);
  FUN_03188a78(Oculus_Avatar2_CAPI_ovrAvatar2EntityViewFlags_var);
  FUN_03188a78(Oculus_Avatar2_CAPI_ovrAvatar2Matrix4f_var);
  FUN_03188a78(PTR_DAT_07103900);
  FUN_03188a78(Oculus_Avatar2_CAPI_ovrAvatar2Quatf_var);
  FUN_03188a78(PTR_DAT_070c4048);
  FUN_03188a78(Oculus_Avatar2_CAPI_ovrAvatar2Transform_var);
  FUN_03188a78(Oculus_Avatar2_CAPI_ovrAvatar2Vector2f_var);
  FUN_03188a78(Oculus_Avatar2_CAPI_ovrAvatar2Vector3f_var);
  FUN_03188a78(Oculus_Avatar2_CAPI_ovrAvatar2Vector4f_var);
  FUN_03188a78(PTR_DAT_07103910);
  FUN_03188a78(System_Runtime_Serialization_CollectionDataContract_DictionaryEnumerator_var);
  FUN_03188a78(
              System_Runtime_Serialization_CollectionDataContract_GenericDictionaryEnumerator<K,_V>_var
              );
  FUN_03188a78(PTR_DAT_071015a8);
  FUN_03188a78(System_Net_CommandStream_PipelineEntry_var);
  FUN_03188a78(PTR_DAT_07103918);
  FUN_03188a78(
              UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData_NativePassIterator_var
              );
  FUN_03188a78(System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_var);
  FUN_03188a78(PTR_DAT_07103920);
  FUN_03188a78(
              System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<TResult>_var
              );
  FUN_03188a78(
              System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_var
              );
  FUN_03188a78(
              System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter<TResult>_var
              );
  FUN_03188a78(UnityEngine_Rendering_ContextContainer_Item_var);
  FUN_03188a78(Meta_XR_BuildingBlocks_ControllerButtonsMapper_ButtonClickAction_var);
  FUN_03188a78(Unity_Properties_ConversionRegistry_ConverterKey_var);
  FUN_03188a78(PTR_DAT_07103928);
  FUN_03188a78(UnityEngine_UIElements_CreationContext_AttributeOverrideRange_var);
  FUN_03188a78(PTR_DAT_07103938);
  FUN_03188a78(UnityEngine_UIElements_CreationContext_SerializedDataOverrideRange_var);
  FUN_03188a78(System_Runtime_Remoting_Channels_CrossAppDomainSink_ProcessMessageRes_var);
  FUN_03188a78(UnityEngine_XR_OpenXR_Features_Interactions_DPadInteraction_DPad_var);
  FUN_03188a78(PTR_DAT_070fb770);
  FUN_03188a78(UnityEngine_UIElements_DataBindingManager_BindingDataCollection_var);
  FUN_03188a78(UnityEngine_UIElements_DataBindingManager_BindingRequest_var);
  FUN_03188a78(UnityEngine_UIElements_DataBindingManager_ChangesFromUI_var);
  FUN_03188a78(UnityEngine_UIElements_DataBindingManager_IgnoreUIChangesData_var);
  FUN_03188a78(UnityEngine_UIElements_DataBindingManager_IgnoreUIChangesScope_var);
  FUN_03188a78(System_Data_DataError_ColumnError_var);
  FUN_03188a78(System_Data_DataTable_DSRowDiffIdUsageSection_var);
  FUN_03188a78(System_Data_DataTable_RowDiffIdUsageSection_var);
  FUN_03188a78(
              UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_var
              );
  FUN_03188a78(UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_TaaDebugMode_var);
  FUN_03188a78(UnityEngine_Rendering_Universal_DecalEntityManager_CombinedChunks_var);
  FUN_03188a78(
              Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
              );
  FUN_03188a78(PTR_DAT_071023a0);
  FUN_03188a78(UnityEngine_UI_DefaultControls_Resources_var);
  FUN_03188a78(UnityEngine_UIElements_DefaultEventSystem_FocusBasedEventSequenceContext_var);
  FUN_03188a78(UnityEngine_InputSystem_DefaultInputActions_PlayerActions_var);
  FUN_03188a78(UnityEngine_InputSystem_DefaultInputActions_UIActions_var);
  FUN_03188a78(UnityEngine_Rendering_Universal_Internal_DeferredLights_InitParams_var);
  FUN_03188a78(System_DelegateSerializationHolder_DelegateEntry_var);
  FUN_03188a78(UnityEngine_InputSystem_Controls_DpadControl_DpadAxisControl_var);
  FUN_03188a78(PTR_DAT_07103960);
  FUN_03188a78(UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
  FUN_03188a78(PTR_DAT_07103968);
  FUN_03188a78(System_Reflection_Internal_EncodingHelper_Encoding_GetString_var);
  FUN_03188a78(System_Reflection_Internal_EncodingHelper_String_CreateStringFromEncoding_var);
  FUN_03188a78(System_Enum_EnumResult_var);
  FUN_03188a78(System_Xml_Serialization_EnumMap_EnumMapMember_var);
  FUN_03188a78(UnityEngine_UIElements_EventCallbackRegistry_DynamicCallbackList_var);
  FUN_03188a78(PTR_DAT_07103978);
  FUN_03188a78(UnityEngine_UIElements_EventDispatcher_DispatchContext_var);
  FUN_03188a78(UnityEngine_UIElements_EventDispatcher_EventRecord_var);
  FUN_03188a78(UnityEngine_InputForUI_EventProvider_Registration_var);
  FUN_03188a78(UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var);
  FUN_03188a78(System_Threading_ExecutionContext_Reader_var);
  FUN_03188a78(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
  FUN_03188a78(System_Xml_Schema_FacetsChecker_FacetsCompiler_var);
  FUN_03188a78(UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_var);
  FUN_03188a78(Oculus_Interaction_PoseDetection_FingerFeatureStateDictionary_HandFingerState_var);
  FUN_03188a78(Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_FingerStateThresholds_var
              );
  FUN_03188a78(UnityEngine_UIElements_FocusController_FocusedElement_var);
  FUN_03188a78(UnityEngine_Rendering_Universal_Internal_ForwardLights_InitParams_var);
  FUN_03188a78(Fusion_Statistics_FusionStatsGraphBase_FusionStatBuffer_var);
  FUN_03188a78(Fusion_FusionUnityLoggerBase_LogContext_var);
  FUN_03188a78(UnityEngine_Rendering_GPUInstanceDataBufferGrower_GPUResources_var);
  FUN_03188a78(UnityEngine_Rendering_GPUInstanceDataBufferUploader_GPUResources_var);
  FUN_03188a78(UnityEngine_Rendering_GPUPrefixSum_DirectArgs_var);
  FUN_03188a78(UnityEngine_Rendering_GPUPrefixSum_IndirectDirectArgs_var);
  FUN_03188a78(PTR_DAT_07103990);
  FUN_03188a78(UnityEngine_Rendering_GPUPrefixSum_SupportResources_var);
  FUN_03188a78(UnityEngine_Rendering_GPUPrefixSum_SystemResources_var);
  FUN_03188a78(UnityEngine_Rendering_GPUSort_Args_var);
  FUN_03188a78(UnityEngine_Rendering_GPUSort_SupportResources_var);
  FUN_03188a78(UnityEngine_Rendering_GPUSort_SystemResources_var);
  FUN_03188a78(PTR_DAT_071015b8);
  FUN_03188a78(System_Guid_GuidResult_var);
  FUN_03188a78(MyBox_GuidManager_GuidInfo_var);
  FUN_03188a78(PTR_DAT_071039a8);
  FUN_03188a78(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_var);
  FUN_03188a78(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_var);
  FUN_03188a78(UnityEngine_InputSystem_HID_HID_HIDElementDescriptor_var);
  FUN_03188a78(UnityEngine_InputSystem_HID_HIDParser_HIDItemStateGlobal_var);
  FUN_03188a78(PTR_DAT_071039b8);
  FUN_03188a78(UnityEngine_InputSystem_HID_HIDParser_HIDItemStateLocal_var);
  FUN_03188a78(PTR_DAT_071039c0);
  FUN_03188a78(
              UnityEngine_XR_OpenXR_Features_Interactions_HPReverbG2ControllerProfile_ReverbG2Controller_var
              );
  FUN_03188a78(
              UnityEngine_XR_OpenXR_Features_Interactions_HTCViveControllerProfile_ViveController_var
              );
  FUN_03188a78(
              UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
              );
  FUN_03188a78(PTR_DAT_071039d0);
  FUN_03188a78(Oculus_Interaction_HandGrab_Recorder_HandGrabPoseLiveRecorder_RecorderStep_var);
  FUN_03188a78(Oculus_Interaction_HandGrab_HandGrabUtils_HandGrabInteractableData_var);
  FUN_03188a78(Oculus_Interaction_HandGrab_HandGrabUtils_HandGrabPoseData_var);
  FUN_03188a78(
              UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
              );
  FUN_03188a78(UnityEngine_XR_Hands_OpenXR_HandTracking_DestroyingSubsystemEventArgs_var);
  FUN_03188a78(UnityEngine_XR_Hands_OpenXR_HandTracking_SubsystemCreatedEventArgs_var);
  FUN_03188a78(Unity_Hierarchy_HierarchyNodeTypeHandlerBaseEnumerable_Enumerator_var);
  FUN_03188a78(Unity_Hierarchy_HierarchyViewModel_Enumerator_var);
  FUN_03188a78(System_Net_HttpWebRequest_AuthorizationState_var);
  FUN_03188a78(IAPManager_IAPPack_var);
  FUN_03188a78(Oisoi_UI_ImageBrowser_ImageBrowserEntryDesc_var);
  FUN_03188a78(System_Reflection_Internal_ImmutableByteArrayInterop_ByteArrayUnion_var);
  FUN_03188a78(UnityEngine_UIElements_InlineStyleAccess_InlineRule_var);
  FUN_03188a78(UnityEngine_InputSystem_InputAction_CallbackContext_var);
  FUN_03188a78(UnityEngine_InputSystem_InputActionMap_BindingOverrideListJson_var);
  FUN_03188a78(UnityEngine_InputSystem_InputActionMap_DeviceArray_var);
  FUN_03188a78(UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_var);
  FUN_03188a78(UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_var);
  FUN_03188a78(UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_var);
  FUN_03188a78(UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_var);
  FUN_03188a78(UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_var);
  FUN_03188a78(PTR_DAT_071039e8);
  FUN_03188a78(UnityEngine_InputSystem_InputActionSetupExtensions_ControlSchemeSyntax_var);
  FUN_03188a78(UnityEngine_InputSystem_InputActionState_GlobalState_var);
  FUN_03188a78(UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr_var);
  FUN_03188a78(UnityEngine_InputSystem_Utilities_InputActionTrace_Enumerator_var);
  FUN_03188a78(UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding_var);
  FUN_03188a78(UnityEngine_InputSystem_InputControlExtensions_ControlBuilder_var);
  FUN_03188a78(UnityEngine_InputSystem_InputControlExtensions_DeviceBuilder_var);
  FUN_03188a78(UnityEngine_InputSystem_InputControlExtensions_InputEventControlCollection_var);
  FUN_03188a78(PTR_DAT_071039f0);
  FUN_03188a78(UnityEngine_InputSystem_InputControlExtensions_InputEventControlEnumerator_var);
  FUN_03188a78(UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_var);
  FUN_03188a78(UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_var);
  FUN_03188a78(PTR_DAT_071039f8);
  FUN_03188a78(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem_var);
  FUN_03188a78(UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_var);
  FUN_03188a78(
              UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJsonNameAndDescriptorOnly_var
              );
  FUN_03188a78(UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_var);
  FUN_03188a78(PTR_DAT_07103a00);
  FUN_03188a78(UnityEngine_InputSystem_InputControlPath_PathParser_var);
  FUN_03188a78(UnityEngine_InputSystem_Layouts_InputDeviceMatcher_MatcherJson_var);
  FUN_03188a78(UnityEngine_InputSystem_InputManager_StateChangeMonitorListener_var);
  FUN_03188a78(PTR_DAT_070c20c8);
  FUN_03188a78(UnityEngine_InputSystem_InputManager_StateChangeMonitorTimeout_var);
  FUN_03188a78(UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice_var);
  FUN_03188a78(UnityEngine_InputSystem_LowLevel_InputStateHistory_Enumerator_var);
  FUN_03188a78(UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_var);
  FUN_03188a78(UnityEngine_InputSystem_Plugins_InputForUI_InputSystemProvider_Configuration_var);
  FUN_03188a78(PTR_DAT_070cbe10);
  FUN_03188a78(UnityEngine_InputSystem_Users_InputUser_GlobalState_var);
  FUN_03188a78(UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var);
  FUN_03188a78(PTR_DAT_07103a08);
  FUN_03188a78(UnityEngine_InputSystem_Users_InputUser_UserData_var);
  FUN_03188a78(PTR_DAT_07103a10);
  FUN_03188a78(OVRSimpleJSON_JSONNode_Enumerator_var);
  FUN_03188a78(OVRSimpleJSON_JSONNode_KeyEnumerator_var);
  FUN_03188a78(OVRSimpleJSON_JSONNode_ValueEnumerator_var);
  FUN_03188a78(System_Text_Json_JsonElement_ArrayEnumerator_var);
  FUN_03188a78(System_Text_Json_JsonElement_ObjectEnumerator_var);
  FUN_03188a78(UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_var);
  FUN_03188a78(
              UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController_var
              );
  FUN_03188a78(UnityEngine_Rendering_Universal_LightCookieManager_LightCookieMapping_var);
  FUN_03188a78(LightingExampleManager_LightingConfig_var);
  FUN_03188a78(UnityEngine_UIElements_ListViewDragger_DragPosition_var);
  FUN_03188a78(Fusion_LogUtils_DumpDeferredClass_var);
  FUN_03188a78(PTR_DAT_07103a48);
  FUN_03188a78(Best_HTTP_Shared_Logger_LoggingContext_LoggingContextField_var);
  FUN_03188a78(System_Runtime_Remoting_Messaging_LogicalCallContext_Reader_var);
  FUN_03188a78(UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams_var);
  FUN_03188a78(
              UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
              );
  FUN_03188a78(
              UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
              );
  FUN_03188a78(UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftHandInteraction_HoloLensHand_var
              );
  FUN_03188a78(
              UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftMotionControllerProfile_WMRSpatialController_var
              );
  FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_UI_MouseButtonModel_ImplementationData_var);
  FUN_03188a78(UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_SortedColumnState_var);
  FUN_03188a78(
              UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
              );
  FUN_03188a78(PTR_DAT_07103a60);
  FUN_03188a78(UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var);
  FUN_03188a78(Fusion_NetworkBehaviour_ChangeDetector_var);
  FUN_03188a78(PTR_DAT_07103a70);
  FUN_03188a78(PTR_DAT_07103420);
  FUN_03188a78(Fusion_NetworkBehaviour_PropertyReaderData_var);
  FUN_03188a78(Fusion_NetworkObjectMeta_List_var);
  FUN_03188a78(Fusion_NetworkObjectMeta_ListMigration_var);
  FUN_03188a78(Fusion_NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta_var);
  FUN_03188a78(Fusion_NetworkRunner_SpawnArgs_var);
  FUN_03188a78(PTR_DAT_07103a80);
  FUN_03188a78(Fusion_NetworkRunnerUpdaterDefault_NetworkRunnerRender_var);
  FUN_03188a78(PTR_DAT_07103a90);
  FUN_03188a78(Fusion_NetworkRunnerUpdaterDefault_NetworkRunnerUpdate_var);
  FUN_03188a78(Fusion_NetworkSceneManagerDefault_LoadingScope_var);
  FUN_03188a78(Fusion_NetworkSpawnOp_Awaiter_var);
  FUN_03188a78(OVRAnchor_FetchOptions_var);
  FUN_03188a78(OVRAnchor_FetchTaskData_var);
  FUN_03188a78(OVRFaceExpressions_FaceExpression_var);
  FUN_03188a78(OVRGLTFAccessor_GLTFAccessor_var);
  FUN_03188a78(OVRLipSync_Signals_var);
  FUN_03188a78(PTR_DAT_071023a8);
  FUN_03188a78(OVRLipSync_Viseme_var);
  FUN_03188a78(OVRLocatable_TrackingSpacePose_var);
  FUN_03188a78(OVRNativeList_CapacityHelper_var);
  FUN_03188a78(PTR_DAT_07103aa0);
  FUN_03188a78(PTR_DAT_071023b0);
  FUN_03188a78(OVROverlay_LayerTexture_var);
  FUN_03188a78(OVRPassthroughLayer_DeferredPassthroughMeshAddition_var);
  FUN_03188a78(OVRPassthroughLayer_SerializedSurfaceGeometry_var);
  FUN_03188a78(OVRPassthroughLayer_Settings_var);
  FUN_03188a78(OVRPlugin_SpaceQueryResult_var);
  FUN_03188a78(OVRPlugin_Vector3f_var);
  FUN_03188a78(OVRPlugin_VirtualKeyboardModelAnimationState_var);
  FUN_03188a78(OVRRaycaster_RaycastHit_var);
  FUN_03188a78(OVRSceneLoader_SceneInfo_var);
  FUN_03188a78(OVRSpaceQuery_Options_var);
  FUN_03188a78(OVRSpatialAnchor_LoadOptions_var);
  FUN_03188a78(OVRSpatialAnchor_MultiAnchorDelegatePair_var);
  FUN_03188a78(OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var);
  FUN_03188a78(OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var);
  FUN_03188a78(
              UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
              );
  FUN_03188a78(UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var);
  FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var);
  *(undefined1 *)(unaff_x20 + 0x8da) = 1;
  lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x21);
  FUN_0524a948(lVar11,0x112,*unaff_x19);
  puVar10 = OVRAnchor_FetchTaskData_var;
  puVar9 = UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_SortedColumnState_var;
  puVar8 = UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_var;
  puVar7 = UnityEngine_Rendering_GPUPrefixSum_IndirectDirectArgs_var;
  puVar6 = System_Runtime_Serialization_XmlObjectSerializerReadContext_var;
  puVar5 = System_Net_WebClient_var;
  puVar4 = System_Threading_Tasks_ValueTask<TResult>_var;
  puVar3 = System_ComponentModel_TypeConverter_var;
  puVar2 = PTR_DAT_07101630;
  puVar1 = PTR_DAT_070c5b28;
  if (lVar11 != 0) {
    FUN_0524b264(lVar11,*(undefined8 *)System_Array_SorterGenericArray_var,
                 *(undefined8 *)PTR_DAT_07103a08,*(undefined8 *)PTR_DAT_070c5b28);
    FUN_0524b264(lVar11,*(undefined8 *)puVar7,*(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)puVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)puVar6,*(undefined8 *)System_Text_UTF32Encoding_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Runtime_Serialization_CollectionDataContract_DictionaryEnumerator_var
                 ,*(undefined8 *)PTR_DAT_071038c8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRLocatable_TrackingSpacePose_var,
                 *(undefined8 *)PTR_DAT_071023b0,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
                 ,*(undefined8 *)System_Data_SqlTypes_SqlString_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_TooltipAttribute_var,
                 *(undefined8 *)System_Net_NetworkInformation_sockaddr_in_var,*(undefined8 *)puVar1)
    ;
    FUN_0524b264(lVar11,*(undefined8 *)System_Net_HttpWebRequest_AuthorizationState_var,
                 *(undefined8 *)PTR_DAT_07102380,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_XmlDictionaryString_var,
                 *(undefined8 *)UnityEngine_Awaitable_Awaiter_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRLipSync_Viseme_var,
                 *(undefined8 *)UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_CreationContext_AttributeOverrideRange_var,
                 *(undefined8 *)UnityEngine_UIElements_StyleVariable_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Serialization_XmlEnumAttribute_var,
                 *(undefined8 *)System_Net_NetworkInformation_sockaddr_ll_var,*(undefined8 *)puVar1)
    ;
    FUN_0524b264(lVar11,*(undefined8 *)Unity_Hierarchy_HierarchyViewModel_Enumerator_var,
                 *(undefined8 *)Fusion_NetworkRunnerUpdaterDefault_NetworkRunnerRender_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_StylePropertyNameCollection_var,
                 *(undefined8 *)System_Data_SqlTypes_SqlBytes_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Text_Json_WriteStack_var,
                 *(undefined8 *)Fusion_BehaviourUtils_DeferredJoin_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_StyleSheets_StylePropertyValue_var,
                 *(undefined8 *)PTR_DAT_071023a8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_VolumeComponentMenuForRenderPipeline_var,
                 *(undefined8 *)UnityEngine_InputSystem_InputActionMap_BindingOverrideListJson_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_DefaultInputActions_PlayerActions_var
                 ,*(undefined8 *)System_Uri_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Security_Principal_WindowsAccountType_var,
                 *(undefined8 *)Fusion_Versioning_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Net_NetworkInformation_MacOsStructs_sockaddr_in_var,
                 *(undefined8 *)OVRPassthroughLayer_SerializedSurfaceGeometry_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2Vector2f_var,
                 *(undefined8 *)PTR_DAT_071038f0,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_InputActionSetupExtensions_ControlSchemeSyntax_var,
                 *(undefined8 *)System_Text_Json_Utf8JsonReader_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2EntityManifestationFlags_var,
                 *(undefined8 *)System_Net_WebHeaderCollection_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVROverlay_LayerTexture_var,*(undefined8 *)PTR_DAT_07102688,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_TMP_LinkInfo_var,
                 *(undefined8 *)UnityEngine_UIElements_TransitionData_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)AttachablesAuthoringSceneManager_SocketCreationInfo_var,
                 *(undefined8 *)
                  System_Text_Json_Serialization_Converters_UnsupportedTypeConverter<T>_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_HPReverbG2ControllerProfile_ReverbG2Controller_var
                 ,*(undefined8 *)
                   Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_FingerStateThresholds_var
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         Oculus_Interaction_HandGrab_HandGrabUtils_HandGrabPoseData_var,
                 *(undefined8 *)PTR_DAT_07101640,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_TextProcessingElement_var,
                 *(undefined8 *)Unity_Properties_ConversionRegistry_ConverterKey_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_DataBindingManager_ChangesFromUI_var,
                 *(undefined8 *)PTR_DAT_07103968,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_SqlTypes_SqlSingle_var,
                 *(undefined8 *)System_Data_SqlTypes_SqlBoolean_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_var
                 ,*(undefined8 *)System_Xml_XmlReader_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_VFX_VFXOutputEventArgs_var,
                 *(undefined8 *)System_Text_Encodings_Web_TextEncoderSettings_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_DataError_ColumnError_var,
                 *(undefined8 *)UnityEngine_UIElements_StyleBackground_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Text_UnicodeEncoding_var,
                 *(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_SystemResources_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulatorSettings_var
                 ,*(undefined8 *)System_Diagnostics_StackTraceHiddenAttribute_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_Users_InputUser_UserData_var,
                 *(undefined8 *)PTR_DAT_071038f8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_DirectArgs_var,
                 *(undefined8 *)UnityEngine_UIElements_EventCallbackRegistry_DynamicCallbackList_var
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Networking_UnityWebRequestAsyncOperation_var,
                 *(undefined8 *)PTR_DAT_07103990,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Schema_XmlAtomicValue_var,
                 *(undefined8 *)System_Runtime_Serialization_SurrogateForCyclicalReference_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_Serialization_XmlDataNode_var,
                 *(undefined8 *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_Controls_Vector2Control_var,
                 *(undefined8 *)
                  UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_CompilerServices_TaskAwaiter_var,
                 *(undefined8 *)UnityEngine_Rendering_ContextContainer_Item_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_InputAction_CallbackContext_var,
                 *(undefined8 *)PTR_DAT_070fb770,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_VFX_VFXSpawnerState_var,
                 *(undefined8 *)UnityEngine_Vector2Int_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_ComponentModel_SingleConverter_var,
                 *(undefined8 *)PTR_DAT_071015b8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_TextCore_Text_TextFontWeight_var,
                 *(undefined8 *)PTR_DAT_070fb790,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Linq_XNode_var,
                 *(undefined8 *)UnityEngine_Rendering_GPUSort_Args_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_TextCore_Text_WordWrapState_var,
                 *(undefined8 *)PTR_DAT_07103900,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_DataBindingManager_BindingDataCollection_var,
                 *(undefined8 *)System_Array_SorterObjectArray_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_DataTable_DSRowDiffIdUsageSection_var,
                 *(undefined8 *)UnityEngine_InputSystem_Utilities_TypeTable_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Sentry_Protocol_Metrics_SpanMetric_var,
                 *(undefined8 *)PTR_DAT_07103920,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_Remoting_Proxies_TransparentProxy_var,
                 *(undefined8 *)System_Xml_Schema_XsdDateTime_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_var,
                 *(undefined8 *)PTR_DAT_07103890,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)ExitGames_Client_Photon_SocketTcp_var,
                 *(undefined8 *)UnityEngine_TextEditor_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Net_WebException_var,
                 *(undefined8 *)System_IO_Stream_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_HID_HIDParser_HIDItemStateLocal_var,
                 *(undefined8 *)PTR_DAT_07103728,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Fusion_NetworkRunner_SpawnArgs_var,
                 *(undefined8 *)PTR_DAT_07102318,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Schema_XmlSchemaChoice_var,
                 *(undefined8 *)PTR_DAT_07103848,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_IO_StreamWriter_var,
                 *(undefined8 *)System_Data_SqlTypes_SqlChars_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberElement_var,
                 *(undefined8 *)
                  Oculus_Interaction_HandGrab_HandGrabUtils_HandGrabInteractableData_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_Users_InputUser_GlobalState_var,
                 *(undefined8 *)PTR_DAT_071039d0,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var
                 ,*(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)IAPManager_IAPPack_var,
                 *(undefined8 *)UnityEngine_Rendering_GPUSort_SupportResources_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem_var,
                 *(undefined8 *)System_Text_Json_WriteStackFrame_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_TrackedDevice_var,
                 *(undefined8 *)System_Xml_XmlAttribute_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2Vector3f_var,
                 *(undefined8 *)UnityEngine_UIElements_ListViewDragger_DragPosition_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_ComponentModel_TypeDescriptionProvider_var,
                 *(undefined8 *)OVR_OpenVR_VRControllerState_t_Packed_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_FocusController_FocusedElement_var,
                 *(undefined8 *)System_Runtime_CompilerServices_ValueTaskAwaiter_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Net_NetworkInformation_AixStructs_sockaddr_in6_var,
                 *(undefined8 *)UnityEngine_UIElements_VisualTreeAsset_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_HTCViveControllerProfile_ViveController_var
                 ,*(undefined8 *)UnityEngine_InputSystem_Utilities_InputActionTrace_Enumerator_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_XmlTextReader_var,
                 *(undefined8 *)UnityEngine_TextGenerator_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Linq_XDocument_var,
                 *(undefined8 *)System_Xml_Serialization_EnumMap_EnumMapMember_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Text_Json_JsonElement_ObjectEnumerator_var,
                 *(undefined8 *)UnityEngine_InputSystem_LowLevel_InputStateHistory_Enumerator_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_Universal_Internal_DeferredLights_InitParams_var,
                 *(undefined8 *)UnityEngine_Rendering_Blitter_BlitShaderPassNames_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_InputControlExtensions_InputEventControlCollection_var
                 ,*(undefined8 *)UnityEngine_Awaitable_AwaitableAsyncMethodBuilder_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         Oculus_Interaction_PoseDetection_FingerFeatureStateDictionary_HandFingerState_var
                 ,*(undefined8 *)PTR_DAT_070dcce0,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_InlineStyleAccess_InlineRule_var,
                 *(undefined8 *)UnityEngine_InputSystem_UI_SubmitCancelModel_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UI_DefaultControls_Resources_var,
                 *(undefined8 *)PTR_DAT_071039f0,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Reflection_Internal_EncodingHelper_String_CreateStringFromEncoding_var
                 ,*(undefined8 *)UnityEngine_Vector4_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_WatchTexture_var,
                 *(undefined8 *)PTR_DAT_07103838,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_Touchscreen_var,
                 *(undefined8 *)
                  System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter<TResult>_var
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                 ,*(undefined8 *)OVRPassthroughLayer_Settings_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_Composites_Vector3Composite_var,
                 *(undefined8 *)PTR_DAT_071038d8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
                 ,*(undefined8 *)UnityEngine_UIElements_EventDispatcher_EventRecord_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRRaycaster_RaycastHit_var,*(undefined8 *)PTR_DAT_07103740,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_UxmlRootElementFactory_var,
                 *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_UI_TouchModel_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Threading_ThreadAbortException_var,
                 *(undefined8 *)UnityEngine_Rendering_GPUInstanceDataBufferGrower_GPUResources_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Schema_XmlSchemaSet_var,
                 *(undefined8 *)Fusion_NetworkObjectMeta_ListMigration_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_ComponentModel_UInt32Converter_var,
                 *(undefined8 *)OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Schema_XmlSchema_var,
                 *(undefined8 *)UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_ComponentModel_TypeConverterAttribute_var,
                 *(undefined8 *)UnityEngine_InputSystem_InputActionMap_DeviceArray_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRGLTFAccessor_GLTFAccessor_var,
                 *(undefined8 *)System_Reflection_StrongNameKeyPair_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Net_NetworkInformation_AixStructs_sockaddr_in_var,
                 *(undefined8 *)PTR_DAT_07103778,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_ComponentModel_AttributeCollection_AttributeEntry_var,
                 *(undefined8 *)System_Drawing_SizeF_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_UniqueId_var,*(undefined8 *)PTR_DAT_071037e8,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Runtime_CompilerServices_TypeForwardedFromAttribute_var,
                 *(undefined8 *)UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_var
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)PTR_DAT_07102cd0,*(undefined8 *)PTR_DAT_070cbe10,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TypedReference_var,
                 *(undefined8 *)System_Net_Sockets_SocketAsyncResult_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                 ,*(undefined8 *)System_Xml_Schema_XmlSchemaSimpleType_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_XmlDocument_var,
                 *(undefined8 *)Unity_Properties_TypeUtility_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_TraceCore_var,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaComplexType_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Net_CommandStream_PipelineEntry_var,
                 *(undefined8 *)UnityEngine_InputSystem_InputControlPath_PathParser_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRPlugin_SpaceQueryResult_var,
                 *(undefined8 *)PTR_DAT_071037b8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
                 ,*(undefined8 *)System_Text_UTF8Encoding_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Runtime_Remoting_Messaging_LogicalCallContext_Reader_var,
                 *(undefined8 *)UnityEngine_InputSystem_Composites_TwoModifiersComposite_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Events_UnityAction_var,
                 *(undefined8 *)PTR_DAT_071038d0,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_InteropServices_UnmanagedType_var,
                 *(undefined8 *)System_Runtime_Serialization_XmlObjectSerializerWriteContext_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var,
                 *(undefined8 *)System_Threading_Timer_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)MS_Internal_Xml_Cache_XPathNode_var,
                 *(undefined8 *)PTR_DAT_07102790,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRLipSync_Signals_var,*(undefined8 *)PTR_DAT_07102398,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2Vector4f_var,
                 *(undefined8 *)PTR_DAT_07103a90,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)MyBox_GuidManager_GuidInfo_var,
                 *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_ComponentModel_StringConverter_var,
                 *(undefined8 *)PTR_DAT_07103750,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_HID_HIDParser_HIDItemStateGlobal_var,
                 *(undefined8 *)UnityEngine_VFX_VFXEventAttribute_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_SqlTypes_SqlDateTime_var,
                 *(undefined8 *)PTR_DAT_071039b8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_Watch<T>_var,
                 *(undefined8 *)UnityEngine_Awaitable_AwaitableAndFrameIndex_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Serialization_XmlSchemaProviderAttribute_var,
                 *(undefined8 *)UnityEngine_UIElements_EventDispatcher_DispatchContext_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_Serialization_XmlObjectSerializerContext_var,
                 *(undefined8 *)PTR_DAT_070c4048,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Enum_EnumResult_var,
                 *(undefined8 *)UnityEngine_UI_Text_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_TaaDebugMode_var
                 ,*(undefined8 *)UnityEngine_Vector3_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_Hands_XRDeviceSimulatorHandsProvider_var
                 ,*(undefined8 *)System_Net_NetworkInformation_MacOsStructs_ifaddrs_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)PTR_DAT_07103630,*(undefined8 *)PTR_DAT_070c20c8,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_StartDragArgs_var,
                 *(undefined8 *)System_Net_NetworkInformation_MacOsStructs_sockaddr_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Threading_ExecutionContext_Reader_var,
                 *(undefined8 *)System_IO_StreamReader_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_XPath_XPathItem_var,
                 *(undefined8 *)
                  Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_TextMeshPro_var,*(undefined8 *)PTR_DAT_07103730,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Version_var,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaType_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_Hands_OpenXR_HandTracking_SubsystemCreatedEventArgs_var,
                 *(undefined8 *)UnityEngine_InputSystem_Layouts_InputDeviceMatcher_MatcherJson_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_IO_TextReader_var,*(undefined8 *)PTR_DAT_070fb780,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_ComponentModel_TimeSpanConverter_var,
                 *(undefined8 *)PTR_DAT_071015a8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_SqlTypes_SqlXml_var,
                 *(undefined8 *)System_UnitySerializationHolder_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_UIR_State_var,
                 *(undefined8 *)PTR_DAT_07103a70,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_SqlTypes_SqlInt16_var,
                 *(undefined8 *)Meta_XR_BuildingBlocks_ControllerButtonsMapper_ButtonClickAction_var
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_Interactions_TapInteraction_var,
                 *(undefined8 *)PTR_DAT_07103a10,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Vector2_var,
                 *(undefined8 *)UnityEngine_UIElements_TypeConverterRegistry_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_SqlTypes_SqlGuid_var,
                 *(undefined8 *)Photon_Voice_VoiceCreateOptions_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Experimental_Rendering_XRPassCreateInfo_var,
                 *(undefined8 *)
                  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<TResult>_var
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         Best_HTTP_Shared_Logger_LoggingContext_LoggingContextField_var,
                 *(undefined8 *)PTR_DAT_071038b8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_var,
                 *(undefined8 *)System_Xml_XmlElement_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerable_var
                 ,*(undefined8 *)PTR_DAT_07103960,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_DataBindingManager_IgnoreUIChangesData_var,
                 *(undefined8 *)UnityEngine_UIElements_VectorImage_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftMotionControllerProfile_WMRSpatialController_var
                 ,*(undefined8 *)PTR_DAT_070fb788,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Serialization_XmlIgnoreAttribute_var,
                 *(undefined8 *)PTR_DAT_071023a0,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Vector3Int_var,*(undefined8 *)PTR_DAT_071015d0,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberList_var,
                 *(undefined8 *)Oisoi_UI_ImageBrowser_ImageBrowserEntryDesc_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_XmlText_var,
                 *(undefined8 *)UnityEngine_UIElements_VisualElementStyleSheetSet_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRSpaceQuery_Options_var,*(undefined8 *)PTR_DAT_07103aa0,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Security_Cryptography_X509Certificates_X509ChainStatus_var,
                 *(undefined8 *)UnityEngine_SliderState_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Fusion_SimulationBehaviourAttribute_var,
                 *(undefined8 *)PTR_DAT_070fb620,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Rendering_LookDev_Sky_var,
                 *(undefined8 *)System_Xml_Xsl_Runtime_StringConcat_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Best_HTTP_Request_Timings_TimingEvent_var,
                 *(undefined8 *)UnityEngine_Rendering_VolumeComponentMenu_var,*(undefined8 *)puVar1)
    ;
    FUN_0524b264(lVar11,*(undefined8 *)
                         Unity_Hierarchy_HierarchyNodeTypeHandlerBaseEnumerable_Enumerator_var,
                 *(undefined8 *)UnityEngine_Texture2D_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_InputActionState_GlobalState_var,
                 *(undefined8 *)PTR_DAT_07103918,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Fusion_NetworkSpawnOp_Awaiter_var,
                 *(undefined8 *)UnityEngine_InputSystem_Controls_TouchControl_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_var,
                 *(undefined8 *)PTR_DAT_071037e0,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Rendering_TextureDimension_var,
                 *(undefined8 *)System_Data_SqlTypes_SqlDouble_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Text_Json_Serialization_Converters_StackOfTConverter<TCollection,_TElement>_var
                 ,*(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2Matrix4f_var,
                 *(undefined8 *)System_Reflection_Internal_EncodingHelper_Encoding_GetString_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_UniqueConstraint_var,
                 *(undefined8 *)System_Xml_Linq_XContainer_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_CompilerServices_TaskAwaiter<TResult>_var,
                 *(undefined8 *)System_StackOverflowException_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var,
                 *(undefined8 *)UnityEngine_InputSystem_InputControlExtensions_DeviceBuilder_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_TMP_MaterialReference_var,
                 *(undefined8 *)PTR_DAT_07103a80,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_StyleCursor_var,
                 *(undefined8 *)
                  UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_UIR_TextureEntry_var,
                 *(undefined8 *)
                  Fusion_NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRSimpleJSON_JSONNode_KeyEnumerator_var,
                 *(undefined8 *)PTR_DAT_07103a60,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_EnhancedTouch_Touch_var,
                 *(undefined8 *)System_Xml_Schema_FacetsChecker_FacetsCompiler_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_CompilerServices_ValueTaskAwaiter_var,
                 *(undefined8 *)System_Guid_GuidResult_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Threading_SynchronizationContext_var,
                 *(undefined8 *)System_Xml_Serialization_XmlIncludeAttribute_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)PTR_DAT_07103420,*(undefined8 *)PTR_DAT_07103888,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_Hands_OpenXR_HandTracking_DestroyingSubsystemEventArgs_var,
                 *(undefined8 *)System_Diagnostics_TraceLevel_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_HID_HID_HIDElementDescriptor_var,
                 *(undefined8 *)Fusion_NetworkBehaviour_PropertyReaderData_var,*(undefined8 *)puVar1
                );
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_Hands_XRDeviceSimulatorHandsSubsystem_var
                 ,*(undefined8 *)OVRSpatialAnchor_MultiAnchorDelegatePair_var,*(undefined8 *)puVar1)
    ;
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_SqlTypes_SqlByte_var,
                 *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberAnyAttribute_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         Oculus_Interaction_HandGrab_Recorder_HandGrabPoseLiveRecorder_RecorderStep_var
                 ,*(undefined8 *)
                   UnityEngine_XR_OpenXR_Features_Interactions_DPadInteraction_DPad_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Fusion_NetworkSceneManagerDefault_LoadingScope_var,
                 *(undefined8 *)PTR_DAT_071039e8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Transform_var,*(undefined8 *)PTR_DAT_07102390,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_Internal_AutoCompletePathVisitor_VisitedPropertyScope_var
                 ,*(undefined8 *)PTR_DAT_071039f8,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Rendering_VolumeComponent_var,
                 *(undefined8 *)System_Data_SqlTypes_SqlBinary_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Fusion_NetworkBehaviour_ChangeDetector_var,
                 *(undefined8 *)PTR_DAT_07103720,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_TMP_WordInfo_var,
                 *(undefined8 *)ExitGames_Client_Photon_StructWrapping_StructWrapper<T>_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_VisualElement_var,
                 *(undefined8 *)Fusion_BehaviourUtils_NameDeferred_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_TMP_FontAsset_var,*(undefined8 *)PTR_DAT_07103868,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_TMP_MeshInfo_var,
                 *(undefined8 *)UnityEngine_InputSystem_XR_XRFeatureDescriptor_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_EnhancedTouch_TouchHistory_var,
                 *(undefined8 *)UnityEngine_InputSystem_Composites_Vector2Composite_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_TextCore_Text_TextElementInfo_var,
                 *(undefined8 *)UnityEngine_InputSystem_DefaultInputActions_UIActions_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController_var
                 ,*(undefined8 *)System_Collections_Generic_Stack<T>_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UI_Slider_var,*(undefined8 *)PTR_DAT_071036f0,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_TextGenerationSettings_var,
                 *(undefined8 *)UnityEngine_InputSystem_Controls_StickControl_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_DefaultEventSystem_FocusBasedEventSequenceContext_var
                 ,*(undefined8 *)System_Xml_XmlQualifiedName_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_TMP_SelectionCaret_var,*(undefined8 *)PTR_DAT_071039a8,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_WordWrapState_var,
                 *(undefined8 *)Best_HTTP_Shared_Extensions_TimerData_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Net_Sockets_SocketException_var,
                 *(undefined8 *)OVR_OpenVR_VREvent_t_Packed_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_Plugins_InputForUI_InputSystemProvider_Configuration_var
                 ,*(undefined8 *)System_IO_UnmanagedMemoryStream_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Linq_XElement_var,
                 *(undefined8 *)Fusion_LogUtils_DumpDeferredClass_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_var
                 ,*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2Transform_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Experimental_Rendering_XRView_var,
                 *(undefined8 *)UnityEngine_InputSystem_Controls_TouchPhaseControl_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Fusion_NetworkObjectMeta_List_var,
                 *(undefined8 *)OVR_OpenVR_VRControllerState_t_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_DataBindingManager_IgnoreUIChangesScope_var,
                 *(undefined8 *)UnityEngine_Analytics_VRDeviceActiveControllersAnalytic_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_XR_XRController_var,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaSequence_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberAnyElement_var,
                 *(undefined8 *)UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_TMP_FontWeightPair_var,*(undefined8 *)PTR_DAT_071037b0,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRFaceExpressions_FaceExpression_var,
                 *(undefined8 *)UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRSceneLoader_SceneInfo_var,*(undefined8 *)PTR_DAT_07103898,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var,
                 *(undefined8 *)System_Runtime_Remoting_Metadata_SoapAttribute_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UIInputControllerButton_var,
                 *(undefined8 *)System_Diagnostics_StackFrame_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Fusion_StartGameArgs_var,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_UI_MouseButtonModel_ImplementationData_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Diagnostics_SourceLevels_var,
                 *(undefined8 *)Fusion_NetworkRunnerUpdaterDefault_NetworkRunnerUpdate_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Linq_XObject_var,
                 *(undefined8 *)System_Xml_XmlNode_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRPassthroughLayer_DeferredPassthroughMeshAddition_var,
                 *(undefined8 *)UnityEngine_InputSystem_Controls_Vector3Control_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_var
                 ,*(undefined8 *)System_Data_SqlTypes_SqlDecimal_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Networking_UnityWebRequest_var,
                 *(undefined8 *)PTR_DAT_071038a0,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Net_NetworkInformation_sockaddr_in6_var,
                 *(undefined8 *)System___DTString_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_SliderHandler_var,*(undefined8 *)PTR_DAT_071039c0
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_SqlTypes_SqlInt32_var,
                 *(undefined8 *)Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)SQLite4Unity3d_TableAttribute_var,
                 *(undefined8 *)PTR_DAT_07103870,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Threading_Tasks_Task<TResult>_var,
                 *(undefined8 *)System_Runtime_CompilerServices_ValueTaskAwaiter<TResult>_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_DelegateSerializationHolder_DelegateEntry_var,
                 *(undefined8 *)
                  UnityEngine_UIElements_CreationContext_SerializedDataOverrideRange_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_VFX_VFXBatchedEffectInfo_var,
                 *(undefined8 *)UnityEngine_InputSystem_InputManager_StateChangeMonitorListener_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)TMPro_TMP_CharacterInfo_var,
                 *(undefined8 *)OVRSpatialAnchor_LoadOptions_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_TimeSpan_var,
                 *(undefined8 *)UnityEngine_UIElements_StyleFont_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var,
                 *(undefined8 *)MS_Internal_Xml_Cache_XPathNodeRef_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData_NativePassIterator_var
                 ,*(undefined8 *)System_ComponentModel_UInt16Converter_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_var,
                 *(undefined8 *)System_ComponentModel_UInt64Converter_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Best_HTTP_Shared_PlatformSupport_Threading_WriteLock_var,
                 *(undefined8 *)System_Text_Json_JsonElement_ArrayEnumerator_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Data_SqlTypes_SqlInt64_var,
                 *(undefined8 *)System_Xml_Serialization_XmlRootAttribute_var,*(undefined8 *)puVar1)
    ;
    FUN_0524b264(lVar11,*(undefined8 *)OVRAnchor_FetchOptions_var,
                 *(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_DpadAxisControl_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRNativeList_CapacityHelper_var,
                 *(undefined8 *)LightingExampleManager_LightingConfig_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Net_NetworkInformation_MacOsStructs_sockaddr_in6_var,
                 *(undefined8 *)System_Net_Security_SslApplicationProtocol_var,*(undefined8 *)puVar1
                );
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_VisualData_var,
                 *(undefined8 *)Best_HTTP_Request_Timings_TimingEventInfo_var,*(undefined8 *)puVar1)
    ;
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Sprite_var,
                 *(undefined8 *)System_Net_NetworkInformation_ifaddrs_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UI_Toggle_var,
                 *(undefined8 *)Sentry_Unity_UnitySdkInfo_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Reflection_Metadata_Ecma335_StringHeap_var,
                 *(undefined8 *)System_Data_SqlTypes_SqlMoney_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_InputControlExtensions_ControlBuilder_var,
                 *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_StepCounter_var,
                 *(undefined8 *)UnityEngine_InputSystem_Interactions_SlowTapInteraction_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_EventSystems_StandaloneInputModule_var,
                 *(undefined8 *)UnityEngine_InputSystem_Controls_TouchPressControl_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)PTR_DAT_07102cb0,*(undefined8 *)PTR_DAT_07103938,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2EntityViewFlags_var,
                 *(undefined8 *)UnityEngine_UIElements_DataBindingManager_BindingRequest_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_Serialization_StreamingContext_var,
                 *(undefined8 *)UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_Experimental_StyleValues_var,
                 *(undefined8 *)PTR_DAT_07103748,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_Universal_DecalEntityManager_CombinedChunks_var,
                 *(undefined8 *)System_Net_NetworkInformation_AixStructs_ifreq_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding_var,
                 *(undefined8 *)
                  UnityEngine_Rendering_Universal_Internal_ForwardLights_InitParams_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_ComponentModel_TypeDescriptionProviderAttribute_var,
                 *(undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Text_Json_Serialization_Converters_StackOrQueueConverterWithReflection<TCollection>_var
                 ,*(undefined8 *)PTR_DAT_07103910,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRSimpleJSON_JSONNode_Enumerator_var,
                 *(undefined8 *)ExitGames_Client_Photon_StructWrapping_StructWrapper_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_var,
                 *(undefined8 *)PTR_DAT_07103978,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberFlatList_var,
                 *(undefined8 *)Fusion_FusionUnityLoggerBase_LogContext_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_Serialization_XmlReaderDelegator_var,
                 *(undefined8 *)PTR_DAT_070c3e58,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Text_Json_Serialization_Converters_SmallObjectWithParameterizedConstructorConverter<T,_TArg0,_TArg1,_TArg2,_TArg3>_var
                 ,*(undefined8 *)System_Drawing_Size_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Runtime_Remoting_Channels_CrossAppDomainSink_ProcessMessageRes_var,
                 *(undefined8 *)PTR_DAT_07103770,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)ExitGames_Client_Photon_SocketUdp_var,
                 *(undefined8 *)PTR_DAT_07102388,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Oculus_Avatar2_CAPI_ovrAvatar2Quatf_var,
                 *(undefined8 *)
                  System_Reflection_Internal_ImmutableByteArrayInterop_ByteArrayUnion_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UI_SpriteState_var,
                 *(undefined8 *)PTR_DAT_07102680,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)OVRPlugin_Vector3f_var,
                 *(undefined8 *)System_Xml_XPath_XPathNavigator_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_var
                 ,*(undefined8 *)UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Rendering_Universal_UniversalRenderPipeline_var,
                 *(undefined8 *)UnityEngine_UIElements_StyleFontDefinition_var,*(undefined8 *)puVar1
                );
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_GPUInstanceDataBufferUploader_GPUResources_var,
                 *(undefined8 *)PTR_DAT_07103928,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_InputManager_StateChangeMonitorTimeout_var,
                 *(undefined8 *)
                  System_Runtime_Serialization_CollectionDataContract_GenericDictionaryEnumerator<K,_V>_var
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Rendering_GPUSort_SystemResources_var,
                 *(undefined8 *)Fusion_SimulationBehaviourListScope_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_UIElements_StyleSheet_var,
                 *(undefined8 *)PTR_DAT_07103a00,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Fusion_Statistics_FusionStatsGraphBase_FusionStatBuffer_var,
                 *(undefined8 *)Fusion_LagCompensation_SphereOverlapQueryParams_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Runtime_Serialization_XmlWriterDelegator_var,
                 *(undefined8 *)PTR_DAT_07103a48,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Rendering_VolumeParameter_var,
                 *(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)System_Xml_Schema_XmlSchemaElement_var,
                 *(undefined8 *)
                  UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                 ,*(undefined8 *)PTR_DAT_071038c0,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var,
                 *(undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJsonNameAndDescriptorOnly_var
                 ,*(undefined8 *)System_Data_DataTable_RowDiffIdUsageSection_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_Universal_LightCookieManager_LightCookieMapping_var,
                 *(undefined8 *)System_Threading_Tasks_Task_var,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_InputControlExtensions_InputEventControlEnumerator_var
                 ,*(undefined8 *)
                   UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftHandInteraction_HoloLensHand_var
                 ,*(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)UnityEngine_Rendering_Blitter_BlitColorAndDepthPassNames_var,
                 *(undefined8 *)UnityEngine_InputForUI_EventProvider_Registration_var,
                 *(undefined8 *)puVar1);
    FUN_0524b264(lVar11,*(undefined8 *)Oculus_Interaction_Locomotion_TeleportHit_var,
                 *(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_SupportResources_var,
                 *(undefined8 *)puVar1);
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


