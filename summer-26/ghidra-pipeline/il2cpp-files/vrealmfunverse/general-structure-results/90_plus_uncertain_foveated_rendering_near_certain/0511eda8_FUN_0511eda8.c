/*
FUNCTION_NAME: FUN_0511eda8
ENTRY_POINT: 0511eda8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 253
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;gaze_retrieval;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;data_collection;telemetry;foveation_rendering;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_21;strong_file_logging_hits_4;telemetry_or_network_hits_4;strong_foveation_hits_2;frame_or_lifecycle_behavior;functionality_foveated_rendering;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_8;functionality_possible_biometrics_hits_2
*/


undefined8 FUN_0511eda8(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_066cf476 & 1) == 0) {
    FUN_02b3c81c(OVR_OpenVR_EVRApplicationTransitionState_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRButtonId_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRCompositorTimingMode_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRControllerAxisType_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVREventType_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVREye_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRNotificationStyle_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRNotificationType_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVROverlayError_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRRenderModelError_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRScreenshotError_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRScreenshotPropertyFilenames_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRScreenshotType_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRSettingsError_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRSkeletalMotionRange_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRSkeletalTransformSpace_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRSubmitFlags_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRTrackedCameraError_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo);
    FUN_02b3c81c(Unity_Jobs_EarlyInitHelpers_TypeInfo);
    FUN_02b3c81c(DG_Tweening_Core_Easing_EaseCurve_TypeInfo);
    FUN_02b3c81c(DG_Tweening_EaseFunction_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EasingFunction_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EasingMode_TypeInfo);
    FUN_02b3c81c(System_ComponentModel_EditorAttribute_TypeInfo);
    FUN_02b3c81c(System_ComponentModel_EditorBrowsableAttribute_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EditorPanelRootElement_TypeInfo);
    FUN_02b3c81c(Meta_XR_MRUtilityKit_EffectMesh_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_ElementData_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_ElementUnderPointer_TypeInfo);
    FUN_02b3c81c(EmeraldAI_EmeraldAbilityObject_TypeInfo);
    FUN_02b3c81c(EmeraldAiPoolTagger_TypeInfo);
    FUN_02b3c81c(EmeraldAI_EmeraldAnimationEventsClass_TypeInfo);
    FUN_02b3c81c(EmeraldAI_EmeraldCombatTextData_TypeInfo);
    FUN_02b3c81c(EmeraldDeathListener_TypeInfo);
    FUN_02b3c81c(EmeraldAI_EmeraldDetection_TypeInfo);
    FUN_02b3c81c(EmeraldAI_EmeraldFactionData_TypeInfo);
    FUN_02b3c81c(EmeraldAI_Utility_EmeraldObjectPool_TypeInfo);
    FUN_02b3c81c(EmeraldAI_EmeraldSystem_TypeInfo);
    FUN_02b3c81c(System_Empty_TypeInfo);
    FUN_02b3c81c(System_Xml_EmptyEnumerator_TypeInfo);
    FUN_02b3c81c(System_Text_EncoderExceptionFallback_TypeInfo);
    FUN_02b3c81c(System_Text_EncoderExceptionFallbackBuffer_TypeInfo);
    FUN_02b3c81c(System_Text_EncoderFallback_TypeInfo);
    FUN_02b3c81c(System_Text_EncoderFallbackException_TypeInfo);
    FUN_02b3c81c(System_Text_EncoderNLS_TypeInfo);
    FUN_02b3c81c(System_Text_EncoderReplacementFallback_TypeInfo);
    FUN_02b3c81c(System_Text_EncoderReplacementFallbackBuffer_TypeInfo);
    FUN_02b3c81c(System_Text_Encoding_TypeInfo);
    FUN_02b3c81c(System_Text_EncodingHelper_TypeInfo);
    FUN_02b3c81c(System_Text_EncodingProvider_TypeInfo);
    FUN_02b3c81c(System_Xml_EncodingStreamWrapper_TypeInfo);
    FUN_02b3c81c(System_Globalization_EncodingTable_TypeInfo);
    FUN_02b3c81c(System_IO_EndOfStreamException_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_EnhancedTouch_EnhancedTouchSupport_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_EnterExceptionFilterInstruction_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_EnterExceptionHandlerInstruction_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_EnterFaultInstruction_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_EnterFinallyInstruction_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_EnterTryFaultInstruction_TypeInfo);
    FUN_02b3c81c(Pico_Platform_Models_EntitlementCheckResult_TypeInfo);
    FUN_02b3c81c(UnityEngine_EntityId_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Converters_EntityKeyMemberConverter_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_UIR_Entry_TypeInfo);
    FUN_02b3c81c(System_EntryPointNotFoundException_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_UIR_EntryPool_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_UIR_EntryPreProcessor_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_UIR_EntryProcessor_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_UIR_EntryRecorder_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_Converters_EnumConverter_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_EnumDataContract_TypeInfo);
    FUN_02b3c81c(UnityEngine_EnumDataUtility_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EnumField_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EnumFieldHelpers_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Utilities_EnumInfo_TypeInfo);
    FUN_02b3c81c(System_Xml_Serialization_EnumMap_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_EnumMemberAttribute_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Utilities_EnumUtils_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_Converters_EnumerableConverter_TypeInfo);
    FUN_02b3c81c(System_IO_EnumerationOptions_TypeInfo);
    FUN_02b3c81c(System_Environment_TypeInfo);
    FUN_02b3c81c(EnvironmentChanger_TypeInfo);
    FUN_02b3c81c(Meta_XR_EnvironmentDepth_EnvironmentDepthManager_TypeInfo);
    FUN_02b3c81c(Meta_XR_EnvironmentDepthManagerRaycastExtensions_TypeInfo);
    FUN_02b3c81c(Meta_XR_EnvironmentDepthRaycaster_TypeInfo);
    FUN_02b3c81c(Meta_XR_EnvironmentDepth_EnvironmentDepthUtils_TypeInfo);
    FUN_02b3c81c(Unity_Services_Authentication_EnvironmentIdComponent_TypeInfo);
    FUN_02b3c81c(Meta_XR_EnvironmentRaycastManager_TypeInfo);
    FUN_02b3c81c(EnvironmentSceneNames_TypeInfo);
    FUN_02b3c81c(Unity_Services_Core_Environments_Internal_Environments_TypeInfo);
    FUN_02b3c81c(System_Runtime_Remoting_EnvoyInfo_TypeInfo);
    FUN_02b3c81c(System_Runtime_Remoting_Messaging_EnvoyTerminatorSink_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_EqualInstruction_TypeInfo);
    FUN_02b3c81c(System_Globalization_EraInfo_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Models_Error_TypeInfo);
    FUN_02b3c81c(Pico_Platform_Models_Error_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Serialization_ErrorContext_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Serialization_ErrorEventArgs_TypeInfo);
    FUN_02b3c81c(System_Runtime_Remoting_Messaging_ErrorMessage_TypeInfo);
    FUN_02b3c81c(Firebase_ErrorMessages_TypeInfo);
    FUN_02b3c81c(System_Runtime_Diagnostics_EtwDiagnosticTrace_TypeInfo);
    FUN_02b3c81c(System_Runtime_Diagnostics_EtwProvider_TypeInfo);
    FUN_02b3c81c(System_Data_EvaluateException_TypeInfo);
    FUN_02b3c81c(UnityEngine_Event_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputForUI_Event_TypeInfo);
    FUN_02b3c81c(System_EventArgs_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventBase_TypeInfo);
    FUN_02b3c81c(Unity_XR_CoreUtils_Bindings_EventBinding_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventCallbackList_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventCallbackListPool_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventCallbackRegistry_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventCategoryAttribute_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputForUI_EventConsumer_TypeInfo);
    FUN_02b3c81c(System_ComponentModel_EventDescriptor_TypeInfo);
    FUN_02b3c81c(System_Runtime_Diagnostics_EventDescriptor_TypeInfo);
    FUN_02b3c81c(System_ComponentModel_EventDescriptorCollection_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventDispatcher_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventDispatcherGate_TypeInfo);
    FUN_02b3c81c(System_EventHandler_TypeInfo);
    FUN_02b3c81c(System_Reflection_EventInfo_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventInterestAttribute_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventInterestReflectionUtils_TypeInfo);
    FUN_02b3c81c(System_Runtime_Diagnostics_EventLogger_TypeInfo);
    FUN_02b3c81c(UnityEngine_EventModifiers_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputForUI_EventProvider_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputForUI_EventSource_TypeInfo);
    FUN_02b3c81c(UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_02b3c81c(UnityEngine_EventType_TypeInfo);
    FUN_02b3c81c(System_Threading_EventWaitHandle_TypeInfo);
    FUN_02b3c81c(System_Exception_TypeInfo);
    FUN_02b3c81c(Firebase_ExceptionAggregator_TypeInfo);
    FUN_02b3c81c(System_ExceptionArgument_TypeInfo);
    FUN_02b3c81c(System_Runtime_ExceptionServices_ExceptionDispatchInfo_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_ExceptionFilter_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_ExceptionHandler_TypeInfo);
    FUN_02b3c81c(System_Reflection_ExceptionHandlingClauseOptions_TypeInfo);
    FUN_02b3c81c(UnityEngine_Bindings_ExceptionMarshaller_TypeInfo);
    FUN_02b3c81c(System_ExceptionResource_TypeInfo);
    FUN_02b3c81c(System_Runtime_ExceptionTrace_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_TypeInfo);
    FUN_02b3c81c(System_Text_RegularExpressions_ExclusiveReference_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_ExecuteCommandEvent_TypeInfo);
    FUN_02b3c81c(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    FUN_02b3c81c(System_Threading_ExecutionContext_TypeInfo);
    FUN_02b3c81c(UnityEngine_ExitGUIException_TypeInfo);
    FUN_02b3c81c(System_Dynamic_ExpandoClass_TypeInfo);
    FUN_02b3c81c(System_Dynamic_ExpandoObject_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Converters_ExpandoObjectConverter_TypeInfo);
    FUN_02b3c81c(LitJson_ExporterFunc_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Expression_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo);
    FUN_02b3c81c(UnityEngine_ExpressionEvaluator_TypeInfo);
    FUN_02b3c81c(System_Data_ExpressionParser_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_ExpressionStringBuilder_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_ExpressionType_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_UI_ExtendedPointerEventData_TypeInfo);
    FUN_02b3c81c(System_ComponentModel_ExtendedPropertyDescriptor_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_UI_ExtendedSubmitCancelEventData_TypeInfo);
    FUN_02b3c81c(System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_ExtensionDataMember_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_ExtensionDataObject_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_ExtensionDataReader_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo);
    FUN_02b3c81c(TMPro_Extents_TypeInfo);
    FUN_02b3c81c(Unity_Services_Core_Configuration_ExternalUserId_TypeInfo);
    FUN_02b3c81c(Unity_Services_Core_ExternalUserIdProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_UIR_ExtraRenderData_TypeInfo);
    FUN_02b3c81c(UnityEngine_Timeline_Extrapolation_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
    FUN_02b3c81c(Unity_XR_OpenXR_Features_PICOSupport_EyeType_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Eyes_TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_FABRIKRoot_TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_FBIKChain_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo);
    FUN_02b3c81c(EmeraldAI_FactionClass_TypeInfo);
    FUN_02b3c81c(EmeraldAI_FactionExtension_TypeInfo);
    FUN_02b3c81c(TMPro_FastAction_TypeInfo);
    FUN_02b3c81c(UnityEngine_TextCore_Text_FastAction_TypeInfo);
    FUN_02b3c81c(System_Resources_FastResourceComparer_TypeInfo);
    FUN_02b3c81c(System_Runtime_FatalException_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_PoseDetection_FeatureDescription_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_PoseDetection_FeatureStateActiveMode_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_PoseDetection_FeatureStateDescription_TypeInfo);
    FUN_02b3c81c(System_FieldAccessException_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_FieldByRefUpdater_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_FieldExpression_TypeInfo);
    FUN_02b3c81c(System_Reflection_FieldInfo_TypeInfo);
    FUN_02b3c81c(Unity_Properties_FieldMember_TypeInfo);
    FUN_02b3c81c(System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FieldPath_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FieldToValueMap_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FieldToValueMapIterator_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FieldValueProxy_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_Converters_FieldValueProxyConverter_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FieldValueVector_TypeInfo);
    FUN_02b3c81c(System_IO_FileAccess_TypeInfo);
    FUN_02b3c81c(System_Resources_FileBasedResourceGroveler_TypeInfo);
    FUN_02b3c81c(System_IO_FileInfo_TypeInfo);
    FUN_02b3c81c(System_IO_FileLoadException_TypeInfo);
    FUN_02b3c81c(System_IO_FileMode_TypeInfo);
    FUN_02b3c81c(System_IO_FileNotFoundException_TypeInfo);
    FUN_02b3c81c(System_IO_FileStream_TypeInfo);
    FUN_02b3c81c(System_IO_FileStreamAsyncResult_TypeInfo);
    FUN_02b3c81c(System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
    FUN_02b3c81c(System_IO_Enumeration_FileSystemName_TypeInfo);
    FUN_02b3c81c(System_Net_FileWebRequest_TypeInfo);
    FUN_02b3c81c(System_Net_FileWebRequestCreator_TypeInfo);
    FUN_02b3c81c(System_Net_FileWebResponse_TypeInfo);
    FUN_02b3c81c(System_Net_FileWebStream_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_Universal_FilmGrainLookupParameter_TypeInfo);
    FUN_02b3c81c(MS_Internal_Xml_XPath_Filter_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_FilterFunction_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_FilterFunctionDefinitionUtils_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_FilterParameter_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_FilteringSettings_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_FinalAction_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_Universal_Internal_FinalBlitPass_TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_Finger_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_EnhancedTouch_Finger_TypeInfo);
    FUN_02b3c81c(Autohand_FingerEnum_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_PoseDetection_FingerFeature_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_PoseDetection_FingerFeatureProperties_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_PoseDetection_FingerFeatureStateDictionary_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_GrabAPI_FingerPinchGrabAPI_TypeInfo);
    FUN_02b3c81c(Autohand_FingerPoseEnum_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_GrabAPI_FingerRawPinchAPI_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_PoseDetection_FingerShapes_TypeInfo);
    FUN_02b3c81c(Autohand_FingerTouchEventArgs_TypeInfo);
    FUN_02b3c81c(Autohand_FingerTouchStartEvent_TypeInfo);
    FUN_02b3c81c(Autohand_FingerTouchStopEvent_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_FingersMetadata_TypeInfo);
    FUN_02b3c81c(Firebase_Auth_FirebaseAccountLinkException_TypeInfo);
    FUN_02b3c81c(Firebase_FirebaseApp_TypeInfo);
    FUN_02b3c81c(Firebase_Platform_FirebaseAppUtils_TypeInfo);
    FUN_02b3c81c(Firebase_Platform_FirebaseAppUtilsStub_TypeInfo);
    FUN_02b3c81c(Firebase_Auth_FirebaseAuth_TypeInfo);
    FUN_02b3c81c(Firebase_FirebaseException_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FirebaseFirestore_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FirebaseFirestoreSettings_TypeInfo);
    FUN_02b3c81c(Firebase_Platform_FirebaseHandler_TypeInfo);
    FUN_02b3c81c(Firebase_Platform_FirebaseLogger_TypeInfo);
    FUN_02b3c81c(Firebase_Auth_FirebaseUser_TypeInfo);
    FUN_02b3c81c(Firebase_Auth_FirebaseUserInternal_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FirestoreCpp_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FirestoreCppPINVOKE_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FirestoreDataAttribute_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FirestoreException_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FirestorePropertyAttribute_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FirestoreProxy_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_FirstHoverInteractorGroup_TypeInfo);
    FUN_02b3c81c(FistFIghtManager_TypeInfo);
    FUN_02b3c81c(System_Net_FixedSizeReadStream_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_FixupHolder_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_FixupHolderList_TypeInfo);
    FUN_02b3c81c(Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_FloatAffordanceTheme_TypeInfo
                );
    FUN_02b3c81c(Oculus_Interaction_FloatConstraint_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_FloatDataContract_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_FloatField_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_FloatParameter_TypeInfo);
    FUN_02b3c81c(DG_Tweening_Plugins_FloatPlugin_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_Primitives_FloatTweenableVariable_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_FocusChangeDirection_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_FocusController_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_FocusEnterEvent_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_FocusEnterEventArgs_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_FocusEvent_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_FocusExitEventArgs_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_FocusInEvent_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_FocusOutEvent_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_Focusable_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_Foldout_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_FollowTarget_TypeInfo);
    FUN_02b3c81c(UnityEngine_Font_TypeInfo);
    FUN_02b3c81c(UnityEngine_TextCore_Text_FontAsset_TypeInfo);
    FUN_02b3c81c(UnityEngine_TextCore_Text_FontAssetFactory_TypeInfo);
    FUN_02b3c81c(UnityEngine_TextCore_Text_FontAssetUtilities_TypeInfo);
    FUN_02b3c81c(UnityEngine_UI_FontData_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_FontDefinition_TypeInfo);
    FUN_02b3c81c(UnityEngine_TextCore_LowLevel_FontEngine_TypeInfo);
    FUN_02b3c81c(UnityEngine_TextCore_LowLevel_FontEngineError_TypeInfo);
    FUN_02b3c81c(UnityEngine_TextCore_Text_FontFeatureTable_TypeInfo);
    FUN_02b3c81c(UnityEngine_TextCore_Text_FontStyles_TypeInfo);
    FUN_02b3c81c(UnityEngine_UI_FontUpdateTracker_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_TypeInfo);
    FUN_02b3c81c(System_Data_ForeignKeyConstraint_TypeInfo);
    FUN_02b3c81c(System_FormatException_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_FormatterConverter_TypeInfo);
    FUN_02b3c81c(System_Runtime_Remoting_FormatterData_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_FormatterServices_TypeInfo);
    FUN_02b3c81c(System_Xml_Schema_ForwardAxis_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_Universal_Internal_ForwardLights_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_Utilities_FourCC_TypeInfo);
    FUN_02b3c81c(FoveationFeature_TypeInfo);
    FUN_02b3c81c(UnityEngine_Playables_FrameRate_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_FrameTimeSampleHistory_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_FromOVRControllerDataSource_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_FromOVRHandDataSource_TypeInfo);
    FUN_02b3c81c(FruitSlicingStatsManager_TypeInfo);
    FUN_02b3c81c(FruitSpawner_TypeInfo);
    FUN_02b3c81c(LitJson_FsmContext_TypeInfo);
    DAT_066cf476 = 1;
  }
  uVar2 = FUN_05114f68(param_1);
  puVar1 = LitJson_FsmContext_TypeInfo;
  if (0x2b0a < (int)uVar2) {
    if (uVar2 < 0x332f) {
      if (uVar2 < 0x30d7) {
        if ((int)uVar2 < 0x2ee5) {
          if ((int)uVar2 < 0x2ee3) {
            if (uVar2 == 0x2ee1) {
              lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar3 = *(long *)puVar1;
              }
              puVar7 = *(undefined8 **)(lVar3 + 0xb8);
              lVar9 = puVar7[0x32];
              if (lVar9 == 0) {
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
                }
                uVar8 = *puVar7;
                lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                            OVR_OpenVR_EVRScreenshotPropertyFilenames_TypeInfo);
                FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_UIElements_FocusEvent_TypeInfo,0
                            );
                lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
                *(long *)(lVar3 + 400) = lVar9;
                thunk_FUN_02bb0e9c(lVar3 + 400,lVar9);
              }
              uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                          Oculus_Interaction_PoseDetection_FingerFeatureStateDictionary_TypeInfo
                                        );
              puVar7 = (undefined8 *)UnityEngine_Event_TypeInfo;
            }
            else {
              if (uVar2 != 0x2ee2) {
                return 0;
              }
              lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar3 = *(long *)puVar1;
              }
              puVar7 = *(undefined8 **)(lVar3 + 0xb8);
              lVar9 = puVar7[0x2f];
              if (lVar9 == 0) {
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
                }
                uVar8 = *puVar7;
                lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                            Firebase_Firestore_Converters_EnumConverter_TypeInfo);
                FUN_04a143c4(lVar9,uVar8,
                             *(undefined8 *)UnityEngine_UIElements_FocusController_TypeInfo,0);
                lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
                *(long *)(lVar3 + 0x178) = lVar9;
                thunk_FUN_02bb0e9c(lVar3 + 0x178,lVar9);
              }
              uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                          System_Runtime_Serialization_ExtensionDataReader_TypeInfo)
              ;
              puVar7 = (undefined8 *)Newtonsoft_Json_Utilities_EnumUtils_TypeInfo;
            }
          }
          else {
            if (uVar2 != 0x2ee3) {
              uVar5 = 0x2ee4;
              goto LAB_05121220;
            }
            lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar3 = *(long *)puVar1;
            }
            puVar7 = *(undefined8 **)(lVar3 + 0xb8);
            lVar9 = puVar7[0x31];
            if (lVar9 == 0) {
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
              }
              uVar8 = *puVar7;
              lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                          System_Runtime_Serialization_ElementData_TypeInfo);
              FUN_04a143c4(lVar9,uVar8,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_FocusEnterEventArgs_TypeInfo,0);
              lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
              *(long *)(lVar3 + 0x188) = lVar9;
              thunk_FUN_02bb0e9c(lVar3 + 0x188,lVar9);
            }
            uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                        Oculus_Interaction_PoseDetection_FingerFeatureProperties_TypeInfo
                                      );
            puVar7 = (undefined8 *)System_Text_RegularExpressions_ExclusiveReference_TypeInfo;
          }
        }
        else if ((int)uVar2 < 0x30d5) {
          if (uVar2 == 0x2ee5) {
            lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar3 = *(long *)puVar1;
            }
            puVar7 = *(undefined8 **)(lVar3 + 0xb8);
            lVar9 = puVar7[0x30];
            if (lVar9 == 0) {
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
              }
              uVar8 = *puVar7;
              lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                          UnityEngine_InputSystem_EnhancedTouch_EnhancedTouchSupport_TypeInfo
                                        );
              FUN_04a143c4(lVar9,uVar8,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_FocusEnterEvent_TypeInfo,0);
              lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
              *(long *)(lVar3 + 0x180) = lVar9;
              thunk_FUN_02bb0e9c(lVar3 + 0x180,lVar9);
            }
            uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_IO_FileInfo_TypeInfo);
            puVar7 = (undefined8 *)System_Threading_EventWaitHandle_TypeInfo;
          }
          else {
            if (uVar2 != 0x30d4) {
              return 0;
            }
            lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar3 = *(long *)puVar1;
            }
            puVar7 = *(undefined8 **)(lVar3 + 0xb8);
            lVar9 = puVar7[0xb];
            if (lVar9 == 0) {
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
              }
              uVar8 = *puVar7;
              lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRButtonId_TypeInfo);
              FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Autohand_FingerPoseEnum_TypeInfo,0);
              plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
              *plVar4 = lVar9;
              thunk_FUN_02bb0e9c(plVar4,lVar9);
            }
            uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_IO_FileStreamAsyncResult_TypeInfo);
            puVar7 = (undefined8 *)Unity_XR_CoreUtils_Bindings_EventBinding_TypeInfo;
          }
        }
        else if (uVar2 == 0x30d5) {
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[10];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                        System_Linq_Expressions_Interpreter_EnterTryFaultInstruction_TypeInfo
                                      );
            FUN_04a143c4(lVar9,uVar8,*(undefined8 *)FruitSpawner_TypeInfo,0);
            plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
            *plVar4 = lVar9;
            thunk_FUN_02bb0e9c(plVar4,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)Firebase_Firestore_FieldValueProxy_TypeInfo);
          puVar7 = (undefined8 *)System_Environment_TypeInfo;
        }
        else {
          if (uVar2 != 0x30d6) {
            return 0;
          }
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[9];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRSkeletalTransformSpace_TypeInfo)
            ;
            FUN_04a143c4(lVar9,uVar8,*(undefined8 *)FruitSlicingStatsManager_TypeInfo,0);
            plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
            *plVar4 = lVar9;
            thunk_FUN_02bb0e9c(plVar4,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_ExpressionEvaluator_TypeInfo);
          puVar7 = (undefined8 *)UnityEngine_InputForUI_EventProvider_TypeInfo;
        }
      }
      else if ((int)uVar2 < 0x32cd) {
        if (uVar2 - 0x32c9 < 2) {
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x33];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRSubmitFlags_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_FocusExitEventArgs_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x198) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x198,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_Extrapolation_TypeInfo);
          puVar7 = (undefined8 *)UnityEngine_UIElements_EventCallbackList_TypeInfo;
        }
        else {
          if (1 < uVar2 - 0x32cb) {
            return 0;
          }
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x34];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                        System_Text_EncoderReplacementFallback_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_UIElements_FocusInEvent_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x1a0) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x1a0,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                      Firebase_Firestore_FieldToValueMapIterator_TypeInfo);
          puVar7 = (undefined8 *)UnityEngine_UIElements_EventBase_TypeInfo;
        }
      }
      else if (uVar2 - 0x32cd < 6) {
        uVar2 = 1 << (ulong)(uVar2 - 0x32cd & 0x1f);
        if ((uVar2 & 3) == 0) {
          if ((uVar2 & 0x18) == 0) {
            lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar3 = *(long *)puVar1;
            }
            puVar7 = *(undefined8 **)(lVar3 + 0xb8);
            lVar9 = puVar7[0x36];
            if (lVar9 == 0) {
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
              }
              uVar8 = *puVar7;
              lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                          Pico_Platform_Models_EntitlementCheckResult_TypeInfo);
              FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_UIElements_Focusable_TypeInfo,0);
              lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
              *(long *)(lVar3 + 0x1b0) = lVar9;
              thunk_FUN_02bb0e9c(lVar3 + 0x1b0,lVar9);
            }
            uVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_FilterFunction_TypeInfo
                                      );
            puVar7 = (undefined8 *)UnityEngine_EventSystems_ExecuteEvents_TypeInfo;
          }
          else {
            lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar3 = *(long *)puVar1;
            }
            puVar7 = *(undefined8 **)(lVar3 + 0xb8);
            lVar9 = puVar7[0x37];
            if (lVar9 == 0) {
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
              }
              uVar8 = *puVar7;
              lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                          UnityEngine_UIElements_UIR_EntryPreProcessor_TypeInfo);
              FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_UIElements_Foldout_TypeInfo,0);
              lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
              *(long *)(lVar3 + 0x1b8) = lVar9;
              thunk_FUN_02bb0e9c(lVar3 + 0x1b8,lVar9);
            }
            uVar8 = thunk_FUN_02b79644(*(undefined8 *)RootMotion_FinalIK_Finger_TypeInfo);
            puVar7 = (undefined8 *)UnityEngine_Bindings_ExceptionMarshaller_TypeInfo;
          }
        }
        else {
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x35];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)EmeraldAI_EmeraldAnimationEventsClass_TypeInfo
                                      );
            FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_UIElements_FocusOutEvent_TypeInfo,0)
            ;
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x1a8) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x1a8,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Net_FileWebRequest_TypeInfo);
          puVar7 = (undefined8 *)UnityEngine_EventType_TypeInfo;
        }
      }
      else if (uVar2 == 0x332d) {
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x38];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Text_Encoding_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Oculus_Interaction_FollowTarget_TypeInfo,0);
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          *(long *)(lVar3 + 0x1c0) = lVar9;
          thunk_FUN_02bb0e9c(lVar3 + 0x1c0,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    Firebase_Firestore_Converters_FieldValueProxyConverter_TypeInfo)
        ;
        puVar7 = (undefined8 *)UnityEngine_UIElements_EventCallbackListPool_TypeInfo;
      }
      else {
        if (uVar2 != 0x332e) {
          return 0;
        }
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x39];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRNotificationType_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_Font_TypeInfo,0);
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          *(long *)(lVar3 + 0x1c8) = lVar9;
          thunk_FUN_02bb0e9c(lVar3 + 0x1c8,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_FieldAccessException_TypeInfo);
        puVar7 = (undefined8 *)Firebase_Firestore_Converters_EnumerableConverter_TypeInfo;
      }
      goto LAB_051224c4;
    }
    if (uVar2 >> 3 < 0x755) {
      if (uVar2 == 0x36b1) {
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[2];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRSettingsError_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Platform_FirebaseAppUtilsStub_TypeInfo,0)
          ;
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Linq_Expressions_FieldExpression_TypeInfo);
        puVar7 = (undefined8 *)System_Runtime_Diagnostics_EtwDiagnosticTrace_TypeInfo;
      }
      else if (uVar2 == 0x36b2) {
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[3];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Text_EncoderExceptionFallback_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Firestore_FirestoreDataAttribute_TypeInfo
                       ,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    UnityEngine_Rendering_Universal_Internal_FinalBlitPass_TypeInfo)
        ;
        puVar7 = (undefined8 *)UnityEngine_UIElements_EventInterestAttribute_TypeInfo;
      }
      else {
        if (uVar2 != 0x3aa7) {
          return 0;
        }
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[8];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Xml_EncodingStreamWrapper_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,
                       *(undefined8 *)Oculus_Interaction_Input_FromOVRHandDataSource_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    Oculus_Interaction_PoseDetection_FeatureStateActiveMode_TypeInfo
                                  );
        puVar7 = (undefined8 *)System_Exception_TypeInfo;
      }
      goto LAB_051224c4;
    }
    if (0x3b07 < (int)uVar2) {
      uVar6 = (ulong)(uVar2 - 0x3b08);
      if (0x26 < uVar2 - 0x3b08) {
LAB_0512121c:
        uVar5 = 0x3e81;
        goto LAB_05121220;
      }
      if ((1L << (uVar6 & 0x3f) & 0x19U) != 0) goto switchD_0511fd9c_caseD_2a6a;
      if ((1L << (uVar6 & 0x3f) & 0x4000000002U) == 0) {
        if (uVar6 != 2) goto LAB_0512121c;
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[6];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                      UnityEngine_UIElements_UIR_EntryProcessor_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_UI_FontData_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    UnityEngine_UIElements_UIR_ExtraRenderData_TypeInfo);
        puVar7 = (undefined8 *)System_ExceptionResource_TypeInfo;
      }
      else {
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[7];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)Unity_Jobs_EarlyInitHelpers_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)System_Runtime_Remoting_FormatterData_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)Oculus_Interaction_FinalAction_TypeInfo);
        puVar7 = (undefined8 *)System_Globalization_EraInfo_TypeInfo;
      }
      goto LAB_051224c4;
    }
    if (uVar2 != 0x3b06) {
      if (uVar2 != 0x3b07) {
        return 0;
      }
      lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *(long *)puVar1;
      }
      puVar7 = *(undefined8 **)(lVar3 + 0xb8);
      lVar9 = puVar7[5];
      if (lVar9 == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar8 = *puVar7;
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_EntityId_TypeInfo);
        FUN_04a143c4(lVar9,uVar8,
                     *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
        *plVar4 = lVar9;
        thunk_FUN_02bb0e9c(plVar4,lVar9);
      }
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                  Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_TypeInfo
                                );
      puVar7 = (undefined8 *)EnvironmentSceneNames_TypeInfo;
      goto LAB_051224c4;
    }
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[4];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Empty_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Oculus_Interaction_FloatConstraint_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *plVar4 = lVar9;
      goto LAB_051224a4;
    }
    goto LAB_051224ac;
  }
  if (0x28af < (int)uVar2) {
    if (0x29cc < uVar2) {
      uVar8 = 0;
      if ((int)uVar2 < 0x2afb) {
        switch(uVar2) {
        case 0x2a30:
        case 0x2a31:
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x45];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                        UnityEngine_UIElements_EnumFieldHelpers_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,*(undefined8 *)System_FormatException_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x228) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x228,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Net_FileWebResponse_TypeInfo);
          puVar7 = (undefined8 *)UnityEngine_UIElements_ExecuteCommandEvent_TypeInfo;
          break;
        case 0x2a32:
        case 0x2a33:
        case 0x2a34:
        case 0x2a35:
        case 0x2a36:
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x46];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)DG_Tweening_Core_Easing_EaseCurve_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,
                         *(undefined8 *)System_Runtime_Serialization_FormatterConverter_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x230) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x230,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Data_ExpressionParser_TypeInfo);
          puVar7 = (undefined8 *)System_Linq_Expressions_Expression_TypeInfo;
          break;
        case 0x2a37:
        case 0x2a38:
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x47];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)EmeraldAI_EmeraldCombatTextData_TypeInfo);
            FUN_04a1401c(lVar9,uVar8,
                         *(undefined8 *)System_Runtime_Serialization_FormatterServices_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x238) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x238,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                      Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo);
          FUN_039dc9d0(uVar8,param_1,lVar9,*(undefined8 *)System_IO_EnumerationOptions_TypeInfo);
          return uVar8;
        case 0x2a39:
        case 0x2a3a:
        case 0x2a3b:
        case 0x2a3c:
        case 0x2a3d:
        case 0x2a3e:
        case 0x2a3f:
        case 0x2a40:
        case 0x2a41:
        case 0x2a42:
        case 0x2a43:
        case 0x2a4d:
        case 0x2a4e:
        case 0x2a4f:
        case 0x2a50:
        case 0x2a51:
        case 0x2a52:
        case 0x2a53:
        case 0x2a54:
        case 0x2a55:
        case 0x2a56:
        case 0x2a57:
        case 0x2a58:
        case 0x2a59:
        case 0x2a5a:
        case 0x2a5b:
        case 0x2a5c:
        case 0x2a5d:
        case 0x2a5e:
        case 0x2a5f:
        case 0x2a60:
        case 0x2a61:
          goto switchD_0511fd9c_caseD_2a39;
        case 0x2a44:
        case 0x2a45:
        case 0x2a4c:
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x4a];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Text_EncoderFallback_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,
                         *(undefined8 *)UnityEngine_InputSystem_Utilities_FourCC_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x250) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x250,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                      System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
          puVar7 = (undefined8 *)System_Runtime_Diagnostics_EtwProvider_TypeInfo;
          break;
        case 0x2a46:
        case 0x2a48:
        case 0x2a49:
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x48];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRScreenshotType_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,*(undefined8 *)System_Xml_Schema_ForwardAxis_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x240) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x240,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_IO_Enumeration_FileSystemName_TypeInfo);
          puVar7 = (undefined8 *)System_ComponentModel_EventDescriptor_TypeInfo;
          break;
        case 0x2a47:
        case 0x2a4a:
        case 0x2a4b:
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x49];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_ComponentModel_EditorAttribute_TypeInfo
                                      );
            FUN_04a143c4(lVar9,uVar8,
                         *(undefined8 *)
                          UnityEngine_Rendering_Universal_Internal_ForwardLights_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x248) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x248,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Net_FileWebRequestCreator_TypeInfo);
          puVar7 = (undefined8 *)Newtonsoft_Json_Converters_ExpandoObjectConverter_TypeInfo;
          break;
        case 0x2a62:
        case 0x2a63:
        case 0x2a68:
        case 0x2a69:
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x4c];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_EasingFunction_TypeInfo
                                      );
            FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_Playables_FrameRate_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x260) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x260,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)Unity_Properties_FieldMember_TypeInfo);
          puVar7 = (undefined8 *)Meta_XR_EnvironmentDepthManagerRaycastExtensions_TypeInfo;
          break;
        case 0x2a64:
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x4d];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)EmeraldAiPoolTagger_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,
                         *(undefined8 *)UnityEngine_Rendering_FrameTimeSampleHistory_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x268) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x268,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                      Oculus_Interaction_PoseDetection_FingerFeature_TypeInfo);
          puVar7 = (undefined8 *)System_ComponentModel_EventDescriptorCollection_TypeInfo;
          break;
        case 0x2a65:
        case 0x2a66:
        case 0x2a67:
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x4e];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                        System_Runtime_Serialization_EnumDataContract_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,
                         *(undefined8 *)
                          Oculus_Interaction_Input_FromOVRControllerDataSource_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x270) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x270,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Resources_FastResourceComparer_TypeInfo);
          puVar7 = (undefined8 *)Unity_Services_Authentication_EnvironmentIdComponent_TypeInfo;
          break;
        case 0x2a6a:
          goto switchD_0511fd9c_caseD_2a6a;
        default:
          if (uVar2 == 0x2af9) goto switchD_0511ff64_caseD_27e2;
          if (uVar2 != 0x2afa) {
            return 0;
          }
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0xf];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Text_EncodingProvider_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Autohand_FingerTouchStartEvent_TypeInfo,0);
            plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78);
            *plVar4 = lVar9;
            thunk_FUN_02bb0e9c(plVar4,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                      Oculus_Interaction_PoseDetection_FeatureDescription_TypeInfo);
          puVar7 = (undefined8 *)System_Linq_Expressions_Interpreter_ExceptionFilter_TypeInfo;
        }
      }
      else if ((int)uVar2 < 0x2b00) {
        if (0x2afd < (int)uVar2) goto switchD_0511fd9c_caseD_2a6a;
        if (uVar2 == 0x2afb) goto LAB_0512223c;
        if (uVar2 == 0x2afc) {
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x10];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                        System_Text_EncoderReplacementFallbackBuffer_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Autohand_FingerTouchStopEvent_TypeInfo,0);
            plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80);
            *plVar4 = lVar9;
            thunk_FUN_02bb0e9c(plVar4,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_XR_Eyes_TypeInfo);
          puVar7 = (undefined8 *)System_EventArgs_TypeInfo;
        }
        else {
          if (uVar2 != 0x2afd) {
            return 0;
          }
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x11];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Globalization_EncodingTable_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,
                         *(undefined8 *)Oculus_Interaction_Input_FingersMetadata_TypeInfo,0);
            plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88);
            *plVar4 = lVar9;
            thunk_FUN_02bb0e9c(plVar4,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_IO_FileNotFoundException_TypeInfo);
          puVar7 = (undefined8 *)System_EventHandler_TypeInfo;
        }
      }
      else if ((int)uVar2 < 0x2b06) {
        if (uVar2 == 0x2b00) goto switchD_0511ff64_caseD_27e2;
        if (uVar2 != 0x2b01) {
          return 0;
        }
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x13];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Text_EncoderNLS_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_FirebaseApp_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Net_FileWebStream_TypeInfo);
        puVar7 = (undefined8 *)UnityEngine_ExitGUIException_TypeInfo;
      }
      else {
        if (uVar2 - 0x2b06 < 2) goto switchD_0511fd9c_caseD_2a6a;
        if (uVar2 == 0x2b09) goto switchD_0511ff64_caseD_27e2;
        if (uVar2 != 0x2b0a) {
          return 0;
        }
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x14];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                      System_ComponentModel_EditorBrowsableAttribute_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Platform_FirebaseAppUtils_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa0);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    UnityEngine_InputSystem_EnhancedTouch_Finger_TypeInfo);
        puVar7 = (undefined8 *)UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo;
      }
      goto LAB_051224c4;
    }
    if (0x2967 < (int)uVar2) {
      if ((int)uVar2 < 0x296f) {
        if ((int)uVar2 < 0x296c) {
          if (uVar2 != 0x2968) {
            if (uVar2 == 0x2969) goto switchD_0511ff64_caseD_27e2;
            if (uVar2 != 0x296b) {
              return 0;
            }
          }
          goto LAB_05120aa8;
        }
        if (uVar2 == 0x296c) {
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x43];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                        Newtonsoft_Json_Converters_EntityKeyMemberConverter_TypeInfo
                                      );
            FUN_04a1428c(lVar9,uVar8,
                         *(undefined8 *)
                          UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x218) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x218,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_IO_FileStream_TypeInfo);
          puVar7 = (undefined8 *)Firebase_ExceptionAggregator_TypeInfo;
          goto LAB_05122e44;
        }
        if (uVar2 == 0x296d) {
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x44];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_UIR_Entry_TypeInfo);
            FUN_04a1428c(lVar9,uVar8,*(undefined8 *)System_Data_ForeignKeyConstraint_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x220) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 0x220,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_FilterParameter_TypeInfo)
          ;
          puVar7 = (undefined8 *)Newtonsoft_Json_Serialization_ErrorContext_TypeInfo;
          goto LAB_05122e44;
        }
        uVar5 = 0x296e;
      }
      else {
        if (0x2971 < (int)uVar2) {
          if (uVar2 != 0x2972) {
            if (uVar2 != 0x29cc) {
              return 0;
            }
            lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar3 = *(long *)puVar1;
            }
            puVar7 = *(undefined8 **)(lVar3 + 0xb8);
            lVar9 = puVar7[0x42];
            if (lVar9 == 0) {
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
              }
              uVar8 = *puVar7;
              lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                          System_Linq_Expressions_Interpreter_EnterFinallyInstruction_TypeInfo
                                        );
              FUN_04a1428c(lVar9,uVar8,*(undefined8 *)UnityEngine_UI_FontUpdateTracker_TypeInfo,0);
              lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
              *(long *)(lVar3 + 0x210) = lVar9;
              thunk_FUN_02bb0e9c(lVar3 + 0x210,lVar9);
            }
            uVar8 = thunk_FUN_02b79644(*(undefined8 *)EmeraldAI_FactionClass_TypeInfo);
            puVar7 = (undefined8 *)
                     System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_TypeInfo;
            goto LAB_05122e44;
          }
          goto switchD_0511ff64_caseD_27e2;
        }
        if (uVar2 - 0x296f < 2) {
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x4b];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)EmeraldAI_EmeraldDetection_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,*(undefined8 *)FoveationFeature_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 600) = lVar9;
            thunk_FUN_02bb0e9c(lVar3 + 600,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)TMPro_Extents_TypeInfo);
          puVar7 = (undefined8 *)System_Runtime_Remoting_Messaging_EnvoyTerminatorSink_TypeInfo;
          goto LAB_051224c4;
        }
        uVar5 = 0x2971;
      }
