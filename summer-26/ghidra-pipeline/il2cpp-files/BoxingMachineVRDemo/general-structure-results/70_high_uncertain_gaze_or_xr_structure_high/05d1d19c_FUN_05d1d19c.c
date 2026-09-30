/*
FUNCTION_NAME: FUN_05d1d19c
ENTRY_POINT: 05d1d19c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_05d1d19c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = Method_System_Memory<byte>_Slice__;
  puVar3 = Method_System_Memory<byte>_Slice__;
  puVar2 = PTR_DAT_0678be78;
  puVar1 = PTR_DAT_06781ec0;
  if ((DAT_06b82a1e & 1) == 0) {
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
    FUN_02d6084c(Method_System_Memory<byte>_ToArray__);
    FUN_02d6084c(Method_System_Memory<byte>_get_Length__);
    FUN_02d6084c(Method_System_Memory<byte>_get_Span__);
    FUN_02d6084c(Method_System_Memory<byte>_op_Implicit__);
    FUN_02d6084c(Method_System_Memory<byte>_op_Implicit__);
    FUN_02d6084c(Method_System_Memory<char>__ctor__);
    FUN_02d6084c(Method_System_Memory<char>_get_Length__);
    FUN_02d6084c(Method_System_Memory<char>_get_Span__);
    FUN_02d6084c(Method_System_Memory<IntPtr>_get_Span__);
    FUN_02d6084c(
                Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<ControlConnection>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<GraphGroup>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<IUnit>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<InvalidConnection>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<StickyNote>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<ValueConnection>__
                );
    FUN_02d6084c(Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Clear__);
    FUN_02d6084c(Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Contains__)
    ;
    FUN_02d6084c(
                Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_TryGetValue__
                );
    FUN_02d6084c(Method_Oculus_Platform_Message<AbuseReportRecording>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AbuseReportRecording>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AchievementProgressList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AchievementProgressList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AchievementUpdate>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AchievementUpdate>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AppDownloadProgressResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AppDownloadProgressResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AppDownloadResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AppDownloadResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<ApplicationInviteList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<ApplicationInviteList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<ApplicationVersion>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<ApplicationVersion>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetDetails>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetDetails>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetDetailsList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDeleteResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadCancelResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadCancelResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadUpdate>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AssetFileDownloadUpdate>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AvatarEditorResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<AvatarEditorResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<BlockedUserList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<BlockedUserList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<bool>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<bool>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<Challenge>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<Challenge>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<ChallengeEntryList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<ChallengeEntryList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<ChallengeList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<ChallengeList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<CowatchViewerList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<CowatchViewerList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<CowatchViewerUpdate>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<CowatchViewerUpdate>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<CowatchingState>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<CowatchingState>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<DestinationList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<DestinationList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<GroupPresenceJoinIntent>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<GroupPresenceJoinIntent>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<GroupPresenceLeaveIntent>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<GroupPresenceLeaveIntent>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<HttpTransferUpdate>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<HttpTransferUpdate>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<InstalledApplicationList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<InstalledApplicationList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<InvitePanelResultInfo>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<InvitePanelResultInfo>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LaunchBlockFlowResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LaunchBlockFlowResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LaunchInvitePanelFlowResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LaunchInvitePanelFlowResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LaunchReportFlowResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LaunchUnblockFlowResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LaunchUnblockFlowResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LeaderboardList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LinkedAccountList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LinkedAccountList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingApplicationStatus>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingApplicationStatus>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingStartResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingStartResult>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingStatus>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingVideoStats>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<MicrophoneAvailabilityState>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<MicrophoneAvailabilityState>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncConnection>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>__ctor__);
    FUN_02d6084c(Method_System_Memory<byte>_Slice__);
    FUN_02d6084c(Method_System_Memory<byte>_Slice__);
    FUN_02d6084c(PTR_DAT_06781ec0);
    FUN_02d6084c(PTR_DAT_0678be78);
    DAT_06b82a1e = 1;
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
    FUN_04d6838c(lVar7,uVar8,*(undefined8 *)Method_System_Memory<byte>_ToArray__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  if (param_1 != 0) {
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
                   *(undefined8 *)Method_Oculus_Platform_Message<AbuseReportRecording>__ctor__,0);
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
                   *(undefined8 *)Method_Oculus_Platform_Message<AppDownloadResult>_get_Data__,0);
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
                    Method_Oculus_Platform_Message<AssetFileDownloadCancelResult>__ctor__,0);
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
      FUN_04d6865c(lVar7,uVar8,*(undefined8 *)Method_Oculus_Platform_Message<bool>_get_Data__,0);
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
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__
                                );
      FUN_04d689e0(lVar7,uVar8,
                   *(undefined8 *)Method_Oculus_Platform_Message<CowatchingState>__ctor__,0);
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
                    Method_Oculus_Platform_Message<InstalledApplicationList>_get_Data__,0);
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
                   *(undefined8 *)Method_Oculus_Platform_Message<LaunchUnblockFlowResult>__ctor__,0)
      ;
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
                    Method_Oculus_Platform_Message<LivestreamingStartResult>_get_Data__,0);
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
                    Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>__ctor__,0);
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
                                  Method_System_Collections_Generic_List<UxmlObjectAsset>_RemoveAt__
                                );
      FUN_04d684f4(lVar7,uVar8,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<GraphGroup>__
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
                  Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<IUnit>__
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
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<InvalidConnection>__
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
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<StickyNote>__
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
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Include<ValueConnection>__
                   ,0);
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
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>__ctor__,
                   0);
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
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Clear__,
                   0);
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
                                  Method_System_Collections_Generic_List<UserInputActionSet>__ctor__
                                );
      FUN_04d6d0b8(lVar7,uVar8,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_Contains__
                   ,0);
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
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_GetEnumerator__
                   ,0);
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
                    Method_Unity_VisualScripting_MergedKeyedCollection<Guid,_IGraphElement>_TryGetValue__
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
                   *(undefined8 *)Method_Oculus_Platform_Message<AbuseReportRecording>_get_Data__,0)
      ;
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
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<uint>_ToArray__);
      FUN_04d69bc4(lVar7,uVar8,
                   *(undefined8 *)Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                   0);
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
                    Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__,0);
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
                   *(undefined8 *)Method_Oculus_Platform_Message<AchievementProgressList>__ctor__,0)
      ;
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
                   *(undefined8 *)Method_Oculus_Platform_Message<AchievementProgressList>_get_Data__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 200);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_03338ed0(param_1,lVar7,0,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0638a0ec();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


