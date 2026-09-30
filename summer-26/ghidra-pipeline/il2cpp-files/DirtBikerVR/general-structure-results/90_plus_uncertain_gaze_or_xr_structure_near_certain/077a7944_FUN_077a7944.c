/*
FUNCTION_NAME: FUN_077a7944
ENTRY_POINT: 077a7944
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 170
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_21;validity_or_gating_hits_3;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_18;functionality_possible_biometrics_hits_6
*/


void FUN_077a7944(long param_1)

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
  undefined8 uVar12;
  
  puVar2 = PTR_DAT_084a3408;
  if ((DAT_08986fe3 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a27d8);
    FUN_03a8a718(PTR_DAT_084a6570);
    FUN_03a8a718(PTR_DAT_084a27a8);
    FUN_03a8a718(PTR_DAT_084a3408);
    FUN_03a8a718(
                UnityEngine_Rendering_HighDefinition_LocalVolumetricFogManager_RegisterLocalVolumetricFogEarlyUpdate_var
                );
    FUN_03a8a718(System_Runtime_Remoting_Messaging_LogicalCallContext_Reader_var);
    FUN_03a8a718(Normal_Realtime_MatcherErrors_RoomServerOptionsInvalidData_var);
    FUN_03a8a718(UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams_var);
    FUN_03a8a718(
                UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
                );
    FUN_03a8a718(
                UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
                );
    FUN_03a8a718(
                UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftHandInteraction_HoloLensHand_var
                );
    FUN_03a8a718(
                UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftMotionControllerProfile_WMRSpatialController_var
                );
    FUN_03a8a718(MotoInputActions_PlayerActions_var);
    FUN_03a8a718(MotoInputActions_UIActions_var);
    FUN_03a8a718(UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_SortedColumnState_var);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                );
    FUN_03a8a718(UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var);
    FUN_03a8a718(Unity_Netcode_Components_NetworkAnimator_AnimationMessage_var);
    FUN_03a8a718(Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var);
    FUN_03a8a718(Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_var);
    FUN_03a8a718(Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_TriggerUpdate_var);
    FUN_03a8a718(Unity_Netcode_NetworkMessageManager_MessageWithHandler_var);
    FUN_03a8a718(Unity_Netcode_NetworkObject_SceneObject_var);
    FUN_03a8a718(Unity_Netcode_NetworkSceneManager_DeferredObjectCreation_var);
    FUN_03a8a718(Unity_Netcode_NetworkSceneManager_DeferredObjectsMovedEvent_var);
    FUN_03a8a718(Unity_Netcode_NetworkUpdateLoop_NetworkEarlyUpdate_var);
    FUN_03a8a718(Unity_Netcode_NetworkUpdateLoop_NetworkFixedUpdate_var);
    FUN_03a8a718(Unity_Netcode_NetworkUpdateLoop_NetworkInitialization_var);
    FUN_03a8a718(Unity_Netcode_NetworkUpdateLoop_NetworkPostLateUpdate_var);
    FUN_03a8a718(Unity_Netcode_NetworkUpdateLoop_NetworkPostScriptLateUpdate_var);
    FUN_03a8a718(Unity_Netcode_NetworkUpdateLoop_NetworkPreLateUpdate_var);
    FUN_03a8a718(Unity_Netcode_NetworkUpdateLoop_NetworkPreUpdate_var);
    FUN_03a8a718(Unity_Netcode_NetworkUpdateLoop_NetworkUpdate_var);
    FUN_03a8a718(OVRAnchor_FetchOptions_var);
    FUN_03a8a718(OVRAnchor_FetchTaskData_var);
    FUN_03a8a718(OVRFaceExpressions_FaceExpression_var);
    FUN_03a8a718(OVRGLTFAccessor_GLTFAccessor_var);
    FUN_03a8a718(OVRLocatable_TrackingSpacePose_var);
    FUN_03a8a718(OVRNativeList_CapacityHelper_var);
    FUN_03a8a718(OVROverlay_LayerTexture_var);
    FUN_03a8a718(OVRPassthroughLayer_DeferredPassthroughMeshAddition_var);
    FUN_03a8a718(OVRPassthroughLayer_SerializedSurfaceGeometry_var);
    FUN_03a8a718(OVRPassthroughLayer_Settings_var);
    FUN_03a8a718(OVRPlugin_SpaceQueryResult_var);
    FUN_03a8a718(OVRPlugin_Vector3f_var);
    FUN_03a8a718(PTR_DAT_084d76b8);
    FUN_03a8a718(OVRPlugin_VirtualKeyboardModelAnimationState_var);
    FUN_03a8a718(OVRRaycaster_RaycastHit_var);
    FUN_03a8a718(OVRSceneLoader_SceneInfo_var);
    FUN_03a8a718(OVRSpaceQuery_Options_var);
    FUN_03a8a718(OVRSpatialAnchor_LoadOptions_var);
    FUN_03a8a718(OVRSpatialAnchor_MultiAnchorDelegatePair_var);
    FUN_03a8a718(OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var);
    FUN_03a8a718(OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var);
    FUN_03a8a718(
                UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                );
    FUN_03a8a718(UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var);
    FUN_03a8a718(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var);
    FUN_03a8a718(UnityEngine_XR_OpenXR_Features_Interactions_PalmPoseInteraction_PalmPose_var);
    FUN_03a8a718(UnityEngine_UIElements_PanelInputConfiguration_Settings_var);
    FUN_03a8a718(UnityEngine_ParticleSystem_EmissionModule_var);
    FUN_03a8a718(UnityEngine_ParticleSystem_MainModule_var);
    FUN_03a8a718(UnityEngine_ParticleSystem_ShapeModule_var);
    FUN_03a8a718(UnityEngine_ParticleSystem_SubEmittersModule_var);
    FUN_03a8a718(Unity_Properties_PathVisitor_PropertyScope_var);
    FUN_03a8a718(UnityEngine_PhysicsShapeGroup2D_GroupState_var);
    FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_PointerLocation_var);
    FUN_03a8a718(UnityEngine_InputSystem_UI_PointerModel_ButtonState_var);
    FUN_03a8a718(UnityEngine_PlayerLoop_PostLateUpdate_FinishFrameRendering_var);
    FUN_03a8a718(UnityEngine_PlayerLoop_PostLateUpdate_PlayerSendFrameComplete_var);
    FUN_03a8a718(UnityEngine_PlayerLoop_PreLateUpdate_ScriptRunBehaviourLateUpdate_var);
    FUN_03a8a718(UnityEngine_PlayerLoop_PreUpdate_PhysicsUpdate_var);
    FUN_03a8a718(UnityEngine_Rendering_ProbeBrickPool_DataLocation_var);
    FUN_03a8a718(UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_ProbeSettings_ProbeType_var);
    FUN_03a8a718(UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var);
    FUN_03a8a718(UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var);
    FUN_03a8a718(
                UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
                );
    FUN_03a8a718(System_Diagnostics_Process_ProcInfo_var);
    FUN_03a8a718(Unity_Networking_QoS_QosJob_InternalQosServer_var);
    FUN_03a8a718(UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_Enumerator_var);
    FUN_03a8a718(Normal_Realtime_Realtime_InstantiateOptions_var);
    FUN_03a8a718(Normal_Realtime_RealtimeRefManager_ListenerSubscription_var);
    FUN_03a8a718(Normal_Realtime_RealtimeRefManager_RealtimeRefManagerContext_var);
    FUN_03a8a718(Normal_Realtime_RealtimeViewModel_CachedModelUpdate_var);
    FUN_03a8a718(UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllCallback_var);
    FUN_03a8a718(UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_var);
    FUN_03a8a718(UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var);
    FUN_03a8a718(UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_var);
    FUN_03a8a718(UnityEngine_UI_ReflectionMethodsCache_Raycast3DCallback_var);
    FUN_03a8a718(UnityEngine_UI_ReflectionMethodsCache_RaycastAllCallback_var);
    FUN_03a8a718(UnityEngine_Rendering_Universal_ReflectionProbeManager_CachedProbe_var);
    FUN_03a8a718(UnityEngine_Rendering_RenderGraphModule_RenderGraph_CompiledPassInfo_var);
    FUN_03a8a718(UnityEngine_Rendering_RenderGraphModule_RenderGraph_CompiledResourceInfo_var);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_BlitMaterialParameters_var
                );
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_RenderPipelineSettings_LightSettings_var);
    FUN_03a8a718(UnityEngine_Rendering_Universal_Internal_RenderTargetBufferSystem_SwapBuffer_var);
    FUN_03a8a718(UnityEngine_UIElements_UIR_RenderTreeManager_ElementInsertionData_var);
    FUN_03a8a718(UnityEngine_TextCore_RichTextTagParser_ParseError_var);
    FUN_03a8a718(UnityEngine_TextCore_RichTextTagParser_Segment_var);
    FUN_03a8a718(UnityEngine_TextCore_RichTextTagParser_Tag_var);
    FUN_03a8a718(UnityEngine_TextCore_RichTextTagParser_TagTypeInfo_var);
    FUN_03a8a718(UnityEngine_TextCore_RichTextTagParser_TagValue_var);
    FUN_03a8a718(UnityEngine_Animations_Rigging_RigEffectorData_Style_var);
    FUN_03a8a718(UnityEngine_Animations_Rigging_RigUtils_RigSyncSceneToStreamData_var);
    FUN_03a8a718(Normal_Realtime_Room_ClientMetadata_var);
    FUN_03a8a718(Normal_Realtime_Room_ConnectDirectlyToQuickmatchRoomRequest_var);
    FUN_03a8a718(Normal_Realtime_Room_ConnectOptions_var);
    FUN_03a8a718(Normal_Realtime_Room_ConnectToNextAvailableQuickmatchRoomRequest_var);
    FUN_03a8a718(Normal_Realtime_Room_ConnectToRoomRequest_var);
    FUN_03a8a718(Normal_Realtime_Room_FoundRoomResponse_var);
    FUN_03a8a718(Normal_Realtime_Room_GetRegionsListResponse_var);
    FUN_03a8a718(Normal_Realtime_Room_RegionMetadata_var);
    FUN_03a8a718(Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var);
    FUN_03a8a718(UnityEngine_Rendering_STP_Config_var);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_ScalableSettingLevelParameter_Level_var);
    FUN_03a8a718(NWH_Common_Input_SceneInputActions_CameraControlsActions_var);
    FUN_03a8a718(NWH_Common_Input_SceneInputActions_SceneControlsActions_var);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_SceneObjectIDMapSceneAsset_Entry_var);
    FUN_03a8a718(System_Xml_SecureStringHasher_HashCodeOfStringDelegate_var);
    FUN_03a8a718(UnityEngine_SendMouseEvents_HitInfo_var);
    FUN_03a8a718(System_Xml_Schema_SequenceNode_SequenceConstructPosContext_var);
    FUN_03a8a718(Unity_Netcode_Transports_SinglePlayer_SinglePlayerTransport_MessageData_var);
    FUN_03a8a718(UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_var);
    FUN_03a8a718(UnityEngine_UIElements_StylePropertyNameCollection_Enumerator_var);
    FUN_03a8a718(UnityEngine_UIElements_StyleSheet_ImportStruct_var);
    FUN_03a8a718(UnityEngine_UIElements_StyleVariableResolver_ResolveContext_var);
    FUN_03a8a718(TMPro_TMP_DefaultControls_Resources_var);
    FUN_03a8a718(TMPro_TMP_ResourceManager_FontAssetRef_var);
    FUN_03a8a718(TMPro_TMP_Text_SpecialCharacter_var);
    FUN_03a8a718(UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_ThreadData_var);
    FUN_03a8a718(UnityEngine_UIElements_TemplateAsset_AttributeOverride_var);
    FUN_03a8a718(UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_var);
    FUN_03a8a718(UnityEngine_UIElements_TextElement_GlyphsEnumerable_var);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter_var);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_var);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextSettings_FontReferenceMap_var);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_Texture3DAtlas_MipGenerationSwapData_var);
    FUN_03a8a718(UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo_var);
    FUN_03a8a718(UnityEngine_UIElements_TextureRegistry_TextureInfo_var);
    FUN_03a8a718(UnityEngine_Tilemaps_Tilemap_SyncTile_var);
    FUN_03a8a718(UnityEngine_Timeline_TimeNotificationBehaviour_NotificationEntry_var);
    FUN_03a8a718(System_Globalization_TimeSpanFormat_FormatLiterals_var);
    FUN_03a8a718(System_Globalization_TimeSpanParse_TimeSpanRawInfo_var);
    FUN_03a8a718(System_TimeZoneInfo_TransitionTime_var);
    FUN_03a8a718(UnityEngine_Timeline_TimelinePlayable_TrackCacheManager_var);
    FUN_03a8a718(Unity_Multiplayer_Tools_NetStats_Timer_TimerScope_var);
    FUN_03a8a718(UnityEngine_InputSystem_EnhancedTouch_Touch_FingerAndTouchState_var);
    FUN_03a8a718(UnityEngine_InputSystem_EnhancedTouch_Touch_GlobalState_var);
    FUN_03a8a718(UnityEngine_Timeline_TrackAsset_TransientBuildData_var);
    FUN_03a8a718(UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_RaycastHitData_var);
    FUN_03a8a718(UnityEngine_SpatialTracking_TrackedPoseDriverDataDescription_PoseData_var);
    FUN_03a8a718(UnityEngine_XR_LegacyInputHelpers_TransitionArmModel_ArmModelBlendData_var);
    FUN_03a8a718(UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_var);
    FUN_03a8a718(System_ComponentModel_TypeDescriptor_TypeDescriptorComObject_var);
    FUN_03a8a718(System_ComponentModel_TypeDescriptor_TypeDescriptorInterface_var);
    FUN_03a8a718(UnityEngine_UIElements_UIR_UIRenderDevice_AllocToFree_var);
    FUN_03a8a718(UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_var);
    FUN_03a8a718(UnityEngine_UIElements_UIR_UIRenderDevice_DeviceToFree_var);
    FUN_03a8a718(UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_var);
    FUN_03a8a718(UnityEngine_UIElements_UIR_UIRenderDevice_EvaluationState_var);
    FUN_03a8a718(System_Globalization_UmAlQuraCalendar_DateMapping_var);
    FUN_03a8a718(
                Unity_Services_Authentication_PlayerAccounts_UnityPlayerAccountSettings_SupportedScopesEnum_var
                );
    FUN_03a8a718(UnityEngine_UnitySynchronizationContext_WorkRequest_var);
    FUN_03a8a718(UnityEngine_Rendering_Universal_UniversalCameraHistory_Item_var);
    FUN_03a8a718(UnityEngine_Rendering_Universal_UniversalRenderPipeline_CameraRenderingScope_var);
    FUN_03a8a718(UnityEngine_Rendering_Universal_UniversalRenderPipeline_ContextRenderingScope_var);
    FUN_03a8a718(UnityEngine_PlayerLoop_Update_ScriptRunBehaviourUpdate_var);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_UpscalerResources_CameraResources_var);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_UpscalerResources_ViewResources_var);
    FUN_03a8a718(UnityEngine_VFX_Utility_VFXHierarchyAttributeMapBinder_Bone_var);
    FUN_03a8a718(
                UnityEngine_XR_OpenXR_Features_Interactions_ValveIndexControllerProfile_ValveIndexController_var
                );
    DAT_08986fe3 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (DAT_0897b4b6 == '\0') {
    FUN_03a8a718(PTR_DAT_084a3408);
    DAT_0897b4b6 = '\x01';
  }
  puVar3 = PTR_DAT_084a6570;
  puVar1 = PTR_DAT_084a27a8;
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar11 = *(long *)puVar2;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
  lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_05f95188(lVar11,uVar12,*(undefined8 *)puVar3);
  puVar10 = UnityEngine_Rendering_Universal_UniversalRenderPipeline_ContextRenderingScope_var;
  puVar9 = UnityEngine_Rendering_Universal_UniversalCameraHistory_Item_var;
  puVar8 = UnityEngine_SpatialTracking_TrackedPoseDriverDataDescription_PoseData_var;
  puVar7 = UnityEngine_Timeline_TrackAsset_TransientBuildData_var;
  puVar6 = UnityEngine_UIElements_TextElement_GlyphsEnumerable_var;
  puVar5 = UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_BlitMaterialParameters_var;
  puVar4 = UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var;
  puVar3 = OVRPlugin_Vector3f_var;
  puVar1 = Unity_Netcode_NetworkSceneManager_DeferredObjectsMovedEvent_var;
  puVar2 = PTR_DAT_084a27d8;
  if (lVar11 != 0) {
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_var,2,
                 *(undefined8 *)PTR_DAT_084a27d8);
    FUN_05f95edc(lVar11,*(undefined8 *)puVar8,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)puVar4,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)puVar1,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)puVar6,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)puVar5,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)puVar9,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)puVar3,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)puVar10,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)puVar7,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)System_Xml_SecureStringHasher_HashCodeOfStringDelegate_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_HighDefinition_RenderPipelineSettings_LightSettings_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_HighDefinition_ProbeSettings_ProbeType_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftHandInteraction_HoloLensHand_var
                 ,3,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Timeline_TimeNotificationBehaviour_NotificationEntry_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         Normal_Realtime_Room_ConnectDirectlyToQuickmatchRoomRequest_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_ParticleSystem_MainModule_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_ParticleSystem_EmissionModule_var,0,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_PointerDeviceState_PointerLocation_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_InputSystem_EnhancedTouch_Touch_GlobalState_var,2
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_ValveIndexControllerProfile_ValveIndexController_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRPassthroughLayer_Settings_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRPassthroughLayer_SerializedSurfaceGeometry_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_TextCore_RichTextTagParser_TagTypeInfo_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRSceneLoader_SceneInfo_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         Unity_Netcode_Transports_SinglePlayer_SinglePlayerTransport_MessageData_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)NWH_Common_Input_SceneInputActions_SceneControlsActions_var,0
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UI_ReflectionMethodsCache_Raycast3DCallback_var,2
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_TemplateAsset_AttributeOverride_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRPassthroughLayer_DeferredPassthroughMeshAddition_var,0,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_PlayerLoop_PostLateUpdate_FinishFrameRendering_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_PanelInputConfiguration_Settings_var,0
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         Unity_Netcode_NetworkUpdateLoop_NetworkPostScriptLateUpdate_var,4,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Normal_Realtime_Room_ConnectToRoomRequest_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkFixedUpdate_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftMotionControllerProfile_WMRSpatialController_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Normal_Realtime_Room_RegionMetadata_var,0,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)TMPro_TMP_DefaultControls_Resources_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_Animations_Rigging_RigEffectorData_Style_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_PlayerLoop_PreLateUpdate_ScriptRunBehaviourLateUpdate_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         System_ComponentModel_TypeDescriptor_TypeDescriptorComObject_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_SortedColumnState_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_TriggerUpdate_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRNativeList_CapacityHelper_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)TMPro_TMP_Text_SpecialCharacter_var,0,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)System_TimeZoneInfo_TransitionTime_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_ParticleSystem_SubEmittersModule_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Normal_Realtime_Room_GetRegionsListResponse_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_PlayerLoop_PreUpdate_PhysicsUpdate_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_HighDefinition_UpscalerResources_CameraResources_var,
                 2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_HighDefinition_Texture3DAtlas_MipGenerationSwapData_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Normal_Realtime_RealtimeRefManager_ListenerSubscription_var,2
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_TextureRegistry_TextureInfo_var,0,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_NetworkMessageManager_MessageWithHandler_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UI_ReflectionMethodsCache_RaycastAllCallback_var,
                 2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRSpaceQuery_Options_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRSpatialAnchor_LoadOptions_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Normal_Realtime_RealtimeViewModel_CachedModelUpdate_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRFaceExpressions_FaceExpression_var,2,*(undefined8 *)puVar2
                );
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkPreUpdate_var,0,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllCallback_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)MotoInputActions_PlayerActions_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         System_Runtime_Remoting_Messaging_LogicalCallContext_Reader_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         Normal_Realtime_MatcherErrors_RoomServerOptionsInvalidData_var,0,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_TextCore_RichTextTagParser_Tag_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var,3
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Normal_Realtime_Room_ConnectOptions_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_var,2
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_Universal_Internal_RenderTargetBufferSystem_SwapBuffer_var
                 ,0,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                 ,3,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_HighDefinition_LocalVolumetricFogManager_RegisterLocalVolumetricFogEarlyUpdate_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_XR_LegacyInputHelpers_TransitionArmModel_ArmModelBlendData_var,
                 2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_InputSystem_UI_PointerModel_ButtonState_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_SendMouseEvents_HitInfo_var,0,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_HighDefinition_UpscalerResources_ViewResources_var,3,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         System_ComponentModel_TypeDescriptor_TypeDescriptorInterface_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRLocatable_TrackingSpacePose_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)MotoInputActions_UIActions_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_StyleVariableResolver_ResolveContext_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_StylePropertyNameCollection_Enumerator_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var,2
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         Normal_Realtime_RealtimeRefManager_RealtimeRefManagerContext_var,3,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_PlayerLoop_Update_ScriptRunBehaviourUpdate_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_UIR_UIRenderDevice_AllocToFree_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)PTR_DAT_084d76b8,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_Components_NetworkAnimator_AnimationMessage_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams_var,
                 2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_PlayerLoop_PostLateUpdate_PlayerSendFrameComplete_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_UIR_RenderTreeManager_ElementInsertionData_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_RenderGraphModule_RenderGraph_CompiledResourceInfo_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_ParticleSystem_ShapeModule_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_TextCore_RichTextTagParser_Segment_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter_var,
                 2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)System_Globalization_UmAlQuraCalendar_DateMapping_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_ThreadData_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkEarlyUpdate_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)System_Diagnostics_Process_ProcInfo_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_EnhancedTouch_Touch_FingerAndTouchState_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_var,2
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_TextCore_Text_TextSettings_FontReferenceMap_var,2
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRGLTFAccessor_GLTFAccessor_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)System_Globalization_TimeSpanFormat_FormatLiterals_var,3,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_Rendering_ProbeBrickPool_DataLocation_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)TMPro_TMP_ResourceManager_FontAssetRef_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRSpatialAnchor_MultiAnchorDelegatePair_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_var
                 ,0,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVROverlay_LayerTexture_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_RaycastHitData_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)NWH_Common_Input_SceneInputActions_CameraControlsActions_var,
                 2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRAnchor_FetchOptions_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         Normal_Realtime_Room_ConnectToNextAvailableQuickmatchRoomRequest_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_Universal_UniversalRenderPipeline_CameraRenderingScope_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkPreLateUpdate_var,0,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkInitialization_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         Unity_Services_Authentication_PlayerAccounts_UnityPlayerAccountSettings_SupportedScopesEnum_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkUpdate_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRAnchor_FetchTaskData_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_HighDefinition_SceneObjectIDMapSceneAsset_Entry_var,2
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_UIR_UIRenderDevice_EvaluationState_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_NetworkSceneManager_DeferredObjectCreation_var,
                 2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_Tilemaps_Tilemap_SyncTile_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UnitySynchronizationContext_WorkRequest_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_Enumerator_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         System_Xml_Schema_SequenceNode_SequenceConstructPosContext_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Normal_Realtime_Room_FoundRoomResponse_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkPostLateUpdate_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_TextCore_RichTextTagParser_TagValue_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var,
                 2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_TextCore_RichTextTagParser_ParseError_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_RenderGraphModule_RenderGraph_CompiledPassInfo_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Multiplayer_Tools_NetStats_Timer_TimerScope_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_HighDefinition_ScalableSettingLevelParameter_Level_var
                 ,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_VFX_Utility_VFXHierarchyAttributeMapBinder_Bone_var,3,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)System_Globalization_TimeSpanParse_TimeSpanRawInfo_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_Rendering_STP_Config_var,2,*(undefined8 *)puVar2)
    ;
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_Timeline_TimelinePlayable_TrackCacheManager_var,0
                 ,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Netcode_NetworkObject_SceneObject_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Normal_Realtime_Realtime_InstantiateOptions_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_StyleSheet_ImportStruct_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Normal_Realtime_Room_ClientMetadata_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_XR_OpenXR_Features_Interactions_PalmPoseInteraction_PalmPose_var
                 ,0,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_Universal_ReflectionProbeManager_CachedProbe_var,4,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRRaycaster_RaycastHit_var,0,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_PhysicsShapeGroup2D_GroupState_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Properties_PathVisitor_PropertyScope_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)
                         UnityEngine_Animations_Rigging_RigUtils_RigSyncSceneToStreamData_var,0,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)UnityEngine_UIElements_UIR_UIRenderDevice_DeviceToFree_var,2,
                 *(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)OVRPlugin_SpaceQueryResult_var,2,*(undefined8 *)puVar2);
    FUN_05f95edc(lVar11,*(undefined8 *)Unity_Networking_QoS_QosJob_InternalQosServer_var,2,
                 *(undefined8 *)puVar2);
    *(long *)(param_1 + 0x10) = lVar11;
    thunk_FUN_03afed3c((long *)(param_1 + 0x10),lVar11);
    FUN_0679343c(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