LAB_05121220:
      if (uVar2 != uVar5) {
        return 0;
      }
switchD_0511fd9c_caseD_2a6a:
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                  Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_TypeInfo
                                );
      FUN_05123788(uVar8,param_1);
      return uVar8;
    }
    if (uVar2 - 0x290b < 0xf) {
      uVar2 = 1 << (ulong)(uVar2 - 0x290b & 0x1f);
      if ((uVar2 & 0x37bc) == 0) {
        if ((uVar2 & 0x4003) == 0) goto switchD_0511fd9c_caseD_2a6a;
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x41];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Text_EncoderFallbackException_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_TextCore_Text_FontStyles_TypeInfo,0);
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          *(long *)(lVar3 + 0x208) = lVar9;
          thunk_FUN_02bb0e9c(lVar3 + 0x208,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    System_Linq_Expressions_Interpreter_FieldByRefUpdater_TypeInfo);
        puVar7 = (undefined8 *)System_Data_EvaluateException_TypeInfo;
      }
      else {
LAB_05120aa8:
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x40];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                      OVR_OpenVR_EVRApplicationTransitionState_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,
                       *(undefined8 *)UnityEngine_TextCore_Text_FontFeatureTable_TypeInfo,0);
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          *(long *)(lVar3 + 0x200) = lVar9;
          thunk_FUN_02bb0e9c(lVar3 + 0x200,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    Oculus_Interaction_PoseDetection_FeatureStateDescription_TypeInfo
                                  );
        puVar7 = (undefined8 *)System_Runtime_Diagnostics_EventLogger_TypeInfo;
      }
    }
    else {
      if (uVar2 - 0x2904 < 5) goto LAB_05120aa8;
      if (uVar2 != 0x290a) {
        return 0;
      }
LAB_0512223c:
      lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *(long *)puVar1;
      }
      puVar7 = *(undefined8 **)(lVar3 + 0xb8);
      lVar9 = puVar7[0x18];
      if (lVar9 == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar8 = *puVar7;
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_IO_EndOfStreamException_TypeInfo);
        FUN_04a143c4(lVar9,uVar8,
                     *(undefined8 *)Firebase_Firestore_FirebaseFirestoreSettings_TypeInfo,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc0);
        *plVar4 = lVar9;
        thunk_FUN_02bb0e9c(plVar4,lVar9);
      }
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                  System_Runtime_Serialization_ExtensionDataObject_TypeInfo);
      puVar7 = (undefined8 *)System_Runtime_Serialization_EnumMemberAttribute_TypeInfo;
    }
    goto LAB_051224c4;
  }
  if ((int)uVar2 < 0x271d) {
    if ((int)uVar2 < 0x2717) {
      if ((int)uVar2 < 0x2712) {
        if (uVar2 == 1) {
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[1];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_EntryPointNotFoundException_TypeInfo);
            FUN_04a1428c(lVar9,uVar8,
                         *(undefined8 *)Oculus_Interaction_GrabAPI_FingerPinchGrabAPI_TypeInfo,0);
            plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar4 = lVar9;
            thunk_FUN_02bb0e9c(plVar4,lVar9);
          }
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Runtime_FatalException_TypeInfo);
          puVar7 = (undefined8 *)System_Runtime_Remoting_Messaging_ErrorMessage_TypeInfo;
          goto LAB_05122e44;
        }
        if (uVar2 != 10000) {
          uVar5 = 0x2711;
          goto LAB_05122424;
        }
