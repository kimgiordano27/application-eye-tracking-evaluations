/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARDebugMenu$$ConfigureMenuPosition
ENTRY_POINT: 05cf4864
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_14;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_ARFoundation_ARDebugMenu__ConfigureMenuPosition(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
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
  FUN_02d6084c(Method_System_Collections_Generic_List<TransactionVirtualCurrency>_GetEnumerator__);
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
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>__ctor__)
  ;
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Add__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_GetEnumerator__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Sort__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_Add__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_GetEnumerator__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_ToArray__
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
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_ValueTuple>_Find__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_ValueTuple>_Remove__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_Widget>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_Widget>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_Widget>_AddRange__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_Widget>_Clear__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_Widget>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_Widget>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_Clear__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_get_Count__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_get_Item__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_set_Item__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_Clear__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_RemoveRange__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_Sort__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_get_Item__)
  ;
  FUN_02d6084c(Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_set_Item__)
  ;
  FUN_02d6084c(Method_System_Collections_Generic_List<DiscriminatedUnionConverter_UnionCase>__ctor__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<DiscriminatedUnionConverter_UnionCase>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_DropdownItem>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_DropdownItem>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_DropdownItem>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_OptionData>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_OptionData>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_OptionData>_AddRange__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_OptionData>_Clear__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_OptionData>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<Dropdown_OptionData>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EarlyInitHelpers_EarlyInitFunction>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EarlyInitHelpers_EarlyInitFunction>_Add__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<EarlyInitHelpers_EarlyInitFunction>_get_Count__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<EarlyInitHelpers_EarlyInitFunction>_get_Item__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<EntryPreProcessor_AllocSize>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EntryPreProcessor_AllocSize>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EntryPreProcessor_AllocSize>_Clear__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EntryPreProcessor_AllocSize>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EntryPreProcessor_AllocSize>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EventProvider_Registration>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EventProvider_Registration>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EventProvider_Registration>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EventProvider_Registration>_RemoveAll__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EventProvider_Registration>_Sort__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EventProvider_Registration>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EventTrigger_Entry>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EventTrigger_Entry>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<EventTrigger_Entry>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<FocusController_FocusedElement>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<FocusController_FocusedElement>_Clear__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<FocusController_FocusedElement>_GetEnumerator__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<FocusController_FocusedElement>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<FocusController_FocusedElement>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_AddRange__);
  FUN_02d6084c(Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_GetEnumerator__)
  ;
  FUN_02d6084c(Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_ToArray__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_set_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDElementDescriptor>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_GetEnumerator__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_ToArray__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_set_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HIDParser_HIDReportData>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HIDParser_HIDReportData>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HIDParser_HIDReportData>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HIDParser_HIDReportData>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<HIDParser_HIDReportData>_set_Item__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo>__ctor__
              );
  FUN_02d6084c(
              Method_System_Collections_Generic_List<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo>_Add__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<InputActionMap_BindingOverrideJson>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<InputActionMap_BindingOverrideJson>_Add__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<InputActionMap_BindingOverrideJson>_GetEnumerator__
              );
  FUN_02d6084c(
              Method_System_Collections_Generic_List<InputActionMap_BindingOverrideJson>_get_Count__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<InputControlLayout_ControlItem>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_AddRange__);
  FUN_02d6084c(Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_ToArray__);
  FUN_02d6084c(Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_set_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<JsonParser_JsonValue>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<JsonParser_JsonValue>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<JsonParser_JsonValue>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<JsonParser_JsonValue>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<JsonSchemaGenerator_TypeSchema>__ctor__);
  FUN_02d6084c(
              Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
              );
  FUN_02d6084c(
              Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_Add__
              );
  FUN_02d6084c(
              Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_GetEnumerator__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>__ctor__)
  ;
  FUN_02d6084c(Method_System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_Exists__
              );
  FUN_02d6084c(Method_System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_Find__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_ValueTuple>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<DebugUI_ValueTuple>__ctor__);
  FUN_02d6084c(PTR_DAT_0678bc60);
  FUN_02d6084c(PTR_DAT_06781ed0);
  FUN_02d6084c(PTR_DAT_0678d0c8);
  *(undefined1 *)(unaff_x20 + 0x9b5) = 1;
  FUN_05ce6dd8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_Clear__);
    FUN_04d6838c(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_ValueTuple>_Find__,0)
    ;
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_033305a8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Remove__);
    FUN_04d687c4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_get_Item__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_033318e0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_get_Count__);
    FUN_04d685a8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Dropdown_OptionData>_AddRange__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03330f44();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Remove__);
    FUN_04d6892c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EntryPreProcessor_AllocSize>_get_Count__,0)
    ;
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03331f48();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x28) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserCapability>__ctor__);
    FUN_04d6865c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03331278();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x30) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_04d689e0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_get_Item__,0)
    ;
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333227c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x38) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>_Add__);
    FUN_04d68710(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_ToArray__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_033315ac();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x40) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>_Clear__);
    FUN_04d68a94(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputActionMap_BindingOverrideJson>__ctor__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_033325b0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x48) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>__ctor__);
    FUN_04d68878(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<JsonParser_JsonValue>__ctor__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03331c14();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x50) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Clear__);
    FUN_04d68440(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_Find__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_033308dc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x58) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_RemoveAt__);
    FUN_04d684f4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_Add__,0
                );
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03330c10();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x60) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Count__);
    Mono_Math_BigInteger_ModulusRing__Pow
              (uVar2,uVar4,
               *(undefined8 *)
                Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_Clear__,0
              );
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333d548();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x68) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_set_Item__);
    FUN_04d6d16c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_get_Count__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333e880();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x70) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d6cf50(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_get_Item__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333dee4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x78) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Capacity__);
    FUN_04d6d2d4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_set_Item__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333eee8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x80) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Add__);
    FUN_04d6d004(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>__ctor__,
                 0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333e218();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x88) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_Add__);
    FUN_04d6d388(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_Add__,0)
    ;
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333f21c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x90) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserInputActionSet>__ctor__);
    FUN_04d6d0b8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_Clear__,
                 0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333e54c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x98) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_get_Item__);
    FUN_04d6d220(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_RemoveRange__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333ebb4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_AddRange__);
    FUN_04d6cde8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_Sort__,0
                );
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333d87c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xa8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Capacity__
                              );
    FUN_04d6ce9c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_set_Item__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_0333dbb0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_ToArray__
                              );
    FUN_04d69bc4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DiscriminatedUnionConverter_UnionCase>__ctor__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03337530();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xb8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>_GetEnumerator__
                              );
    FUN_04d69ffc(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DiscriminatedUnionConverter_UnionCase>_Add__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03338868();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xc0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d69de0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>__ctor__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03337ecc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 200) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
    FUN_04d6a164(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Add__,
                 0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03338ed0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d69e94(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03338200();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xd8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_AsReadOnly__);
    FUN_04d6a218(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_get_Count__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03339204();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_Add__
                              );
    FUN_04d69f48(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_get_Item__,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03338534();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xe8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Item__);
    FUN_04d6a0b0(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<Dropdown_OptionData>__ctor__,
                 0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03338b9c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>__ctor__);
    FUN_04d69c78(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<Dropdown_OptionData>_Add__,0)
    ;
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03337864();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0xf8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ViewerTrigger>_GetEnumerator__
                              );
    FUN_04d69d2c(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<Dropdown_OptionData>_Clear__,
                 0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  FUN_03337b98();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x100) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Count__);
    FUN_04d6e230(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Dropdown_OptionData>_get_Count__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x100) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x100,uVar2);
  }
  FUN_03341558();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x108) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_04d6e668(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<Dropdown_OptionData>_get_Item__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x108) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x108,uVar2);
  }
  FUN_03342890();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x110) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_get_Item__);
    FUN_04d6e44c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EarlyInitHelpers_EarlyInitFunction>__ctor__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x110) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x110,uVar2);
  }
  FUN_03341ef4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_04d6e7d0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EarlyInitHelpers_EarlyInitFunction>_Add__,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x118) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x118,uVar2);
  }
  FUN_03342ef8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_04d6e500(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EarlyInitHelpers_EarlyInitFunction>_get_Count__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x120) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x120,uVar2);
  }
  FUN_03342228();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector2>_Add__)
    ;
    FUN_04d6e884(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EarlyInitHelpers_EarlyInitFunction>_get_Item__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x128) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x128,uVar2);
  }
  FUN_0334322c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Add__);
    FUN_04d6e5b4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EntryPreProcessor_AllocSize>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x130) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x130,uVar2);
  }
  FUN_0334255c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_RemoveAt__);
    FUN_04d6e938(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EntryPreProcessor_AllocSize>_Add__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x138) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x138,uVar2);
  }
  FUN_03343560();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>__ctor__);
    FUN_04d6e71c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EntryPreProcessor_AllocSize>_Clear__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x140) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x140,uVar2);
  }
  FUN_03342bc4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_04d6e2e4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EntryPreProcessor_AllocSize>_get_Item__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x148) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x148,uVar2);
  }
  FUN_0334188c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Item__);
    FUN_04d6e398(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EventProvider_Registration>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x150) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x150,uVar2);
  }
  FUN_03341bc0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_set_Item__);
    FUN_04d6a2cc(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EventProvider_Registration>_Add__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x158) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x158,uVar2);
  }
  FUN_03339538();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>_Add__);
    FUN_04d6a9d4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EventProvider_Registration>_GetEnumerator__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x160) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x160,uVar2);
  }
  FUN_0333a870();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_AddRange__);
    FUN_04d6a4e8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EventProvider_Registration>_RemoveAll__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x168) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x168,uVar2);
  }
  FUN_03339ed4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_Add__);
    FUN_04d6ab3c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EventProvider_Registration>_Sort__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x170) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x170,uVar2);
  }
  FUN_0333aed8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector4>_Add__)
    ;
    FUN_04d6a650(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EventProvider_Registration>_get_Count__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x178) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x178,uVar2);
  }
  FUN_0333a208();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Item__);
    FUN_04d6abf0(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<EventTrigger_Entry>__ctor__,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x180) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x180,uVar2);
  }
  FUN_0333b20c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_get_Capacity__);
    FUN_04d6a704(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EventTrigger_Entry>_get_Count__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x188) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x188,uVar2);
  }
  FUN_0333a53c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_RemoveAt__);
    FUN_04d6aa88(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<EventTrigger_Entry>_get_Item__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 400) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 400,uVar2);
  }
  FUN_0333aba4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_Contains__);
    FUN_04d6a380(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<FocusController_FocusedElement>_Add__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x198) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x198,uVar2);
  }
  FUN_0333986c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_AddRange__);
    FUN_04d6a434(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<FocusController_FocusedElement>_Clear__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1a0,uVar2);
  }
  FUN_03339ba0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Item__);
    FUN_04d6e9ec(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<FocusController_FocusedElement>_GetEnumerator__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1a8,uVar2);
  }
  FUN_03343894();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Vector3>_Add__)
    ;
    FUN_04d6ee24(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<FocusController_FocusedElement>_get_Count__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1b0,uVar2);
  }
  FUN_03344bcc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__);
    Interop_Sys__GetNonCryptographicallySecureRandomBytes
              (uVar2,uVar4,
               *(undefined8 *)
                Method_System_Collections_Generic_List<FocusController_FocusedElement>_get_Item__,0)
    ;
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1b8,uVar2);
  }
  FUN_03344230();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_GetEnumerator__
                              );
    FUN_04d6ef8c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1c0,uVar2);
  }
  FUN_03345234();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Clear__);
    FUN_04d6ecbc(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_Add__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1c8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1c8,uVar2);
  }
  FUN_03344564();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_Clear__);
    FUN_04d6f040(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_AddRange__,0)
    ;
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1d0,uVar2);
  }
  FUN_03345568();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UsageHint>_GetEnumerator__);
    FUN_04d6ed70(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_GetEnumerator__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1d8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1d8,uVar2);
  }
  FUN_03344898();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>__ctor__);
    FUN_04d6f0f4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_get_Count__,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1e0,uVar2);
  }
  FUN_0334589c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Sort__);
    FUN_04d6eed8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1e8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1e8,uVar2);
  }
  FUN_03344f00();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1f0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>_Add__);
    FUN_04d6eaa0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_Add__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1f0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1f0,uVar2);
  }
  FUN_03343bc8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1f8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_GetEnumerator__);
    FUN_04d6eb54(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_GetEnumerator__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x1f8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x1f8,uVar2);
  }
  FUN_03343efc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x200) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_set_Item__);
    FUN_04d6ad58(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_ToArray__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x200) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x200,uVar2);
  }
  FUN_0333b540();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x208) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Count__)
    ;
    FUN_04d6b190(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_get_Count__,0)
    ;
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x208) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x208,uVar2);
  }
  FUN_0333c878();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x210) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Sort__
                              );
    FUN_04d6af74(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_get_Item__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x210) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x210,uVar2);
  }
  FUN_0333bedc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x218) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_get_Item__);
    FUN_04d6b2f8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_set_Item__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x218) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x218,uVar2);
  }
  FUN_0333cee0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x220) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>_ToArray__);
    FUN_04d6b028(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDElementDescriptor>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x220) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x220,uVar2);
  }
  FUN_0333c210();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x228) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>_Clear__);
    FUN_04d6b3ac(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_Add__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x228) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x228,uVar2);
  }
  FUN_0333d214();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x230) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_get_Item__);
    FUN_04d6b0dc(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_GetEnumerator__,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x230) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x230,uVar2);
  }
  FUN_0333c544();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x238) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    FUN_0638a524(*(undefined8 *)(lVar1 + 0xb8));
    return;
  }
  FUN_0333cbac();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x240) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>__ctor__)
    ;
    FUN_04d6ae0c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_get_Item__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x240) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x240,uVar2);
  }
  FUN_0333b874();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x248) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>__ctor__);
    FUN_04d6aec0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HID_HIDElementDescriptor>_set_Item__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x248) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x248,uVar2);
  }
  FUN_0333bba8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x250) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>__ctor__
                              );
    FUN_04d6f1a8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HIDParser_HIDReportData>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x250) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x250,uVar2);
  }
  FUN_03345bd0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 600) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserCapability>_Add__);
    FUN_04d6f694(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HIDParser_HIDReportData>_Add__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 600) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 600,uVar2);
  }
  FUN_0334723c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x260) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_IndexOf__);
    FUN_04d6f748(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HIDParser_HIDReportData>_get_Count__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x260) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x260,uVar2);
  }
  FUN_03347570();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x268) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d6f7fc(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HIDParser_HIDReportData>_get_Item__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x268) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x268,uVar2);
  }
  FUN_033478a4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x270) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_Add__);
    FUN_04d6f5e0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<HIDParser_HIDReportData>_set_Item__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x270) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x270,uVar2);
  }
  FUN_03346f08();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x278) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>_Remove__)
    ;
    FUN_04d6f25c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo>__ctor__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x278) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x278,uVar2);
  }
  FUN_03345f04();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x280) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_get_Count__);
    FUN_04d6f310(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo>_Add__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x280) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x280,uVar2);
  }
  FUN_03346238();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x288) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_AddRange__);
    FUN_04d6d4f0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputActionMap_BindingOverrideJson>_Add__,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x288) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x288,uVar2);
  }
  FUN_0333f550();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x290) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_GetEnumerator__
                              );
    FUN_04d6d874(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputActionMap_BindingOverrideJson>_GetEnumerator__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x290) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x290,uVar2);
  }
  FUN_03340554();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x298) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Insert__);
    FUN_04d6d658(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputActionMap_BindingOverrideJson>_get_Count__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x298) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x298,uVar2);
  }
  FUN_0333fbb8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2a0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Count__);
    FUN_04d6db44(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputControlLayout_ControlItem>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2a0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2a0,uVar2);
  }
  FUN_03340bbc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2a8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Item__);
    FUN_04d6d70c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_Add__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2a8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2a8,uVar2);
  }
  FUN_0333feec();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2b0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_AddRange__);
    FUN_04d6dbf8(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_AddRange__,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2b0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2b0,uVar2);
  }
  FUN_03340ef0();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2b8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Add__);
    FUN_04d6d7c0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_ToArray__,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2b8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2b8,uVar2);
  }
  Unity_Jobs_IJobExtensions__Schedule<NativeStreamDisposeJob>();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2c0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_04d6dcac(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_get_Count__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2c0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2c0,uVar2);
  }
  FUN_03341224();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2c8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>__ctor__);
    FUN_04d6d9dc(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_get_Item__,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2c8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2c8,uVar2);
  }
  FUN_03340888();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2d0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_GetEnumerator__
                              );
    FUN_04d6d5a4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_set_Item__,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2d0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2d0,uVar2);
  }
  FUN_0333f884();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2d8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Clear__);
    FUN_04d68d00(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<JsonParser_JsonValue>_Add__,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2d8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2d8,uVar2);
  }
  FUN_033328e4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2e0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Add__);
    FUN_04d69084(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<JsonParser_JsonValue>_get_Count__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2e0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2e0,uVar2);
  }
  FUN_033338e8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2e8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_04d68e68(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<JsonParser_JsonValue>_get_Item__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2e8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2e8,uVar2);
  }
  FUN_03332f4c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2f0) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>__ctor__);
    FUN_04d69138(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<JsonSchemaGenerator_TypeSchema>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2f0) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2f0,uVar2);
  }
  FUN_03333c1c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x2f8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Capacity__);
    FUN_04d68f1c(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x2f8) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x2f8,uVar2);
  }
  FUN_03333280();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x300) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Count__);
    FUN_04d691ec(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_Add__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x300) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x300,uVar2);
  }
  FUN_03333f50();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x308) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Value>_GetEnumerator__);
    FUN_04d68fd0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_GetEnumerator__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x308) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x308,uVar2);
  }
  FUN_033335b4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x310) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>__ctor__);
    FUN_04d692a0(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>__ctor__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x310) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x310,uVar2);
  }
  FUN_03334284();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x318) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_GetEnumerator__
                              );
    FUN_04d68db4(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_Add__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x318) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x318,uVar2);
  }
  FUN_03332c18();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 800) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Add__
                              );
    FUN_04d69354(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_Exists__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 800) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 800,uVar2);
  }
  FUN_033345b8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x328) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Clear__)
    ;
    FUN_04d696d8(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_ValueTuple>_Remove__,
                 0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x328) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x328,uVar2);
  }
  FUN_0333652c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x330) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_GetEnumerator__);
    FUN_04d694bc(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x330) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x330,uVar2);
  }
  FUN_03335b90();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x338) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_ToArray__);
    FUN_04d69840(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>_Add__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x338) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x338,uVar2);
  }
  FUN_03336b94();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x340) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_GetEnumerator__
                              );
    FUN_04d69570(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>_AddRange__,0)
    ;
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x340) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x340,uVar2);
  }
  FUN_03335ec4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x348) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Contains__);
    FUN_04d698f4(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>_Clear__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x348) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x348,uVar2);
  }
  FUN_03336ec8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x350) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>__ctor__);
    FUN_04d69624(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DebugUI_Widget>_GetEnumerator__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x350) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x350,uVar2);
  }
  FUN_033361f8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x358) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_ToArray__
                              );
    FUN_04d699a8(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x358) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x358,uVar2);
  }
  FUN_033371fc();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x360) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>__ctor__
                              );
    FUN_04d6978c(uVar2,uVar4,
                 *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>_get_Count__,0
                );
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x360) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x360,uVar2);
  }
  FUN_03336860();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x368) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VariantCheckpoint>_GetEnumerator__
                              );
    FUN_04d69408(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>__ctor__
                 ,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x368) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x368,uVar2);
  }
  FUN_0333585c();
  return;
}


