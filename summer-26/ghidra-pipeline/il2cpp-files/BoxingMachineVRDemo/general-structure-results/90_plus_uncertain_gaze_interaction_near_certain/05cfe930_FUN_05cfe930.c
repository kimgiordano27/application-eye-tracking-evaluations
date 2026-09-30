/*
FUNCTION_NAME: FUN_05cfe930
ENTRY_POINT: 05cfe930
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 315
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_18
*/


void FUN_05cfe930(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = Method_System_Collections_Generic_List<OVRInputModule_InputSource>_Contains__;
  puVar3 = Method_System_Collections_Generic_List<OVRInputModule_InputSource>_Clear__;
  puVar2 = PTR_DAT_0678be80;
  puVar1 = PTR_DAT_06769450;
  if ((DAT_06b829cb & 1) == 0) {
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>_Contains__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Timer>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Timer>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Timer>_RemoveAt__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Timer>_Sort__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Timer>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Timer>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Timer>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimingRecord>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimingRecord>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimingRecord>_RemoveRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimingRecord>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimingRecord>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimingRecord>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_Contains__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_Find__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionItem>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionItem>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionItem>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionItem>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionVirtualCurrency>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionVirtualCurrency>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionVirtualCurrency>_GetEnumerator__)
    ;
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionVirtualCurrency>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>_Find__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransitionData>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransitionData>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrialOffer>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrialOffer>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>_Contains__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>_Reverse__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeIdentifier>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeIdentifier>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeIdentifier>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeName>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeName>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeName>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeName>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeSpec>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeSpec>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeSpec>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeSpec>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UICharInfo>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_Insert__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UILineInfo>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>_get_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>_set_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_Sort__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_get_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_set_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<URPProfileId>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<URPProfileId>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<URPProfileId>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UnityEvent>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UnityEvent>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UnityEvent>_RemoveAt__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UnityEvent>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UnityEvent>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UnityEvent>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UsageHint>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<User>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<User>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UserCapability>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UserCapability>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UserInputActionSet>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_RemoveAt__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_Contains__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Value>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Value>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Value>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Value>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueInput>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueInput>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueInput>_AsReadOnly__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VariantCheckpoint>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_get_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VectorImageManager>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VectorImageManager>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VectorImageManager>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ViewerTrigger>_GetEnumerator__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>__ctor__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Add__)
    ;
    FUN_02d6084c(
                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_GetEnumerator__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Sort__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>__ctor__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_Add__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_ToArray__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Contains__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_IndexOf__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Insert__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_RemoveAt__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_get_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_set_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRInputModule_InputSource>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRInputModule_InputSource>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRInputModule_InputSource>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRLocatable_TrackingSpacePose>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRLocatable_TrackingSpacePose>_Clear__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_Exists__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_RemoveAll__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_RemoveAt__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Count__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Item__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_GetEnumerator__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Sort__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRSceneManager_Metrics>_GetEnumerator__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>__ctor__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_get_Count__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_get_Item__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Item__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Clear__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_GetEnumerator__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Count__)
    ;
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_Add__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_GetEnumerator__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_get_Count__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_get_Item__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>__ctor__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_get_Count__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_RemoveAt__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_get_Count__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_get_Item__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>__ctor__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_get_Count__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>__ctor__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_Add__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_GetEnumerator__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_Contains__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>_Add__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Count__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Remove__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Count__)
    ;
    FUN_02d6084c(Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_Clear__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_GetEnumerator__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_get_Count__)
    ;
    FUN_02d6084c(Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_get_Item__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_Clear__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_RemoveAt__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_get_Count__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_get_Item__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_Clear__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_Find__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRInputModule_InputSource>_Contains__);
    FUN_02d6084c(Method_System_Collections_Generic_List<OVRInputModule_InputSource>_Clear__);
    FUN_02d6084c(PTR_DAT_0678be80);
    FUN_02d6084c(PTR_DAT_06769450);
    DAT_06b829cb = 1;
  }
  FUN_05ce6dd8(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar3,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2,0);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_Clear__);
    FUN_04d6838c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRInputModule_InputSource>_Remove__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_033305a8(param_1,lVar7,0,
               *(undefined8 *)Method_System_Collections_Generic_List<TimeValue>__ctor__);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Remove__);
    FUN_04d687c4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__,0
                );
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_033318e0(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_AddRange__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_get_Count__);
    FUN_04d685a8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_get_Item__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03330f44(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Remove__);
    FUN_04d6892c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>__ctor__,0)
    ;
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03331f48(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_Clear__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserCapability>__ctor__);
    FUN_04d6865c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>__ctor__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03331278(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_04d689e0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_Add__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333227c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_GetEnumerator__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>_Add__);
    FUN_04d68710(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_get_Count__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_033315ac(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>_Clear__);
    FUN_04d68a94(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_Add__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_033325b0(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>__ctor__);
    FUN_04d68878(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_Clear__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03331c14(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Clear__);
    FUN_04d68440(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_Find__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_033308dc(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_RemoveAt__);
    FUN_04d684f4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Count__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03330c10(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_Clear__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Count__);
    Mono_Math_BigInteger_ModulusRing__Pow
              (lVar7,uVar8,
               *(undefined8 *)
                Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_get_Item__
               ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333d548(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TransitionData>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_set_Item__);
    FUN_04d6d16c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ctor__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333e880(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d6cf50(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_GetEnumerator__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333dee4(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrialOffer>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Capacity__);
    FUN_04d6d2d4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333eee8(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Add__);
    FUN_04d6d004(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>__ctor__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333e218(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x88);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_Add__);
    FUN_04d6d388(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333f21c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TransitionData>_GetEnumerator__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x90);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserInputActionSet>__ctor__);
    FUN_04d6d0b8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333e54c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrialOffer>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Item__);
    FUN_04d6d220(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__,0)
    ;
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333ebb4(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_Find__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_AddRange__);
    FUN_04d6cde8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333d87c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_GetEnumerator__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Capacity__
                              );
    FUN_04d6ce9c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_0333dbb0(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_ToArray__
                              );
    FUN_04d69bc4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Add__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03337530(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_Find__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>_GetEnumerator__
                              );
    FUN_04d69ffc(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Clear__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03338868(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xc0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d69de0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Sort__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc0);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03337ecc(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 200);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
    FUN_04d6a164(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Count__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 200);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03338ed0(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d69e94(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Item__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd0);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03338200(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_AsReadOnly__);
    FUN_04d6a218(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSceneManager_Metrics>_GetEnumerator__,0)
    ;
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd8);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03339204(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_Contains__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_Add__
                              );
    FUN_04d69f48(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>__ctor__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe0);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03338534(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_Remove__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Item__);
    FUN_04d6a0b0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_Add__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe8);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03338b9c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>__ctor__);
    FUN_04d69c78(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_get_Count__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf0);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03337864(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>_set_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ViewerTrigger>_GetEnumerator__
                              );
    FUN_04d69d2c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>__ctor__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf8);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  FUN_03337b98(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeIdentifier>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x100);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Count__);
    FUN_04d6e230(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_Add__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x100) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x100,lVar7);
  }
  FUN_03341558(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeSpec>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x108);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_04d6e668(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x108) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x108,lVar7);
  }
  FUN_03342890(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeName>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x110);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_get_Item__);
    FUN_04d6e44c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Item__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x110) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x110,lVar7);
  }
  FUN_03341ef4(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeSpec>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x118);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_04d6e7d0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Add__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x118) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x118,lVar7);
  }
  FUN_03342ef8(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeName>_GetEnumerator__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x120);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d6e500(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Clear__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x120) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x120,lVar7);
  }
  FUN_03342228(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeSpec>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x128);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector2>_Add__)
    ;
    FUN_04d6e884(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_GetEnumerator__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x128) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x128,lVar7);
  }
  FUN_0334322c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeName>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x130);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Add__);
    FUN_04d6e5b4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_ToArray__,0
                );
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x130) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x130,lVar7);
  }
  FUN_0334255c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UICharInfo>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x138);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_RemoveAt__);
    FUN_04d6e938(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Count__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x138) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x138,lVar7);
  }
  FUN_03343560(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeSpec>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x140);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>__ctor__);
    FUN_04d6e71c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Item__,
                 0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x140) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x140,lVar7);
  }
  FUN_03342bc4(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeIdentifier>_GetEnumerator__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x148);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_04d6e2e4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_Add__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x148) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x148,lVar7);
  }
  FUN_0334188c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeName>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x150);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Item__);
    FUN_04d6e398(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_GetEnumerator__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x150) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x150,lVar7);
  }
  FUN_03341bc0(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x158);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_set_Item__);
    FUN_04d6a2cc(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x158) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x158,lVar7);
  }
  FUN_03339538(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_ToArray__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x160);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_Add__);
    FUN_04d6a9d4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_Add__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x160) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x160,lVar7);
  }
  FUN_0333a870(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x168);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_AddRange__);
    FUN_04d6a4e8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_ToArray__,0)
    ;
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x168) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x168,lVar7);
  }
  FUN_03339ed4(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x170);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Add__);
    FUN_04d6ab3c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_get_Count__,
                 0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x170) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x170,lVar7);
  }
  FUN_0333aed8(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_AddRange__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x178);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector4>_Add__)
    ;
    FUN_04d6a650(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>__ctor__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x178) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x178,lVar7);
  }
  FUN_0333a208(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionItem>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x180);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Item__);
    FUN_04d6abf0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_Add__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x180) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x180,lVar7);
  }
  FUN_0333b20c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_Clear__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x188);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Capacity__);
    FUN_04d6a704(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_GetEnumerator__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x188) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x188,lVar7);
  }
  FUN_0333a53c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 400);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_RemoveAt__);
    FUN_04d6aa88(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_get_Item__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 400) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 400,lVar7);
  }
  FUN_0333aba4(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x198);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Contains__);
    FUN_04d6a380(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_Add__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x198) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x198,lVar7);
  }
  FUN_0333986c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1a0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_AddRange__);
    FUN_04d6a434(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_GetEnumerator__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1a0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1a0,lVar7);
  }
  FUN_03339ba0(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1a8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Item__);
    FUN_04d6e9ec(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_get_Count__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1a8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1a8,lVar7);
  }
  FUN_03343894(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_Insert__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector3>_Add__)
    ;
    FUN_04d6ee24(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>__ctor__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1b0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1b0,lVar7);
  }
  FUN_03344bcc(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_AddRange__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__);
    Interop_Sys__GetNonCryptographicallySecureRandomBytes
              (lVar7,uVar8,
               *(undefined8 *)
                Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_Add__
               ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1b8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1b8,lVar7);
  }
  FUN_03344230(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1c0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_GetEnumerator__
                              );
    FUN_04d6ef8c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_GetEnumerator__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1c0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1c0,lVar7);
  }
  FUN_03345234(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_Clear__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1c8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Clear__);
    FUN_04d6ecbc(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_RemoveAt__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1c8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1c8,lVar7);
  }
  FUN_03344564(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1d0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_Clear__);
    FUN_04d6f040(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_get_Count__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1d0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1d0,lVar7);
  }
  FUN_03345568(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_GetEnumerator__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1d8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UsageHint>_GetEnumerator__);
    FUN_04d6ed70(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_get_Item__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1d8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1d8,lVar7);
  }
  FUN_03344898(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UILineInfo>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1e0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>__ctor__);
    FUN_04d6f0f4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>__ctor__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1e0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1e0,lVar7);
  }
  FUN_0334589c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_Remove__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1e8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Sort__);
    FUN_04d6eed8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_GetEnumerator__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1e8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1e8,lVar7);
  }
  FUN_03344f00(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1f0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>_Add__);
    FUN_04d6eaa0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_get_Count__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1f0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1f0,lVar7);
  }
  FUN_03343bc8(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1f8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_GetEnumerator__);
    FUN_04d6eb54(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>__ctor__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x1f8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x1f8,lVar7);
  }
  FUN_03343efc(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionItem>_Clear__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x200);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_set_Item__);
    FUN_04d6ad58(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_Add__,
                 0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x200) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x200,lVar7);
  }
  FUN_0333b540(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x208);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Count__)
    ;
    FUN_04d6b190(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_GetEnumerator__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x208) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x208,lVar7);
  }
  FUN_0333c878(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x210);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Sort__
                              );
    FUN_04d6af74(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>__ctor__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x210) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x210,lVar7);
  }
  FUN_0333bedc(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x218);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_get_Item__);
    FUN_04d6b2f8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_Add__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x218) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x218,lVar7);
  }
  FUN_0333cee0(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>_Clear__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x220);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>_ToArray__);
    FUN_04d6b028(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_Contains__,0)
    ;
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x220) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x220,lVar7);
  }
  FUN_0333c210(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x228);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>_Clear__);
    FUN_04d6b3ac(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>__ctor__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x228) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x228,lVar7);
  }
  FUN_0333d214(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>_GetEnumerator__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x230);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_get_Item__);
    FUN_04d6b0dc(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_Clear__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x230) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x230,lVar7);
  }
  FUN_0333c544(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x238);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Capacity__
                              );
    FUN_04d6b244(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_get_Item__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x238) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x238,lVar7);
  }
  FUN_0333cbac(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionItem>_GetEnumerator__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x240);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>__ctor__)
    ;
    FUN_04d6ae0c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>__ctor__,
                 0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x240) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x240,lVar7);
  }
  FUN_0333b874(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionItem>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x248);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>__ctor__);
    FUN_04d6aec0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>_Add__,0)
    ;
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x248) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x248,lVar7);
  }
  FUN_0333bba8(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x250);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>__ctor__
                              );
    FUN_04d6f1a8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>__ctor__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x250) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x250,lVar7);
  }
  FUN_03345bd0(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 600);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserCapability>_Add__);
    FUN_04d6f694(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Count__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 600) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 600,lVar7);
  }
  FUN_0334723c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_set_Capacity__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x260);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_IndexOf__);
    FUN_04d6f748(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PermissionsManager_PermissionRequest>_get_Item__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x260) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x260,lVar7);
  }
  FUN_03347570(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_set_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x268);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d6f7fc(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>__ctor__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x268) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x268,lVar7);
  }
  FUN_033478a4(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x270);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_Add__);
    FUN_04d6f5e0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Add__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x270) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x270,lVar7);
  }
  FUN_03346f08(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x278);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>_Remove__)
    ;
    FUN_04d6f25c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PlayerEditorConnectionEvents_MessageTypeSubscribers>_Remove__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x278) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x278,lVar7);
  }
  FUN_03345f04(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_get_Capacity__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x280);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_get_Count__);
    FUN_04d6f310(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PointerInputModule_ButtonState>__ctor__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x280) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x280,lVar7);
  }
  FUN_03346238(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x288);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_AddRange__);
    FUN_04d6d4f0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Count__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x288) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x288,lVar7);
  }
  FUN_0333f550(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_Reverse__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x290);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_GetEnumerator__
                              );
    FUN_04d6d874(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<PointerInputModule_ButtonState>_get_Item__,
                 0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x290) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x290,lVar7);
  }
  FUN_03340554(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_Clear__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x298);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Insert__);
    FUN_04d6d658(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>__ctor__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x298) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x298,lVar7);
  }
  FUN_0333fbb8(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2a0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Count__);
    FUN_04d6db44(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_Add__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2a0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2a0,lVar7);
  }
  FUN_03340bbc(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_Contains__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2a8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Item__);
    FUN_04d6d70c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_Clear__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2a8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2a8,lVar7);
  }
  FUN_0333feec(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_set_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2b0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_AddRange__);
    FUN_04d6dbf8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_GetEnumerator__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2b0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2b0,lVar7);
  }
  FUN_03340ef0(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_GetEnumerator__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2b8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Add__);
    FUN_04d6d7c0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_get_Count__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2b8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2b8,lVar7);
  }
  Unity_Jobs_IJobExtensions__Schedule<NativeStreamDisposeJob>(param_1,lVar7,0,*(undefined8 *)puVar1)
  ;
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeIdentifier>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2c0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_04d6dcac(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>_get_Item__,
                 0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2c0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2c0,lVar7);
  }
  FUN_03341224(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_ToArray__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2c8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>__ctor__);
    FUN_04d6d9dc(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>__ctor__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2c8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2c8,lVar7);
  }
  FUN_03340888(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2d0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_GetEnumerator__
                              );
    FUN_04d6d5a4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_Add__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2d0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2d0,lVar7);
  }
  FUN_0333f884(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2d8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Clear__);
    FUN_04d68d00(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_RemoveAt__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2d8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2d8,lVar7);
  }
  FUN_033328e4(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_Remove__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2e0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Add__);
    FUN_04d69084(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_get_Count__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2e0) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2e0,lVar7);
  }
  FUN_033338e8(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_Clear__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2e8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_04d68e68(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_get_Item__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2e8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2e8,lVar7);
  }
  FUN_03332f4c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2f0);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    FUN_0638a0dc(*(undefined8 *)(lVar5 + 0xb8));
    return;
  }
  FUN_03333c1c(param_1,lVar7,0,
               *(undefined8 *)Method_System_Collections_Generic_List<TimelineClip>_ToArray__);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_Contains__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2f8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Capacity__);
    FUN_04d68f1c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_Add__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x2f8) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x2f8,lVar7);
  }
  FUN_03333280(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x300);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Count__);
    FUN_04d691ec(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_GetEnumerator__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x300) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x300,lVar7);
  }
  FUN_03333f50(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_GetEnumerator__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x308);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Value>_GetEnumerator__);
    FUN_04d68fd0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__ctor__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x308) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x308,lVar7);
  }
  FUN_033335b4(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x310);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>__ctor__);
    FUN_04d692a0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>__ctor__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x310) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x310,lVar7);
  }
  FUN_03334284(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_AddRange__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x318);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_GetEnumerator__
                              );
    FUN_04d68db4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_Add__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x318) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x318,lVar7);
  }
  FUN_03332c18(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 800);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Add__
                              );
    FUN_04d69354(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_Clear__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 800) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 800,lVar7);
  }
  FUN_033345b8(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_get_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x328);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Clear__)
    ;
    FUN_04d696d8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRInputModule_InputSource>_get_Count__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x328) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x328,lVar7);
  }
  FUN_0333652c(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_RemoveAt__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x330);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_GetEnumerator__);
    FUN_04d694bc(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRInputModule_InputSource>_get_Item__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x330) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x330,lVar7);
  }
  FUN_03335b90(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>__ctor__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x338);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_ToArray__);
    FUN_04d69840(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRLocatable_TrackingSpacePose>_Add__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x338) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x338,lVar7);
  }
  FUN_03336b94(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_Sort__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x340);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_GetEnumerator__
                              );
    FUN_04d69570(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRLocatable_TrackingSpacePose>_Clear__,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x340) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x340,lVar7);
  }
  FUN_03335ec4(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x348);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Contains__);
    FUN_04d698f4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__ctor__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x348) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x348,lVar7);
  }
  FUN_03336ec8(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_get_Count__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x350);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>__ctor__);
    FUN_04d69624(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_Add__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x350) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x350,lVar7);
  }
  FUN_033361f8(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>_RemoveRange__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x358);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_ToArray__
                              );
    FUN_04d699a8(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_Exists__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x358) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x358,lVar7);
  }
  FUN_033371fc(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_set_Item__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x360);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>__ctor__
                              );
    FUN_04d6978c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_RemoveAll__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x360) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x360,lVar7);
  }
  FUN_03336860(param_1,lVar7,0,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_Add__;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x368);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VariantCheckpoint>_GetEnumerator__
                              );
    FUN_04d69408(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_RemoveAt__
                 ,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar5 + 0x368) = lVar7;
    thunk_FUN_02dd37b4(lVar5 + 0x368,lVar7);
  }
  FUN_0333585c(param_1,lVar7,0,*(undefined8 *)puVar1);
  return;
}