LAB_0512100c:
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x15];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVROverlayError_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Auth_FirebaseAuth_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa8);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)Autohand_FingerEnum_TypeInfo);
        puVar7 = (undefined8 *)UnityEngine_InputForUI_EventSource_TypeInfo;
      }
      else if ((int)uVar2 < 0x2714) {
        if (uVar2 == 0x2712) goto LAB_0512100c;
        if (uVar2 != 0x2713) {
          return 0;
        }
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x17];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                      System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo
                                    );
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Firestore_FirebaseFirestore_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo);
        puVar7 = (undefined8 *)Meta_XR_EnvironmentDepth_EnvironmentDepthUtils_TypeInfo;
      }
      else {
        if (uVar2 == 0x2714) goto LAB_0512223c;
        if (uVar2 != 0x2716) {
          return 0;
        }
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0xe];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_EnumDataUtility_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Autohand_FingerTouchEventArgs_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Linq_Expressions_ExpressionType_TypeInfo);
        puVar7 = (undefined8 *)System_Reflection_EventInfo_TypeInfo;
      }
    }
    else if ((int)uVar2 < 0x271a) {
      if (uVar2 - 0x2717 < 2) {
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0xd];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)EmeraldAI_EmeraldAbilityObject_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,
                       *(undefined8 *)Oculus_Interaction_PoseDetection_FingerShapes_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)RootMotion_FinalIK_FBIKChain_TypeInfo);
        puVar7 = (undefined8 *)System_Linq_Expressions_Interpreter_EqualInstruction_TypeInfo;
      }
      else {
        if (uVar2 != 0x2719) {
          return 0;
        }
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x19];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_EasingMode_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Platform_FirebaseHandler_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 200);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)EmeraldAI_FactionExtension_TypeInfo);
        puVar7 = (undefined8 *)UnityEngine_InputForUI_Event_TypeInfo;
      }
    }
    else {
      if (uVar2 == 0x271a) goto switchD_0511ff64_caseD_27e2;
      if (uVar2 == 0x271b) {
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0xc];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                      System_Linq_Expressions_Interpreter_EnterFaultInstruction_TypeInfo
                                    );
          FUN_04a143c4(lVar9,uVar8,
                       *(undefined8 *)Oculus_Interaction_GrabAPI_FingerRawPinchAPI_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    Unity_Services_Core_Configuration_ExternalUserId_TypeInfo);
        puVar7 = (undefined8 *)Meta_XR_EnvironmentRaycastManager_TypeInfo;
      }
      else {
        if (uVar2 != 0x271c) {
          return 0;
        }
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x16];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)EmeraldAI_Utility_EmeraldObjectPool_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_FirebaseException_TypeInfo,0);
          plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0);
          *plVar4 = lVar9;
          thunk_FUN_02bb0e9c(plVar4,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Reflection_FieldInfo_TypeInfo);
        puVar7 = (undefined8 *)UnityEngine_InputForUI_EventConsumer_TypeInfo;
      }
    }
    goto LAB_051224c4;
  }
  uVar8 = 0;
  if (0x289f < (int)uVar2) {
    if ((int)uVar2 < 0x28aa) {
      if ((int)uVar2 < 0x28a2) {
        if (uVar2 == 0x28a0) {
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x3b];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVREye_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,
                         *(undefined8 *)UnityEngine_TextCore_Text_FontAssetFactory_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8) + 0x1d8;
            *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1d8) = lVar9;
            goto LAB_05122744;
          }
        }
        else {
          if (uVar2 != 0x28a1) {
            return 0;
          }
          lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          puVar7 = *(undefined8 **)(lVar3 + 0xb8);
          lVar9 = puVar7[0x3c];
          if (lVar9 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar8 = *puVar7;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVREye_TypeInfo);
            FUN_04a143c4(lVar9,uVar8,
                         *(undefined8 *)UnityEngine_TextCore_Text_FontAssetUtilities_TypeInfo,0);
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            *(long *)(lVar3 + 0x1e0) = lVar9;
            lVar3 = lVar3 + 0x1e0;
LAB_05122744:
            thunk_FUN_02bb0e9c(lVar3,lVar9);
          }
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)Firebase_Firestore_FieldToValueMap_TypeInfo);
        puVar7 = (undefined8 *)UnityEngine_UIElements_EventDispatcher_TypeInfo;
      }
      else {
        if (uVar2 == 0x28a2) goto switchD_0511fd9c_caseD_2a6a;
        if (uVar2 != 0x28a4) {
          if (uVar2 != 0x28a8) {
            return 0;
          }
          goto LAB_05121d18;
        }
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x3e];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                      System_Linq_Expressions_Interpreter_EnterExceptionFilterInstruction_TypeInfo
                                    );
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_TextCore_LowLevel_FontEngine_TypeInfo,
                       0);
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          *(long *)(lVar3 + 0x1f0) = lVar9;
          thunk_FUN_02bb0e9c(lVar3 + 0x1f0,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    UnityEngine_Rendering_Universal_FilmGrainLookupParameter_TypeInfo
                                  );
        puVar7 = (undefined8 *)UnityEngine_UIElements_EventCallbackRegistry_TypeInfo;
      }
    }
    else {
      if (0x28ad < (int)uVar2) {
        if (1 < uVar2 - 0x28ae) {
          return 0;
        }
        goto switchD_0511fd9c_caseD_2a6a;
      }
      if (uVar2 == 0x28aa) {
LAB_05121d18:
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x3d];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)Newtonsoft_Json_Utilities_EnumInfo_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_UIElements_FontDefinition_TypeInfo,0);
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          *(long *)(lVar3 + 0x1e8) = lVar9;
          thunk_FUN_02bb0e9c(lVar3 + 0x1e8,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    Unity_XR_OpenXR_Features_PICOSupport_EyeType_TypeInfo);
        puVar7 = (undefined8 *)System_Linq_Expressions_Interpreter_ExceptionHandler_TypeInfo;
      }
      else if (uVar2 == 0x28ab) {
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x3a];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                      System_Linq_Expressions_Interpreter_EnterExceptionHandlerInstruction_TypeInfo
                                    );
          FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_TextCore_Text_FontAsset_TypeInfo,0);
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          *(long *)(lVar3 + 0x1d0) = lVar9;
          thunk_FUN_02bb0e9c(lVar3 + 0x1d0,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_IO_FileAccess_TypeInfo);
        puVar7 = (undefined8 *)System_Threading_ExecutionContext_TypeInfo;
      }
      else {
        if (uVar2 != 0x28ac) {
          return 0;
        }
        lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar3 + 0xb8);
        lVar9 = puVar7[0x3f];
        if (lVar9 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar8 = *puVar7;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo);
          FUN_04a143c4(lVar9,uVar8,
                       *(undefined8 *)UnityEngine_TextCore_LowLevel_FontEngineError_TypeInfo,0);
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          *(long *)(lVar3 + 0x1f8) = lVar9;
          thunk_FUN_02bb0e9c(lVar3 + 0x1f8,lVar9);
        }
        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    System_Runtime_Serialization_ExtensionDataMember_TypeInfo);
        puVar7 = (undefined8 *)System_Runtime_ExceptionTrace_TypeInfo;
      }
    }
    goto LAB_051224c4;
  }
  switch(uVar2) {
  case 0x27d8:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x25];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRRenderModelError_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)System_Runtime_Serialization_FixupHolder_TypeInfo,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x128) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x128,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo);
    puVar7 = (undefined8 *)System_Runtime_ExceptionServices_ExceptionDispatchInfo_TypeInfo;
    break;
  case 0x27d9:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x26];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVREventType_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)System_Runtime_Serialization_FixupHolderList_TypeInfo,
                   0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x130) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x130,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                System_ComponentModel_ExtendedPropertyDescriptor_TypeInfo);
    puVar7 = (undefined8 *)Meta_XR_EnvironmentDepth_EnvironmentDepthManager_TypeInfo;
    break;
  case 0x27da:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x27];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRSkeletalMotionRange_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,
                   *(undefined8 *)Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex_TypeInfo,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x138) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x138,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_InputSystem_UI_ExtendedSubmitCancelEventData_TypeInfo);
    puVar7 = (undefined8 *)System_ExceptionArgument_TypeInfo;
    break;
  case 0x27db:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x28];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)DG_Tweening_EaseFunction_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_FloatAffordanceTheme_TypeInfo
                   ,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x140) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x140,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)Firebase_Firestore_FieldValueVector_TypeInfo);
    puVar7 = (undefined8 *)Pico_Platform_Models_Error_TypeInfo;
    break;
  case 0x27dc:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x29];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Text_EncodingHelper_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,
                   *(undefined8 *)System_Runtime_Serialization_FloatDataContract_TypeInfo,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x148) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x148,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)Unity_Services_Core_ExternalUserIdProperty_TypeInfo);
    puVar7 = (undefined8 *)System_Runtime_Diagnostics_EventDescriptor_TypeInfo;
    break;
  case 0x27dd:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x23];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Text_EncoderExceptionFallbackBuffer_TypeInfo)
      ;
      FUN_04a1428c(lVar9,uVar8,*(undefined8 *)FistFIghtManager_TypeInfo,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x118) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x118,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo);
    puVar7 = (undefined8 *)System_Dynamic_ExpandoObject_TypeInfo;
    goto LAB_05122e44;
  case 0x27de:
  case 0x27e1:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x24];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)EmeraldDeathListener_TypeInfo);
      FUN_04a14154(lVar9,uVar8,*(undefined8 *)System_Net_FixedSizeReadStream_TypeInfo,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x120) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x120,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_IO_FileMode_TypeInfo);
    FUN_039dca30(uVar8,param_1,lVar9,*(undefined8 *)Oculus_Platform_Models_Error_TypeInfo);
    return uVar8;
  case 0x27df:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x22];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRNotificationStyle_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Oculus_Interaction_FirstHoverInteractorGroup_TypeInfo,
                   0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x110) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x110,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo);
    puVar7 = (undefined8 *)System_Reflection_ExceptionHandlingClauseOptions_TypeInfo;
    break;
  case 0x27e0:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x21];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_EnumField_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Firestore_FirestoreProxy_TypeInfo,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x108) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x108,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)TMPro_FastAction_TypeInfo);
    puVar7 = (undefined8 *)UnityEngine_UIElements_EventCategoryAttribute_TypeInfo;
    break;
  case 0x27e3:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x2a];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Xml_EmptyEnumerator_TypeInfo);
      FUN_04a1428c(lVar9,uVar8,*(undefined8 *)UnityEngine_UIElements_FloatField_TypeInfo,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x150) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x150,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_UIElements_FilterFunctionDefinitionUtils_TypeInfo);
    puVar7 = (undefined8 *)UnityEngine_UIElements_EventInterestReflectionUtils_TypeInfo;
