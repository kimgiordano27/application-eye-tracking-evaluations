/*
FUNCTION_NAME: Unity.AppUI.UI.RectField$$set_value
ENTRY_POINT: 062f683c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 149
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_8
*/


void Unity_AppUI_UI_RectField__set_value(void)

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
  long lVar13;
  uint *puVar14;
  undefined8 local_640;
  undefined4 local_638;
  undefined8 local_630;
  undefined4 local_628;
  undefined8 local_620;
  undefined4 local_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined8 local_5f0;
  undefined4 local_5e8;
  undefined8 local_5e0;
  undefined4 local_5d8;
  undefined8 local_5d0;
  undefined4 local_5c8;
  undefined8 local_5c0;
  undefined4 local_5b8;
  undefined8 local_5b0;
  undefined4 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined8 local_590;
  undefined4 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined8 local_570;
  undefined4 local_568;
  undefined8 local_560;
  undefined4 local_558;
  undefined8 local_550;
  undefined4 local_548;
  undefined8 local_540;
  undefined4 local_538;
  undefined8 local_530;
  undefined4 local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_510;
  undefined4 local_508;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar10 = System_Collections_DictionaryEntry_TypeInfo;
  puVar9 = Unity_VisualScripting_DictionaryCloner_TypeInfo;
  puVar8 = Meta_WitAi_Dictation_Events_DictationSessionEvent_TypeInfo;
  puVar7 = Meta_WitAi_Dictation_Data_DictationSession_TypeInfo;
  puVar6 = Oculus_Voice_Dictation_Bindings_Android_DictationListenerBinding_TypeInfo;
  puVar5 = Meta_WitAi_Dictation_Events_DictationEvents_TypeInfo;
  puVar4 = Oculus_Voice_Dictation_Bindings_Android_DictationConfigurationBinding_TypeInfo;
  puVar3 = Oculus_Voice_Dictation_Configuration_DictationConfiguration_TypeInfo;
  puVar2 = Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo;
  puVar1 = PTR_DAT_072812a8;
  if ((DAT_076de6b3 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072799d0);
    thunk_FUN_032e1da0(System_Collections_Generic_List<XRHandSubsystem>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072799c0);
    thunk_FUN_032e1da0(System_Net_DigestClient_TypeInfo);
    thunk_FUN_032e1da0(Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a93b8);
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(System_Net_DigestHeaderParser_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0727b460);
    thunk_FUN_032e1da0(System_Net_DigestSession_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_StyleSheets_Dimension_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_Core_Dir_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_Core_DirContext_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0728a890);
    thunk_FUN_032e1da0(Unity_AppUI_UI_Direction_TypeInfo);
    thunk_FUN_032e1da0(System_IO_DirectoryInfo_TypeInfo);
    thunk_FUN_032e1da0(System_IO_DirectoryNotFoundException_TypeInfo);
    thunk_FUN_032e1da0(ReadyPlayerMe_Core_DirectoryUtility_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07292b60);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_Controls_DiscreteButtonControl_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Timeline_DiscreteTime_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Converters_DiscriminatedUnionConverter_TypeInfo);
    thunk_FUN_032e1da0(Firebase_Dispatcher_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Display_TypeInfo);
    thunk_FUN_032e1da0(System_ComponentModel_DisplayNameAttribute_TypeInfo);
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_DisposableManagerSingleton_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Runtime_Remoting_DisposerReplySink_TypeInfo);
    thunk_FUN_032e1da0(MikeNspired_UnityXRHandPoser_DistanceGrabber_TypeInfo);
    thunk_FUN_032e1da0(Oculus_Interaction_DistantPointDetector_TypeInfo);
    thunk_FUN_032e1da0(DistortTunnelPass_CopyColor_TypeInfo);
    thunk_FUN_032e1da0(DistortTunnelPass_Distort_TypeInfo);
    thunk_FUN_032e1da0(DistortTunnelPass_Tunnel_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_DistortionCoordinates_t_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_DivInstruction_TypeInfo);
    thunk_FUN_032e1da0(System_DivideByZeroException_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_Divider_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_DivisionHandler_TypeInfo);
    thunk_FUN_032e1da0(System_Runtime_InteropServices_DllImportAttribute_TypeInfo);
    thunk_FUN_032e1da0(System_DllNotFoundException_TypeInfo);
    thunk_FUN_032e1da0(System_Xml_DomNameTable_TypeInfo);
    thunk_FUN_032e1da0(double_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_Controls_DoubleControl_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DoubleField_TypeInfo);
    thunk_FUN_032e1da0(System_Xml_Schema_DoubleLinkAxis_TypeInfo);
    thunk_FUN_032e1da0(System_Data_Common_DoubleStorage_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Networking_DownloadHandler_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Networking_DownloadHandlerBuffer_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Networking_DownloadHandlerFile_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_Universal_DownscaleParameter_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_Controls_DpadControl_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DragAndDropArgs_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DragAndDropPosition_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DragAndDropUtility_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_AR_DragGesture_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_AR_DragGestureRecognizer_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0727cd48);
    thunk_FUN_032e1da0(Oculus_Voice_Dictation_Bindings_Android_DictationListenerBinding_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07289878);
    thunk_FUN_032e1da0(Unity_AppUI_UI_Draggable_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_Dragger_TypeInfo);
    thunk_FUN_032e1da0(BNG_DrawDefinition_TypeInfo);
    thunk_FUN_032e1da0(GLTFast_Schema_DrawMode_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_TypeInfo);
    thunk_FUN_032e1da0(
                      UnityEngine_Rendering_Universal_Internal_DrawObjectsWithRenderingLayersPass_TypeInfo
                      );
    thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_DrawParams_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_Universal_DrawSkyboxPass_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_Drawer_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_DrawerAnchor_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_DrawerHeader_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_DrawerVariant_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_DrawingSettings_TypeInfo);
    thunk_FUN_032e1da0(System_IO_DriveNotFoundException_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_Transformers_DropEventArgs_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_DropZone_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_DropZoneState_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_Dropdown_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UI_Dropdown_TypeInfo);
    thunk_FUN_032e1da0(NovaSamples_UIControls_DropdownData_TypeInfo);
    thunk_FUN_032e1da0(System_Xml_Schema_Datatype_day_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DropdownField_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_DropdownItem_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DropdownMenu_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DropdownMenuAction_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DropdownMenuEventInfo_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DropdownMenuSeparator_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DropdownUtility_TypeInfo);
    thunk_FUN_032e1da0(NovaSamples_UIControls_DropdownVisuals_TypeInfo);
    thunk_FUN_032e1da0(System_Xml_DtdParser_TypeInfo);
    thunk_FUN_032e1da0(System_Xml_Schema_DtdValidator_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_DualShock_DualShockGamepad_TypeInfo);
    thunk_FUN_032e1da0(NovaSamples_DummyScripts_DummyCubeAnimator_TypeInfo);
    thunk_FUN_032e1da0(Oculus_Skinning_DummySkinningBufferPropertySetter_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_DupInstruction_TypeInfo);
    thunk_FUN_032e1da0(System_Data_DuplicateNameException_TypeInfo);
    thunk_FUN_032e1da0(System_Xml_Schema_DurationFacetsChecker_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DynamicAtlas_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DynamicAtlasPage_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_DynamicAtlasSettings_TypeInfo);
    thunk_FUN_032e1da0(Meta_WitAi_Data_Entities_DynamicEntityKeywordRegistry_TypeInfo);
    thunk_FUN_032e1da0(System_Dynamic_DynamicMetaObject_TypeInfo);
    thunk_FUN_032e1da0(System_Runtime_Remoting_Contexts_DynamicPropertyCollection_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_DynamicResolutionHandler_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EChaperoneConfigFile_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EColorSpace_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EDualAnalogWhich_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EHiddenAreaMeshType_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EIOBufferMode_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EOverlayDirection_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_ETextureType_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_ETrackedControllerRole_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_ETrackedDeviceClass_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_ETrackedDeviceProperty_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_ETrackedPropertyError_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_ETrackingUniverseOrigin_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRApplicationError_TypeInfo);
    thunk_FUN_032e1da0(Meta_WitAi_Dictation_Events_DictationEvents_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRApplicationProperty_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRApplicationTransitionState_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRButtonId_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRCompositorTimingMode_TypeInfo);
    thunk_FUN_032e1da0(Meta_WitAi_Dictation_Events_DictationSessionEvent_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRControllerAxisType_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVREventType_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVREye_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRNotificationStyle_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRNotificationType_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVROverlayError_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRRenderModelError_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRScreenshotError_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRScreenshotPropertyFilenames_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRScreenshotType_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRSettingsError_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRSkeletalMotionRange_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRSkeletalTransformSpace_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRSubmitFlags_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRTrackedCameraError_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_Antlr3_Runtime_EarlyExitException_TypeInfo);
    thunk_FUN_032e1da0(Unity_Jobs_EarlyInitHelpers_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EasingFunction_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EasingMode_TypeInfo);
    thunk_FUN_032e1da0(System_ComponentModel_EditorAttribute_TypeInfo);
    thunk_FUN_032e1da0(System_ComponentModel_EditorBrowsableAttribute_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_EditorTimeBinding_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_ElementUnderPointer_TypeInfo);
    thunk_FUN_032e1da0(System_Empty_TypeInfo);
    thunk_FUN_032e1da0(System_Xml_EmptyEnumerator_TypeInfo);
    thunk_FUN_032e1da0(System_Text_EncoderExceptionFallback_TypeInfo);
    thunk_FUN_032e1da0(System_Text_EncoderExceptionFallbackBuffer_TypeInfo);
    thunk_FUN_032e1da0(System_Text_EncoderFallback_TypeInfo);
    thunk_FUN_032e1da0(System_Text_EncoderFallbackException_TypeInfo);
    thunk_FUN_032e1da0(System_Text_EncoderNLS_TypeInfo);
    thunk_FUN_032e1da0(System_Text_EncoderReplacementFallback_TypeInfo);
    thunk_FUN_032e1da0(System_Text_EncoderReplacementFallbackBuffer_TypeInfo);
    thunk_FUN_032e1da0(System_Text_Encoding_TypeInfo);
    thunk_FUN_032e1da0(System_Text_EncodingHelper_TypeInfo);
    thunk_FUN_032e1da0(System_Text_EncodingProvider_TypeInfo);
    thunk_FUN_032e1da0(System_Globalization_EncodingTable_TypeInfo);
    thunk_FUN_032e1da0(System_IO_EndOfStreamException_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_EnhancedTouch_EnhancedTouchSupport_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_Ensure_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_EnsureThat_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_EnterExceptionFilterInstruction_TypeInfo)
    ;
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_EnterExceptionHandlerInstruction_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_EnterFaultInstruction_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_EnterFinallyInstruction_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo)
    ;
    thunk_FUN_032e1da0(PTR_DAT_072b9410);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_EnterTryFaultInstruction_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Converters_EntityKeyMemberConverter_TypeInfo);
    thunk_FUN_032e1da0(System_EntryPointNotFoundException_TypeInfo);
    thunk_FUN_032e1da0(System_Enum_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_EnumDataUtility_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EnumField_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EnumFieldHelpers_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Utilities_EnumInfo_TypeInfo);
    thunk_FUN_032e1da0(System_Xml_Serialization_EnumMap_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Utilities_EnumUtils_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_EnumerableCloner_TypeInfo);
    thunk_FUN_032e1da0(System_IO_EnumerationOptions_TypeInfo);
    thunk_FUN_032e1da0(System_Environment_TypeInfo);
    thunk_FUN_032e1da0(Meta_XR_EnvironmentDepth_EnvironmentDepthManager_TypeInfo);
    thunk_FUN_032e1da0(Meta_XR_EnvironmentDepth_EnvironmentDepthUtils_TypeInfo);
    thunk_FUN_032e1da0(System_Runtime_Remoting_EnvoyInfo_TypeInfo);
    thunk_FUN_032e1da0(System_Runtime_Remoting_Messaging_EnvoyTerminatorSink_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_EqualInstruction_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_EqualityHandler_TypeInfo);
    thunk_FUN_032e1da0(System_Globalization_EraInfo_TypeInfo);
    thunk_FUN_032e1da0(Oculus_Platform_Models_Error_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Serialization_ErrorContext_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Serialization_ErrorEventArgs_TypeInfo);
    thunk_FUN_032e1da0(System_Runtime_Remoting_Messaging_ErrorMessage_TypeInfo);
    thunk_FUN_032e1da0(Firebase_ErrorMessages_TypeInfo);
    thunk_FUN_032e1da0(System_Data_EvaluateException_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_Dependencies_NCalc_EvaluateFunctionHandler_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_Dependencies_NCalc_EvaluateParameterHandler_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_Dependencies_NCalc_EvaluationException_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Event_TypeInfo);
    thunk_FUN_032e1da0(System_EventArgs_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventBase_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_Bridge_EventBaseExtensionsBridge_TypeInfo);
    thunk_FUN_032e1da0(Unity_XR_CoreUtils_Bindings_EventBinding_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_EventBus_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallbackList_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallbackListPool_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallbackRegistry_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072812a8);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCategoryAttribute_TypeInfo);
    thunk_FUN_032e1da0(System_ComponentModel_EventDescriptor_TypeInfo);
    thunk_FUN_032e1da0(System_ComponentModel_EventDescriptorCollection_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventDispatcher_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventDispatcherGate_TypeInfo);
    thunk_FUN_032e1da0(System_EventHandler_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_EventHook_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_EventHookComparer_TypeInfo);
    thunk_FUN_032e1da0(System_Reflection_EventInfo_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousMoveProvider_TypeInfo
                      );
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventInterestAttribute_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventInterestReflectionUtils_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_EventModifiers_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_EventSystems_EventSystem_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_EventType_TypeInfo);
    thunk_FUN_032e1da0(System_Threading_EventWaitHandle_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_ExVisualElement_TypeInfo);
    thunk_FUN_032e1da0(Oculus_Voice_Dictation_Configuration_DictationConfiguration_TypeInfo);
    thunk_FUN_032e1da0(System_Exception_TypeInfo);
    thunk_FUN_032e1da0(Firebase_ExceptionAggregator_TypeInfo);
    thunk_FUN_032e1da0(System_ExceptionArgument_TypeInfo);
    thunk_FUN_032e1da0(System_Runtime_ExceptionServices_ExceptionDispatchInfo_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_ExceptionFilter_TypeInfo);
    thunk_FUN_032e1da0(Firebase_Crashlytics_ExceptionHandler_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_ExceptionHandler_TypeInfo);
    thunk_FUN_032e1da0(System_Reflection_ExceptionHandlingClauseOptions_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_ExceptionMessages_TypeInfo);
    thunk_FUN_032e1da0(System_ExceptionResource_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_ExclusiveOrHandler_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_TypeInfo);
    thunk_FUN_032e1da0(System_Text_RegularExpressions_ExclusiveReference_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_ExecuteCommandEvent_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    thunk_FUN_032e1da0(System_Threading_ExecutionContext_TypeInfo);
    thunk_FUN_032e1da0(System_Action<IXRInteractor>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_ExitGUIException_TypeInfo);
    thunk_FUN_032e1da0(System_Dynamic_ExpandoClass_TypeInfo);
    thunk_FUN_032e1da0(System_Dynamic_ExpandoObject_TypeInfo);
    thunk_FUN_032e1da0(Meta_WitAi_Dictation_Data_DictationSession_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Converters_ExpandoObjectConverter_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_VFX_Utility_ExposedProperty_TypeInfo);
    thunk_FUN_032e1da0(ReadyPlayerMe_Core_Expression_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Expression_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_Dependencies_NCalc_Expression_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_DictionaryEntry_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_ExpressionEvaluator_TypeInfo);
    thunk_FUN_032e1da0(System_Data_ExpressionParser_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_ExpressionStringBuilder_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_ExpressionType_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_UI_ExtendedPointerEventData_TypeInfo);
    thunk_FUN_032e1da0(System_ComponentModel_ExtendedPropertyDescriptor_TypeInfo);
    thunk_FUN_032e1da0(System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_ExtensionMethodCache_TypeInfo);
    thunk_FUN_032e1da0(ReadyPlayerMe_Core_ExtensionMethods_TypeInfo);
    thunk_FUN_032e1da0(TMPro_Extents_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Timeline_Extrapolation_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_PostProcessing_EyeAdaptationParameter_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07289448);
    thunk_FUN_032e1da0(UnityEngine_XR_Eyes_TypeInfo);
    thunk_FUN_032e1da0(RootMotion_FinalIK_FABRIKRoot_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07292b78);
    thunk_FUN_032e1da0(PTR_DAT_0728a898);
    thunk_FUN_032e1da0(RootMotion_FinalIK_FBIKChain_TypeInfo);
    thunk_FUN_032e1da0(Oculus_Avatar2_FBVersionNumber_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07289460);
    thunk_FUN_032e1da0(Unity_VisualScripting_DictionaryCloner_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_Antlr3_Runtime_FailedPredicateException_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_DepthState_TypeInfo);
    thunk_FUN_032e1da0(ReadyPlayerMe_Core_FailureEventArgs_TypeInfo);
    thunk_FUN_032e1da0(ReadyPlayerMe_Core_FailureType_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_FakeSerializationCloner_TypeInfo);
    thunk_FUN_032e1da0(TMPro_FastAction_TypeInfo);
    thunk_FUN_032e1da0(System_IO_Compression_FastEncoderStatics_TypeInfo);
    thunk_FUN_032e1da0(System_Security_Cryptography_DerSequenceReader_TypeInfo);
    thunk_FUN_032e1da0(System_Resources_FastResourceComparer_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_XR_ARSubsystems_Feature_TypeInfo);
    thunk_FUN_032e1da0(Oculus_Interaction_PoseDetection_FeatureDescription_TypeInfo);
    thunk_FUN_032e1da0(Oculus_Interaction_PoseDetection_FeatureStateActiveMode_TypeInfo);
    thunk_FUN_032e1da0(Oculus_Interaction_PoseDetection_FeatureStateDescription_TypeInfo);
    thunk_FUN_032e1da0(System_FieldAccessException_TypeInfo);
    thunk_FUN_032e1da0(System_ComponentModel_DescriptionAttribute_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_Interpreter_FieldByRefUpdater_TypeInfo);
    thunk_FUN_032e1da0(System_Linq_Expressions_FieldExpression_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Linq_JsonPath_FieldFilter_TypeInfo);
    thunk_FUN_032e1da0(System_Reflection_FieldInfo_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_FieldLabel_TypeInfo);
    thunk_FUN_032e1da0(Unity_Properties_FieldMember_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_TypeInfo);
    thunk_FUN_032e1da0(System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07291aa8);
    thunk_FUN_032e1da0(Unity_VisualScripting_FieldsCloner_TypeInfo);
    thunk_FUN_032e1da0(System_IO_FileAccess_TypeInfo);
    thunk_FUN_032e1da0(
                      Oculus_Voice_Dictation_Bindings_Android_DictationConfigurationBinding_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Resources_FileBasedResourceGroveler_TypeInfo);
    thunk_FUN_032e1da0(System_IO_FileInfo_TypeInfo);
    DAT_076de6b3 = 1;
  }
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = *(undefined8 *)puVar3;
  thunk_FUN_0333a630(*(undefined8 *)(*(long *)puVar2 + 0xb8),*(undefined8 *)puVar3);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = *(undefined8 *)puVar1;
  thunk_FUN_0333a630();
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = *(undefined8 *)puVar4;
  thunk_FUN_0333a630();
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = *(undefined8 *)puVar5;
  thunk_FUN_0333a630();
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = *(undefined8 *)puVar6;
  thunk_FUN_0333a630();
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = *(undefined8 *)puVar7;
  thunk_FUN_0333a630();
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = *(undefined8 *)puVar8;
  thunk_FUN_0333a630();
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = *(undefined8 *)puVar9;
  thunk_FUN_0333a630();
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = *(undefined8 *)puVar10;
  thunk_FUN_0333a630();
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) =
       *(undefined8 *)UnityEngine_UIElements_EasingMode_TypeInfo;
  thunk_FUN_0333a630();
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) =
       *(undefined8 *)Unity_VisualScripting_ExtensionMethodCache_TypeInfo;
  thunk_FUN_0333a630();
  lVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072799c0);
  FUN_050f8178(lVar11,0x26,*(undefined8 *)System_Collections_Generic_List<XRHandSubsystem>_TypeInfo)
  ;
  puVar10 = UnityEngine_Rendering_PostProcessing_EyeAdaptationParameter_TypeInfo;
  puVar9 = System_Reflection_ExceptionHandlingClauseOptions_TypeInfo;
  puVar8 = Firebase_ErrorMessages_TypeInfo;
  puVar7 = System_IO_EndOfStreamException_TypeInfo;
  puVar6 = OVR_OpenVR_EVRScreenshotPropertyFilenames_TypeInfo;
  puVar5 = OVR_OpenVR_EVRApplicationError_TypeInfo;
  puVar4 = UnityEngine_UIElements_DropdownUtility_TypeInfo;
  puVar3 = UnityEngine_Rendering_Universal_Internal_DrawObjectsWithRenderingLayersPass_TypeInfo;
  puVar2 = PTR_DAT_072799d0;
  puVar1 = PTR_DAT_072794b0;
  if (lVar11 != 0) {
    FUN_050f8b10(lVar11,*(undefined8 *)UnityEngine_EnumDataUtility_TypeInfo,
                 *(undefined8 *)DistortTunnelPass_CopyColor_TypeInfo,*(undefined8 *)PTR_DAT_072799d0
                );
    FUN_050f8b10(lVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar9,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)puVar6,*(undefined8 *)puVar8,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar7,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)System_Action<IXRInteractor>_TypeInfo,
                 *(undefined8 *)Unity_AppUI_Bridge_EventBaseExtensionsBridge_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)System_Security_Cryptography_DerSequenceReader_TypeInfo,
                 *(undefined8 *)UnityEngine_UIElements_EventBase_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)OVR_OpenVR_EVRControllerAxisType_TypeInfo,
                 *(undefined8 *)OVR_OpenVR_EVRCompositorTimingMode_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)OVR_OpenVR_EVRScreenshotError_TypeInfo,
                 *(undefined8 *)System_Text_Encoding_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)UnityEngine_Rendering_DepthState_TypeInfo,
                 *(undefined8 *)System_Text_EncoderExceptionFallback_TypeInfo,*(undefined8 *)puVar2)
    ;
    FUN_050f8b10(lVar11,*(undefined8 *)System_ComponentModel_DescriptionAttribute_TypeInfo,
                 *(undefined8 *)UnityEngine_Display_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)PTR_DAT_072b9410,
                 *(undefined8 *)UnityEngine_UIElements_DropdownMenuEventInfo_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)
                         Oculus_Voice_Dictation_Configuration_DictationConfiguration_TypeInfo,
                 *(undefined8 *)OVR_OpenVR_EVRSkeletalTransformSpace_TypeInfo,*(undefined8 *)puVar2)
    ;
    FUN_050f8b10(lVar11,*(undefined8 *)RootMotion_FinalIK_FABRIKRoot_TypeInfo,
                 *(undefined8 *)Unity_Properties_FieldMember_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)UnityEngine_InputSystem_Controls_DoubleControl_TypeInfo,
                 *(undefined8 *)PTR_DAT_0728a890,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)UnityEngine_Rendering_Universal_DrawSkyboxPass_TypeInfo,
                 *(undefined8 *)UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)PTR_DAT_07292b78,
                 *(undefined8 *)Unity_VisualScripting_Dependencies_NCalc_Expression_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousMoveProvider_TypeInfo
                 ,*(undefined8 *)PTR_DAT_07289878,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)MikeNspired_UnityXRHandPoser_DistanceGrabber_TypeInfo,
                 *(undefined8 *)PTR_DAT_0727b460,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)TMPro_FastAction_TypeInfo,
                 *(undefined8 *)Unity_AppUI_UI_DropdownItem_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)PTR_DAT_07289460,
                 *(undefined8 *)Oculus_Interaction_PoseDetection_FeatureStateDescription_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)System_IO_DriveNotFoundException_TypeInfo,
                 *(undefined8 *)NovaSamples_UIControls_DropdownData_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)Oculus_Interaction_PoseDetection_FeatureDescription_TypeInfo,
                 *(undefined8 *)
                  Unity_VisualScripting_Dependencies_NCalc_EvaluationException_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)
                         System_Linq_Expressions_Interpreter_EnterExceptionHandlerInstruction_TypeInfo
                 ,*(undefined8 *)Unity_XR_CoreUtils_Bindings_EventBinding_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)System_EntryPointNotFoundException_TypeInfo,
                 *(undefined8 *)ReadyPlayerMe_Core_Expression_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)UnityEngine_UIElements_DoubleField_TypeInfo,
                 *(undefined8 *)System_Text_RegularExpressions_ExclusiveReference_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)UnityEngine_Rendering_DrawingSettings_TypeInfo,
                 *(undefined8 *)UnityEngine_ExitGUIException_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)System_ExceptionArgument_TypeInfo,
                 *(undefined8 *)Unity_AppUI_UI_Divider_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)PTR_DAT_07291aa8,
                 *(undefined8 *)Unity_VisualScripting_EditorTimeBinding_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)Newtonsoft_Json_Utilities_EnumUtils_TypeInfo,
                 *(undefined8 *)System_Linq_Expressions_ExpressionType_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)UnityEngine_InputSystem_UI_ExtendedPointerEventData_TypeInfo,
                 *(undefined8 *)Unity_VisualScripting_EventBus_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)Unity_Jobs_EarlyInitHelpers_TypeInfo,
                 *(undefined8 *)UnityEngine_UIElements_ExecuteCommandEvent_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)System_ComponentModel_EditorAttribute_TypeInfo,
                 *(undefined8 *)System_Runtime_Remoting_Contexts_DynamicPropertyCollection_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)PTR_DAT_07292b60,
                 *(undefined8 *)System_DllNotFoundException_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)UnityEngine_Timeline_DiscreteTime_TypeInfo,
                 *(undefined8 *)PTR_DAT_07289448,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)OVR_OpenVR_ETrackedDeviceProperty_TypeInfo,
                 *(undefined8 *)System_Threading_EventWaitHandle_TypeInfo,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)UnityEngine_ExpressionEvaluator_TypeInfo,
                 *(undefined8 *)PTR_DAT_0728a898,*(undefined8 *)puVar2);
    FUN_050f8b10(lVar11,*(undefined8 *)PTR_DAT_0727cd48,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_DupInstruction_TypeInfo,
                 *(undefined8 *)puVar2);
    puVar2 = Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo;
    plVar12 = (long *)(*(long *)(*(long *)Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo + 0xb8) +
                      0x58);
    *plVar12 = lVar11;
    thunk_FUN_0333a630(plVar12,lVar11);
    lVar11 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072a93b8,0x70);
    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) != 0) {
        *(undefined8 *)(lVar13 + 0x20) =
             *(undefined8 *)Unity_VisualScripting_DivisionHandler_TypeInfo;
        thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
        if (1 < *(uint *)(lVar13 + 0x18)) {
          *(undefined8 *)(lVar13 + 0x28) =
               *(undefined8 *)NovaSamples_DummyScripts_DummyCubeAnimator_TypeInfo;
          thunk_FUN_0333a630();
          if (lVar11 == 0) goto LAB_062fcb24;
          puVar14 = (uint *)(lVar11 + 0x18);
          if (*puVar14 != 0) {
            *(long *)(lVar11 + 0x20) = lVar13;
            thunk_FUN_0333a630((long *)(lVar11 + 0x20),lVar13);
            lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
            if (lVar13 == 0) goto LAB_062fcb24;
            if (*(int *)(lVar13 + 0x18) != 0) {
              *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)RootMotion_FinalIK_FBIKChain_TypeInfo;
              thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
              if (1 < *(uint *)(lVar13 + 0x18)) {
                *(undefined8 *)(lVar13 + 0x28) =
                     *(undefined8 *)UnityEngine_UIElements_EventDispatcher_TypeInfo;
                thunk_FUN_0333a630();
                if (1 < *puVar14) {
                  *(long *)(lVar11 + 0x28) = lVar13;
                  thunk_FUN_0333a630((long *)(lVar11 + 0x28),lVar13);
                  lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                  if (lVar13 == 0) goto LAB_062fcb24;
                  if (*(int *)(lVar13 + 0x18) != 0) {
                    *(undefined8 *)(lVar13 + 0x20) =
                         *(undefined8 *)OVR_OpenVR_EVRNotificationType_TypeInfo;
                    thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                    if (1 < *(uint *)(lVar13 + 0x18)) {
                      *(undefined8 *)(lVar13 + 0x28) =
                           *(undefined8 *)System_Text_EncoderNLS_TypeInfo;
                      thunk_FUN_0333a630();
                      if (2 < *puVar14) {
                        *(long *)(lVar11 + 0x30) = lVar13;
                        thunk_FUN_0333a630((long *)(lVar11 + 0x30),lVar13);
                        lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                        if (lVar13 == 0) goto LAB_062fcb24;
                        if (*(int *)(lVar13 + 0x18) != 0) {
                          *(undefined8 *)(lVar13 + 0x20) =
                               *(undefined8 *)Unity_VisualScripting_Ensure_TypeInfo;
                          thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                          if (1 < *(uint *)(lVar13 + 0x18)) {
                            *(undefined8 *)(lVar13 + 0x28) =
                                 *(undefined8 *)
                                  UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo;
                            thunk_FUN_0333a630();
                            if (3 < *puVar14) {
                              *(long *)(lVar11 + 0x38) = lVar13;
                              thunk_FUN_0333a630((long *)(lVar11 + 0x38),lVar13);
                              lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                              if (lVar13 == 0) goto LAB_062fcb24;
                              if (*(int *)(lVar13 + 0x18) != 0) {
                                *(undefined8 *)(lVar13 + 0x20) =
                                     *(undefined8 *)
                                      Unity_VisualScripting_FakeSerializationCloner_TypeInfo;
                                thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                if (1 < *(uint *)(lVar13 + 0x18)) {
                                  *(undefined8 *)(lVar13 + 0x28) =
                                       *(undefined8 *)OVR_OpenVR_EVRSubmitFlags_TypeInfo;
                                  thunk_FUN_0333a630();
                                  if (4 < *puVar14) {
                                    *(long *)(lVar11 + 0x40) = lVar13;
                                    thunk_FUN_0333a630((long *)(lVar11 + 0x40),lVar13);
                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                    if (lVar13 == 0) goto LAB_062fcb24;
                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                      *(undefined8 *)(lVar13 + 0x20) =
                                           *(undefined8 *)
                                            UnityEngine_XR_ARSubsystems_Feature_TypeInfo;
                                      thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                        *(undefined8 *)(lVar13 + 0x28) =
                                             *(undefined8 *)
                                              Unity_VisualScripting_Dependencies_NCalc_EvaluateParameterHandler_TypeInfo
                                        ;
                                        thunk_FUN_0333a630();
                                        if (5 < *puVar14) {
                                          *(long *)(lVar11 + 0x48) = lVar13;
                                          thunk_FUN_0333a630((long *)(lVar11 + 0x48),lVar13);
                                          lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                          if (lVar13 == 0) goto LAB_062fcb24;
                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                            *(undefined8 *)(lVar13 + 0x20) =
                                                 *(undefined8 *)
                                                  System_ComponentModel_ExtendedPropertyDescriptor_TypeInfo
                                            ;
                                            thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                            if (1 < *(uint *)(lVar13 + 0x18)) {
                                              *(undefined8 *)(lVar13 + 0x28) =
                                                   *(undefined8 *)
                                                    System_Xml_EmptyEnumerator_TypeInfo;
                                              thunk_FUN_0333a630();
                                              if (6 < *puVar14) {
                                                *(long *)(lVar11 + 0x50) = lVar13;
                                                thunk_FUN_0333a630((long *)(lVar11 + 0x50),lVar13);
                                                lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                if (lVar13 == 0) goto LAB_062fcb24;
                                                if (*(int *)(lVar13 + 0x18) != 0) {
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_ComponentModel_DisplayNameAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          Unity_AppUI_UI_DrawerAnchor_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (7 < *puVar14) {
                                                      *(long *)(lVar11 + 0x58) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 0x58),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Networking_DownloadHandler_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          System_DivideByZeroException_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (8 < *puVar14) {
                                                      *(long *)(lVar11 + 0x60) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 0x60),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_EnumFieldHelpers_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_EVRSkeletalMotionRange_TypeInfo
                                                    ;
                                                    thunk_FUN_0333a630();
                                                    if (9 < *puVar14) {
                                                      *(long *)(lVar11 + 0x68) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 0x68),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_DragAndDropPosition_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Text_EncoderExceptionFallbackBuffer_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (10 < *puVar14) {
                                                    *(long *)(lVar11 + 0x70) = lVar13;
                                                    thunk_FUN_0333a630((long *)(lVar11 + 0x70),
                                                                       lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0xb < *puVar14) {
                                                    *(long *)(lVar11 + 0x78) = lVar13;
                                                    thunk_FUN_0333a630((long *)(lVar11 + 0x78),
                                                                       lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Networking_DownloadHandlerFile_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_EChaperoneConfigFile_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0xc < *puVar14) {
                                                      *(long *)(lVar11 + 0x80) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 0x80),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Networking_DownloadHandlerTexture_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_ExceptionMessages_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0xd < *puVar14) {
                                                    *(long *)(lVar11 + 0x88) = lVar13;
                                                    thunk_FUN_0333a630((long *)(lVar11 + 0x88),
                                                                       lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_IO_Compression_FastEncoderStatics_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          System_Dynamic_DynamicMetaObject_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0xe < *puVar14) {
                                                      *(long *)(lVar11 + 0x90) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 0x90),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Oculus_Interaction_DistantPointDetector_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          System_Reflection_EventInfo_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0xf < *puVar14) {
                                                      *(long *)(lVar11 + 0x98) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 0x98),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_EventInterestAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_StyleSheets_Dimension_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x10 < *puVar14) {
                                                    *(long *)(lVar11 + 0xa0) = lVar13;
                                                    thunk_FUN_0333a630((long *)(lVar11 + 0xa0),
                                                                       lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_ETrackedControllerRole_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_EVRTrackedCameraError_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x11 < *puVar14) {
                                                      *(long *)(lVar11 + 0xa8) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 0xa8),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                              System_ExceptionResource_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar13 + 0x20));
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  OVR_OpenVR_EHiddenAreaMeshType_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x12 < *puVar14) {
                                                    *(long *)(lVar11 + 0xb0) = lVar13;
                                                    thunk_FUN_0333a630((long *)(lVar11 + 0xb0),
                                                                       lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EDualAnalogWhich_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Unity_VisualScripting_EventHook_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x13 < *puVar14) {
                                                    *(long *)(lVar11 + 0xb8) = lVar13;
                                                    thunk_FUN_0333a630((long *)(lVar11 + 0xb8),
                                                                       lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DropdownMenu_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x14 < *puVar14) {
                                                    *(long *)(lVar11 + 0xc0) = lVar13;
                                                    thunk_FUN_0333a630((long *)(lVar11 + 0xc0),
                                                                       lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          System_Net_DigestHeaderParser_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x15 < *puVar14) {
                                                      *(long *)(lVar11 + 200) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 200),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Data_DuplicateNameException_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_DivInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x16 < *puVar14) {
                                                    *(long *)(lVar11 + 0xd0) = lVar13;
                                                    thunk_FUN_0333a630((long *)(lVar11 + 0xd0),
                                                                       lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  puVar3 = System_Exception_TypeInfo;
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)System_Exception_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x17 < *puVar14) {
                                                      *(long *)(lVar11 + 0xd8) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 0xd8),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_DiscreteButtonControl_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x18 < *puVar14) {
                                                    *(long *)(lVar11 + 0xe0) = lVar13;
                                                    thunk_FUN_0333a630((long *)(lVar11 + 0xe0),
                                                                       lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Newtonsoft_Json_Converters_EntityKeyMemberConverter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_0333a630();
                                                    if (0x19 < *puVar14) {
                                                      *(long *)(lVar11 + 0xe8) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 0xe8),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_ExclusiveOrHandler_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x1a < *puVar14) {
                                                    *(long *)(lVar11 + 0xf0) = lVar13;
                                                    thunk_FUN_0333a630((long *)(lVar11 + 0xf0),
                                                                       lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_EnterExceptionFilterInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_EVRButtonId_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x1b < *puVar14) {
                                                      *(long *)(lVar11 + 0xf8) = lVar13;
                                                      thunk_FUN_0333a630((long *)(lVar11 + 0xf8),
                                                                         lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                              System_Xml_DomNameTable_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar13 + 0x20));
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Data_Common_DoubleStorage_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x1c < *puVar14) {
                                                    *(long *)(lVar11 + 0x100) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x100,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_DrawerVariant_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_AR_DragGestureRecognizer_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x1d < *puVar14) {
                                                    *(long *)(lVar11 + 0x108) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x108,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)UnityEngine_Event_TypeInfo
                                                      ;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  ReadyPlayerMe_Core_FailureEventArgs_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x1e < *puVar14) {
                                                    *(long *)(lVar11 + 0x110) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x110,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Oculus_Skinning_DummySkinningBufferPropertySetter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          System_FieldAccessException_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x1f < *puVar14) {
                                                      *(long *)(lVar11 + 0x118) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x118,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                              Unity_AppUI_UI_Draggable_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar13 + 0x20));
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  OVR_OpenVR_ETrackedDeviceClass_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x20 < *puVar14) {
                                                    *(long *)(lVar11 + 0x120) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x120,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Threading_ExecutionContext_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_VFX_Utility_ExposedProperty_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x21 < *puVar14) {
                                                    *(long *)(lVar11 + 0x128) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x128,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_DropZoneState_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_EnterTryFaultInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x22 < *puVar14) {
                                                    *(long *)(lVar11 + 0x130) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x130,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EColorSpace_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Text_EncoderFallbackException_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x23 < *puVar14) {
                                                    *(long *)(lVar11 + 0x138) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x138,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_EVRApplicationTransitionState_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Timeline_Extrapolation_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x24 < *puVar14) {
                                                    *(long *)(lVar11 + 0x140) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x140,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EOverlayDirection_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_DropdownField_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x25 < *puVar14) {
                                                    *(long *)(lVar11 + 0x148) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x148,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)double_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      puVar3 = 
                                                  UnityEngine_UIElements_DropdownMenuSeparator_TypeInfo
                                                  ;
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DropdownMenuSeparator_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x26 < *puVar14) {
                                                    *(long *)(lVar11 + 0x150) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x150,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            System_Xml_Schema_DtdValidator_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_ExceptionFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x27 < *puVar14) {
                                                    *(long *)(lVar11 + 0x158) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x158,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            System_IO_FileInfo_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)puVar3;
                                                        thunk_FUN_0333a630();
                                                        if (0x28 < *puVar14) {
                                                          *(long *)(lVar11 + 0x160) = lVar13;
                                                          thunk_FUN_0333a630(lVar11 + 0x160,lVar13);
                                                          lVar13 = FUN_032d5d3c(*(undefined8 *)
                                                                                 puVar1,2);
                                                          if (lVar13 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar13 + 0x20) =
                                                                 *(undefined8 *)
                                                                  OVR_OpenVR_EVREye_TypeInfo;
                                                            thunk_FUN_0333a630((undefined8 *)
                                                                               (lVar13 + 0x20));
                                                            if (1 < *(uint *)(lVar13 + 0x18)) {
                                                              *(undefined8 *)(lVar13 + 0x28) =
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  System_Data_ExpressionParser_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x29 < *puVar14) {
                                                    *(long *)(lVar11 + 0x168) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x168,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_InteropServices_DllImportAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackList_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x2a < *puVar14) {
                                                    *(long *)(lVar11 + 0x170) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x170,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)System_Empty_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                              Firebase_Dispatcher_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x2b < *puVar14) {
                                                          *(long *)(lVar11 + 0x178) = lVar13;
                                                          thunk_FUN_0333a630(lVar11 + 0x178,lVar13);
                                                          lVar13 = FUN_032d5d3c(*(undefined8 *)
                                                                                 puVar1,2);
                                                          if (lVar13 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar13 + 0x20) =
                                                                 *(undefined8 *)
                                                                  UnityEngine_UI_Dropdown_TypeInfo;
                                                            thunk_FUN_0333a630((undefined8 *)
                                                                               (lVar13 + 0x20));
                                                            if (1 < *(uint *)(lVar13 + 0x18)) {
                                                              *(undefined8 *)(lVar13 + 0x28) =
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Unity_VisualScripting_EqualityHandler_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x2c < *puVar14) {
                                                    *(long *)(lVar11 + 0x180) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x180,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_EventSystems_ExecuteEvents_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_FieldsCloner_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x2d < *puVar14) {
                                                    *(long *)(lVar11 + 0x188) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x188,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Newtonsoft_Json_Serialization_ErrorContext_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)BNG_DrawDefinition_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x2e < *puVar14) {
                                                      *(long *)(lVar11 + 400) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 400,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Resources_FastResourceComparer_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Remoting_Messaging_ErrorMessage_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x2f < *puVar14) {
                                                    *(long *)(lVar11 + 0x198) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x198,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_EventCategoryAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          GLTFast_Schema_DrawMode_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x30 < *puVar14) {
                                                      *(long *)(lVar11 + 0x1a0) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x1a0,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                              System_IO_EnumerationOptions_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar13 + 0x20));
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Xml_Schema_Datatype_day_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x31 < *puVar14) {
                                                    *(long *)(lVar11 + 0x1a8) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x1a8,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_ElementUnderPointer_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x32 < *puVar14) {
                                                    *(long *)(lVar11 + 0x1b0) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x1b0,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_Core_Dir_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_Remoting_EnvoyInfo_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x33 < *puVar14) {
                                                    *(long *)(lVar11 + 0x1b8) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x1b8,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_DynamicAtlasSettings_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_DynamicResolutionHandler_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x34 < *puVar14) {
                                                    *(long *)(lVar11 + 0x1c0) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x1c0,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            System_Data_EvaluateException_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Unity_VisualScripting_Antlr3_Runtime_FailedPredicateException_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x35 < *puVar14) {
                                                    *(long *)(lVar11 + 0x1c8) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x1c8,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Newtonsoft_Json_Linq_JsonPath_FieldFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DragAndDropArgs_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x36 < *puVar14) {
                                                    *(long *)(lVar11 + 0x1d0) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x1d0,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          ReadyPlayerMe_Core_FailureType_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x37 < *puVar14) {
                                                      *(long *)(lVar11 + 0x1d8) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x1d8,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_EasingFunction_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          UnityEngine_EventType_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x38 < *puVar14) {
                                                      *(long *)(lVar11 + 0x1e0) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x1e0,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                              UnityEngine_XR_Eyes_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar13 + 0x20));
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_Rendering_Universal_DownscaleParameter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x39 < *puVar14) {
                                                    *(long *)(lVar11 + 0x1e8) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x1e8,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_InputSystem_Controls_DpadControl_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_ETrackingUniverseOrigin_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x3a < *puVar14) {
                                                    *(long *)(lVar11 + 0x1f0) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x1f0,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Unity_VisualScripting_Antlr3_Runtime_EarlyExitException_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_DistortionCoordinates_t_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x3b < *puVar14) {
                                                    *(long *)(lVar11 + 0x1f8) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x1f8,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_EventCallbackRegistry_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_Dependencies_NCalc_EvaluateFunctionHandler_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x3c < *puVar14) {
                                                    *(long *)(lVar11 + 0x200) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x200,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EVREventType_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_EnhancedTouch_EnhancedTouchSupport_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x3d < *puVar14) {
                                                    *(long *)(lVar11 + 0x208) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x208,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_Dropdown_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Xml_Schema_DoubleLinkAxis_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x3e < *puVar14) {
                                                    *(long *)(lVar11 + 0x210) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x210,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Text_EncoderReplacementFallbackBuffer_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Converters_DiscriminatedUnionConverter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x3f < *puVar14) {
                                                    *(long *)(lVar11 + 0x218) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x218,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x40 < *puVar14) {
                                                    *(long *)(lVar11 + 0x220) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x220,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Resources_FileBasedResourceGroveler_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          Oculus_Platform_Models_Error_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x41 < *puVar14) {
                                                      *(long *)(lVar11 + 0x228) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x228,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_ExceptionHandler_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Text_EncoderReplacementFallback_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x42 < *puVar14) {
                                                    *(long *)(lVar11 + 0x230) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x230,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_ExceptionServices_ExceptionDispatchInfo_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptorCollection_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x43 < *puVar14) {
                                                    *(long *)(lVar11 + 0x238) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x238,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Meta_XR_EnvironmentDepth_EnvironmentDepthManager_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DynamicAtlasPage_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x44 < *puVar14) {
                                                    *(long *)(lVar11 + 0x240) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x240,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_Drawer_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                              OVR_OpenVR_EVRSettingsError_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x45 < *puVar14) {
                                                          *(long *)(lVar11 + 0x248) = lVar13;
                                                          thunk_FUN_0333a630(lVar11 + 0x248,lVar13);
                                                          lVar13 = FUN_032d5d3c(*(undefined8 *)
                                                                                 puVar1,2);
                                                          if (lVar13 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar13 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Meta_XR_EnvironmentDepth_EnvironmentDepthUtils_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x46 < *puVar14) {
                                                    *(long *)(lVar11 + 0x250) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x250,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            System_Environment_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                              OVR_OpenVR_EVROverlayError_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x47 < *puVar14) {
                                                          *(long *)(lVar11 + 600) = lVar13;
                                                          thunk_FUN_0333a630(lVar11 + 600,lVar13);
                                                          lVar13 = FUN_032d5d3c(*(undefined8 *)
                                                                                 puVar1,2);
                                                          if (lVar13 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar13 + 0x20) =
                                                                 *(undefined8 *)
                                                                  DistortTunnelPass_Distort_TypeInfo
                                                            ;
                                                            thunk_FUN_0333a630((undefined8 *)
                                                                               (lVar13 + 0x20));
                                                            if (1 < *(uint *)(lVar13 + 0x18)) {
                                                              *(undefined8 *)(lVar13 + 0x28) =
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_EventSystems_EventSystem_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x48 < *puVar14) {
                                                    *(long *)(lVar11 + 0x260) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x260,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_InputSystem_DualShock_DualShockGamepad_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)System_EventArgs_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x49 < *puVar14) {
                                                      *(long *)(lVar11 + 0x268) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x268,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_EVRApplicationProperty_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Remoting_Messaging_EnvoyTerminatorSink_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x4a < *puVar14) {
                                                    *(long *)(lVar11 + 0x270) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x270,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Xml_Schema_DurationFacetsChecker_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Expression_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x4b < *puVar14) {
                                                    *(long *)(lVar11 + 0x278) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x278,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  ReadyPlayerMe_Core_ExtensionMethods_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x4c < *puVar14) {
                                                    *(long *)(lVar11 + 0x280) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x280,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_EnterFaultInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          System_Text_EncoderFallback_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x4d < *puVar14) {
                                                      *(long *)(lVar11 + 0x288) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x288,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                              System_EventHandler_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar13 + 0x20));
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Firebase_Crashlytics_ExceptionHandler_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x4e < *puVar14) {
                                                    *(long *)(lVar11 + 0x290) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x290,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_ExpressionStringBuilder_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_DisposableManagerSingleton_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x4f < *puVar14) {
                                                    *(long *)(lVar11 + 0x298) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x298,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            System_Text_EncodingHelper_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_AR_DragGesture_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x50 < *puVar14) {
                                                    *(long *)(lVar11 + 0x2a0) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x2a0,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EVRRenderModelError_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                              Unity_AppUI_UI_DrawerHeader_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x51 < *puVar14) {
                                                          *(long *)(lVar11 + 0x2a8) = lVar13;
                                                          thunk_FUN_0333a630(lVar11 + 0x2a8,lVar13);
                                                          lVar13 = FUN_032d5d3c(*(undefined8 *)
                                                                                 puVar1,2);
                                                          if (lVar13 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar13 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_EventModifiers_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          System_IO_FileAccess_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x52 < *puVar14) {
                                                      *(long *)(lVar11 + 0x2b0) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x2b0,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                              System_Dynamic_ExpandoObject_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar13 + 0x20));
                                                        puVar3 = 
                                                  System_IO_DirectoryNotFoundException_TypeInfo;
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_IO_DirectoryNotFoundException_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x53 < *puVar14) {
                                                    *(long *)(lVar11 + 0x2b8) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x2b8,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_FieldByRefUpdater_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_0333a630();
                                                    if (0x54 < *puVar14) {
                                                      *(long *)(lVar11 + 0x2c0) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x2c0,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_EventCallbackListPool_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DynamicAtlas_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x55 < *puVar14) {
                                                    *(long *)(lVar11 + 0x2c8) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x2c8,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)System_Enum_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Meta_WitAi_Data_Entities_DynamicEntityKeywordRegistry_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x56 < *puVar14) {
                                                    *(long *)(lVar11 + 0x2d0) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x2d0,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)TMPro_Extents_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_DropEventArgs_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x57 < *puVar14) {
                                                    *(long *)(lVar11 + 0x2d8) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x2d8,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  NovaSamples_UIControls_DropdownVisuals_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          Unity_AppUI_UI_DropZone_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x58 < *puVar14) {
                                                      *(long *)(lVar11 + 0x2e0) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x2e0,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                              System_Net_DigestSession_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar13 + 0x20));
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Unity_VisualScripting_EnumerableCloner_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x59 < *puVar14) {
                                                    *(long *)(lVar11 + 0x2e8) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x2e8,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Unity_VisualScripting_EnsureThat_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x5a < *puVar14) {
                                                    *(long *)(lVar11 + 0x2f0) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x2f0,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Serialization_ErrorEventArgs_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x5b < *puVar14) {
                                                    *(long *)(lVar11 + 0x2f8) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x2f8,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Xml_Serialization_EnumMap_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_PoseDetection_FeatureStateActiveMode_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x5c < *puVar14) {
                                                    *(long *)(lVar11 + 0x300) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x300,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_Direction_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                              OVR_OpenVR_EVRScreenshotType_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x5d < *puVar14) {
                                                          *(long *)(lVar11 + 0x308) = lVar13;
                                                          thunk_FUN_0333a630(lVar11 + 0x308,lVar13);
                                                          lVar13 = FUN_032d5d3c(*(undefined8 *)
                                                                                 puVar1,2);
                                                          if (lVar13 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar13 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DropdownMenuAction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x5e < *puVar14) {
                                                    *(long *)(lVar11 + 0x310) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x310,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_EnterFinallyInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          Unity_AppUI_UI_FieldLabel_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x5f < *puVar14) {
                                                      *(long *)(lVar11 + 0x318) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x318,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Globalization_EncodingTable_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EditorBrowsableAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x60 < *puVar14) {
                                                    *(long *)(lVar11 + 800) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 800,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_DragAndDropUtility_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Networking_DownloadHandlerBuffer_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x61 < *puVar14) {
                                                    *(long *)(lVar11 + 0x328) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x328,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_Remoting_DisposerReplySink_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  ReadyPlayerMe_Core_DirectoryUtility_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x62 < *puVar14) {
                                                    *(long *)(lVar11 + 0x330) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x330,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            System_Dynamic_ExpandoClass_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                              OVR_OpenVR_ETextureType_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (99 < *puVar14) {
                                                          *(long *)(lVar11 + 0x338) = lVar13;
                                                          thunk_FUN_0333a630(lVar11 + 0x338,lVar13);
                                                          lVar13 = FUN_032d5d3c(*(undefined8 *)
                                                                                 puVar1,2);
                                                          if (lVar13 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar13 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_UIElements_EnumField_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          Unity_AppUI_UI_ExVisualElement_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (100 < *puVar14) {
                                                      *(long *)(lVar11 + 0x340) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x340,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                              System_IO_DirectoryInfo_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar13 + 0x20));
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               *(undefined8 *)
                                                                Unity_AppUI_UI_Dragger_TypeInfo;
                                                          thunk_FUN_0333a630();
                                                          if (0x65 < *puVar14) {
                                                            *(long *)(lVar11 + 0x348) = lVar13;
                                                            thunk_FUN_0333a630(lVar11 + 0x348,lVar13
                                                                              );
                                                            lVar13 = FUN_032d5d3c(*(undefined8 *)
                                                                                   puVar1,2);
                                                            if (lVar13 == 0) goto LAB_062fcb24;
                                                            if (*(int *)(lVar13 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar13 + 0x20) =
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_UIElements_EventDispatcherGate_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptor_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x66 < *puVar14) {
                                                    *(long *)(lVar11 + 0x350) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x350,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_EventInterestReflectionUtils_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x67 < *puVar14) {
                                                    *(long *)(lVar11 + 0x358) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x358,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EIOBufferMode_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                              Unity_AppUI_Core_DirContext_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x68 < *puVar14) {
                                                          *(long *)(lVar11 + 0x360) = lVar13;
                                                          thunk_FUN_0333a630(lVar11 + 0x360,lVar13);
                                                          lVar13 = FUN_032d5d3c(*(undefined8 *)
                                                                                 puVar1,2);
                                                          if (lVar13 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar13 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Globalization_EraInfo_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          DistortTunnelPass_Tunnel_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x69 < *puVar14) {
                                                      *(long *)(lVar11 + 0x368) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x368,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                              System_Xml_DtdParser_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar13 + 0x20));
                                                        if (1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Converters_ExpandoObjectConverter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x6a < *puVar14) {
                                                    *(long *)(lVar11 + 0x370) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x370,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_ETrackedPropertyError_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                          System_Reflection_FieldInfo_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x6b < *puVar14) {
                                                      *(long *)(lVar11 + 0x378) = lVar13;
                                                      thunk_FUN_0333a630(lVar11 + 0x378,lVar13);
                                                      lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_FieldExpression_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Utilities_EnumInfo_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x6c < *puVar14) {
                                                    *(long *)(lVar11 + 0x380) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x380,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            Oculus_Avatar2_FBVersionNumber_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                              System_Text_EncodingProvider_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x6d < *puVar14) {
                                                          *(long *)(lVar11 + 0x388) = lVar13;
                                                          thunk_FUN_0333a630(lVar11 + 0x388,lVar13);
                                                          lVar13 = FUN_032d5d3c(*(undefined8 *)
                                                                                 puVar1,2);
                                                          if (lVar13 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar13 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Firebase_ExceptionAggregator_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_EventHookComparer_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x6e < *puVar14) {
                                                    *(long *)(lVar11 + 0x390) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x390,lVar13);
                                                    lVar13 = FUN_032d5d3c(*(undefined8 *)puVar1,2);
                                                    if (lVar13 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EVRNotificationStyle_TypeInfo
                                                      ;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar13 + 0x20));
                                                      if (1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  puVar1 = System_Net_DigestClient_TypeInfo;
                                                  if (0x6f < *puVar14) {
                                                    *(long *)(lVar11 + 0x398) = lVar13;
                                                    thunk_FUN_0333a630(lVar11 + 0x398,lVar13);
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar2 +
                                                                                0xb8) + 0x60);
                                                    *plVar12 = lVar11;
                                                    thunk_FUN_0333a630(plVar12,lVar11);
                                                    lVar11 = FUN_032d5d3c(*(undefined8 *)puVar1,0x5e
                                                                         );
                                                    local_68 = 0;
                                                    local_70 = 0;
                                                    FUN_062fcc3c(&local_70,0x41,0x5a,1,0x20,0);
                                                    if (lVar11 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar11 + 0x20) = local_70;
                                                      *(undefined4 *)(lVar11 + 0x28) = local_68;
                                                      local_78 = 0;
                                                      local_80 = 0;
                                                      FUN_062fcc3c(&local_80,0xc0,0xde,1,0x20,0);
                                                      if (1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x2c) = local_80;
                                                        *(undefined4 *)(lVar11 + 0x34) = local_78;
                                                        local_88 = 0;
                                                        local_90 = 0;
                                                        FUN_062fcc3c(&local_90,0x100,0x12e,2,0,0);
                                                        if (2 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x38) = local_90;
                                                          *(undefined4 *)(lVar11 + 0x40) = local_88;
                                                          local_98 = 0;
                                                          local_a0 = 0;
                                                          FUN_062fcc3c(&local_a0,0x130,0x130,0,0x69,
                                                                       0);
                                                          if (3 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x44) =
                                                                 local_a0;
                                                            *(undefined4 *)(lVar11 + 0x4c) =
                                                                 local_98;
                                                            local_a8 = 0;
                                                            local_b0 = 0;
                                                            FUN_062fcc3c(&local_b0,0x132,0x136,2,0,0
                                                                        );
                                                            if (4 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x50) =
                                                                   local_b0;
                                                              *(undefined4 *)(lVar11 + 0x58) =
                                                                   local_a8;
                                                              local_b8 = 0;
                                                              local_c0 = 0;
                                                              FUN_062fcc3c(&local_c0,0x139,0x147,3,0
                                                                           ,0);
                                                              if (5 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x5c) =
                                                                     local_c0;
                                                                *(undefined4 *)(lVar11 + 100) =
                                                                     local_b8;
                                                                local_c8 = 0;
                                                                local_d0 = 0;
                                                                FUN_062fcc3c(&local_d0,0x14a,0x176,2
                                                                             ,0,0);
                                                                if (6 < *(uint *)(lVar11 + 0x18)) {
                                                                  *(undefined8 *)(lVar11 + 0x68) =
                                                                       local_d0;
                                                                  *(undefined4 *)(lVar11 + 0x70) =
                                                                       local_c8;
                                                                  local_d8 = 0;
                                                                  local_e0 = 0;
                                                                  FUN_062fcc3c(&local_e0,0x178,0x178
                                                                               ,0,0xff,0);
                                                                  if (7 < *(uint *)(lVar11 + 0x18))
                                                                  {
                                                                    *(undefined8 *)(lVar11 + 0x74) =
                                                                         local_e0;
                                                                    *(undefined4 *)(lVar11 + 0x7c) =
                                                                         local_d8;
                                                                    local_e8 = 0;
                                                                    local_f0 = 0;
                                                                    FUN_062fcc3c(&local_f0,0x179,
                                                                                 0x17d,3,0,0);
                                                                    if (8 < *(uint *)(lVar11 + 0x18)
                                                                       ) {
                                                                      *(undefined8 *)(lVar11 + 0x80)
                                                                           = local_f0;
                                                                      *(undefined4 *)(lVar11 + 0x88)
                                                                           = local_e8;
                                                                      local_f8 = 0;
                                                                      local_100 = 0;
                                                                      FUN_062fcc3c(&local_100,0x181,
                                                                                   0x181,0,0x253,0);
                                                                      if (9 < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x8c) = local_100;
                                                    *(undefined4 *)(lVar11 + 0x94) = local_f8;
                                                    local_108 = 0;
                                                    local_110 = 0;
                                                    FUN_062fcc3c(&local_110,0x182,0x184,2,0,0);
                                                    if (10 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x98) = local_110;
                                                      *(undefined4 *)(lVar11 + 0xa0) = local_108;
                                                      local_118 = 0;
                                                      local_120 = 0;
                                                      FUN_062fcc3c(&local_120,0x186,0x186,0,0x254,0)
                                                      ;
                                                      if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0xa4) = local_120;
                                                        *(undefined4 *)(lVar11 + 0xac) = local_118;
                                                        local_128 = 0;
                                                        local_130 = 0;
                                                        FUN_062fcc3c(&local_130,0x187,0x187,0,0x188,
                                                                     0);
                                                        if (0xc < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0xb0) = local_130
                                                          ;
                                                          *(undefined4 *)(lVar11 + 0xb8) = local_128
                                                          ;
                                                          local_138 = 0;
                                                          local_140 = 0;
                                                          FUN_062fcc3c(&local_140,0x189,0x18a,1,0xcd
                                                                       ,0);
                                                          if (0xd < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0xbc) =
                                                                 local_140;
                                                            *(undefined4 *)(lVar11 + 0xc4) =
                                                                 local_138;
                                                            local_148 = 0;
                                                            local_150 = 0;
                                                            FUN_062fcc3c(&local_150,0x18b,0x18b,0,
                                                                         0x18c,0);
                                                            if (0xe < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 200) =
                                                                   local_150;
                                                              *(undefined4 *)(lVar11 + 0xd0) =
                                                                   local_148;
                                                              local_158 = 0;
                                                              local_160 = 0;
                                                              FUN_062fcc3c(&local_160,0x18e,0x18e,0,
                                                                           0x1dd,0);
                                                              if (0xf < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0xd4) =
                                                                     local_160;
                                                                *(undefined4 *)(lVar11 + 0xdc) =
                                                                     local_158;
                                                                local_168 = 0;
                                                                local_170 = 0;
                                                                FUN_062fcc3c(&local_170,399,399,0,
                                                                             0x259,0);
                                                                if (0x10 < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0xe0) =
                                                                       local_170;
                                                                  *(undefined4 *)(lVar11 + 0xe8) =
                                                                       local_168;
                                                                  local_178 = 0;
                                                                  local_180 = 0;
                                                                  FUN_062fcc3c(&local_180,400,400,0,
                                                                               0x25b,0);
                                                                  if (0x11 < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 0xec) =
                                                                         local_180;
                                                                    *(undefined4 *)(lVar11 + 0xf4) =
                                                                         local_178;
                                                                    local_188 = 0;
                                                                    local_190 = 0;
                                                                    FUN_062fcc3c(&local_190,0x191,
                                                                                 0x191,0,0x192,0);
                                                                    if (0x12 < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xf8) = local_190;
                                                    *(undefined4 *)(lVar11 + 0x100) = local_188;
                                                    local_198 = 0;
                                                    local_1a0 = 0;
                                                    FUN_062fcc3c(&local_1a0,0x193,0x193,0,0x260,0);
                                                    if (0x13 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x104) = local_1a0;
                                                      *(undefined4 *)(lVar11 + 0x10c) = local_198;
                                                      local_1a8 = 0;
                                                      local_1b0 = 0;
                                                      FUN_062fcc3c(&local_1b0,0x194,0x194,0,0x263,0)
                                                      ;
                                                      if (0x14 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x110) = local_1b0;
                                                        *(undefined4 *)(lVar11 + 0x118) = local_1a8;
                                                        local_1b8 = 0;
                                                        local_1c0 = 0;
                                                        FUN_062fcc3c(&local_1c0,0x196,0x196,0,0x269,
                                                                     0);
                                                        if (0x15 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x11c) =
                                                               local_1c0;
                                                          *(undefined4 *)(lVar11 + 0x124) =
                                                               local_1b8;
                                                          local_1c8 = 0;
                                                          local_1d0 = 0;
                                                          FUN_062fcc3c(&local_1d0,0x197,0x197,0,
                                                                       0x268,0);
                                                          if (0x16 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x128) =
                                                                 local_1d0;
                                                            *(undefined4 *)(lVar11 + 0x130) =
                                                                 local_1c8;
                                                            local_1d8 = 0;
                                                            local_1e0 = 0;
                                                            FUN_062fcc3c(&local_1e0,0x198,0x198,0,
                                                                         0x199,0);
                                                            if (0x17 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x134) =
                                                                   local_1e0;
                                                              *(undefined4 *)(lVar11 + 0x13c) =
                                                                   local_1d8;
                                                              local_1e8 = 0;
                                                              local_1f0 = 0;
                                                              FUN_062fcc3c(&local_1f0,0x19c,0x19c,0,
                                                                           0x26f,0);
                                                              if (0x18 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x140) =
                                                                     local_1f0;
                                                                *(undefined4 *)(lVar11 + 0x148) =
                                                                     local_1e8;
                                                                local_1f8 = 0;
                                                                local_200 = 0;
                                                                FUN_062fcc3c(&local_200,0x19d,0x19d,
                                                                             0,0x272,0);
                                                                if (0x19 < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0x14c) =
                                                                       local_200;
                                                                  *(undefined4 *)(lVar11 + 0x154) =
                                                                       local_1f8;
                                                                  local_208 = 0;
                                                                  local_210 = 0;
                                                                  FUN_062fcc3c(&local_210,0x19f,
                                                                               0x19f,0,0x275,0);
                                                                  if (0x1a < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 0x158)
                                                                         = local_210;
                                                                    *(undefined4 *)(lVar11 + 0x160)
                                                                         = local_208;
                                                                    local_218 = 0;
                                                                    local_220 = 0;
                                                                    FUN_062fcc3c(&local_220,0x1a0,
                                                                                 0x1a4,2,0,0);
                                                                    if (0x1b < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x164) = local_220;
                                                    *(undefined4 *)(lVar11 + 0x16c) = local_218;
                                                    local_228 = 0;
                                                    local_230 = 0;
                                                    FUN_062fcc3c(&local_230,0x1a7,0x1a7,0,0x1a8,0);
                                                    if (0x1c < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x170) = local_230;
                                                      *(undefined4 *)(lVar11 + 0x178) = local_228;
                                                      local_238 = 0;
                                                      local_240 = 0;
                                                      FUN_062fcc3c(&local_240,0x1a9,0x1a9,0,0x283,0)
                                                      ;
                                                      if (0x1d < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x17c) = local_240;
                                                        *(undefined4 *)(lVar11 + 0x184) = local_238;
                                                        local_248 = 0;
                                                        local_250 = 0;
                                                        FUN_062fcc3c(&local_250,0x1ac,0x1ac,0,0x1ad,
                                                                     0);
                                                        if (0x1e < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x188) =
                                                               local_250;
                                                          *(undefined4 *)(lVar11 + 400) = local_248;
                                                          local_258 = 0;
                                                          local_260 = 0;
                                                          FUN_062fcc3c(&local_260,0x1ae,0x1ae,0,
                                                                       0x288,0);
                                                          if (0x1f < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x194) =
                                                                 local_260;
                                                            *(undefined4 *)(lVar11 + 0x19c) =
                                                                 local_258;
                                                            local_268 = 0;
                                                            local_270 = 0;
                                                            FUN_062fcc3c(&local_270,0x1af,0x1af,0,
                                                                         0x1b0,0);
                                                            if (0x20 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x1a0) =
                                                                   local_270;
                                                              *(undefined4 *)(lVar11 + 0x1a8) =
                                                                   local_268;
                                                              local_278 = 0;
                                                              local_280 = 0;
                                                              FUN_062fcc3c(&local_280,0x1b1,0x1b2,1,
                                                                           0xd9,0);
                                                              if (0x21 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x1ac) =
                                                                     local_280;
                                                                *(undefined4 *)(lVar11 + 0x1b4) =
                                                                     local_278;
                                                                local_288 = 0;
                                                                local_290 = 0;
                                                                FUN_062fcc3c(&local_290,0x1b3,0x1b5,
                                                                             3,0,0);
                                                                if (0x22 < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0x1b8) =
                                                                       local_290;
                                                                  *(undefined4 *)(lVar11 + 0x1c0) =
                                                                       local_288;
                                                                  local_298 = 0;
                                                                  local_2a0 = 0;
                                                                  FUN_062fcc3c(&local_2a0,0x1b7,
                                                                               0x1b7,0,0x292,0);
                                                                  if (0x23 < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 0x1c4)
                                                                         = local_2a0;
                                                                    *(undefined4 *)(lVar11 + 0x1cc)
                                                                         = local_298;
                                                                    local_2a8 = 0;
                                                                    local_2b0 = 0;
                                                                    FUN_062fcc3c(&local_2b0,0x1b8,
                                                                                 0x1b8,0,0x1b9,0);
                                                                    if (0x24 < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x1d0) = local_2b0;
                                                    *(undefined4 *)(lVar11 + 0x1d8) = local_2a8;
                                                    local_2b8 = 0;
                                                    local_2c0 = 0;
                                                    FUN_062fcc3c(&local_2c0,0x1bc,0x1bc,0,0x1bd,0);
                                                    if (0x25 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x1dc) = local_2c0;
                                                      *(undefined4 *)(lVar11 + 0x1e4) = local_2b8;
                                                      local_2c8 = 0;
                                                      local_2d0 = 0;
                                                      FUN_062fcc3c(&local_2d0,0x1c4,0x1c5,0,0x1c6,0)
                                                      ;
                                                      if (0x26 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x1e8) = local_2d0;
                                                        *(undefined4 *)(lVar11 + 0x1f0) = local_2c8;
                                                        local_2d8 = 0;
                                                        local_2e0 = 0;
                                                        FUN_062fcc3c(&local_2e0,0x1c7,0x1c8,0,0x1c9,
                                                                     0);
                                                        if (0x27 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 500) = local_2e0;
                                                          *(undefined4 *)(lVar11 + 0x1fc) =
                                                               local_2d8;
                                                          local_2e8 = 0;
                                                          local_2f0 = 0;
                                                          FUN_062fcc3c(&local_2f0,0x1ca,0x1cb,0,
                                                                       0x1cc,0);
                                                          if (0x28 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x200) =
                                                                 local_2f0;
                                                            *(undefined4 *)(lVar11 + 0x208) =
                                                                 local_2e8;
                                                            local_2f8 = 0;
                                                            local_300 = 0;
                                                            FUN_062fcc3c(&local_300,0x1cd,0x1db,3,0,
                                                                         0);
                                                            if (0x29 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x20c) =
                                                                   local_300;
                                                              *(undefined4 *)(lVar11 + 0x214) =
                                                                   local_2f8;
                                                              local_308 = 0;
                                                              local_310 = 0;
                                                              FUN_062fcc3c(&local_310,0x1de,0x1ee,2,
                                                                           0,0);
                                                              if (0x2a < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x218) =
                                                                     local_310;
                                                                *(undefined4 *)(lVar11 + 0x220) =
                                                                     local_308;
                                                                local_318 = 0;
                                                                local_320 = 0;
                                                                FUN_062fcc3c(&local_320,0x1f1,0x1f2,
                                                                             0,499,0);
                                                                if (0x2b < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0x224) =
                                                                       local_320;
                                                                  *(undefined4 *)(lVar11 + 0x22c) =
                                                                       local_318;
                                                                  local_328 = 0;
                                                                  local_330 = 0;
                                                                  FUN_062fcc3c(&local_330,500,500,0,
                                                                               0x1f5,0);
                                                                  if (0x2c < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 0x230)
                                                                         = local_330;
                                                                    *(undefined4 *)(lVar11 + 0x238)
                                                                         = local_328;
                                                                    local_338 = 0;
                                                                    local_340 = 0;
                                                                    FUN_062fcc3c(&local_340,0x1fa,
                                                                                 0x216,2,0,0);
                                                                    if (0x2d < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x23c) = local_340;
                                                    *(undefined4 *)(lVar11 + 0x244) = local_338;
                                                    local_348 = 0;
                                                    local_350 = 0;
                                                    FUN_062fcc3c(&local_350,0x386,0x386,0,0x3ac,0);
                                                    if (0x2e < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x248) = local_350;
                                                      *(undefined4 *)(lVar11 + 0x250) = local_348;
                                                      local_358 = 0;
                                                      local_360 = 0;
                                                      FUN_062fcc3c(&local_360,0x388,0x38a,1,0x25,0);
                                                      if (0x2f < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x254) = local_360;
                                                        *(undefined4 *)(lVar11 + 0x25c) = local_358;
                                                        local_368 = 0;
                                                        local_370 = 0;
                                                        FUN_062fcc3c(&local_370,0x38c,0x38c,0,0x3cc,
                                                                     0);
                                                        if (0x30 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x260) =
                                                               local_370;
                                                          *(undefined4 *)(lVar11 + 0x268) =
                                                               local_368;
                                                          local_378 = 0;
                                                          local_380 = 0;
                                                          FUN_062fcc3c(&local_380,0x38e,0x38f,1,0x3f
                                                                       ,0);
                                                          if (0x31 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x26c) =
                                                                 local_380;
                                                            *(undefined4 *)(lVar11 + 0x274) =
                                                                 local_378;
                                                            local_388 = 0;
                                                            local_390 = 0;
                                                            FUN_062fcc3c(&local_390,0x391,0x3ab,1,
                                                                         0x20,0);
                                                            if (0x32 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x278) =
                                                                   local_390;
                                                              *(undefined4 *)(lVar11 + 0x280) =
                                                                   local_388;
                                                              local_398 = 0;
                                                              local_3a0 = 0;
                                                              FUN_062fcc3c(&local_3a0,0x3e2,0x3ee,2,
                                                                           0,0);
                                                              if (0x33 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x284) =
                                                                     local_3a0;
                                                                *(undefined4 *)(lVar11 + 0x28c) =
                                                                     local_398;
                                                                local_3a8 = 0;
                                                                local_3b0 = 0;
                                                                FUN_062fcc3c(&local_3b0,0x401,0x40f,
                                                                             1,0x50,0);
                                                                if (0x34 < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0x290) =
                                                                       local_3b0;
                                                                  *(undefined4 *)(lVar11 + 0x298) =
                                                                       local_3a8;
                                                                  local_3b8 = 0;
                                                                  local_3c0 = 0;
                                                                  FUN_062fcc3c(&local_3c0,0x410,
                                                                               0x42f,1,0x20,0);
                                                                  if (0x35 < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 0x29c)
                                                                         = local_3c0;
                                                                    *(undefined4 *)(lVar11 + 0x2a4)
                                                                         = local_3b8;
                                                                    local_3c8 = 0;
                                                                    local_3d0 = 0;
                                                                    FUN_062fcc3c(&local_3d0,0x460,
                                                                                 0x480,2,0,0);
                                                                    if (0x36 < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x2a8) = local_3d0;
                                                    *(undefined4 *)(lVar11 + 0x2b0) = local_3c8;
                                                    local_3d8 = 0;
                                                    local_3e0 = 0;
                                                    FUN_062fcc3c(&local_3e0,0x490,0x4be,2,0,0);
                                                    if (0x37 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x2b4) = local_3e0;
                                                      *(undefined4 *)(lVar11 + 700) = local_3d8;
                                                      local_3e8 = 0;
                                                      local_3f0 = 0;
                                                      FUN_062fcc3c(&local_3f0,0x4c1,0x4c3,3,0,0);
                                                      if (0x38 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x2c0) = local_3f0;
                                                        *(undefined4 *)(lVar11 + 0x2c8) = local_3e8;
                                                        local_3f8 = 0;
                                                        local_400 = 0;
                                                        FUN_062fcc3c(&local_400,0x4c7,0x4c7,0,0x4c8,
                                                                     0);
                                                        if (0x39 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x2cc) =
                                                               local_400;
                                                          *(undefined4 *)(lVar11 + 0x2d4) =
                                                               local_3f8;
                                                          local_408 = 0;
                                                          local_410 = 0;
                                                          FUN_062fcc3c(&local_410,0x4cb,0x4cb,0,
                                                                       0x4cc,0);
                                                          if (0x3a < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x2d8) =
                                                                 local_410;
                                                            *(undefined4 *)(lVar11 + 0x2e0) =
                                                                 local_408;
                                                            local_418 = 0;
                                                            local_420 = 0;
                                                            FUN_062fcc3c(&local_420,0x4d0,0x4ea,2,0,
                                                                         0);
                                                            if (0x3b < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x2e4) =
                                                                   local_420;
                                                              *(undefined4 *)(lVar11 + 0x2ec) =
                                                                   local_418;
                                                              local_428 = 0;
                                                              local_430 = 0;
                                                              FUN_062fcc3c(&local_430,0x4ee,0x4f4,2,
                                                                           0,0);
                                                              if (0x3c < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x2f0) =
                                                                     local_430;
                                                                *(undefined4 *)(lVar11 + 0x2f8) =
                                                                     local_428;
                                                                local_438 = 0;
                                                                local_440 = 0;
                                                                FUN_062fcc3c(&local_440,0x4f8,0x4f8,
                                                                             0,0x4f9,0);
                                                                if (0x3d < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0x2fc) =
                                                                       local_440;
                                                                  *(undefined4 *)(lVar11 + 0x304) =
                                                                       local_438;
                                                                  local_448 = 0;
                                                                  local_450 = 0;
                                                                  FUN_062fcc3c(&local_450,0x531,
                                                                               0x556,1,0x30,0);
                                                                  if (0x3e < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 0x308)
                                                                         = local_450;
                                                                    *(undefined4 *)(lVar11 + 0x310)
                                                                         = local_448;
                                                                    local_458 = 0;
                                                                    local_460 = 0;
                                                                    FUN_062fcc3c(&local_460,0x10a0,
                                                                                 0x10c5,1,0x30,0);
                                                                    if (0x3f < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x314) = local_460;
                                                    *(undefined4 *)(lVar11 + 0x31c) = local_458;
                                                    local_468 = 0;
                                                    local_470 = 0;
                                                    FUN_062fcc3c(&local_470,0x1e00,0x1ef8,2,0,0);
                                                    if (0x40 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 800) = local_470;
                                                      *(undefined4 *)(lVar11 + 0x328) = local_468;
                                                      local_478 = 0;
                                                      local_480 = 0;
                                                      FUN_062fcc3c(&local_480,0x1f08,0x1f0f,1,
                                                                   0xfffffff8,0);
                                                      if (0x41 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x32c) = local_480;
                                                        *(undefined4 *)(lVar11 + 0x334) = local_478;
                                                        local_488 = 0;
                                                        local_490 = 0;
                                                        FUN_062fcc3c(&local_490,0x1f18,0x1f1f,1,
                                                                     0xfffffff8,0);
                                                        if (0x42 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x338) =
                                                               local_490;
                                                          *(undefined4 *)(lVar11 + 0x340) =
                                                               local_488;
                                                          local_498 = 0;
                                                          local_4a0 = 0;
                                                          FUN_062fcc3c(&local_4a0,0x1f28,0x1f2f,1,
                                                                       0xfffffff8,0);
                                                          if (0x43 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x344) =
                                                                 local_4a0;
                                                            *(undefined4 *)(lVar11 + 0x34c) =
                                                                 local_498;
                                                            local_4a8 = 0;
                                                            local_4b0 = 0;
                                                            FUN_062fcc3c(&local_4b0,0x1f38,7999,1,
                                                                         0xfffffff8,0);
                                                            if (0x44 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x350) =
                                                                   local_4b0;
                                                              *(undefined4 *)(lVar11 + 0x358) =
                                                                   local_4a8;
                                                              local_4b8 = 0;
                                                              local_4c0 = 0;
                                                              FUN_062fcc3c(&local_4c0,0x1f48,0x1f4d,
                                                                           1,0xfffffff8,0);
                                                              if (0x45 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x35c) =
                                                                     local_4c0;
                                                                *(undefined4 *)(lVar11 + 0x364) =
                                                                     local_4b8;
                                                                local_4c8 = 0;
                                                                local_4d0 = 0;
                                                                FUN_062fcc3c(&local_4d0,0x1f59,
                                                                             0x1f59,0,0x1f51,0);
                                                                if (0x46 < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0x368) =
                                                                       local_4d0;
                                                                  *(undefined4 *)(lVar11 + 0x370) =
                                                                       local_4c8;
                                                                  local_4d8 = 0;
                                                                  local_4e0 = 0;
                                                                  FUN_062fcc3c(&local_4e0,0x1f5b,
                                                                               0x1f5b,0,0x1f53,0);
                                                                  if (0x47 < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 0x374)
                                                                         = local_4e0;
                                                                    *(undefined4 *)(lVar11 + 0x37c)
                                                                         = local_4d8;
                                                                    local_4e8 = 0;
                                                                    local_4f0 = 0;
                                                                    FUN_062fcc3c(&local_4f0,0x1f5d,
                                                                                 0x1f5d,0,0x1f55,0);
                                                                    if (0x48 < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x380) = local_4f0;
                                                    *(undefined4 *)(lVar11 + 0x388) = local_4e8;
                                                    local_4f8 = 0;
                                                    local_500 = 0;
                                                    FUN_062fcc3c(&local_500,0x1f5f,0x1f5f,0,0x1f57,0
                                                                );
                                                    if (0x49 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x38c) = local_500;
                                                      *(undefined4 *)(lVar11 + 0x394) = local_4f8;
                                                      local_508 = 0;
                                                      local_510 = 0;
                                                      FUN_062fcc3c(&local_510,0x1f68,0x1f6f,1,
                                                                   0xfffffff8,0);
                                                      if (0x4a < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x398) = local_510;
                                                        *(undefined4 *)(lVar11 + 0x3a0) = local_508;
                                                        local_518 = 0;
                                                        local_520 = 0;
                                                        FUN_062fcc3c(&local_520,0x1f88,0x1f8f,1,
                                                                     0xfffffff8,0);
                                                        if (0x4b < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x3a4) =
                                                               local_520;
                                                          *(undefined4 *)(lVar11 + 0x3ac) =
                                                               local_518;
                                                          local_528 = 0;
                                                          local_530 = 0;
                                                          FUN_062fcc3c(&local_530,0x1f98,0x1f9f,1,
                                                                       0xfffffff8,0);
                                                          if (0x4c < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x3b0) =
                                                                 local_530;
                                                            *(undefined4 *)(lVar11 + 0x3b8) =
                                                                 local_528;
                                                            local_538 = 0;
                                                            local_540 = 0;
                                                            FUN_062fcc3c(&local_540,0x1fa8,0x1faf,1,
                                                                         0xfffffff8,0);
                                                            if (0x4d < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x3bc) =
                                                                   local_540;
                                                              *(undefined4 *)(lVar11 + 0x3c4) =
                                                                   local_538;
                                                              local_548 = 0;
                                                              local_550 = 0;
                                                              FUN_062fcc3c(&local_550,0x1fb8,0x1fb9,
                                                                           1,0xfffffff8,0);
                                                              if (0x4e < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x3c8) =
                                                                     local_550;
                                                                *(undefined4 *)(lVar11 + 0x3d0) =
                                                                     local_548;
                                                                local_558 = 0;
                                                                local_560 = 0;
                                                                FUN_062fcc3c(&local_560,0x1fba,
                                                                             0x1fbb,1,0xffffffb6,0);
                                                                if (0x4f < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0x3d4) =
                                                                       local_560;
                                                                  *(undefined4 *)(lVar11 + 0x3dc) =
                                                                       local_558;
                                                                  local_568 = 0;
                                                                  local_570 = 0;
                                                                  FUN_062fcc3c(&local_570,0x1fbc,
                                                                               0x1fbc,0,0x1fb3,0);
                                                                  if (0x50 < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 0x3e0)
                                                                         = local_570;
                                                                    *(undefined4 *)(lVar11 + 1000) =
                                                                         local_568;
                                                                    local_578 = 0;
                                                                    local_580 = 0;
                                                                    FUN_062fcc3c(&local_580,0x1fc8,
                                                                                 0x1fcb,1,0xffffffaa
                                                                                 ,0);
                                                                    if (0x51 < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x3ec) = local_580;
                                                    *(undefined4 *)(lVar11 + 0x3f4) = local_578;
                                                    local_588 = 0;
                                                    local_590 = 0;
                                                    FUN_062fcc3c(&local_590,0x1fcc,0x1fcc,0,0x1fc3,0
                                                                );
                                                    if (0x52 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x3f8) = local_590;
                                                      *(undefined4 *)(lVar11 + 0x400) = local_588;
                                                      local_598 = 0;
                                                      local_5a0 = 0;
                                                      FUN_062fcc3c(&local_5a0,0x1fd8,0x1fd9,1,
                                                                   0xfffffff8,0);
                                                      if (0x53 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x404) = local_5a0;
                                                        *(undefined4 *)(lVar11 + 0x40c) = local_598;
                                                        local_5a8 = 0;
                                                        local_5b0 = 0;
                                                        FUN_062fcc3c(&local_5b0,0x1fda,0x1fdb,1,
                                                                     0xffffff9c,0);
                                                        if (0x54 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x410) =
                                                               local_5b0;
                                                          *(undefined4 *)(lVar11 + 0x418) =
                                                               local_5a8;
                                                          local_5b8 = 0;
                                                          local_5c0 = 0;
                                                          FUN_062fcc3c(&local_5c0,0x1fe8,0x1fe9,1,
                                                                       0xfffffff8,0);
                                                          if (0x55 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x41c) =
                                                                 local_5c0;
                                                            *(undefined4 *)(lVar11 + 0x424) =
                                                                 local_5b8;
                                                            local_5c8 = 0;
                                                            local_5d0 = 0;
                                                            FUN_062fcc3c(&local_5d0,0x1fea,0x1feb,1,
                                                                         0xffffff90,0);
                                                            if (0x56 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined8 *)(lVar11 + 0x428) =
                                                                   local_5d0;
                                                              *(undefined4 *)(lVar11 + 0x430) =
                                                                   local_5c8;
                                                              local_5d8 = 0;
                                                              local_5e0 = 0;
                                                              FUN_062fcc3c(&local_5e0,0x1fec,0x1fec,
                                                                           0,0x1fe5,0);
                                                              if (0x57 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0x434) =
                                                                     local_5e0;
                                                                *(undefined4 *)(lVar11 + 0x43c) =
                                                                     local_5d8;
                                                                local_5e8 = 0;
                                                                local_5f0 = 0;
                                                                FUN_062fcc3c(&local_5f0,0x1ff8,
                                                                             0x1ff9,1,0xffffff80,0);
                                                                if (0x58 < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0x440) =
                                                                       local_5f0;
                                                                  *(undefined4 *)(lVar11 + 0x448) =
                                                                       local_5e8;
                                                                  local_5f8 = 0;
                                                                  local_600 = 0;
                                                                  FUN_062fcc3c(&local_600,0x1ffa,
                                                                               0x1ffb,1,0xffffff82,0
                                                                              );
                                                                  if (0x59 < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 0x44c)
                                                                         = local_600;
                                                                    *(undefined4 *)(lVar11 + 0x454)
                                                                         = local_5f8;
                                                                    local_608 = 0;
                                                                    local_610 = 0;
                                                                    FUN_062fcc3c(&local_610,0x1ffc,
                                                                                 0x1ffc,0,0x1ff3,0);
                                                                    if (0x5a < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x458) = local_610;
                                                    *(undefined4 *)(lVar11 + 0x460) = local_608;
                                                    local_618 = 0;
                                                    local_620 = 0;
                                                    FUN_062fcc3c(&local_620,0x2160,0x216f,1,0x10,0);
                                                    if (0x5b < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x464) = local_620;
                                                      *(undefined4 *)(lVar11 + 0x46c) = local_618;
                                                      local_628 = 0;
                                                      local_630 = 0;
                                                      FUN_062fcc3c(&local_630,0x24b6,0x24d0,1,0x1a,0
                                                                  );
                                                      if (0x5c < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x470) = local_630;
                                                        *(undefined4 *)(lVar11 + 0x478) = local_628;
                                                        local_638 = 0;
                                                        local_640 = 0;
                                                        FUN_062fcc3c(&local_640,0xff21,0xff3a,1,0x20
                                                                     ,0);
                                                        if (0x5d < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x47c) =
                                                               local_640;
                                                          *(undefined4 *)(lVar11 + 0x484) =
                                                               local_638;
                                                          plVar12 = (long *)(*(long *)(*(long *)
                                                  puVar2 + 0xb8) + 0x68);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_0333a630(plVar12,lVar11);
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
        }
      }
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
  }
LAB_062fcb24:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


