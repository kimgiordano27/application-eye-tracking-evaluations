/*
FUNCTION_NAME: FUN_02ab2478
ENTRY_POINT: 02ab2478
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 293
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_21;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_18;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_17;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_permission_setup;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_02ab2478(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = 
  System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_TypeInfo;
  puVar7 = System_Collections_Generic_List<JsonParser_JsonValue>_TypeInfo;
  puVar6 = System_Collections_Generic_List<InteractableGroup_InteractableLimits>_TypeInfo;
  puVar5 = System_Collections_Generic_List<InputControlLayout_ControlItem>_TypeInfo;
  puVar4 = System_Collections_Generic_List<InputActionMap_BindingOverrideJson>_TypeInfo;
  puVar3 = 
  System_Collections_Generic_List<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo>_TypeInfo;
  puVar2 = System_Collections_Generic_List<HandGrabUtils_HandGrabPoseData>_TypeInfo;
  puVar1 = System_Collections_Generic_List<HandGrabPoseLiveRecorder_RecorderStep>_TypeInfo;
  if ((DAT_066cc0a5 & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<LocalVariables_VariableScope>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_List<LocationBasedDamage_LocationBasedDamageClass>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<LocomotionEvent_RotationType>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<HandGrabUtils_HandGrabPoseData>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_List<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<HandGrabPoseLiveRecorder_RecorderStep>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<LocomotionEvent_TranslationType>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<MRUKNativeFuncs_MrukRoomAnchor>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<InputControlLayout_ControlItem>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<MRUKNativeFuncs_MrukSceneAnchor>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<MRUKRoom_CouchSeat>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<MeshGenerator_RepeatRectUV>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<MeshGenerator_TessellationJobParameters>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<MetaXRAcousticGeometry_MeshMaterial>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<MonoChunkParser_Chunk>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<MultiColumnCollectionHeader_ColumnData>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_List<MultiColumnCollectionHeader_SortedColumnState>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<InteractableGroup_InteractableLimits>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<JsonParser_JsonValue>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                );
    FUN_02b3c81c(
                System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRSemanticLabels_Classification>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo)
    ;
    FUN_02b3c81c(System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo)
    ;
    FUN_02b3c81c(System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<Painter2D_Painter2DJobData>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<PermissionsManager_PermissionRequest>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<PointableCanvasModule_PointerImpl>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<PokeInteractor_CachedInteractable>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<InputActionMap_BindingOverrideJson>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<PoolManagerComponent_PoolDesc>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                );
    FUN_02b3c81c(
                System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_TypeInfo
                );
    FUN_02b3c81c(
                System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>_TypeInfo
                );
    FUN_02b3c81c(
                System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<RegexCharClass_SingleRange>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<RenderTreeManager_ElementInsertionData>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<RichTextTagParser_Segment>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<RichTextTagParser_Tag>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<RoundedBoxVideoController_BoxAnimation>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<ShapeRecognizer_FingerFeatureConfig>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<Spectrum_Point>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<StandardVelocityCalculator_SamplePoseData>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<StencilMaterial_MatEntry>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<StepManager_Step>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<TMP_Dropdown_DropdownItem>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<TMP_Dropdown_OptionData>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<TMP_MaterialManager_FallbackMaterial>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<TextSettings_FontReferenceMap>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<TextureRegistry_TextureInfo>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_List<TimeNotificationBehaviour_NotificationEntry>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                );
    FUN_02b3c81c(System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo);
    DAT_066cc0a5 = 1;
  }
  uVar9 = thunk_FUN_02b7a758(*param_1,*(undefined8 *)puVar1);
  uVar10 = *param_1;
  *param_2 = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar10,*(undefined8 *)puVar1);
  thunk_FUN_02bb0e9c(param_2,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[1],*(undefined8 *)puVar2);
  uVar11 = param_1[1];
  uVar10 = *(undefined8 *)puVar2;
  param_2[1] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 1,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[2],*(undefined8 *)puVar3);
  uVar11 = param_1[2];
  uVar10 = *(undefined8 *)puVar3;
  param_2[2] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 2,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[3],*(undefined8 *)puVar4);
  uVar11 = param_1[3];
  uVar10 = *(undefined8 *)puVar4;
  param_2[3] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 3,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[4],*(undefined8 *)puVar5);
  uVar11 = param_1[4];
  uVar10 = *(undefined8 *)puVar5;
  param_2[4] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 4,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[5],*(undefined8 *)puVar6);
  uVar11 = param_1[5];
  uVar10 = *(undefined8 *)puVar6;
  param_2[5] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 5,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[6],*(undefined8 *)puVar7);
  uVar11 = param_1[6];
  uVar10 = *(undefined8 *)puVar7;
  param_2[6] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 6,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[7],*(undefined8 *)puVar8);
  uVar11 = param_1[7];
  uVar10 = *(undefined8 *)puVar8;
  param_2[7] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 7,uVar9);
  puVar1 = System_Collections_Generic_List<MultiColumnCollectionHeader_ColumnData>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[8],
                             *(undefined8 *)
                              System_Collections_Generic_List<MultiColumnCollectionHeader_ColumnData>_TypeInfo
                            );
  uVar11 = param_1[8];
  uVar10 = *(undefined8 *)puVar1;
  param_2[8] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 8,uVar9);
  puVar1 = System_Collections_Generic_List<MetaXRAcousticGeometry_MeshMaterial>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[9],
                             *(undefined8 *)
                              System_Collections_Generic_List<MetaXRAcousticGeometry_MeshMaterial>_TypeInfo
                            );
  uVar11 = param_1[9];
  uVar10 = *(undefined8 *)puVar1;
  param_2[9] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 9,uVar9);
  puVar1 = System_Collections_Generic_List<StandardVelocityCalculator_SamplePoseData>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[10],
                             *(undefined8 *)
                              System_Collections_Generic_List<StandardVelocityCalculator_SamplePoseData>_TypeInfo
                            );
  uVar11 = param_1[10];
  uVar10 = *(undefined8 *)puVar1;
  param_2[10] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 10,uVar9);
  puVar1 = System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0xb],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
  uVar11 = param_1[0xb];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xb] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0xb,uVar9);
  puVar1 = System_Collections_Generic_List<RegexCharClass_SingleRange>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0xc],
                             *(undefined8 *)
                              System_Collections_Generic_List<RegexCharClass_SingleRange>_TypeInfo);
  uVar11 = param_1[0xc];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xc] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0xc,uVar9);
  puVar1 = System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0xd],
                             *(undefined8 *)
                              System_Collections_Generic_List<MetaXRAcousticGeometry_TerrainMaterial>_TypeInfo
                            );
  uVar11 = param_1[0xd];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xd] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0xd,uVar9);
  puVar1 = 
  System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>_TypeInfo
  ;
  uVar9 = thunk_FUN_02b7a758(param_1[0xe],
                             *(undefined8 *)
                              System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>_TypeInfo
                            );
  uVar11 = param_1[0xe];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xe] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0xe,uVar9);
  puVar1 = System_Collections_Generic_List<MeshGenerator_RepeatRectUV>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0xf],
                             *(undefined8 *)
                              System_Collections_Generic_List<MeshGenerator_RepeatRectUV>_TypeInfo);
  uVar11 = param_1[0xf];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xf] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0xf,uVar9);
  puVar1 = System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x10],
                             *(undefined8 *)
                              System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                            );
  uVar11 = param_1[0x10];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x10] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x10,uVar9);
  puVar1 = System_Collections_Generic_List<MRUKRoom_CouchSeat>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x11],
                             *(undefined8 *)
                              System_Collections_Generic_List<MRUKRoom_CouchSeat>_TypeInfo);
  uVar11 = param_1[0x11];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x11] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x11,uVar9);
  puVar1 = System_Collections_Generic_List<StepManager_Step>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x12],
                             *(undefined8 *)
                              System_Collections_Generic_List<StepManager_Step>_TypeInfo);
  uVar11 = param_1[0x12];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x12] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x12,uVar9);
  puVar1 = System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x13],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo);
  uVar11 = param_1[0x13];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x13] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x13,uVar9);
  puVar1 = System_Collections_Generic_List<StencilMaterial_MatEntry>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x14],
                             *(undefined8 *)
                              System_Collections_Generic_List<StencilMaterial_MatEntry>_TypeInfo);
  uVar11 = param_1[0x14];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x14] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x14,uVar9);
  puVar1 = System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x15],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo
                            );
  uVar11 = param_1[0x15];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x15] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x15,uVar9);
  puVar1 = System_Collections_Generic_List<TextureRegistry_TextureInfo>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x16],
                             *(undefined8 *)
                              System_Collections_Generic_List<TextureRegistry_TextureInfo>_TypeInfo)
  ;
  uVar11 = param_1[0x16];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x16] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x16,uVar9);
  puVar1 = System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x17],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_TypeInfo
                            );
  uVar11 = param_1[0x17];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x17] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x17,uVar9);
  puVar1 = System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_TypeInfo
  ;
  uVar9 = thunk_FUN_02b7a758(param_1[0x18],
                             *(undefined8 *)
                              System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_TypeInfo
                            );
  uVar11 = param_1[0x18];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x18] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x18,uVar9);
  puVar1 = System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x19],
                             *(undefined8 *)
                              System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo);
  uVar11 = param_1[0x19];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x19] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x19,uVar9);
  puVar1 = System_Collections_Generic_List<TMP_Dropdown_DropdownItem>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1a],
                             *(undefined8 *)
                              System_Collections_Generic_List<TMP_Dropdown_DropdownItem>_TypeInfo);
  uVar11 = param_1[0x1a];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1a] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1a,uVar9);
  puVar1 = System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1b],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
  uVar11 = param_1[0x1b];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1b] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1b,uVar9);
  puVar1 = System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1c],
                             *(undefined8 *)
                              System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_TypeInfo
                            );
  uVar11 = param_1[0x1c];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1c] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1c,uVar9);
  puVar1 = System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1d],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo);
  uVar11 = param_1[0x1d];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1d] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1d,uVar9);
  puVar1 = System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1e],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo
                            );
  uVar11 = param_1[0x1e];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1e] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1e,uVar9);
  puVar1 = System_Collections_Generic_List<Spectrum_Point>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1f],
                             *(undefined8 *)System_Collections_Generic_List<Spectrum_Point>_TypeInfo
                            );
  uVar11 = param_1[0x1f];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1f] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1f,uVar9);
  puVar1 = System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x20],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
                            );
  uVar11 = param_1[0x20];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x20] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x20,uVar9);
  puVar1 = System_Collections_Generic_List<TMP_MaterialManager_FallbackMaterial>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x21],
                             *(undefined8 *)
                              System_Collections_Generic_List<TMP_MaterialManager_FallbackMaterial>_TypeInfo
                            );
  uVar11 = param_1[0x21];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x21] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x21,uVar9);
  puVar1 = System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x22],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo
                            );
  uVar11 = param_1[0x22];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x22] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x22,uVar9);
  puVar1 = System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x23],
                             *(undefined8 *)
                              System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo);
  uVar11 = param_1[0x23];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x23] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x23,uVar9);
  puVar1 = System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x24],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo
                            );
  uVar11 = param_1[0x24];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x24] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x24,uVar9);
  puVar1 = System_Collections_Generic_List<TextSettings_FontReferenceMap>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x25],
                             *(undefined8 *)
                              System_Collections_Generic_List<TextSettings_FontReferenceMap>_TypeInfo
                            );
  uVar11 = param_1[0x25];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x25] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x25,uVar9);
  puVar1 = System_Collections_Generic_List<OVRSemanticLabels_Classification>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x26],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRSemanticLabels_Classification>_TypeInfo
                            );
  uVar11 = param_1[0x26];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x26] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x26,uVar9);
  puVar1 = System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x27],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
  uVar11 = param_1[0x27];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x27] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x27,uVar9);
  puVar1 = System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x28],
                             *(undefined8 *)
                              System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_TypeInfo
                            );
  uVar11 = param_1[0x28];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x28] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x28,uVar9);
  puVar1 = System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x29],
                             *(undefined8 *)
                              System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo
                            );
  uVar11 = param_1[0x29];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x29] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x29,uVar9);
  puVar1 = System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2a],
                             *(undefined8 *)
                              System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo
                            );
  uVar11 = param_1[0x2a];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2a] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2a,uVar9);
  puVar1 = System_Collections_Generic_List<Painter2D_Painter2DJobData>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2b],
                             *(undefined8 *)
                              System_Collections_Generic_List<Painter2D_Painter2DJobData>_TypeInfo);
  uVar11 = param_1[0x2b];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2b] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2b,uVar9);
  puVar1 = System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2c],
                             *(undefined8 *)
                              System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_TypeInfo
                            );
  uVar11 = param_1[0x2c];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2c] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2c,uVar9);
  puVar1 = 
  System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2d],
                             *(undefined8 *)
                              System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                            );
  uVar11 = param_1[0x2d];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2d] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2d,uVar9);
  puVar1 = System_Collections_Generic_List<MultiColumnCollectionHeader_SortedColumnState>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2e],
                             *(undefined8 *)
                              System_Collections_Generic_List<MultiColumnCollectionHeader_SortedColumnState>_TypeInfo
                            );
  uVar11 = param_1[0x2e];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2e] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2e,uVar9);
  puVar1 = System_Collections_Generic_List<RichTextTagParser_Segment>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2f],
                             *(undefined8 *)
                              System_Collections_Generic_List<RichTextTagParser_Segment>_TypeInfo);
  uVar11 = param_1[0x2f];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2f] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2f,uVar9);
  puVar1 = System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x30],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo
                            );
  uVar11 = param_1[0x30];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x30] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x30,uVar9);
  puVar1 = System_Collections_Generic_List<RoundedBoxVideoController_BoxAnimation>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x31],
                             *(undefined8 *)
                              System_Collections_Generic_List<RoundedBoxVideoController_BoxAnimation>_TypeInfo
                            );
  uVar11 = param_1[0x31];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x31] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x31,uVar9);
  puVar1 = System_Collections_Generic_List<LocationBasedDamage_LocationBasedDamageClass>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x32],
                             *(undefined8 *)
                              System_Collections_Generic_List<LocationBasedDamage_LocationBasedDamageClass>_TypeInfo
                            );
  uVar11 = param_1[0x32];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x32] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x32,uVar9);
  puVar1 = System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x33],
                             *(undefined8 *)
                              System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo
                            );
  uVar11 = param_1[0x33];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x33] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x33,uVar9);
  puVar1 = System_Collections_Generic_List<MRUKNativeFuncs_MrukRoomAnchor>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x34],
                             *(undefined8 *)
                              System_Collections_Generic_List<MRUKNativeFuncs_MrukRoomAnchor>_TypeInfo
                            );
  uVar11 = param_1[0x34];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x34] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x34,uVar9);
  puVar1 = System_Collections_Generic_List<PokeInteractor_CachedInteractable>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x35],
                             *(undefined8 *)
                              System_Collections_Generic_List<PokeInteractor_CachedInteractable>_TypeInfo
                            );
  uVar11 = param_1[0x35];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x35] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x35,uVar9);
  puVar1 = System_Collections_Generic_List<ShapeRecognizer_FingerFeatureConfig>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x36],
                             *(undefined8 *)
                              System_Collections_Generic_List<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                            );
  uVar11 = param_1[0x36];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x36] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x36,uVar9);
  puVar1 = System_Collections_Generic_List<PermissionsManager_PermissionRequest>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x37],
                             *(undefined8 *)
                              System_Collections_Generic_List<PermissionsManager_PermissionRequest>_TypeInfo
                            );
  uVar11 = param_1[0x37];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x37] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x37,uVar9);
  puVar1 = System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x38],
                             *(undefined8 *)
                              System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo
                            );
  uVar11 = param_1[0x38];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x38] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x38,uVar9);
  puVar1 = System_Collections_Generic_List<MeshGenerator_TessellationJobParameters>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x39],
                             *(undefined8 *)
                              System_Collections_Generic_List<MeshGenerator_TessellationJobParameters>_TypeInfo
                            );
  uVar11 = param_1[0x39];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x39] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x39,uVar9);
  puVar1 = System_Collections_Generic_List<TMP_Dropdown_OptionData>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x3a],
                             *(undefined8 *)
                              System_Collections_Generic_List<TMP_Dropdown_OptionData>_TypeInfo);
  uVar11 = param_1[0x3a];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x3a] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x3a,uVar9);
  puVar1 = System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x3b],
                             *(undefined8 *)
                              System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo
                            );
  uVar11 = param_1[0x3b];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x3b] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x3b,uVar9);
  puVar1 = 
  System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x3c],
                             *(undefined8 *)
                              System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>_TypeInfo
                            );
  uVar11 = param_1[0x3c];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x3c] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x3c,uVar9);
  puVar1 = System_Collections_Generic_List<RenderTreeManager_ElementInsertionData>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x3d],
                             *(undefined8 *)
                              System_Collections_Generic_List<RenderTreeManager_ElementInsertionData>_TypeInfo
                            );
  uVar11 = param_1[0x3d];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x3d] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x3d,uVar9);
  puVar1 = System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x3e],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                            );
  uVar11 = param_1[0x3e];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x3e] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x3e,uVar9);
  puVar1 = System_Collections_Generic_List<PointableCanvasModule_PointerImpl>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x3f],
                             *(undefined8 *)
                              System_Collections_Generic_List<PointableCanvasModule_PointerImpl>_TypeInfo
                            );
  uVar11 = param_1[0x3f];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x3f] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x3f,uVar9);
  puVar1 = 
  System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x40],
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                            );
  uVar11 = param_1[0x40];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x40] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x40,uVar9);
  puVar1 = System_Collections_Generic_List<LocomotionEvent_RotationType>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x41],
                             *(undefined8 *)
                              System_Collections_Generic_List<LocomotionEvent_RotationType>_TypeInfo
                            );
  uVar11 = param_1[0x41];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x41] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x41,uVar9);
  puVar1 = System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x42],
                             *(undefined8 *)
                              System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo
                            );
  uVar11 = param_1[0x42];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x42] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x42,uVar9);
  puVar1 = System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x43],
                             *(undefined8 *)
                              System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo
                            );
  uVar11 = param_1[0x43];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x43] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x43,uVar9);
  puVar1 = System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x44],
                             *(undefined8 *)
                              System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo
                            );
  uVar11 = param_1[0x44];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x44] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x44,uVar9);
  puVar1 = System_Collections_Generic_List<LocomotionEvent_TranslationType>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x45],
                             *(undefined8 *)
                              System_Collections_Generic_List<LocomotionEvent_TranslationType>_TypeInfo
                            );
  uVar11 = param_1[0x45];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x45] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x45,uVar9);
  puVar1 = System_Collections_Generic_List<TimeNotificationBehaviour_NotificationEntry>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x46],
                             *(undefined8 *)
                              System_Collections_Generic_List<TimeNotificationBehaviour_NotificationEntry>_TypeInfo
                            );
  uVar11 = param_1[0x46];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x46] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x46,uVar9);
  puVar1 = System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x47],
                             *(undefined8 *)
                              System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo
                            );
  uVar11 = param_1[0x47];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x47] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x47,uVar9);
  puVar1 = System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x48],
                             *(undefined8 *)
                              System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                            );
  uVar11 = param_1[0x48];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x48] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x48,uVar9);
  puVar1 = System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x49],
                             *(undefined8 *)
                              System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_TypeInfo)
  ;
  uVar11 = param_1[0x49];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x49] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x49,uVar9);
  puVar1 = System_Collections_Generic_List<MRUKNativeFuncs_MrukSceneAnchor>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x4a],
                             *(undefined8 *)
                              System_Collections_Generic_List<MRUKNativeFuncs_MrukSceneAnchor>_TypeInfo
                            );
  uVar11 = param_1[0x4a];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x4a] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x4a,uVar9);
  puVar1 = System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x4b],
                             *(undefined8 *)
                              System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo
                            );
  uVar11 = param_1[0x4b];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x4b] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x4b,uVar9);
  puVar1 = System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x4c],
                             *(undefined8 *)
                              System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_TypeInfo
                            );
  uVar11 = param_1[0x4c];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x4c] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x4c,uVar9);
  puVar1 = System_Collections_Generic_List<PoolManagerComponent_PoolDesc>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x4d],
                             *(undefined8 *)
                              System_Collections_Generic_List<PoolManagerComponent_PoolDesc>_TypeInfo
                            );
  uVar11 = param_1[0x4d];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x4d] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x4d,uVar9);
  puVar1 = System_Collections_Generic_List<RichTextTagParser_Tag>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x4e],
                             *(undefined8 *)
                              System_Collections_Generic_List<RichTextTagParser_Tag>_TypeInfo);
  uVar11 = param_1[0x4e];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x4e] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x4e,uVar9);
  puVar1 = System_Collections_Generic_List<MonoChunkParser_Chunk>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x4f],
                             *(undefined8 *)
                              System_Collections_Generic_List<MonoChunkParser_Chunk>_TypeInfo);
  uVar11 = param_1[0x4f];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x4f] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x4f,uVar9);
  puVar1 = System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x50],
                             *(undefined8 *)
                              System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo
                            );
  uVar11 = param_1[0x50];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x50] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x50,uVar9);
  puVar1 = System_Collections_Generic_List<LocalVariables_VariableScope>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x51],
                             *(undefined8 *)
                              System_Collections_Generic_List<LocalVariables_VariableScope>_TypeInfo
                            );
  uVar11 = param_1[0x51];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x51] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x51,uVar9);
  return;
}