LAB_05122e44:
    FUN_039dca8c(uVar8,param_1,lVar9,*puVar7);
    return uVar8;
  case 0x27e4:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x2d];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRCompositorTimingMode_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_Primitives_FloatTweenableVariable_TypeInfo
                   ,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x168) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x168,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_IO_FileLoadException_TypeInfo);
    puVar7 = (undefined8 *)UnityEngine_UIElements_EventDispatcherGate_TypeInfo;
    break;
  case 0x27e5:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x2c];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)EmeraldAI_EmeraldSystem_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)DG_Tweening_Plugins_FloatPlugin_TypeInfo,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x160) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x160,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)MS_Internal_Xml_XPath_Filter_TypeInfo);
    puVar7 = (undefined8 *)Firebase_ErrorMessages_TypeInfo;
    break;
  case 0x27e7:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x2e];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRScreenshotError_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_UIElements_FocusChangeDirection_TypeInfo,0
                  );
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x170) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x170,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo);
    puVar7 = (undefined8 *)System_Xml_Serialization_EnumMap_TypeInfo;
    break;
  case 0x27e8:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x2b];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)EmeraldAI_EmeraldFactionData_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)UnityEngine_Rendering_FloatParameter_TypeInfo,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x158) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x158,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_InputSystem_UI_ExtendedPointerEventData_TypeInfo);
    puVar7 = (undefined8 *)UnityEngine_EventModifiers_TypeInfo;
    break;
  case 0x27e9:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x1a];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_ElementUnderPointer_TypeInfo)
      ;
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Platform_FirebaseLogger_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xd0);
      *plVar4 = lVar9;
      thunk_FUN_02bb0e9c(plVar4,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)RootMotion_FinalIK_FABRIKRoot_TypeInfo);
    puVar7 = (undefined8 *)Newtonsoft_Json_Serialization_ErrorEventArgs_TypeInfo;
    break;
  case 0x27ea:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x1b];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRControllerAxisType_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Auth_FirebaseUser_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xd8);
      *plVar4 = lVar9;
      thunk_FUN_02bb0e9c(plVar4,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)Firebase_Firestore_FieldPath_TypeInfo);
    puVar7 = (undefined8 *)LitJson_ExporterFunc_TypeInfo;
    break;
  case 0x27ec:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x20];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_UIR_EntryPool_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Firestore_FirestorePropertyAttribute_TypeInfo
                   ,0);
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      *(long *)(lVar3 + 0x100) = lVar9;
      thunk_FUN_02bb0e9c(lVar3 + 0x100,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo
                              );
    puVar7 = (undefined8 *)Meta_XR_EnvironmentDepthRaycaster_TypeInfo;
    break;
  case 0x27ed:
  case 0x27ee:
  case 0x27f0:
  case 0x27f1:
  case 0x27f3:
    goto switchD_0511fd9c_caseD_2a39;
  case 0x27ef:
  case 0x27f2:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x1d];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)Meta_XR_MRUtilityKit_EffectMesh_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Firestore_FirestoreCpp_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xe8);
      *plVar4 = lVar9;
      thunk_FUN_02bb0e9c(plVar4,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                System_Linq_Expressions_ExpressionStringBuilder_TypeInfo);
    puVar7 = (undefined8 *)EnvironmentChanger_TypeInfo;
    break;
  case 0x27f4:
  case 0x27f6:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x1c];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_EVRTrackedCameraError_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Auth_FirebaseUserInternal_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xe0);
      *plVar4 = lVar9;
      thunk_FUN_02bb0e9c(plVar4,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Resources_FileBasedResourceGroveler_TypeInfo);
    puVar7 = (undefined8 *)System_Dynamic_ExpandoClass_TypeInfo;
    break;
  case 0x27f5:
  case 0x27f8:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x1f];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                  UnityEngine_UIElements_EditorPanelRootElement_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Firestore_FirestoreException_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xf8);
      *plVar4 = lVar9;
      thunk_FUN_02bb0e9c(plVar4,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo);
    puVar7 = (undefined8 *)Unity_Services_Core_Environments_Internal_Environments_TypeInfo;
    break;
  case 0x27f7:
  case 0x27f9:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x1e];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_UIR_EntryRecorder_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Firestore_FirestoreCppPINVOKE_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xf0);
      *plVar4 = lVar9;
      thunk_FUN_02bb0e9c(plVar4,lVar9);
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Rendering_FilteringSettings_TypeInfo);
    puVar7 = (undefined8 *)System_Runtime_Remoting_EnvoyInfo_TypeInfo;
    break;
  default:
    uVar5 = 0x283c;
LAB_05122424:
    if (uVar2 != uVar5) {
      return 0;
    }
  case 0x27e2:
  case 0x27e6:
  case 0x27eb:
switchD_0511ff64_caseD_27e2:
    lVar3 = *(long *)LitJson_FsmContext_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar9 = puVar7[0x12];
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar7;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Empty_TypeInfo);
      FUN_04a143c4(lVar9,uVar8,*(undefined8 *)Firebase_Auth_FirebaseAccountLinkException_TypeInfo,0)
      ;
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90);
      *plVar4 = lVar9;
LAB_051224a4:
      thunk_FUN_02bb0e9c(plVar4,lVar9);
    }
LAB_051224ac:
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_TextCore_Text_FastAction_TypeInfo);
    puVar7 = (undefined8 *)UnityEngine_EventSystems_EventSystem_TypeInfo;
  }
LAB_051224c4:
  FUN_039dcae8(uVar8,param_1,lVar9,*puVar7);
switchD_0511fd9c_caseD_2a39:
  return uVar8;
}


