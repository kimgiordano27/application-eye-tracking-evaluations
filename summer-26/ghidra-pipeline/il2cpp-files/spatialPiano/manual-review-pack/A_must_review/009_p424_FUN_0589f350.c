/*
FUNCTION_NAME: FUN_0589f350
ENTRY_POINT: 0589f350
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 253
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_16;functionality_data_collection_or_telemetry_hits_10
*/


void FUN_0589f350(void)

{
  uint uVar1;
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
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint *puVar21;
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
  
  puVar12 = Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Start__;
  puVar11 = Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_OnEnable__;
  puVar10 = Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_OnDisable__;
  puVar9 = 
  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableUnset__;
  puVar8 = 
  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableUnselected__;
  puVar7 = Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableSet__;
  puVar6 = 
  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableSelected__;
  puVar4 = Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_HasCandidate__
  ;
  puVar3 = PTR_DAT_067d7688;
  puVar2 = PTR_DAT_067ca898;
  if ((DAT_06bc1278 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d7690);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<long,_Material>_Remove__);
    FUN_02f08768(PTR_DAT_067d7688);
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_HasInteractable__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_HasCandidate__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_Identifier__
                );
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_Interactable__
                );
    FUN_02f08768(PTR_DAT_067cee00);
    FUN_02f08768(Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_State__)
    ;
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_remove_WhenStateChanged__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>__ctor__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Awake__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_CanSelect__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
                );
    FUN_02f08768(PTR_DAT_067d7ce8);
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenStateChanged__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_HasInteractable__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Identifier__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Selector__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableSet__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Unselect__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_State__
                );
    FUN_02f08768(Method_OVRSpatialAnchor_InvertedCapture<bool,_OVRSpatialAnchor>_ContinueTaskWith__)
    ;
    FUN_02f08768(
                Method_OVRSpatialAnchor_InvertedCapture<bool,_OVRSpatialAnchor_UnboundAnchor>_ContinueTaskWith__
                );
    FUN_02f08768(
                Method_Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<GameObject,_GameObjectItem,_GameObject>__ctor__
                );
    FUN_02f08768(
                Method_Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_SceneItem,_Scene>__ctor__
                );
    FUN_02f08768(
                Method_Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<Scene,_GameObjectItem,_GameObject>__ctor__
                );
    FUN_02f08768(Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>__ctor__);
    FUN_02f08768(Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>_SetOwner__);
    FUN_02f08768(Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>_get_TypedOwner__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_DynamicArray_Iterator<ProbeReferenceVolume_Cell>_MoveNext__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_DynamicArray_Iterator<ProbeReferenceVolume_Cell>_get_Current__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
                );
    FUN_02f08768(Method_Newtonsoft_Json_Linq_JEnumerable<JToken>__ctor__);
    FUN_02f08768(Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__);
    FUN_02f08768(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<Collider,_IXRInteractable>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<CompositionLayer,_CompositionLayerManager_LayerInfo>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<HandJointId,_JointDeltaProvider_PoseData[]>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<int,_List<HandJointId>>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<int,_PointerEventData>_GetEnumerator__
                );
    FUN_02f08768(PTR_DAT_067daf50);
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableUnselected__
                );
    FUN_02f08768(TMPro_TMP_Text_SpecialCharacter_var);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<int,_float>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<int,_ProbeReferenceVolume_CellDesc>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<OVRGrabbable,_int>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<ParameterExpression,_LocalVariable>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<Rigidbody,_bool>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<string,_bool>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<string,_string>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<string,_ServicePointScheduler_ConnectionGroup>_CopyTo__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<AxisAlignedBox_BoxSurface,_float>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_KeyCollection<SystemCapabilityUtils_SystemCapability,_SystemCapabilityUtils_SystemCapabilityInfo>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_Deconstruct__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<Collider,_IXRInteractable>_get_Key__
                );
    FUN_02f08768(Method_UnityEngine_InputSystem_InputControl<PoseState>_FinishSetup__);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<Collider,_IXRInteractable>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<IInteractableView,_InteractionBroadcaster_Handler>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<InstanceHandle,_Inspector>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_List<Volume>>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_List<Volume>>_get_Value__);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<int,_ValueTuple<RTHandle,_int>>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_RTHandle[]>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_ActionItem>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_CompositionLayer>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_CompositionLayer>_get_Value__);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<int,_DynamicResolutionHandler>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<int,_DynamicResolutionHandler>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<int,_EmulatedCompositionLayer>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_int>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_int>_Deconstruct__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_int>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_int>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_object>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_object>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_Panel>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_PointerEventData>_ToString__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_PointerEventData>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_PointerEventData>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_float>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_TerrainMap>_get_Value__);
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableSet__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_TextureHandle>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_Vector2Int>_get_Key__);
    FUN_02f08768(Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_OnDisable__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<int,_Vector2Int>_get_Value__);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<int,_PanelWithManipulatorsBorderAffordanceController_FadePoint>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<int,_PanelWithManipulatorsBorderAffordanceController_FadePoint>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<int,_ReflectionProbeManager_CachedProbe>_Deconstruct__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<int,_TMP_ResourceManager_FontAssetRef>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<int,_TMP_ResourceManager_FontAssetRef>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<IntPtr,_ValueTuple<uint,_RenderTexture>>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<InternedString,_Func<InputControlLayout>>_get_Key__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<InternedString,_object>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<InternedString,_string>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Value__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_add_WhenStateChanged__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_GameObject>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_GameObject>_get_Value__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<MemberInfo,_Member>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_Transform>_Deconstruct__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<object,_object>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<object,_object>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<object,_object>_get_Value__);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<SerializableGuid,_Awaitable<Result<XRAnchor>>>_Deconstruct__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<SerializableGuid,_Awaitable<XRResultStatus>>_Deconstruct__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_List<string>>_Deconstruct__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_AndroidAssetPackStatus>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_Index>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034F_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JToken>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JToken>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JToken>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JsonSchema>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JsonSchema>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaModel>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaModel>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaNode>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaNode>_get_Value__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaType>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaType>_get_Value__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Key__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_object>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_object>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_object>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<string,_StringBuilder>_get_Value__);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_RenderGraph_DebugData>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<string,_ServicePointScheduler_ConnectionGroup>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<TerrainTileCoord,_Terrain>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<TrackableId,_Awaitable<Result<SerializableGuid>>>_Deconstruct__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<TrackableId,_ARAnchor>_Deconstruct__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<TrackableId,_AREnvironmentProbe>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<TrackableId,_ARPlane>_Deconstruct__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<TrackableId,_ARPointCloud>_Deconstruct__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<TrackableId,_Transform>_get_Value__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Value__
                );
    FUN_02f08768(PTR_DAT_067ca898);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<Type,_Dictionary<InstanceHandle,_Inspector>>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<Type,_Transform>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<Type,_Transform>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>__ctor__);
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_remove_WhenPostprocessed__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Value__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<Type,_FeedbackConfig_InteractorKind>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<Type,_FeedbackConfig_InteractorKind>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<uint,_Character>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<uint,_Character>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<uint,_TMP_Character>_get_Key__);
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_DoSelectUpdate__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<uint,_TMP_Character>_get_Value__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<ulong,_Vector3>_get_Value__);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<ulong,_TMP_DynamicFontAssetUtilities_FontReference>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<VisualElement,_float>_get_Key__);
    FUN_02f08768(Method_System_Collections_Generic_KeyValuePair<VisualElement,_float>_get_Value__);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<VisualElement,_DataBindingManager_BindingDataCollection>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<XmlQualifiedName,_SchemaElementDecl>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<XmlQualifiedName,_SchemaElementDecl>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<OVRSkeleton_BoneId,_HumanBodyBones>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<OVRSkeleton_BoneId,_HumanBodyBones>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_get_Value__
                );
    FUN_02f08768(UnityEngine_Rendering_Vrs_<>c_TypeInfo);
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<TypeConverterRegistry_ConverterKey,_Delegate>_get_Key__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_KeyValuePair<TypeConverterRegistry_ConverterKey,_Delegate>_get_Value__
                );
    FUN_02f08768(Method_System_Runtime_Serialization_KeyValue<object,_object>__ctor__);
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableUnset__
                );
    FUN_02f08768(Method_Unity_Collections_LowLevel_Unsafe_KeyValue<int,_int>_get_Key__);
    FUN_02f08768(Method_Unity_Collections_LowLevel_Unsafe_KeyValue<int,_int>_get_Value__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_KeyValue<int,_CPUPerCameraInstanceData_PerCameraInstanceDataArrays>_get_Value__
                );
    FUN_02f08768(Method_Unity_Collections_LowLevel_Unsafe_KeyValue<uint,_BatchID>_get_Key__);
    FUN_02f08768(Method_Unity_Collections_LowLevel_Unsafe_KeyValue<uint,_BatchID>_get_Value__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__);
    FUN_02f08768(Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Start__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_GetPooled__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_GetPooled__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_actionKey__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_altKey__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_character__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_commandKey__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_ctrlKey__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_functionKey__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_keyCode__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_modifiers__);
    FUN_02f08768(Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_Data__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_shiftKey__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>_GetPooled__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>_GetPooled__);
    FUN_02f08768(Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>_get_keyCode__);
    FUN_02f08768(Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonProperty>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonProperty>_Contains__
                );
    FUN_02f08768(
                Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonProperty>_get_Dictionary__
                );
    FUN_02f08768(PTR_DAT_067d7d00);
    FUN_02f08768(
                Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonProperty>_get_Item__
                );
    FUN_02f08768(
                Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonSchemaNode>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonSchemaNode>_Contains__
                );
    FUN_02f08768(
                Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonSchemaNode>_get_Item__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>__ctor__);
    FUN_02f08768(PTR_DAT_067dd728);
    FUN_02f08768(Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_OnEnable__);
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_Dispose__);
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_Insert__);
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_RemoveAt__);
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_get_Count__);
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_get_IsCreated__);
    FUN_02f08768(Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_get_Item__);
    FUN_02f08768(Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__)
    ;
    FUN_02f08768(Method_UnityEngine_LazyLoadReference<Object>_get_asset__);
    FUN_02f08768(Method_UnityEngine_LazyLoadReference<Object>_get_isSet__);
    FUN_02f08768(Method_UnityEngine_LazyLoadReference<Object>_op_Implicit__);
    FUN_02f08768(Method_System_Lazy<Dictionary<int,_bool>>__ctor__);
    FUN_02f08768(Method_System_Lazy<Dictionary<int,_bool>>_get_Value__);
    FUN_02f08768(Method_System_Lazy<Type[]>__ctor__);
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                );
    FUN_02f08768(Method_System_Lazy<Type[]>_get_Value__);
    FUN_02f08768(Method_System_Lazy<DebugManager>__ctor__);
    FUN_02f08768(Method_System_Lazy<DebugManager>_get_Value__);
    FUN_02f08768(Method_System_Lazy<RenderPipelineGlobalSettings>__ctor__);
    FUN_02f08768(Method_System_Lazy<RenderPipelineGlobalSettings>_get_Value__);
    FUN_02f08768(Method_System_Lazy<VolumeManager>__ctor__);
    FUN_02f08768(Method_System_Lazy<VolumeManager>_get_Value__);
    FUN_02f08768(
                Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_get_Next__
                );
    FUN_02f08768(PTR_DAT_067d6b98);
    FUN_02f08768(
                Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Next__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableSelected__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Value__
                );
    FUN_02f08768(Method_System_Collections_Generic_LinkedListNode<Action>_get_Next__);
    DAT_06bc1278 = 1;
  }
  puVar14 = Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_Data__;
  puVar13 = 
  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_add_WhenStateChanged__;
  puVar5 = Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_DoSelectUpdate__;
  **(undefined8 **)(*(long *)puVar4 + 0xb8) =
       *(undefined8 *)
        Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_DoSelectUpdate__;
  uVar18 = *(undefined8 *)puVar6;
  uVar20 = *(undefined8 *)puVar7;
  uVar15 = *(undefined8 *)puVar3;
  lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar17 + 8) = *(undefined8 *)puVar2;
  *(undefined8 *)(lVar17 + 0x10) = uVar18;
  uVar18 = *(undefined8 *)puVar8;
  uVar19 = *(undefined8 *)puVar9;
  *(undefined8 *)(lVar17 + 0x18) = uVar20;
  *(undefined8 *)(lVar17 + 0x20) = uVar18;
  uVar20 = *(undefined8 *)puVar10;
  uVar18 = *(undefined8 *)puVar11;
  *(undefined8 *)(lVar17 + 0x28) = uVar19;
  *(undefined8 *)(lVar17 + 0x30) = uVar20;
  uVar19 = *(undefined8 *)puVar12;
  uVar20 = *(undefined8 *)puVar13;
  *(undefined8 *)(lVar17 + 0x38) = uVar18;
  *(undefined8 *)(lVar17 + 0x40) = uVar19;
  uVar18 = *(undefined8 *)puVar14;
  *(undefined8 *)(lVar17 + 0x48) = uVar20;
  *(undefined8 *)(lVar17 + 0x50) = uVar18;
  lVar17 = thunk_FUN_02f45270(uVar15);
  FUN_0492c438(lVar17,0x26,
               *(undefined8 *)Method_System_Collections_Generic_Dictionary<long,_Material>_Remove__)
  ;
  puVar11 = Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>_GetPooled__;
  puVar10 = 
  Method_System_Collections_Generic_KeyValuePair<XmlQualifiedName,_SchemaElementDecl>_get_Value__;
  puVar9 = Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Key__;
  puVar8 = 
  Method_System_Collections_Generic_KeyValuePair<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_get_Key__
  ;
  puVar7 = Method_System_Collections_Generic_KeyValuePair<InternedString,_object>__ctor__;
  puVar6 = 
  Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Value__
  ;
  puVar4 = Method_System_Collections_Generic_Dictionary_KeyCollection<string,_bool>_GetEnumerator__;
  puVar3 = PTR_DAT_067d7690;
  puVar2 = PTR_DAT_067c9070;
  if (lVar17 != 0) {
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<string,_JToken>_get_Value__,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector__
                 ,*(undefined8 *)PTR_DAT_067d7690);
    FUN_0492cd38(lVar17,*(undefined8 *)puVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)puVar4,*(undefined8 *)puVar6,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)puVar7,*(undefined8 *)puVar9,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_TerrainMap>_get_Value__
                 ,*(undefined8 *)puVar8,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)UnityEngine_Rendering_Vrs_<>c_TypeInfo,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<TrackableId,_AREnvironmentProbe>_get_Value__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<TrackableId,_ARAnchor>_Deconstruct__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_Vector2Int>_get_Value__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<int,_Vector2Int>_get_Key__,
                 *(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<InternedString,_Func<InputControlLayout>>_get_Key__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Value__,
                 *(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Deconstruct__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                 ,*(undefined8 *)
                   Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Selector__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034F_PostfixBurstDelegate_TypeInfo
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)puVar5,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__,
                 *(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonProperty>_get_Dictionary__
                 ,*(undefined8 *)Method_System_Lazy<VolumeManager>__ctor__,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>__ctor__,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_CanSelect__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
                 ,*(undefined8 *)
                   Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)PTR_DAT_067d7d00,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_KeyValue<uint,_BatchID>_get_Value__,
                 *(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_remove_WhenPostprocessed__
                 ,*(undefined8 *)TMPro_TMP_Text_SpecialCharacter_var,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                 ,*(undefined8 *)PTR_DAT_067cee00,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_get_IsCreated__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Key__,
                 *(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)PTR_DAT_067dd728,
                 *(undefined8 *)Method_System_Lazy<Dictionary<int,_bool>>_get_Value__,
                 *(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>__ctor__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<Collider,_IXRInteractable>_get_Key__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)Method_UnityEngine_LazyLoadReference<Object>_op_Implicit__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<string,_RenderGraph_DebugData>_get_Key__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<string,_Index>_get_Value__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<TrackableId,_ARPlane>_Deconstruct__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<string,_JToken>__ctor__,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_KeyValue<int,_CPUPerCameraInstanceData_PerCameraInstanceDataArrays>_get_Value__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>_SetOwner__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Key__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Value__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<TypeConverterRegistry_ConverterKey,_Delegate>_get_Key__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<ulong,_TMP_DynamicFontAssetUtilities_FontReference>_get_Value__
                 ,*(undefined8 *)
                   Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_State__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)PTR_DAT_067d6b98,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Key__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaNode>_get_Key__
                 ,*(undefined8 *)
                   Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_altKey__,
                 *(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_commandKey__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<TrackableId,_ARPointCloud>_Deconstruct__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Value__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_GameObject>_get_Key__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<int,_DynamicResolutionHandler>_get_Key__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)PTR_DAT_067d7ce8,
                 *(undefined8 *)
                  Method_Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<GameObject,_GameObjectItem,_GameObject>__ctor__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_HasInteractable__
                 ,*(undefined8 *)
                   Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonProperty>__ctor__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<int,_PointerEventData>_get_Key__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_KeyValuePair<uint,_Character>_get_Value__,
                 *(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)
                         Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_GetPooled__,
                 *(undefined8 *)
                  Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonProperty>_get_Item__
                 ,*(undefined8 *)puVar3);
    FUN_0492cd38(lVar17,*(undefined8 *)PTR_DAT_067daf50,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<int,_List<Volume>>_get_Key__,
                 *(undefined8 *)puVar3);
    puVar3 = 
    Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_HasCandidate__;
    uVar15 = *(undefined8 *)
              Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_Identifier__
    ;
    *(long *)(*(long *)(*(long *)
                         Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_HasCandidate__
                       + 0xb8) + 0x58) = lVar17;
    lVar17 = FUN_02f0880c(uVar15,0x70);
    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
    if (lVar16 != 0) {
      if ((*(int *)(lVar16 + 0x18) != 0) &&
         (*(undefined8 *)(lVar16 + 0x20) =
               *(undefined8 *)
                Method_OVRSpatialAnchor_InvertedCapture<bool,_OVRSpatialAnchor>_ContinueTaskWith__,
         *(int *)(lVar16 + 0x18) != 1)) {
        *(undefined8 *)(lVar16 + 0x28) =
             *(undefined8 *)
              Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Value__;
        if (lVar17 == 0) goto LAB_058a4398;
        puVar21 = (uint *)(lVar17 + 0x18);
        if (*puVar21 != 0) {
          *(long *)(lVar17 + 0x20) = lVar16;
          lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
          if (lVar16 == 0) goto LAB_058a4398;
          if ((*(int *)(lVar16 + 0x18) != 0) &&
             (*(undefined8 *)(lVar16 + 0x20) =
                   *(undefined8 *)
                    Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonSchemaNode>__ctor__
             , *(int *)(lVar16 + 0x18) != 1)) {
            *(undefined8 *)(lVar16 + 0x28) =
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Value__
            ;
            if ((*puVar21 & 0xfffffffe) != 0) {
              *(long *)(lVar17 + 0x28) = lVar16;
              lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
              if (lVar16 == 0) goto LAB_058a4398;
              if ((*(int *)(lVar16 + 0x18) != 0) &&
                 (*(undefined8 *)(lVar16 + 0x20) =
                       *(undefined8 *)
                        Method_System_Collections_Generic_KeyValuePair<int,_TMP_ResourceManager_FontAssetRef>_get_Key__
                 , *(int *)(lVar16 + 0x18) != 1)) {
                uVar1 = *puVar21;
                *(undefined8 *)(lVar16 + 0x28) =
                     *(undefined8 *)
                      Method_System_Collections_Generic_KeyValuePair<SerializableGuid,_Awaitable<Result<XRAnchor>>>_Deconstruct__
                ;
                if (2 < uVar1) {
                  *(long *)(lVar17 + 0x30) = lVar16;
                  lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                  if (lVar16 == 0) goto LAB_058a4398;
                  if ((*(int *)(lVar16 + 0x18) != 0) &&
                     (*(undefined8 *)(lVar16 + 0x20) =
                           *(undefined8 *)
                            Method_System_Collections_Generic_KeyValuePair<string,_AndroidAssetPackStatus>_get_Value__
                     , *(int *)(lVar16 + 0x18) != 1)) {
                    *(undefined8 *)(lVar16 + 0x28) =
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>__ctor__;
                    if ((*puVar21 & 0xfffffffc) != 0) {
                      *(long *)(lVar17 + 0x38) = lVar16;
                      lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                      if (lVar16 == 0) goto LAB_058a4398;
                      if ((*(int *)(lVar16 + 0x18) != 0) &&
                         (*(undefined8 *)(lVar16 + 0x20) =
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_get_Count__
                         , *(int *)(lVar16 + 0x18) != 1)) {
                        uVar1 = *puVar21;
                        *(undefined8 *)(lVar16 + 0x28) =
                             *(undefined8 *)
                              Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__
                        ;
                        if (4 < uVar1) {
                          *(long *)(lVar17 + 0x40) = lVar16;
                          lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                          if (lVar16 == 0) goto LAB_058a4398;
                          if ((*(int *)(lVar16 + 0x18) != 0) &&
                             (*(undefined8 *)(lVar16 + 0x20) =
                                   *(undefined8 *)
                                    Method_UnityEngine_LazyLoadReference<Object>_get_isSet__,
                             *(int *)(lVar16 + 0x18) != 1)) {
                            uVar1 = *puVar21;
                            *(undefined8 *)(lVar16 + 0x28) =
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_KeyValuePair<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_get_Value__
                            ;
                            if (5 < uVar1) {
                              *(long *)(lVar17 + 0x48) = lVar16;
                              lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                              if (lVar16 == 0) goto LAB_058a4398;
                              if ((*(int *)(lVar16 + 0x18) != 0) &&
                                 (*(undefined8 *)(lVar16 + 0x20) =
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_ctrlKey__
                                 , *(int *)(lVar16 + 0x18) != 1)) {
                                uVar1 = *puVar21;
                                *(undefined8 *)(lVar16 + 0x28) =
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_KeyValuePair<OVRAnchor,_Transform>_Deconstruct__
                                ;
                                if (6 < uVar1) {
                                  *(long *)(lVar17 + 0x50) = lVar16;
                                  lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                  if (lVar16 == 0) goto LAB_058a4398;
                                  if ((*(int *)(lVar16 + 0x18) != 0) &&
                                     (*(undefined8 *)(lVar16 + 0x20) =
                                           *(undefined8 *)
                                            Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_State__
                                     , *(int *)(lVar16 + 0x18) != 1)) {
                                    *(undefined8 *)(lVar16 + 0x28) =
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary_KeyCollection<OVRSkeleton_BoneId,_HumanBodyBones>_GetEnumerator__
                                    ;
                                    if ((*puVar21 & 0xfffffff8) != 0) {
                                      *(long *)(lVar17 + 0x58) = lVar16;
                                      lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                      if (lVar16 == 0) goto LAB_058a4398;
                                      if ((*(int *)(lVar16 + 0x18) != 0) &&
                                         (*(undefined8 *)(lVar16 + 0x20) =
                                               *(undefined8 *)
                                                Method_UnityEngine_Rendering_DynamicArray_Iterator<ProbeReferenceVolume_Cell>_get_Current__
                                         , *(int *)(lVar16 + 0x18) != 1)) {
                                        uVar1 = *puVar21;
                                        *(undefined8 *)(lVar16 + 0x28) =
                                             *(undefined8 *)
                                              Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_ShouldUnselect__
                                        ;
                                        if (8 < uVar1) {
                                          *(long *)(lVar17 + 0x60) = lVar16;
                                          lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                          if (lVar16 == 0) goto LAB_058a4398;
                                          if ((*(int *)(lVar16 + 0x18) != 0) &&
                                             (*(undefined8 *)(lVar16 + 0x20) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchema>_get_Value__
                                             , *(int *)(lVar16 + 0x18) != 1)) {
                                            uVar1 = *puVar21;
                                            *(undefined8 *)(lVar16 + 0x28) =
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_KeyValuePair<InternedString,_string>_get_Key__
                                            ;
                                            if (9 < uVar1) {
                                              *(long *)(lVar17 + 0x68) = lVar16;
                                              lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                              if (lVar16 == 0) goto LAB_058a4398;
                                              if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                 (*(undefined8 *)(lVar16 + 0x20) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<HandJointId,_JointDeltaProvider_PoseData[]>_GetEnumerator__
                                                 , *(int *)(lVar16 + 0x18) != 1)) {
                                                uVar1 = *puVar21;
                                                *(undefined8 *)(lVar16 + 0x28) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<object,_object>__ctor__
                                                ;
                                                if (10 < uVar1) {
                                                  *(long *)(lVar17 + 0x70) = lVar16;
                                                  lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                  if (lVar16 == 0) goto LAB_058a4398;
                                                  if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                     (*(undefined8 *)(lVar16 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<string,_string>_GetEnumerator__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_modifiers__
                                                  ;
                                                  if (0xb < uVar1) {
                                                    *(long *)(lVar17 + 0x78) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JEnumerable<JToken>__ctor__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_EmulatedCompositionLayer>_get_Value__
                                                  ;
                                                  if (0xc < uVar1) {
                                                    *(long *)(lVar17 + 0x80) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_get_Key__
                                                  ;
                                                  if (0xd < uVar1) {
                                                    *(long *)(lVar17 + 0x88) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_get_Item__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_CompositionLayer>_get_Value__
                                                  ;
                                                  if (0xe < uVar1) {
                                                    *(long *)(lVar17 + 0x90) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>__ctor__
                                                  ;
                                                  if ((*puVar21 & 0xfffffff0) != 0) {
                                                    *(long *)(lVar17 + 0x98) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_remove_WhenStateChanged__
                                                  ;
                                                  if (0x10 < uVar1) {
                                                    *(long *)(lVar17 + 0xa0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_Panel>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Key__
                                                  ;
                                                  if (0x11 < uVar1) {
                                                    *(long *)(lVar17 + 0xa8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_int>_get_Key__
                                                  ;
                                                  if (0x12 < uVar1) {
                                                    *(long *)(lVar17 + 0xb0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_int>_Deconstruct__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Key__
                                                  ;
                                                  if (0x13 < uVar1) {
                                                    *(long *)(lVar17 + 0xb8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_functionKey__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Column,_float>_get_Value__
                                                  ;
                                                  if (0x14 < uVar1) {
                                                    *(long *)(lVar17 + 0xc0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_object>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_Interactable__
                                                  ;
                                                  if (0x15 < uVar1) {
                                                    *(long *)(lVar17 + 200) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_List<Volume>>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Unselect__
                                                  ;
                                                  if (0x16 < uVar1) {
                                                    *(long *)(lVar17 + 0xd0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>_get_keyCode__
                                                  , puVar4 = 
                                                  Method_System_Collections_Generic_KeyValuePair<uint,_TMP_Character>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<uint,_TMP_Character>_get_Value__
                                                  ;
                                                  if (0x17 < uVar1) {
                                                    *(long *)(lVar17 + 0xd8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenStateChanged__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__
                                                  ;
                                                  if (0x18 < uVar1) {
                                                    *(long *)(lVar17 + 0xe0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)puVar4;
                                                    if (0x19 < uVar1) {
                                                      *(long *)(lVar17 + 0xe8) = lVar16;
                                                      lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2)
                                                      ;
                                                      if (lVar16 == 0) goto LAB_058a4398;
                                                      if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                         (*(undefined8 *)(lVar16 + 0x20) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<OVRSkeleton_BoneId,_HumanBodyBones>_get_Key__
                                                  ;
                                                  if (0x1a < uVar1) {
                                                    *(long *)(lVar17 + 0xf0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Value__
                                                  ;
                                                  if (0x1b < uVar1) {
                                                    *(long *)(lVar17 + 0xf8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_SceneItem,_Scene>__ctor__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_DynamicArray_Iterator<ProbeReferenceVolume_Cell>_MoveNext__
                                                  ;
                                                  if (0x1c < uVar1) {
                                                    *(long *)(lVar17 + 0x100) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<int,_PointerEventData>_GetEnumerator__
                                                  ;
                                                  if (0x1d < uVar1) {
                                                    *(long *)(lVar17 + 0x108) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<TerrainTileCoord,_Terrain>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_Insert__
                                                  ;
                                                  if (0x1e < uVar1) {
                                                    *(long *)(lVar17 + 0x110) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<InstanceHandle,_Inspector>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                          Method_System_Lazy<Type[]>__ctor__;
                                                    if ((*puVar21 & 0xffffffe0) != 0) {
                                                      *(long *)(lVar17 + 0x118) = lVar16;
                                                      lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2)
                                                      ;
                                                      if (lVar16 == 0) goto LAB_058a4398;
                                                      if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                         (*(undefined8 *)(lVar16 + 0x20) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<int,_float>_GetEnumerator__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_PointerEventData>_ToString__
                                                  ;
                                                  if (0x20 < uVar1) {
                                                    *(long *)(lVar17 + 0x120) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_KeyValue<int,_int>_get_Value__
                                                  ;
                                                  if (0x21 < uVar1) {
                                                    *(long *)(lVar17 + 0x128) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>_get_Key__
                                                  ;
                                                  if (0x22 < uVar1) {
                                                    *(long *)(lVar17 + 0x130) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_int>__ctor__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<object,_object>_get_Value__
                                                  ;
                                                  if (0x23 < uVar1) {
                                                    *(long *)(lVar17 + 0x138) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_Vector2>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>_GetPooled__
                                                  ;
                                                  if (0x24 < uVar1) {
                                                    *(long *)(lVar17 + 0x140) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_object>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Collider,_IXRInteractable>_get_Value__
                                                  ;
                                                  if (0x25 < uVar1) {
                                                    *(long *)(lVar17 + 0x148) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<Scene,_GameObjectItem,_GameObject>__ctor__
                                                  , puVar4 = 
                                                  Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_get_Key__
                                                  ;
                                                  if (0x26 < uVar1) {
                                                    *(long *)(lVar17 + 0x150) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<VisualElement,_float>_get_Value__
                                                  ;
                                                  if (0x27 < uVar1) {
                                                    *(long *)(lVar17 + 0x158) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_LinkedListNode<Action>_get_Next__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)puVar4;
                                                    if (0x28 < uVar1) {
                                                      *(long *)(lVar17 + 0x160) = lVar16;
                                                      lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2)
                                                      ;
                                                      if (lVar16 == 0) goto LAB_058a4398;
                                                      if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                         (*(undefined8 *)(lVar16 + 0x20) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_KeyValuePair<int,_PanelWithManipulatorsBorderAffordanceController_FadePoint>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_GetPooled__
                                                  ;
                                                  if (0x29 < uVar1) {
                                                    *(long *)(lVar17 + 0x168) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_OVRSpatialAnchor_InvertedCapture<bool,_OVRSpatialAnchor_UnboundAnchor>_ContinueTaskWith__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<TrackableId,_Transform>_get_Value__
                                                  ;
                                                  if (0x2a < uVar1) {
                                                    *(long *)(lVar17 + 0x170) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<MemberInfo,_Member>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Interactable__
                                                  ;
                                                  if (0x2b < uVar1) {
                                                    *(long *)(lVar17 + 0x178) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_Deconstruct__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__
                                                  ;
                                                  if (0x2c < uVar1) {
                                                    *(long *)(lVar17 + 0x180) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_get_Value__
                                                  ;
                                                  if (0x2d < uVar1) {
                                                    *(long *)(lVar17 + 0x188) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_StringBuilder>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<OVRGrabbable,_int>_GetEnumerator__
                                                  ;
                                                  if (0x2e < uVar1) {
                                                    *(long *)(lVar17 + 400) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_LazyLoadReference<Object>_get_asset__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Value__
                                                  ;
                                                  if (0x2f < uVar1) {
                                                    *(long *)(lVar17 + 0x198) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_Dictionary<InstanceHandle,_Inspector>>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<ParameterExpression,_LocalVariable>_GetEnumerator__
                                                  ;
                                                  if (0x30 < uVar1) {
                                                    *(long *)(lVar17 + 0x1a0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaType>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_InputSystem_InputControl<PoseState>_FinishSetup__
                                                  ;
                                                  if (0x31 < uVar1) {
                                                    *(long *)(lVar17 + 0x1a8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonSchemaNode>_get_Item__
                                                  ;
                                                  if (0x32 < uVar1) {
                                                    *(long *)(lVar17 + 0x1b0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>__ctor__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_object>__ctor__
                                                  ;
                                                  if (0x33 < uVar1) {
                                                    *(long *)(lVar17 + 0x1b8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_ActionItem>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_DynamicResolutionHandler>_get_Value__
                                                  ;
                                                  if (0x34 < uVar1) {
                                                    *(long *)(lVar17 + 0x1c0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_Dispose__
                                                  ;
                                                  if (0x35 < uVar1) {
                                                    *(long *)(lVar17 + 0x1c8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Lazy<DebugManager>_get_Value__,
                                                  *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<CompositionLayer,_CompositionLayerManager_LayerInfo>_GetEnumerator__
                                                  ;
                                                  if (0x36 < uVar1) {
                                                    *(long *)(lVar17 + 0x1d0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>__ctor__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_RemoveAt__
                                                  ;
                                                  if (0x37 < uVar1) {
                                                    *(long *)(lVar17 + 0x1d8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<uint,_Character>_get_Key__
                                                  ;
                                                  if (0x38 < uVar1) {
                                                    *(long *)(lVar17 + 0x1e0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonProperty>_Contains__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                                                  ;
                                                  if (0x39 < uVar1) {
                                                    *(long *)(lVar17 + 0x1e8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<Collider,_IXRInteractable>_GetEnumerator__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_float>_get_Key__
                                                  ;
                                                  if (0x3a < uVar1) {
                                                    *(long *)(lVar17 + 0x1f0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                                                  ;
                                                  if (0x3b < uVar1) {
                                                    *(long *)(lVar17 + 0x1f8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_get_Key__
                                                  ;
                                                  if (0x3c < uVar1) {
                                                    *(long *)(lVar17 + 0x200) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_PanelWithManipulatorsBorderAffordanceController_FadePoint>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_get_Value__
                                                  ;
                                                  if (0x3d < uVar1) {
                                                    *(long *)(lVar17 + 0x208) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>_get_TypedOwner__
                                                  ;
                                                  if (0x3e < uVar1) {
                                                    *(long *)(lVar17 + 0x210) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Identifier__
                                                  ;
                                                  if ((*puVar21 & 0xffffffc0) != 0) {
                                                    *(long *)(lVar17 + 0x218) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<Rigidbody,_bool>_GetEnumerator__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_get_Next__
                                                  ;
                                                  if (0x40 < uVar1) {
                                                    *(long *)(lVar17 + 0x220) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__
                                                  ;
                                                  if (0x41 < uVar1) {
                                                    *(long *)(lVar17 + 0x228) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<XmlQualifiedName,_SchemaElementDecl>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<SerializableGuid,_Awaitable<XRResultStatus>>_Deconstruct__
                                                  ;
                                                  if (0x42 < uVar1) {
                                                    *(long *)(lVar17 + 0x230) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<VisualElement,_float>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Key__
                                                  ;
                                                  if (0x43 < uVar1) {
                                                    *(long *)(lVar17 + 0x238) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_RTHandle[]>_get_Value__
                                                  ;
                                                  if (0x44 < uVar1) {
                                                    *(long *)(lVar17 + 0x240) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<AxisAlignedBox_BoxSurface,_float>_GetEnumerator__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__
                                                  ;
                                                  if (0x45 < uVar1) {
                                                    *(long *)(lVar17 + 0x248) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_keyCode__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Value__
                                                  ;
                                                  if (0x46 < uVar1) {
                                                    *(long *)(lVar17 + 0x250) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaType>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_TMP_ResourceManager_FontAssetRef>_get_Value__
                                                  ;
                                                  if (0x47 < uVar1) {
                                                    *(long *)(lVar17 + 600) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_FeedbackConfig_InteractorKind>_get_Value__
                                                  ;
                                                  if (0x48 < uVar1) {
                                                    *(long *)(lVar17 + 0x260) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<TrackableId,_Awaitable<Result<SerializableGuid>>>_Deconstruct__
                                                  ;
                                                  if (0x49 < uVar1) {
                                                    *(long *)(lVar17 + 0x268) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_TextureHandle>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_object>_get_Key__
                                                  ;
                                                  if (0x4a < uVar1) {
                                                    *(long *)(lVar17 + 0x270) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_KeyValue<uint,_BatchID>_get_Key__
                                                  ;
                                                  if (0x4b < uVar1) {
                                                    *(long *)(lVar17 + 0x278) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_shiftKey__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Lazy<VolumeManager>_get_Value__;
                                                  if (0x4c < uVar1) {
                                                    *(long *)(lVar17 + 0x280) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<object,_object>_get_Key__
                                                  ;
                                                  if (0x4d < uVar1) {
                                                    *(long *)(lVar17 + 0x288) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_Transform>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<VisualElement,_DataBindingManager_BindingDataCollection>_get_Value__
                                                  ;
                                                  if (0x4e < uVar1) {
                                                    *(long *)(lVar17 + 0x290) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_actionKey__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableSet__
                                                  ;
                                                  if (0x4f < uVar1) {
                                                    *(long *)(lVar17 + 0x298) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_List<string>>_Deconstruct__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<int,_List<HandJointId>>_GetEnumerator__
                                                  ;
                                                  if (0x50 < uVar1) {
                                                    *(long *)(lVar17 + 0x2a0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<IntPtr,_ValueTuple<uint,_RenderTexture>>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<SystemCapabilityUtils_SystemCapability,_SystemCapabilityUtils_SystemCapabilityInfo>_GetEnumerator__
                                                  ;
                                                  if (0x51 < uVar1) {
                                                    *(long *)(lVar17 + 0x2a8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_FeedbackConfig_InteractorKind>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Next__
                                                  ;
                                                  if (0x52 < uVar1) {
                                                    *(long *)(lVar17 + 0x2b0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_Serialization_KeyValue<object,_object>__ctor__
                                                  , puVar4 = 
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
                                                  ;
                                                  if (0x53 < uVar1) {
                                                    *(long *)(lVar17 + 0x2b8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                              Method_System_Lazy<Type[]>_get_Value__
                                                       , *(int *)(lVar16 + 0x18) != 1)) {
                                                      uVar1 = *puVar21;
                                                      *(undefined8 *)(lVar16 + 0x28) =
                                                           *(undefined8 *)puVar4;
                                                      if (0x54 < uVar1) {
                                                        *(long *)(lVar17 + 0x2c0) = lVar16;
                                                        lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,
                                                                              2);
                                                        if (lVar16 == 0) goto LAB_058a4398;
                                                        if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                           (*(undefined8 *)(lVar16 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_ValueTuple<RTHandle,_int>>_get_Value__
                                                  ;
                                                  if (0x55 < uVar1) {
                                                    *(long *)(lVar17 + 0x2c8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JToken>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_CompositionLayer>_get_Key__
                                                  ;
                                                  if (0x56 < uVar1) {
                                                    *(long *)(lVar17 + 0x2d0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>__ctor__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__
                                                  ;
                                                  if (0x57 < uVar1) {
                                                    *(long *)(lVar17 + 0x2d8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<IInteractableView,_InteractionBroadcaster_Handler>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__
                                                  ;
                                                  if (0x58 < uVar1) {
                                                    *(long *)(lVar17 + 0x2e0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_State__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaNode>_get_Value__
                                                  ;
                                                  if (0x59 < uVar1) {
                                                    *(long *)(lVar17 + 0x2e8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_character__
                                                  ;
                                                  if (0x5a < uVar1) {
                                                    *(long *)(lVar17 + 0x2f0) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<OVRSkeleton_BoneId,_HumanBodyBones>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Key__
                                                  ;
                                                  if (0x5b < uVar1) {
                                                    *(long *)(lVar17 + 0x2f8) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaModel>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Lazy<Dictionary<int,_bool>>__ctor__;
                                                  if (0x5c < uVar1) {
                                                    *(long *)(lVar17 + 0x300) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Key__
                                                  ;
                                                  if (0x5d < uVar1) {
                                                    *(long *)(lVar17 + 0x308) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<string,_ServicePointScheduler_ConnectionGroup>_CopyTo__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Key__
                                                  ;
                                                  if (0x5e < uVar1) {
                                                    *(long *)(lVar17 + 0x310) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Lazy<RenderPipelineGlobalSettings>_get_Value__
                                                  ;
                                                  if (0x5f < uVar1) {
                                                    *(long *)(lVar17 + 0x318) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_GameObject>_get_Value__
                                                  ;
                                                  if (0x60 < uVar1) {
                                                    *(long *)(lVar17 + 800) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_GetEnumerator__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
                                                  ;
                                                  if (0x61 < uVar1) {
                                                    *(long *)(lVar17 + 0x328) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
                                                  ;
                                                  if (0x62 < uVar1) {
                                                    *(long *)(lVar17 + 0x330) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<TypeConverterRegistry_ConverterKey,_Delegate>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_object>_get_Value__
                                                  ;
                                                  if (99 < uVar1) {
                                                    *(long *)(lVar17 + 0x338) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchema>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<uint,_TMP_Character>_get_Key__
                                                  ;
                                                  if (100 < uVar1) {
                                                    *(long *)(lVar17 + 0x340) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<int,_ProbeReferenceVolume_CellDesc>_GetEnumerator__
                                                  ;
                                                  if (0x65 < uVar1) {
                                                    *(long *)(lVar17 + 0x348) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_Transform>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__
                                                  ;
                                                  if (0x66 < uVar1) {
                                                    *(long *)(lVar17 + 0x350) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_ServicePointScheduler_ConnectionGroup>_get_Value__
                                                  ;
                                                  if (0x67 < uVar1) {
                                                    *(long *)(lVar17 + 0x358) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_int>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Awake__
                                                  ;
                                                  if (0x68 < uVar1) {
                                                    *(long *)(lVar17 + 0x360) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                                                  ;
                                                  if (0x69 < uVar1) {
                                                    *(long *)(lVar17 + 0x368) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Key__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_KeyValue<int,_int>_get_Key__
                                                  ;
                                                  if (0x6a < uVar1) {
                                                    *(long *)(lVar17 + 0x370) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_PointerEventData>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Lazy<RenderPipelineGlobalSettings>__ctor__
                                                  ;
                                                  if (0x6b < uVar1) {
                                                    *(long *)(lVar17 + 0x378) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Lazy<DebugManager>__ctor__,
                                                  *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaModel>_get_Key__
                                                  ;
                                                  if (0x6c < uVar1) {
                                                    *(long *)(lVar17 + 0x380) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonSchemaNode>_Contains__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Key__
                                                  ;
                                                  if (0x6d < uVar1) {
                                                    *(long *)(lVar17 + 0x388) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<ulong,_Vector3>_get_Value__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Value__
                                                  ;
                                                  if (0x6e < uVar1) {
                                                    *(long *)(lVar17 + 0x390) = lVar16;
                                                    lVar16 = FUN_02f0880c(*(undefined8 *)puVar2,2);
                                                    if (lVar16 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar16 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar16 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_ReflectionProbeManager_CachedProbe>_Deconstruct__
                                                  , *(int *)(lVar16 + 0x18) != 1)) {
                                                    uVar1 = *puVar21;
                                                    *(undefined8 *)(lVar16 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__
                                                  ;
                                                  if (0x6f < uVar1) {
                                                    *(long *)(lVar17 + 0x398) = lVar16;
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_HasInteractable__
                                                  ;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60
                                                           ) = lVar17;
                                                  lVar17 = FUN_02f0880c(uVar15,0x5e);
                                                  local_68 = 0;
                                                  local_70 = 0;
                                                  FUN_058a4490(&local_70,0x41,0x5a,1,0x20,0);
                                                  if (lVar17 == 0) goto LAB_058a4398;
                                                  if (*(int *)(lVar17 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar17 + 0x20) = local_70;
                                                    *(undefined4 *)(lVar17 + 0x28) = local_68;
                                                    local_78 = 0;
                                                    local_80 = 0;
                                                    FUN_058a4490(&local_80,0xc0,0xde,1,0x20,0);
                                                    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar17 + 0x2c) = local_80;
                                                      *(undefined4 *)(lVar17 + 0x34) = local_78;
                                                      local_88 = 0;
                                                      local_90 = 0;
                                                      FUN_058a4490(&local_90,0x100,0x12e,2,0,0);
                                                      if (2 < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0x38) = local_90;
                                                        *(undefined4 *)(lVar17 + 0x40) = local_88;
                                                        local_98 = 0;
                                                        local_a0 = 0;
                                                        FUN_058a4490(&local_a0,0x130,0x130,0,0x69,0)
                                                        ;
                                                        if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar17 + 0x44) = local_a0;
                                                          *(undefined4 *)(lVar17 + 0x4c) = local_98;
                                                          local_a8 = 0;
                                                          local_b0 = 0;
                                                          FUN_058a4490(&local_b0,0x132,0x136,2,0,0);
                                                          if (4 < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 0x50) =
                                                                 local_b0;
                                                            *(undefined4 *)(lVar17 + 0x58) =
                                                                 local_a8;
                                                            local_b8 = 0;
                                                            local_c0 = 0;
                                                            FUN_058a4490(&local_c0,0x139,0x147,3,0,0
                                                                        );
                                                            if (5 < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined8 *)(lVar17 + 0x5c) =
                                                                   local_c0;
                                                              *(undefined4 *)(lVar17 + 100) =
                                                                   local_b8;
                                                              local_c8 = 0;
                                                              local_d0 = 0;
                                                              FUN_058a4490(&local_d0,0x14a,0x176,2,0
                                                                           ,0);
                                                              if (6 < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined8 *)(lVar17 + 0x68) =
                                                                     local_d0;
                                                                *(undefined4 *)(lVar17 + 0x70) =
                                                                     local_c8;
                                                                local_d8 = 0;
                                                                local_e0 = 0;
                                                                FUN_058a4490(&local_e0,0x178,0x178,0
                                                                             ,0xff,0);
                                                                if ((*(uint *)(lVar17 + 0x18) &
                                                                    0xfffffff8) != 0) {
                                                                  *(undefined8 *)(lVar17 + 0x74) =
                                                                       local_e0;
                                                                  *(undefined4 *)(lVar17 + 0x7c) =
                                                                       local_d8;
                                                                  local_e8 = 0;
                                                                  local_f0 = 0;
                                                                  FUN_058a4490(&local_f0,0x179,0x17d
                                                                               ,3,0,0);
                                                                  if (8 < *(uint *)(lVar17 + 0x18))
                                                                  {
                                                                    *(undefined8 *)(lVar17 + 0x80) =
                                                                         local_f0;
                                                                    *(undefined4 *)(lVar17 + 0x88) =
                                                                         local_e8;
                                                                    local_f8 = 0;
                                                                    local_100 = 0;
                                                                    FUN_058a4490(&local_100,0x181,
                                                                                 0x181,0,0x253,0);
                                                                    if (9 < *(uint *)(lVar17 + 0x18)
                                                                       ) {
                                                                      *(undefined8 *)(lVar17 + 0x8c)
                                                                           = local_100;
                                                                      *(undefined4 *)(lVar17 + 0x94)
                                                                           = local_f8;
                                                                      local_108 = 0;
                                                                      local_110 = 0;
                                                                      FUN_058a4490(&local_110,0x182,
                                                                                   0x184,2,0,0);
                                                                      if (10 < *(uint *)(lVar17 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar17 + 0x98) = local_110;
                                                    *(undefined4 *)(lVar17 + 0xa0) = local_108;
                                                    local_118 = 0;
                                                    local_120 = 0;
                                                    FUN_058a4490(&local_120,0x186,0x186,0,0x254,0);
                                                    if (0xb < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined8 *)(lVar17 + 0xa4) = local_120;
                                                      *(undefined4 *)(lVar17 + 0xac) = local_118;
                                                      local_128 = 0;
                                                      local_130 = 0;
                                                      FUN_058a4490(&local_130,0x187,0x187,0,0x188,0)
                                                      ;
                                                      if (0xc < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0xb0) = local_130;
                                                        *(undefined4 *)(lVar17 + 0xb8) = local_128;
                                                        local_138 = 0;
                                                        local_140 = 0;
                                                        FUN_058a4490(&local_140,0x189,0x18a,1,0xcd,0
                                                                    );
                                                        if (0xd < *(uint *)(lVar17 + 0x18)) {
                                                          *(undefined8 *)(lVar17 + 0xbc) = local_140
                                                          ;
                                                          *(undefined4 *)(lVar17 + 0xc4) = local_138
                                                          ;
                                                          local_148 = 0;
                                                          local_150 = 0;
                                                          FUN_058a4490(&local_150,0x18b,0x18b,0,
                                                                       0x18c,0);
                                                          if (0xe < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 200) =
                                                                 local_150;
                                                            *(undefined4 *)(lVar17 + 0xd0) =
                                                                 local_148;
                                                            local_158 = 0;
                                                            local_160 = 0;
                                                            FUN_058a4490(&local_160,0x18e,0x18e,0,
                                                                         0x1dd,0);
                                                            if ((*(uint *)(lVar17 + 0x18) &
                                                                0xfffffff0) != 0) {
                                                              *(undefined8 *)(lVar17 + 0xd4) =
                                                                   local_160;
                                                              *(undefined4 *)(lVar17 + 0xdc) =
                                                                   local_158;
                                                              local_168 = 0;
                                                              local_170 = 0;
                                                              FUN_058a4490(&local_170,399,399,0,
                                                                           0x259,0);
                                                              if (0x10 < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined8 *)(lVar17 + 0xe0) =
                                                                     local_170;
                                                                *(undefined4 *)(lVar17 + 0xe8) =
                                                                     local_168;
                                                                local_178 = 0;
                                                                local_180 = 0;
                                                                FUN_058a4490(&local_180,400,400,0,
                                                                             0x25b,0);
                                                                if (0x11 < *(uint *)(lVar17 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar17 + 0xec) =
                                                                       local_180;
                                                                  *(undefined4 *)(lVar17 + 0xf4) =
                                                                       local_178;
                                                                  local_188 = 0;
                                                                  local_190 = 0;
                                                                  FUN_058a4490(&local_190,0x191,
                                                                               0x191,0,0x192,0);
                                                                  if (0x12 < *(uint *)(lVar17 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar17 + 0xf8) =
                                                                         local_190;
                                                                    *(undefined4 *)(lVar17 + 0x100)
                                                                         = local_188;
                                                                    local_198 = 0;
                                                                    local_1a0 = 0;
                                                                    FUN_058a4490(&local_1a0,0x193,
                                                                                 0x193,0,0x260,0);
                                                                    if (0x13 < *(uint *)(lVar17 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar17 + 0x104) = local_1a0;
                                                    *(undefined4 *)(lVar17 + 0x10c) = local_198;
                                                    local_1a8 = 0;
                                                    local_1b0 = 0;
                                                    FUN_058a4490(&local_1b0,0x194,0x194,0,0x263,0);
                                                    if (0x14 < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined8 *)(lVar17 + 0x110) = local_1b0;
                                                      *(undefined4 *)(lVar17 + 0x118) = local_1a8;
                                                      local_1b8 = 0;
                                                      local_1c0 = 0;
                                                      FUN_058a4490(&local_1c0,0x196,0x196,0,0x269,0)
                                                      ;
                                                      if (0x15 < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0x11c) = local_1c0;
                                                        *(undefined4 *)(lVar17 + 0x124) = local_1b8;
                                                        local_1c8 = 0;
                                                        local_1d0 = 0;
                                                        FUN_058a4490(&local_1d0,0x197,0x197,0,0x268,
                                                                     0);
                                                        if (0x16 < *(uint *)(lVar17 + 0x18)) {
                                                          *(undefined8 *)(lVar17 + 0x128) =
                                                               local_1d0;
                                                          *(undefined4 *)(lVar17 + 0x130) =
                                                               local_1c8;
                                                          local_1d8 = 0;
                                                          local_1e0 = 0;
                                                          FUN_058a4490(&local_1e0,0x198,0x198,0,
                                                                       0x199,0);
                                                          if (0x17 < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 0x134) =
                                                                 local_1e0;
                                                            *(undefined4 *)(lVar17 + 0x13c) =
                                                                 local_1d8;
                                                            local_1e8 = 0;
                                                            local_1f0 = 0;
                                                            FUN_058a4490(&local_1f0,0x19c,0x19c,0,
                                                                         0x26f,0);
                                                            if (0x18 < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined8 *)(lVar17 + 0x140) =
                                                                   local_1f0;
                                                              *(undefined4 *)(lVar17 + 0x148) =
                                                                   local_1e8;
                                                              local_1f8 = 0;
                                                              local_200 = 0;
                                                              FUN_058a4490(&local_200,0x19d,0x19d,0,
                                                                           0x272,0);
                                                              if (0x19 < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined8 *)(lVar17 + 0x14c) =
                                                                     local_200;
                                                                *(undefined4 *)(lVar17 + 0x154) =
                                                                     local_1f8;
                                                                local_208 = 0;
                                                                local_210 = 0;
                                                                FUN_058a4490(&local_210,0x19f,0x19f,
                                                                             0,0x275,0);
                                                                if (0x1a < *(uint *)(lVar17 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar17 + 0x158) =
                                                                       local_210;
                                                                  *(undefined4 *)(lVar17 + 0x160) =
                                                                       local_208;
                                                                  local_218 = 0;
                                                                  local_220 = 0;
                                                                  FUN_058a4490(&local_220,0x1a0,
                                                                               0x1a4,2,0,0);
                                                                  if (0x1b < *(uint *)(lVar17 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar17 + 0x164)
                                                                         = local_220;
                                                                    *(undefined4 *)(lVar17 + 0x16c)
                                                                         = local_218;
                                                                    local_228 = 0;
                                                                    local_230 = 0;
                                                                    FUN_058a4490(&local_230,0x1a7,
                                                                                 0x1a7,0,0x1a8,0);
                                                                    if (0x1c < *(uint *)(lVar17 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar17 + 0x170) = local_230;
                                                    *(undefined4 *)(lVar17 + 0x178) = local_228;
                                                    local_238 = 0;
                                                    local_240 = 0;
                                                    FUN_058a4490(&local_240,0x1a9,0x1a9,0,0x283,0);
                                                    if (0x1d < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined8 *)(lVar17 + 0x17c) = local_240;
                                                      *(undefined4 *)(lVar17 + 0x184) = local_238;
                                                      local_248 = 0;
                                                      local_250 = 0;
                                                      FUN_058a4490(&local_250,0x1ac,0x1ac,0,0x1ad,0)
                                                      ;
                                                      if (0x1e < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0x188) = local_250;
                                                        *(undefined4 *)(lVar17 + 400) = local_248;
                                                        local_258 = 0;
                                                        local_260 = 0;
                                                        FUN_058a4490(&local_260,0x1ae,0x1ae,0,0x288,
                                                                     0);
                                                        if ((*(uint *)(lVar17 + 0x18) & 0xffffffe0)
                                                            != 0) {
                                                          *(undefined8 *)(lVar17 + 0x194) =
                                                               local_260;
                                                          *(undefined4 *)(lVar17 + 0x19c) =
                                                               local_258;
                                                          local_268 = 0;
                                                          local_270 = 0;
                                                          FUN_058a4490(&local_270,0x1af,0x1af,0,
                                                                       0x1b0,0);
                                                          if (0x20 < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 0x1a0) =
                                                                 local_270;
                                                            *(undefined4 *)(lVar17 + 0x1a8) =
                                                                 local_268;
                                                            local_278 = 0;
                                                            local_280 = 0;
                                                            FUN_058a4490(&local_280,0x1b1,0x1b2,1,
                                                                         0xd9,0);
                                                            if (0x21 < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined8 *)(lVar17 + 0x1ac) =
                                                                   local_280;
                                                              *(undefined4 *)(lVar17 + 0x1b4) =
                                                                   local_278;
                                                              local_288 = 0;
                                                              local_290 = 0;
                                                              FUN_058a4490(&local_290,0x1b3,0x1b5,3,
                                                                           0,0);
                                                              if (0x22 < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined8 *)(lVar17 + 0x1b8) =
                                                                     local_290;
                                                                *(undefined4 *)(lVar17 + 0x1c0) =
                                                                     local_288;
                                                                local_298 = 0;
                                                                local_2a0 = 0;
                                                                FUN_058a4490(&local_2a0,0x1b7,0x1b7,
                                                                             0,0x292,0);
                                                                if (0x23 < *(uint *)(lVar17 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar17 + 0x1c4) =
                                                                       local_2a0;
                                                                  *(undefined4 *)(lVar17 + 0x1cc) =
                                                                       local_298;
                                                                  local_2a8 = 0;
                                                                  local_2b0 = 0;
                                                                  FUN_058a4490(&local_2b0,0x1b8,
                                                                               0x1b8,0,0x1b9,0);
                                                                  if (0x24 < *(uint *)(lVar17 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar17 + 0x1d0)
                                                                         = local_2b0;
                                                                    *(undefined4 *)(lVar17 + 0x1d8)
                                                                         = local_2a8;
                                                                    local_2b8 = 0;
                                                                    local_2c0 = 0;
                                                                    FUN_058a4490(&local_2c0,0x1bc,
                                                                                 0x1bc,0,0x1bd,0);
                                                                    if (0x25 < *(uint *)(lVar17 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar17 + 0x1dc) = local_2c0;
                                                    *(undefined4 *)(lVar17 + 0x1e4) = local_2b8;
                                                    local_2c8 = 0;
                                                    local_2d0 = 0;
                                                    FUN_058a4490(&local_2d0,0x1c4,0x1c5,0,0x1c6,0);
                                                    if (0x26 < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined8 *)(lVar17 + 0x1e8) = local_2d0;
                                                      *(undefined4 *)(lVar17 + 0x1f0) = local_2c8;
                                                      local_2d8 = 0;
                                                      local_2e0 = 0;
                                                      FUN_058a4490(&local_2e0,0x1c7,0x1c8,0,0x1c9,0)
                                                      ;
                                                      if (0x27 < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 500) = local_2e0;
                                                        *(undefined4 *)(lVar17 + 0x1fc) = local_2d8;
                                                        local_2e8 = 0;
                                                        local_2f0 = 0;
                                                        FUN_058a4490(&local_2f0,0x1ca,0x1cb,0,0x1cc,
                                                                     0);
                                                        if (0x28 < *(uint *)(lVar17 + 0x18)) {
                                                          *(undefined8 *)(lVar17 + 0x200) =
                                                               local_2f0;
                                                          *(undefined4 *)(lVar17 + 0x208) =
                                                               local_2e8;
                                                          local_2f8 = 0;
                                                          local_300 = 0;
                                                          FUN_058a4490(&local_300,0x1cd,0x1db,3,0,0)
                                                          ;
                                                          if (0x29 < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 0x20c) =
                                                                 local_300;
                                                            *(undefined4 *)(lVar17 + 0x214) =
                                                                 local_2f8;
                                                            local_308 = 0;
                                                            local_310 = 0;
                                                            FUN_058a4490(&local_310,0x1de,0x1ee,2,0,
                                                                         0);
                                                            if (0x2a < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined8 *)(lVar17 + 0x218) =
                                                                   local_310;
                                                              *(undefined4 *)(lVar17 + 0x220) =
                                                                   local_308;
                                                              local_318 = 0;
                                                              local_320 = 0;
                                                              FUN_058a4490(&local_320,0x1f1,0x1f2,0,
                                                                           499,0);
                                                              if (0x2b < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined8 *)(lVar17 + 0x224) =
                                                                     local_320;
                                                                *(undefined4 *)(lVar17 + 0x22c) =
                                                                     local_318;
                                                                local_328 = 0;
                                                                local_330 = 0;
                                                                FUN_058a4490(&local_330,500,500,0,
                                                                             0x1f5,0);
                                                                if (0x2c < *(uint *)(lVar17 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar17 + 0x230) =
                                                                       local_330;
                                                                  *(undefined4 *)(lVar17 + 0x238) =
                                                                       local_328;
                                                                  local_338 = 0;
                                                                  local_340 = 0;
                                                                  FUN_058a4490(&local_340,0x1fa,
                                                                               0x216,2,0,0);
                                                                  if (0x2d < *(uint *)(lVar17 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar17 + 0x23c)
                                                                         = local_340;
                                                                    *(undefined4 *)(lVar17 + 0x244)
                                                                         = local_338;
                                                                    local_348 = 0;
                                                                    local_350 = 0;
                                                                    FUN_058a4490(&local_350,0x386,
                                                                                 0x386,0,0x3ac,0);
                                                                    if (0x2e < *(uint *)(lVar17 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar17 + 0x248) = local_350;
                                                    *(undefined4 *)(lVar17 + 0x250) = local_348;
                                                    local_358 = 0;
                                                    local_360 = 0;
                                                    FUN_058a4490(&local_360,0x388,0x38a,1,0x25,0);
                                                    if (0x2f < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined8 *)(lVar17 + 0x254) = local_360;
                                                      *(undefined4 *)(lVar17 + 0x25c) = local_358;
                                                      local_368 = 0;
                                                      local_370 = 0;
                                                      FUN_058a4490(&local_370,0x38c,0x38c,0,0x3cc,0)
                                                      ;
                                                      if (0x30 < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0x260) = local_370;
                                                        *(undefined4 *)(lVar17 + 0x268) = local_368;
                                                        local_378 = 0;
                                                        local_380 = 0;
                                                        FUN_058a4490(&local_380,0x38e,0x38f,1,0x3f,0
                                                                    );
                                                        if (0x31 < *(uint *)(lVar17 + 0x18)) {
                                                          *(undefined8 *)(lVar17 + 0x26c) =
                                                               local_380;
                                                          *(undefined4 *)(lVar17 + 0x274) =
                                                               local_378;
                                                          local_388 = 0;
                                                          local_390 = 0;
                                                          FUN_058a4490(&local_390,0x391,0x3ab,1,0x20
                                                                       ,0);
                                                          if (0x32 < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 0x278) =
                                                                 local_390;
                                                            *(undefined4 *)(lVar17 + 0x280) =
                                                                 local_388;
                                                            local_398 = 0;
                                                            local_3a0 = 0;
                                                            FUN_058a4490(&local_3a0,0x3e2,0x3ee,2,0,
                                                                         0);
                                                            if (0x33 < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined8 *)(lVar17 + 0x284) =
                                                                   local_3a0;
                                                              *(undefined4 *)(lVar17 + 0x28c) =
                                                                   local_398;
                                                              local_3a8 = 0;
                                                              local_3b0 = 0;
                                                              FUN_058a4490(&local_3b0,0x401,0x40f,1,
                                                                           0x50,0);
                                                              if (0x34 < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined8 *)(lVar17 + 0x290) =
                                                                     local_3b0;
                                                                *(undefined4 *)(lVar17 + 0x298) =
                                                                     local_3a8;
                                                                local_3b8 = 0;
                                                                local_3c0 = 0;
                                                                FUN_058a4490(&local_3c0,0x410,0x42f,
                                                                             1,0x20,0);
                                                                if (0x35 < *(uint *)(lVar17 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar17 + 0x29c) =
                                                                       local_3c0;
                                                                  *(undefined4 *)(lVar17 + 0x2a4) =
                                                                       local_3b8;
                                                                  local_3c8 = 0;
                                                                  local_3d0 = 0;
                                                                  FUN_058a4490(&local_3d0,0x460,
                                                                               0x480,2,0,0);
                                                                  if (0x36 < *(uint *)(lVar17 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar17 + 0x2a8)
                                                                         = local_3d0;
                                                                    *(undefined4 *)(lVar17 + 0x2b0)
                                                                         = local_3c8;
                                                                    local_3d8 = 0;
                                                                    local_3e0 = 0;
                                                                    FUN_058a4490(&local_3e0,0x490,
                                                                                 0x4be,2,0,0);
                                                                    if (0x37 < *(uint *)(lVar17 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar17 + 0x2b4) = local_3e0;
                                                    *(undefined4 *)(lVar17 + 700) = local_3d8;
                                                    local_3e8 = 0;
                                                    local_3f0 = 0;
                                                    FUN_058a4490(&local_3f0,0x4c1,0x4c3,3,0,0);
                                                    if (0x38 < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined8 *)(lVar17 + 0x2c0) = local_3f0;
                                                      *(undefined4 *)(lVar17 + 0x2c8) = local_3e8;
                                                      local_3f8 = 0;
                                                      local_400 = 0;
                                                      FUN_058a4490(&local_400,0x4c7,0x4c7,0,0x4c8,0)
                                                      ;
                                                      if (0x39 < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0x2cc) = local_400;
                                                        *(undefined4 *)(lVar17 + 0x2d4) = local_3f8;
                                                        local_408 = 0;
                                                        local_410 = 0;
                                                        FUN_058a4490(&local_410,0x4cb,0x4cb,0,0x4cc,
                                                                     0);
                                                        if (0x3a < *(uint *)(lVar17 + 0x18)) {
                                                          *(undefined8 *)(lVar17 + 0x2d8) =
                                                               local_410;
                                                          *(undefined4 *)(lVar17 + 0x2e0) =
                                                               local_408;
                                                          local_418 = 0;
                                                          local_420 = 0;
                                                          FUN_058a4490(&local_420,0x4d0,0x4ea,2,0,0)
                                                          ;
                                                          if (0x3b < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 0x2e4) =
                                                                 local_420;
                                                            *(undefined4 *)(lVar17 + 0x2ec) =
                                                                 local_418;
                                                            local_428 = 0;
                                                            local_430 = 0;
                                                            FUN_058a4490(&local_430,0x4ee,0x4f4,2,0,
                                                                         0);
                                                            if (0x3c < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined8 *)(lVar17 + 0x2f0) =
                                                                   local_430;
                                                              *(undefined4 *)(lVar17 + 0x2f8) =
                                                                   local_428;
                                                              local_438 = 0;
                                                              local_440 = 0;
                                                              FUN_058a4490(&local_440,0x4f8,0x4f8,0,
                                                                           0x4f9,0);
                                                              if (0x3d < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined8 *)(lVar17 + 0x2fc) =
                                                                     local_440;
                                                                *(undefined4 *)(lVar17 + 0x304) =
                                                                     local_438;
                                                                local_448 = 0;
                                                                local_450 = 0;
                                                                FUN_058a4490(&local_450,0x531,0x556,
                                                                             1,0x30,0);
                                                                if (0x3e < *(uint *)(lVar17 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar17 + 0x308) =
                                                                       local_450;
                                                                  *(undefined4 *)(lVar17 + 0x310) =
                                                                       local_448;
                                                                  local_458 = 0;
                                                                  local_460 = 0;
                                                                  FUN_058a4490(&local_460,0x10a0,
                                                                               0x10c5,1,0x30,0);
                                                                  if ((*(uint *)(lVar17 + 0x18) &
                                                                      0xffffffc0) != 0) {
                                                                    *(undefined8 *)(lVar17 + 0x314)
                                                                         = local_460;
                                                                    *(undefined4 *)(lVar17 + 0x31c)
                                                                         = local_458;
                                                                    local_468 = 0;
                                                                    local_470 = 0;
                                                                    FUN_058a4490(&local_470,0x1e00,
                                                                                 0x1ef8,2,0,0);
                                                                    if (0x40 < *(uint *)(lVar17 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar17 + 800) = local_470;
                                                    *(undefined4 *)(lVar17 + 0x328) = local_468;
                                                    local_478 = 0;
                                                    local_480 = 0;
                                                    FUN_058a4490(&local_480,0x1f08,0x1f0f,1,
                                                                 0xfffffff8,0);
                                                    if (0x41 < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined8 *)(lVar17 + 0x32c) = local_480;
                                                      *(undefined4 *)(lVar17 + 0x334) = local_478;
                                                      local_488 = 0;
                                                      local_490 = 0;
                                                      FUN_058a4490(&local_490,0x1f18,0x1f1f,1,
                                                                   0xfffffff8,0);
                                                      if (0x42 < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0x338) = local_490;
                                                        *(undefined4 *)(lVar17 + 0x340) = local_488;
                                                        local_498 = 0;
                                                        local_4a0 = 0;
                                                        FUN_058a4490(&local_4a0,0x1f28,0x1f2f,1,
                                                                     0xfffffff8,0);
                                                        if (0x43 < *(uint *)(lVar17 + 0x18)) {
                                                          *(undefined8 *)(lVar17 + 0x344) =
                                                               local_4a0;
                                                          *(undefined4 *)(lVar17 + 0x34c) =
                                                               local_498;
                                                          local_4a8 = 0;
                                                          local_4b0 = 0;
                                                          FUN_058a4490(&local_4b0,0x1f38,7999,1,
                                                                       0xfffffff8,0);
                                                          if (0x44 < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 0x350) =
                                                                 local_4b0;
                                                            *(undefined4 *)(lVar17 + 0x358) =
                                                                 local_4a8;
                                                            local_4b8 = 0;
                                                            local_4c0 = 0;
                                                            FUN_058a4490(&local_4c0,0x1f48,0x1f4d,1,
                                                                         0xfffffff8,0);
                                                            if (0x45 < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined8 *)(lVar17 + 0x35c) =
                                                                   local_4c0;
                                                              *(undefined4 *)(lVar17 + 0x364) =
                                                                   local_4b8;
                                                              local_4c8 = 0;
                                                              local_4d0 = 0;
                                                              FUN_058a4490(&local_4d0,0x1f59,0x1f59,
                                                                           0,0x1f51,0);
                                                              if (0x46 < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined8 *)(lVar17 + 0x368) =
                                                                     local_4d0;
                                                                *(undefined4 *)(lVar17 + 0x370) =
                                                                     local_4c8;
                                                                local_4d8 = 0;
                                                                local_4e0 = 0;
                                                                FUN_058a4490(&local_4e0,0x1f5b,
                                                                             0x1f5b,0,0x1f53,0);
                                                                if (0x47 < *(uint *)(lVar17 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar17 + 0x374) =
                                                                       local_4e0;
                                                                  *(undefined4 *)(lVar17 + 0x37c) =
                                                                       local_4d8;
                                                                  local_4e8 = 0;
                                                                  local_4f0 = 0;
                                                                  FUN_058a4490(&local_4f0,0x1f5d,
                                                                               0x1f5d,0,0x1f55,0);
                                                                  if (0x48 < *(uint *)(lVar17 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar17 + 0x380)
                                                                         = local_4f0;
                                                                    *(undefined4 *)(lVar17 + 0x388)
                                                                         = local_4e8;
                                                                    local_4f8 = 0;
                                                                    local_500 = 0;
                                                                    FUN_058a4490(&local_500,0x1f5f,
                                                                                 0x1f5f,0,0x1f57,0);
                                                                    if (0x49 < *(uint *)(lVar17 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar17 + 0x38c) = local_500;
                                                    *(undefined4 *)(lVar17 + 0x394) = local_4f8;
                                                    local_508 = 0;
                                                    local_510 = 0;
                                                    FUN_058a4490(&local_510,0x1f68,0x1f6f,1,
                                                                 0xfffffff8,0);
                                                    if (0x4a < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined8 *)(lVar17 + 0x398) = local_510;
                                                      *(undefined4 *)(lVar17 + 0x3a0) = local_508;
                                                      local_518 = 0;
                                                      local_520 = 0;
                                                      FUN_058a4490(&local_520,0x1f88,0x1f8f,1,
                                                                   0xfffffff8,0);
                                                      if (0x4b < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0x3a4) = local_520;
                                                        *(undefined4 *)(lVar17 + 0x3ac) = local_518;
                                                        local_528 = 0;
                                                        local_530 = 0;
                                                        FUN_058a4490(&local_530,0x1f98,0x1f9f,1,
                                                                     0xfffffff8,0);
                                                        if (0x4c < *(uint *)(lVar17 + 0x18)) {
                                                          *(undefined8 *)(lVar17 + 0x3b0) =
                                                               local_530;
                                                          *(undefined4 *)(lVar17 + 0x3b8) =
                                                               local_528;
                                                          local_538 = 0;
                                                          local_540 = 0;
                                                          FUN_058a4490(&local_540,0x1fa8,0x1faf,1,
                                                                       0xfffffff8,0);
                                                          if (0x4d < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 0x3bc) =
                                                                 local_540;
                                                            *(undefined4 *)(lVar17 + 0x3c4) =
                                                                 local_538;
                                                            local_548 = 0;
                                                            local_550 = 0;
                                                            FUN_058a4490(&local_550,0x1fb8,0x1fb9,1,
                                                                         0xfffffff8,0);
                                                            if (0x4e < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined8 *)(lVar17 + 0x3c8) =
                                                                   local_550;
                                                              *(undefined4 *)(lVar17 + 0x3d0) =
                                                                   local_548;
                                                              local_558 = 0;
                                                              local_560 = 0;
                                                              FUN_058a4490(&local_560,0x1fba,0x1fbb,
                                                                           1,0xffffffb6,0);
                                                              if (0x4f < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined8 *)(lVar17 + 0x3d4) =
                                                                     local_560;
                                                                *(undefined4 *)(lVar17 + 0x3dc) =
                                                                     local_558;
                                                                local_568 = 0;
                                                                local_570 = 0;
                                                                FUN_058a4490(&local_570,0x1fbc,
                                                                             0x1fbc,0,0x1fb3,0);
                                                                if (0x50 < *(uint *)(lVar17 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar17 + 0x3e0) =
                                                                       local_570;
                                                                  *(undefined4 *)(lVar17 + 1000) =
                                                                       local_568;
                                                                  local_578 = 0;
                                                                  local_580 = 0;
                                                                  FUN_058a4490(&local_580,0x1fc8,
                                                                               0x1fcb,1,0xffffffaa,0
                                                                              );
                                                                  if (0x51 < *(uint *)(lVar17 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar17 + 0x3ec)
                                                                         = local_580;
                                                                    *(undefined4 *)(lVar17 + 0x3f4)
                                                                         = local_578;
                                                                    local_588 = 0;
                                                                    local_590 = 0;
                                                                    FUN_058a4490(&local_590,0x1fcc,
                                                                                 0x1fcc,0,0x1fc3,0);
                                                                    if (0x52 < *(uint *)(lVar17 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar17 + 0x3f8) = local_590;
                                                    *(undefined4 *)(lVar17 + 0x400) = local_588;
                                                    local_598 = 0;
                                                    local_5a0 = 0;
                                                    FUN_058a4490(&local_5a0,0x1fd8,0x1fd9,1,
                                                                 0xfffffff8,0);
                                                    if (0x53 < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined8 *)(lVar17 + 0x404) = local_5a0;
                                                      *(undefined4 *)(lVar17 + 0x40c) = local_598;
                                                      local_5a8 = 0;
                                                      local_5b0 = 0;
                                                      FUN_058a4490(&local_5b0,0x1fda,0x1fdb,1,
                                                                   0xffffff9c,0);
                                                      if (0x54 < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0x410) = local_5b0;
                                                        *(undefined4 *)(lVar17 + 0x418) = local_5a8;
                                                        local_5b8 = 0;
                                                        local_5c0 = 0;
                                                        FUN_058a4490(&local_5c0,0x1fe8,0x1fe9,1,
                                                                     0xfffffff8,0);
                                                        if (0x55 < *(uint *)(lVar17 + 0x18)) {
                                                          *(undefined8 *)(lVar17 + 0x41c) =
                                                               local_5c0;
                                                          *(undefined4 *)(lVar17 + 0x424) =
                                                               local_5b8;
                                                          local_5c8 = 0;
                                                          local_5d0 = 0;
                                                          FUN_058a4490(&local_5d0,0x1fea,0x1feb,1,
                                                                       0xffffff90,0);
                                                          if (0x56 < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined8 *)(lVar17 + 0x428) =
                                                                 local_5d0;
                                                            *(undefined4 *)(lVar17 + 0x430) =
                                                                 local_5c8;
                                                            local_5d8 = 0;
                                                            local_5e0 = 0;
                                                            FUN_058a4490(&local_5e0,0x1fec,0x1fec,0,
                                                                         0x1fe5,0);
                                                            if (0x57 < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined8 *)(lVar17 + 0x434) =
                                                                   local_5e0;
                                                              *(undefined4 *)(lVar17 + 0x43c) =
                                                                   local_5d8;
                                                              local_5e8 = 0;
                                                              local_5f0 = 0;
                                                              FUN_058a4490(&local_5f0,0x1ff8,0x1ff9,
                                                                           1,0xffffff80,0);
                                                              if (0x58 < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined8 *)(lVar17 + 0x440) =
                                                                     local_5f0;
                                                                *(undefined4 *)(lVar17 + 0x448) =
                                                                     local_5e8;
                                                                local_5f8 = 0;
                                                                local_600 = 0;
                                                                FUN_058a4490(&local_600,0x1ffa,
                                                                             0x1ffb,1,0xffffff82,0);
                                                                if (0x59 < *(uint *)(lVar17 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar17 + 0x44c) =
                                                                       local_600;
                                                                  *(undefined4 *)(lVar17 + 0x454) =
                                                                       local_5f8;
                                                                  local_608 = 0;
                                                                  local_610 = 0;
                                                                  FUN_058a4490(&local_610,0x1ffc,
                                                                               0x1ffc,0,0x1ff3,0);
                                                                  if (0x5a < *(uint *)(lVar17 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar17 + 0x458)
                                                                         = local_610;
                                                                    *(undefined4 *)(lVar17 + 0x460)
                                                                         = local_608;
                                                                    local_618 = 0;
                                                                    local_620 = 0;
                                                                    FUN_058a4490(&local_620,0x2160,
                                                                                 0x216f,1,0x10,0);
                                                                    if (0x5b < *(uint *)(lVar17 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar17 + 0x464) = local_620;
                                                    *(undefined4 *)(lVar17 + 0x46c) = local_618;
                                                    local_628 = 0;
                                                    local_630 = 0;
                                                    FUN_058a4490(&local_630,0x24b6,0x24d0,1,0x1a,0);
                                                    if (0x5c < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined8 *)(lVar17 + 0x470) = local_630;
                                                      *(undefined4 *)(lVar17 + 0x478) = local_628;
                                                      local_638 = 0;
                                                      local_640 = 0;
                                                      FUN_058a4490(&local_640,0xff21,0xff3a,1,0x20,0
                                                                  );
                                                      if (0x5d < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined8 *)(lVar17 + 0x47c) = local_640;
                                                        *(undefined4 *)(lVar17 + 0x484) = local_638;
                                                        *(long *)(*(long *)(*(long *)puVar3 + 0xb8)
                                                                 + 0x68) = lVar17;
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
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
LAB_058a4398:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


