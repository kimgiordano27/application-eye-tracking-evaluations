/*
FUNCTION_NAME: FUN_05d3bc28
ENTRY_POINT: 05d3bc28
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 285
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_18;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_12;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_8;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05d3bc28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = Method_Unity_Collections_NativeArray<XRSaveAnchorResult>__ctor__;
  puVar4 = Method_Unity_Collections_NativeArray<XRRaycastHit>_get_IsCreated__;
  puVar3 = Method_Unity_Collections_NativeArray<XRRaycastHit>_GetEnumerator__;
  puVar2 = PTR_DAT_0678be18;
  puVar1 = PTR_DAT_067761c8;
  if ((DAT_06b82a84 & 1) == 0) {
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
    FUN_02d6084c(Method_Unity_Collections_NativeArray<XRSaveAnchorResult>_Copy__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<XRSaveAnchorResult>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<XRShareAnchorResult>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<XRShareAnchorResult>_GetEnumerator__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<XRTextureDescriptor>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<XrCompositionLayerProjectionView>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<XrCompositionLayerProjectionView>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<float2>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<float2>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<float2>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<float2>_GetSubArray__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<float3>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<float3>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<float4>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<float4x4>_Reinterpret<Matrix4x4>__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<float4x4>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<quaternion>_Dispose__);
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<ARPointCloudManager_PointCloudRaycastInfo>__ctor__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<ARPointCloudManager_PointCloudRaycastInfo>_Dispose__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__ctor__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>__ctor__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__
                );
    FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__);
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_get_IsCreated__
                );
    FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__);
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                );
    FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__);
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>__ctor__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_Dispose__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_get_IsCreated__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__ctor__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_Dispose__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_get_IsCreated__
                );
    FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>_Add__);
    FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>_Clear__);
    FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>_ContainsKey__);
    FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeHashMap<int,_int>_TryGetValue__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<AttachmentDescriptor>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<AttachmentDescriptor>_AsArray__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<AttachmentDescriptor>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<AttachmentDescriptor>_ElementAt__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<AttachmentDescriptor>_Resize__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_Add__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_Clear__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_get_IsCreated__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_get_Item__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DebugOccluderStats>_get_Length__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_Add__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_ElementAt__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_RemoveAtSwapBack__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_get_IsCreated__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_get_Item__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawBatch>_get_Length__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_Add__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_ElementAt__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_ResizeUninitialized__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_get_IsCreated__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_get_IsEmpty__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawInstance>_get_Length__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_Add__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_ElementAt__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_RemoveAtSwapBack__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_get_IsCreated__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_get_Item__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<DrawRange>_get_Length__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_Add__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_get_IsCreated__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_get_Item__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_get_Length__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>_Add__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>_ResizeUninitialized__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>_get_Item__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<GPUInstanceIndex>_get_Length__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<IndirectBufferContext>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<IndirectBufferContext>_Add__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<IndirectBufferContext>_Clear__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<XRSaveAnchorResult>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<XRRaycastHit>_get_IsCreated__);
    FUN_02d6084c(PTR_DAT_0678be18);
    FUN_02d6084c(PTR_DAT_067761c8);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<XRRaycastHit>_GetEnumerator__);
    DAT_06b82a84 = 1;
  }
  FUN_05ce6dd8(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar4,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2,0);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_Clear__);
    FUN_04d6838c(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<XRSaveAnchorResult>_Copy__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_033305a8(param_1,lVar8,0,
               *(undefined8 *)Method_System_Collections_Generic_List<TimeValue>__ctor__);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Remove__);
    FUN_04d687c4(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__ctor__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_033318e0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_AddRange__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_get_Count__);
    FUN_04d685a8(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03330f44(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Remove__);
    FUN_04d6892c(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__,
                 0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03331f48(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserCapability>__ctor__);
    FUN_04d6865c(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_Add__,0
                );
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03331278(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_04d689e0(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>_Add__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333227c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>_Add__);
    FUN_04d68710(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawBatch>_get_IsCreated__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_033315ac(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>_Clear__);
    FUN_04d68a94(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeList<DrawRange>__ctor__,0
                );
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_033325b0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>__ctor__);
    FUN_04d68878(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_get_IsCreated__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03331c14(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Clear__);
    FUN_04d68440(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeList<IndirectBufferContext>_Clear__,0
                );
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_033308dc(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimeValue>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_RemoveAt__);
    FUN_04d684f4(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<float2>_GetSubArray__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03330c10(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Count__);
    Mono_Math_BigInteger_ModulusRing__Pow
              (lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<float3>__ctor__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x60);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333d548(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TransitionData>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x68);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_set_Item__);
    FUN_04d6d16c(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<float3>_Dispose__,0
                );
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x68);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333e880(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x70);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d6cf50(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<float4>__ctor__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333dee4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrialOffer>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x78);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Capacity__);
    FUN_04d6d2d4(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<float4>_Dispose__,0
                );
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x78);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333eee8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x80);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Add__);
    FUN_04d6d004(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<float4x4>_Reinterpret<Matrix4x4>__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333e218(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x88);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_Add__);
    FUN_04d6d388(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<float4x4>_Dispose__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x88);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333f21c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TransitionData>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x90);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserInputActionSet>__ctor__);
    FUN_04d6d0b8(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<quaternion>_Dispose__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x90);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333e54c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrialOffer>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x98);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Item__);
    FUN_04d6d220(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ARPointCloudManager_PointCloudRaycastInfo>__ctor__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x98);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333ebb4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_Find__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_AddRange__);
    FUN_04d6cde8(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ARPointCloudManager_PointCloudRaycastInfo>_Dispose__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa0);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333d87c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Capacity__
                              );
    FUN_04d6ce9c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>__ctor__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa8);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_0333dbb0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_ToArray__
                              );
    FUN_04d69bc4(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb0);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03337530(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_Find__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xb8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>_GetEnumerator__
                              );
    FUN_04d69ffc(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__ctor__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb8);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03338868(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xc0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d69de0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc0);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03337ecc(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 200);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
    FUN_04d6a164(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_Dispose__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 200);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03338ed0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xd0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d69e94(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xd0);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03338200(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xd8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_AsReadOnly__);
    FUN_04d6a218(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_get_IsCreated__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xd8);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03339204(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_Contains__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_Add__
                              );
    FUN_04d69f48(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xe0);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03338534(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Toggle>_Remove__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Item__);
    FUN_04d6a0b0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xe8);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03338b9c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xf0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>__ctor__);
    FUN_04d69c78(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xf0);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03337864(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>_set_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xf8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ViewerTrigger>_GetEnumerator__
                              );
    FUN_04d69d2c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xf8);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  FUN_03337b98(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeIdentifier>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x100);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Count__);
    FUN_04d6e230(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x100) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x100,lVar8);
  }
  FUN_03341558(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeSpec>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x108);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_04d6e668(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x108) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x108,lVar8);
  }
  FUN_03342890(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeName>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x110);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_get_Item__);
    FUN_04d6e44c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x110) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x110,lVar8);
  }
  FUN_03341ef4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x118);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    FUN_0638a10c(*(undefined8 *)(lVar6 + 0xb8));
    return;
  }
  FUN_03342ef8(param_1,lVar8,0,
               *(undefined8 *)Method_System_Collections_Generic_List<TypeSpec>_get_Count__);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeName>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x120);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d6e500(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__,
                 0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x120) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x120,lVar8);
  }
  FUN_03342228(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeSpec>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x128);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector2>_Add__)
    ;
    FUN_04d6e884(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x128) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x128,lVar8);
  }
  FUN_0334322c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeName>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x130);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Add__);
    FUN_04d6e5b4(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x130) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x130,lVar8);
  }
  FUN_0334255c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UICharInfo>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x138);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_RemoveAt__);
    FUN_04d6e938(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x138) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x138,lVar8);
  }
  FUN_03343560(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeSpec>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x140);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>__ctor__);
    FUN_04d6e71c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x140) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x140,lVar8);
  }
  FUN_03342bc4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeIdentifier>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x148);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_04d6e2e4(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x148) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x148,lVar8);
  }
  FUN_0334188c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeName>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x150);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Item__);
    FUN_04d6e398(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>__ctor__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x150) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x150,lVar8);
  }
  FUN_03341bc0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x158);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_set_Item__);
    FUN_04d6a2cc(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_Dispose__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x158) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x158,lVar8);
  }
  FUN_03339538(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_ToArray__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x160);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_Add__);
    FUN_04d6a9d4(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>_get_IsCreated__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x160) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x160,lVar8);
  }
  FUN_0333a870(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x168);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_AddRange__);
    FUN_04d6a4e8(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__ctor__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x168) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x168,lVar8);
  }
  FUN_03339ed4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x170);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Add__);
    FUN_04d6ab3c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_Dispose__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x170) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x170,lVar8);
  }
  FUN_0333aed8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_AddRange__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x178);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector4>_Add__)
    ;
    FUN_04d6a650(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>_get_IsCreated__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x178) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x178,lVar8);
  }
  FUN_0333a208(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionItem>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x180);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Item__);
    FUN_04d6abf0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x180) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x180,lVar8);
  }
  FUN_0333b20c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x188);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Capacity__);
    FUN_04d6a704(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x188) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x188,lVar8);
  }
  FUN_0333a53c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 400);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_RemoveAt__);
    FUN_04d6aa88(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>__ctor__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 400) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 400,lVar8);
  }
  FUN_0333aba4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x198);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Contains__);
    FUN_04d6a380(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_Clear__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x198) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x198,lVar8);
  }
  FUN_0333986c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TrackAsset>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1a0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_AddRange__);
    FUN_04d6a434(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_ContainsKey__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1a0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1a0,lVar8);
  }
  FUN_03339ba0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1a8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Item__);
    FUN_04d6e9ec(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1a8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1a8,lVar8);
  }
  FUN_03343894(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_Insert__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1b0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector3>_Add__)
    ;
    FUN_04d6ee24(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeHashMap<int,_int>_TryGetValue__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1b0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1b0,lVar8);
  }
  FUN_03344bcc(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_AddRange__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1b8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__);
    Interop_Sys__GetNonCryptographicallySecureRandomBytes
              (lVar8,uVar9,
               *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1b8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1b8,lVar8);
  }
  FUN_03344230(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1c0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_GetEnumerator__
                              );
    FUN_04d6ef8c(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_AsArray__,
                 0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1c0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1c0,lVar8);
  }
  FUN_03345234(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1c8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Clear__);
    FUN_04d6ecbc(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_Dispose__,
                 0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1c8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1c8,lVar8);
  }
  FUN_03344564(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1d0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_Clear__);
    FUN_04d6f040(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<AttachmentDescriptor>_ElementAt__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1d0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1d0,lVar8);
  }
  FUN_03345568(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1d8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UsageHint>_GetEnumerator__);
    FUN_04d6ed70(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeList<AttachmentDescriptor>_Resize__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1d8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1d8,lVar8);
  }
  FUN_03344898(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UILineInfo>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1e0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>__ctor__);
    FUN_04d6f0f4(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1e0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1e0,lVar8);
  }
  FUN_0334589c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_Remove__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1e8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Sort__);
    FUN_04d6eed8(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>_Clear__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1e8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1e8,lVar8);
  }
  FUN_03344f00(param_1,lVar8,0,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0638a53c();
  return;
}


