/*
FUNCTION_NAME: FUN_05d2b744
ENTRY_POINT: 05d2b744
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 262
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_20;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_6
*/


void FUN_05d2b744(long param_1)

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
  
  puVar5 = Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_Definition__;
  puVar4 = Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>__ctor__;
  puVar3 = Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_get_multiInputs__;
  puVar2 = PTR_DAT_0678be20;
  puVar1 = PTR_DAT_06775140;
  if ((DAT_06b82a46 & 1) == 0) {
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
    FUN_02d6084c(Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_get_multiInputs__);
    FUN_02d6084c(Method_Unity_VisualScripting_MultiInputUnit<object>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_MultiInputUnit<object>_Definition__);
    FUN_02d6084c(Method_Unity_VisualScripting_MultiInputUnit<object>_InputsAllowNull__);
    FUN_02d6084c(Method_Unity_VisualScripting_MultiInputUnit<object>_get_inputCount__);
    FUN_02d6084c(Method_Unity_VisualScripting_MultiInputUnit<object>_get_multiInputs__);
    FUN_02d6084c(Method_Unity_VisualScripting_MultiInputUnit<object>_set_inputCount__);
    FUN_02d6084c(Method_Unity_VisualScripting_Multiply<object>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Multiply<float>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Multiply<Vector2>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Multiply<Vector3>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_Multiply<Vector4>__ctor__);
    FUN_02d6084c(Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__);
    FUN_02d6084c(Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    FUN_02d6084c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    FUN_02d6084c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
    FUN_02d6084c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    FUN_02d6084c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    FUN_02d6084c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__);
    FUN_02d6084c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    FUN_02d6084c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    FUN_02d6084c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<NativeArray<XRTextureDescriptor>>__ctor__);
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<NativeArray<XRTextureDescriptor>>_GetEnumerator__
                );
    FUN_02d6084c(Method_Unity_Collections_NativeArray<AABB>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<AABB>_AsReadOnly__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<AABB>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<AABB>_GetSubArray__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<AttachmentDescriptor>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<AttachmentDescriptor>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<AttachmentDescriptor>_op_Implicit__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BatchMaterialID>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BatchMaterialID>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BatchMaterialID>_op_Implicit__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BatchMeshID>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BatchMeshID>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BatchMeshID>_op_Implicit__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BoneWeight>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BoneWeight>_ToArray__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<bool>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<bool>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<bool>_get_IsCreated__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BoundingSphere>_CopyTo__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<BoundingSphere>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_Reinterpret<byte>__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_Reinterpret<float>__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_Reinterpret<Vector3>__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_AsSpan__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_CopyFrom__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_CopyTo__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_Equals__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_GetHashCode__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_GetSubArray__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<byte>_get_IsCreated__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_AsReadOnly__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_GetSubArray__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<Color>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<Color>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_get_IsCreated__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<DecalEntity>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<DecalScaleMode>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<DecalSubDrawCall>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>_AsReadOnly__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>_GetEnumerator__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>_get_IsCreated__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<GPUInstanceIndex>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<GPUInstanceIndex>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<InclusiveRange>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<InclusiveRange>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<InclusiveRange>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>_GetSubArray__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<IndirectDrawInfo>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<IndirectDrawInfo>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<IndirectInstanceInfo>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<IndirectInstanceInfo>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<InstanceHandle>_Reinterpret<int>__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<InstanceHandle>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<InstanceHandle>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<InstanceHandle>_AsReadOnly__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<InstanceHandle>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<InstanceHandle>_GetEnumerator__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<InstanceHandle>_GetSubArray__);
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<InstanceOcclusionCullerShaderVariables>__ctor__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray<InstanceOcclusionCullerShaderVariables>_Dispose__
                );
    FUN_02d6084c(Method_Unity_Collections_NativeArray<short>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<short>_Dispose__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<int>_Reinterpret<OVRTriangleMesh_Triangle>__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<int>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<int>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<int>_AsReadOnly__);
    FUN_02d6084c(Method_Unity_Collections_NativeArray<int>_Copy__);
    FUN_02d6084c(Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_Definition__);
    FUN_02d6084c(Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>__ctor__);
    FUN_02d6084c(PTR_DAT_0678be20);
    FUN_02d6084c(PTR_DAT_06775140);
    FUN_02d6084c(Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_get_multiInputs__);
    DAT_06b82a46 = 1;
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
                 *(undefined8 *)
                  Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_get_multiInputs__,0);
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
                 *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<BatchMaterialID>__ctor__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<bool>_get_IsCreated__,0);
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
    FUN_04d6865c(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>_AsSpan__,0);
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
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_Dispose__,0);
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
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>_AsReadOnly__,0);
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
    FUN_04d68a94(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>__ctor__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<InstanceHandle>_Dispose__,0);
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
    FUN_04d68440(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<int>_Copy__,0);
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
    FUN_04d684f4(lVar8,uVar9,*(undefined8 *)Method_Unity_VisualScripting_Multiply<Vector3>__ctor__,0
                );
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
              (lVar8,uVar9,*(undefined8 *)Method_Unity_VisualScripting_Multiply<Vector4>__ctor__,0);
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
    FUN_04d6d16c(lVar8,uVar9,*(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__,0);
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
    FUN_04d6cf50(lVar8,uVar9,*(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__,0)
    ;
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
    FUN_04d6d2d4(lVar8,uVar9,
                 *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__,0);
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
                 *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__,0
                );
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
    FUN_04d6d388(lVar8,uVar9,
                 *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__,0);
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
                 *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__,0
                );
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
                 *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__,0);
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
                 *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__,0
                );
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
                 *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__,0
                );
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
                  Method_Unity_Collections_NativeArray<NativeArray<XRTextureDescriptor>>__ctor__,0);
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
                  Method_Unity_Collections_NativeArray<NativeArray<XRTextureDescriptor>>_GetEnumerator__
                 ,0);
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
    FUN_04d69de0(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<AABB>__ctor__,0);
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
    FUN_04d6a164(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<AABB>_AsReadOnly__,
                 0);
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
    FUN_04d69e94(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<AABB>_Dispose__,0);
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
    FUN_04d6a218(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<AABB>_GetSubArray__
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<AttachmentDescriptor>__ctor__,0
                );
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<AttachmentDescriptor>_Dispose__
                 ,0);
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
                  Method_Unity_Collections_NativeArray<AttachmentDescriptor>_op_Implicit__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<BatchMaterialID>_Dispose__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<BatchMaterialID>_op_Implicit__,
                 0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<BatchMeshID>__ctor__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<BatchMeshID>_Dispose__,0);
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
  puVar1 = Method_System_Collections_Generic_List<TypeSpec>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x118);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_04d6e7d0(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<BatchMeshID>_op_Implicit__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x118) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x118,lVar8);
  }
  FUN_03342ef8(param_1,lVar8,0,*(undefined8 *)puVar1);
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
    FUN_04d6e500(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<BoneWeight>__ctor__
                 ,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<BoneWeight>_Dispose__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<BoneWeight>_ToArray__,0);
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
    FUN_04d6e938(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<bool>__ctor__,0);
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
    FUN_04d6e71c(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<bool>_Dispose__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<BoundingSphere>_CopyTo__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<BoundingSphere>_Dispose__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Reinterpret<byte>__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Reinterpret<float>__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Reinterpret<ushort>__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Reinterpret<Vector3>__,0)
    ;
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
    FUN_04d6abf0(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>__ctor__,0);
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
    FUN_04d6a704(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>__ctor__,0);
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
    FUN_04d6aa88(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>__ctor__,0);
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
    FUN_04d6a380(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>_CopyFrom__,0)
    ;
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
    FUN_04d6a434(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>_CopyTo__,0);
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
    FUN_04d6e9ec(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Dispose__,0);
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
    FUN_04d6ee24(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Dispose__,0);
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
              (lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Equals__,0);
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
    FUN_04d6ef8c(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>_GetHashCode__
                 ,0);
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
    FUN_04d6ecbc(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<byte>_GetSubArray__
                 ,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_get_IsCreated__,0);
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
                 *(undefined8 *)Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>__ctor__
                 ,0);
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
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_AsReadOnly__,0);
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
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<CPUSharedInstanceFlags>_GetSubArray__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1e8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1e8,lVar8);
  }
  FUN_03344f00(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1f0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>_Add__);
    FUN_04d6eaa0(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<Color>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1f0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1f0,lVar8);
  }
  FUN_03343bc8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIDocument>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x1f8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_GetEnumerator__);
    FUN_04d6eb54(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<Color>_Dispose__,0)
    ;
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x1f8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x1f8,lVar8);
  }
  FUN_03343efc(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionItem>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x200);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_set_Item__);
    FUN_04d6ad58(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x200) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x200,lVar8);
  }
  FUN_0333b540(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x208);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Count__)
    ;
    FUN_04d6b190(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_get_IsCreated__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x208) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x208,lVar8);
  }
  FUN_0333c878(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x210);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Sort__
                              );
    FUN_04d6af74(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x210) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x210,lVar8);
  }
  FUN_0333bedc(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x218);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_get_Item__);
    FUN_04d6b2f8(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<DecalEntity>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x218) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x218,lVar8);
  }
  FUN_0333cee0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x220);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>_ToArray__);
    FUN_04d6b028(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<DecalScaleMode>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x220) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x220,lVar8);
  }
  FUN_0333c210(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x228);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>_Clear__);
    FUN_04d6b3ac(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<DecalSubDrawCall>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x228) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x228,lVar8);
  }
  FUN_0333d214(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x230);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    FUN_0638a534(*(undefined8 *)(lVar6 + 0xb8));
    return;
  }
  FUN_0333c544(param_1,lVar8,0,
               *(undefined8 *)
                Method_System_Collections_Generic_List<TransactionVirtualCurrency>_GetEnumerator__);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Transform>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x238);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Capacity__
                              );
    FUN_04d6b244(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x238) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x238,lVar8);
  }
  FUN_0333cbac(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionItem>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x240);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>__ctor__)
    ;
    FUN_04d6ae0c(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>_GetEnumerator__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x240) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x240,lVar8);
  }
  FUN_0333b874(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TransactionItem>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x248);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>__ctor__);
    FUN_04d6aec0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>_get_IsCreated__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x248) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x248,lVar8);
  }
  FUN_0333bba8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x250);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>__ctor__
                              );
    FUN_04d6f1a8(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<GPUInstanceIndex>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x250) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x250,lVar8);
  }
  FUN_03345bd0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 600);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserCapability>_Add__);
    FUN_04d6f694(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<GPUInstanceIndex>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 600) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 600,lVar8);
  }
  FUN_0334723c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_set_Capacity__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x260);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_IndexOf__);
    FUN_04d6f748(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>__ctor__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x260) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x260,lVar8);
  }
  FUN_03347570(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_set_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x268);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d6f7fc(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x268) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x268,lVar8);
  }
  FUN_033478a4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x270);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_Add__);
    FUN_04d6f5e0(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<InclusiveRange>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x270) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x270,lVar8);
  }
  FUN_03346f08(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x278);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>_Remove__)
    ;
    FUN_04d6f25c(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<InclusiveRange>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x278) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x278,lVar8);
  }
  FUN_03345f04(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<UIVertex>_get_Capacity__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x280);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_get_Count__);
    FUN_04d6f310(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<InclusiveRange>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x280) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x280,lVar8);
  }
  FUN_03346238(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x288);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_AddRange__);
    FUN_04d6d4f0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x288) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x288,lVar8);
  }
  FUN_0333f550(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_Reverse__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x290);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_GetEnumerator__
                              );
    FUN_04d6d874(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>_GetSubArray__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x290) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x290,lVar8);
  }
  FUN_03340554(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x298);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Insert__);
    FUN_04d6d658(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<IndirectDrawInfo>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x298) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x298,lVar8);
  }
  FUN_0333fbb8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2a0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Count__);
    FUN_04d6db44(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<IndirectDrawInfo>_Dispose__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2a0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2a0,lVar8);
  }
  FUN_03340bbc(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_Contains__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2a8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Item__);
    FUN_04d6d70c(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<IndirectInstanceInfo>__ctor__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2a8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2a8,lVar8);
  }
  FUN_0333feec(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_set_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2b0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_AddRange__);
    FUN_04d6dbf8(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<IndirectInstanceInfo>_Dispose__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2b0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2b0,lVar8);
  }
  FUN_03340ef0(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2b8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Add__);
    FUN_04d6d7c0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<InstanceHandle>_Reinterpret<int>__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2b8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2b8,lVar8);
  }
  Unity_Jobs_IJobExtensions__Schedule<NativeStreamDisposeJob>(param_1,lVar8,0,*(undefined8 *)puVar1)
  ;
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TypeIdentifier>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2c0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_04d6dcac(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<InstanceHandle>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2c0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2c0,lVar8);
  }
  FUN_03341224(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_ToArray__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2c8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>__ctor__);
    FUN_04d6d9dc(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<InstanceHandle>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2c8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2c8,lVar8);
  }
  FUN_03340888(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Type>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2d0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_GetEnumerator__
                              );
    FUN_04d6d5a4(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<InstanceHandle>_AsReadOnly__,0)
    ;
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2d0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2d0,lVar8);
  }
  FUN_0333f884(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2d8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Clear__);
    FUN_04d68d00(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<InstanceHandle>_GetEnumerator__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2d8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2d8,lVar8);
  }
  FUN_033328e4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_Remove__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2e0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Add__);
    FUN_04d69084(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<InstanceHandle>_GetSubArray__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2e0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2e0,lVar8);
  }
  FUN_033338e8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_Clear__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2e8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_04d68e68(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<InstanceOcclusionCullerShaderVariables>__ctor__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2e8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2e8,lVar8);
  }
  FUN_03332f4c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_ToArray__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2f0);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>__ctor__);
    FUN_04d69138(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<InstanceOcclusionCullerShaderVariables>_Dispose__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2f0) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2f0,lVar8);
  }
  FUN_03333c1c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_Contains__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2f8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Capacity__);
    FUN_04d68f1c(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<short>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x2f8) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x2f8,lVar8);
  }
  FUN_03333280(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x300);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Count__);
    FUN_04d691ec(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<short>_Dispose__,0)
    ;
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x300) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x300,lVar8);
  }
  FUN_03333f50(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_GetEnumerator__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x308);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Value>_GetEnumerator__);
    FUN_04d68fd0(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<int>_Reinterpret<OVRTriangleMesh_Triangle>__,
                 0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x308) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x308,lVar8);
  }
  FUN_033335b4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x310);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>__ctor__);
    FUN_04d692a0(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<int>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x310) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x310,lVar8);
  }
  FUN_03334284(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimelineClip>_AddRange__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x318);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_GetEnumerator__
                              );
    FUN_04d68db4(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<int>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x318) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x318,lVar8);
  }
  FUN_03332c18(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 800);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Add__
                              );
    FUN_04d69354(lVar8,uVar9,*(undefined8 *)Method_Unity_Collections_NativeArray<int>_AsReadOnly__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 800) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 800,lVar8);
  }
  FUN_033345b8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_get_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x328);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Clear__)
    ;
    FUN_04d696d8(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_VisualScripting_MultiInputUnit<object>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x328) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x328,lVar8);
  }
  FUN_0333652c(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_RemoveAt__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x330);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_GetEnumerator__);
    FUN_04d694bc(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_VisualScripting_MultiInputUnit<object>_Definition__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x330) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x330,lVar8);
  }
  FUN_03335b90(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>__ctor__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x338);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_ToArray__);
    FUN_04d69840(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_MultiInputUnit<object>_InputsAllowNull__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x338) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x338,lVar8);
  }
  FUN_03336b94(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_Sort__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x340);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_GetEnumerator__
                              );
    FUN_04d69570(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_VisualScripting_MultiInputUnit<object>_get_inputCount__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x340) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x340,lVar8);
  }
  FUN_03335ec4(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x348);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Contains__);
    FUN_04d698f4(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_MultiInputUnit<object>_get_multiInputs__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x348) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x348,lVar8);
  }
  FUN_03336ec8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_get_Count__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x350);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>__ctor__);
    FUN_04d69624(lVar8,uVar9,
                 *(undefined8 *)Method_Unity_VisualScripting_MultiInputUnit<object>_set_inputCount__
                 ,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x350) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x350,lVar8);
  }
  FUN_033361f8(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<TimingRecord>_RemoveRange__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x358);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_ToArray__
                              );
    FUN_04d699a8(lVar8,uVar9,*(undefined8 *)Method_Unity_VisualScripting_Multiply<object>__ctor__,0)
    ;
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x358) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x358,lVar8);
  }
  FUN_033371fc(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_set_Item__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x360);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>__ctor__
                              );
    FUN_04d6978c(lVar8,uVar9,*(undefined8 *)Method_Unity_VisualScripting_Multiply<float>__ctor__,0);
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x360) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x360,lVar8);
  }
  FUN_03336860(param_1,lVar8,0,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  puVar1 = Method_System_Collections_Generic_List<Timer>_Add__;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x368);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VariantCheckpoint>_GetEnumerator__
                              );
    FUN_04d69408(lVar8,uVar9,*(undefined8 *)Method_Unity_VisualScripting_Multiply<Vector2>__ctor__,0
                );
    lVar6 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar6 + 0x368) = lVar8;
    thunk_FUN_02dd37b4(lVar6 + 0x368,lVar8);
  }
  FUN_0333585c(param_1,lVar8,0,*(undefined8 *)puVar1);
  return;
}


