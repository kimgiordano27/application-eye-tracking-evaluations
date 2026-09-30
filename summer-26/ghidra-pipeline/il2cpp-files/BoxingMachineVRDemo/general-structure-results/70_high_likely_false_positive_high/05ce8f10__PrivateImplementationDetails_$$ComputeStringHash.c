/*
FUNCTION_NAME: <PrivateImplementationDetails>$$ComputeStringHash
ENTRY_POINT: 05ce8f10
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void <PrivateImplementationDetails>__ComputeStringHash(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = Method_System_Collections_Generic_List<XRInputButtonReader>_Remove__;
  puVar3 = PTR_DAT_0678c858;
  puVar2 = PTR_DAT_0678be50;
  puVar1 = PTR_DAT_06771bc8;
  if ((DAT_06b82997 & 1) == 0) {
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputSubsystem>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimeValue>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimelineClip>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TimingRecord>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_Contains__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_Find__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Toggle>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrackAsset>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionItem>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionItem>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionVirtualCurrency>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionVirtualCurrency>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionVirtualCurrency>_GetEnumerator__)
    ;
    FUN_02d6084c(Method_System_Collections_Generic_List<TransactionVirtualCurrency>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Transform>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransitionData>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TransitionData>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TrialOffer>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Type>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeIdentifier>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeName>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeName>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeName>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeSpec>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeSpec>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<TypeSpec>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UICharInfo>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_Insert__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIDocument>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UILineInfo>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>_set_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UIVertex>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_get_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<uint>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputSubsystem>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<URPProfileId>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<URPProfileId>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UnityEvent>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UnityEvent>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UnityEvent>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UnityEvent>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UsageHint>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<User>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UserCapability>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UserCapability>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UserInputActionSet>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VFXBinderBase>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Value>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueInput>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueInput>_AsReadOnly__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<ValueOutput>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Variant>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector2>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_AddRange__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_get_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector3>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<Vector4>_set_Item__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>__ctor__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Sort__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_IndexOf__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_RemoveAt__);
    FUN_02d6084c(Method_System_Collections_Generic_List<VisualElement>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputSubsystem>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputSubsystem>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputSubsystemDescriptor>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputValueReader>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputValueReader>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputValueReader>_ForEach__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputValueReader>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputValueReader>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInteractableSnapVolume>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInteractableSnapVolume>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInteractableSnapVolume>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInteractableSnapVolume>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInteractableSnapVolume>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInteractionManager>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInteractionManager>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInteractionManager>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInteractionManager>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoadAnchorResult>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoadAnchorResult>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoadAnchorResult>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoadAnchorResult>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoader>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoader>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoader>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoader>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoader>_Contains__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoader>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoader>_Insert__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoader>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRLoader>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRMeshSubsystemDescriptor>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRNodeState>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRNodeState>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRNodeState>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRNodeState>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRNodeState>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XROcclusionSubsystem>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XROcclusionSubsystem>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XROcclusionSubsystem>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XROcclusionSubsystemDescriptor>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRPlaneSubsystemDescriptor>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceImage>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceImage>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceImage>_IndexOf__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceImage>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceImage>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceObject>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceObject>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceObject>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceObject>_IndexOf__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceObject>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceObject>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceObjectEntry>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceObjectEntry>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRReferenceObjectEntry>_GetEnumerator__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRSessionSubsystemDescriptor>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRInputButtonReader>_Remove__);
    FUN_02d6084c(PTR_DAT_0678c858);
    FUN_02d6084c(PTR_DAT_0678be50);
    FUN_02d6084c(PTR_DAT_06771bc8);
    DAT_06b82997 = 1;
  }
  FUN_05ce6dd8(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar3,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2);
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
                                Method_System_Collections_Generic_List<XRInputSubsystem>_GetEnumerator__
                              );
    FUN_04d682d0(lVar7,uVar8,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRInputSubsystem>_get_Count__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_02dd37b4(plVar6,lVar7);
  }
  if (param_1 != 0) {
    FUN_03330274(param_1,lVar7,0,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRInputSubsystem>__ctor__);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TimeValue>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
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
                    Method_System_Collections_Generic_List<XRInteractableSnapVolume>_get_Count__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_033305a8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TimeValue>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VisualElement>_Remove__);
      FUN_04d687c4(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
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
                    Method_System_Collections_Generic_List<XRNodeState>_GetEnumerator__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VFXBinderBase>_Remove__);
      FUN_04d6892c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceImage>_IndexOf__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
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
                    Method_System_Collections_Generic_List<XRReferenceObject>_get_Item__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>__ctor__
                                );
      FUN_04d689e0(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<XRReferenceObjectEntry>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>_Add__);
      FUN_04d68710(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<XRReferenceObjectEntry>_Add__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
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
                    Method_System_Collections_Generic_List<XRReferenceObjectEntry>_GetEnumerator__,0
                  );
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_033325b0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<Transform>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
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
                  Method_System_Collections_Generic_List<XRSessionSubsystemDescriptor>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
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
                    Method_System_Collections_Generic_List<XRInputSubsystem>_get_Item__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
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
                    Method_System_Collections_Generic_List<XRInputSubsystemDescriptor>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector3>_get_Capacity__);
      FUN_04d6d2d4(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRInputValueReader>__ctor__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VFXBinderBase>_Add__);
      FUN_04d6d004(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRInputValueReader>_Add__,0
                  );
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
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
                    Method_System_Collections_Generic_List<XRInputValueReader>_ForEach__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
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
                    Method_System_Collections_Generic_List<XRInputValueReader>_GetEnumerator__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_0333e54c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TimingRecord>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x88);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<uint>_ToArray__);
      FUN_04d69bc4(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<XRInputValueReader>_Remove__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x90);
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
                    Method_System_Collections_Generic_List<XRInteractableSnapVolume>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
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
                    Method_System_Collections_Generic_List<XRInteractableSnapVolume>_Add__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa0);
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
                    Method_System_Collections_Generic_List<XRInteractableSnapVolume>_Clear__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
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
                    Method_System_Collections_Generic_List<XRInteractableSnapVolume>_get_Item__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb0);
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
                    Method_System_Collections_Generic_List<XRInteractionManager>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
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
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb8);
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
                   *(undefined8 *)Method_System_Collections_Generic_List<XRInteractionManager>_Add__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_03338534(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TypeIdentifier>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xc0);
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
                    Method_System_Collections_Generic_List<XRInteractionManager>_Remove__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc0);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_03341558(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TypeSpec>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 200);
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
                    Method_System_Collections_Generic_List<XRInteractionManager>_get_Count__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 200);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_03342890(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TypeName>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UnityEvent>_get_Item__);
      FUN_04d6e44c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRLoadAnchorResult>_Add__,0
                  );
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd0);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_03341ef4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TypeSpec>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Variant>__ctor__);
      FUN_04d6e7d0(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRLoadAnchorResult>_Clear__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd8);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_03342ef8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TypeName>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
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
                    Method_System_Collections_Generic_List<XRLoadAnchorResult>_get_Count__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe0);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_03342228(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TypeSpec>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector2>_Add__);
      FUN_04d6e884(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<XRLoadAnchorResult>_get_Item__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe8);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_0334322c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TypeName>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf0);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Add__)
      ;
      FUN_04d6e5b4(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>__ctor__,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf0);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_0334255c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UICharInfo>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VisualElement>_RemoveAt__);
      FUN_04d6e938(lVar7,uVar8,*(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Add__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf8);
      *plVar6 = lVar7;
      thunk_FUN_02dd37b4(plVar6,lVar7);
    }
    FUN_03343560(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TrackAsset>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x100);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector4>_set_Item__);
      FUN_04d6a2cc(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Clear__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x100) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x100,lVar7);
    }
    FUN_03339538(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TrackAsset>_ToArray__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x108);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ValueInput>_Add__);
      FUN_04d6a9d4(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Contains__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x108) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x108,lVar7);
    }
    FUN_0333a870(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TrackAsset>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x110);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector3>_AddRange__);
      FUN_04d6a4e8(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_GetEnumerator__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x110) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x110,lVar7);
    }
    FUN_03339ed4(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TrackAsset>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x118);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ValueOutput>_Add__);
      FUN_04d6ab3c(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Insert__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x118) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x118,lVar7);
    }
    FUN_0333aed8(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TrackAsset>_AddRange__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x120);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector4>_Add__);
      FUN_04d6a650(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Remove__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x120) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x120,lVar7);
    }
    FUN_0333a208(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TransactionItem>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x128);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<uint>_set_Item__);
      FUN_04d6abf0(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_get_Count__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x128) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x128,lVar7);
    }
    FUN_0333b20c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TrackAsset>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x130);
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
                    Method_System_Collections_Generic_List<XRMeshSubsystemDescriptor>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x130) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x130,lVar7);
    }
    FUN_0333a53c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIDocument>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x138);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<VisualElement>_set_Item__);
      FUN_04d6e9ec(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x138) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x138,lVar7);
    }
    FUN_03343894(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIDocument>_Insert__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x140);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Vector3>_Add__);
      FUN_04d6ee24(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_Clear__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x140) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x140,lVar7);
    }
    FUN_03344bcc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIDocument>_AddRange__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x148);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Item__
                                );
      Interop_Sys__GetNonCryptographicallySecureRandomBytes
                (lVar7,uVar8,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_get_Count__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x148) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x148,lVar7);
    }
    FUN_03344230(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIDocument>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x150);
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
                   *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_get_Item__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x150) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x150,lVar7);
    }
    FUN_03345234(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIDocument>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x158);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Clear__
                                );
      FUN_04d6ecbc(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<XROcclusionSubsystem>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x158) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x158,lVar7);
    }
    FUN_03344564(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIDocument>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x160);
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
                    Method_System_Collections_Generic_List<XROcclusionSubsystem>_Clear__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x160) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x160,lVar7);
    }
    FUN_03345568(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIDocument>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x168);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UsageHint>_GetEnumerator__)
      ;
      FUN_04d6ed70(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<XROcclusionSubsystem>_GetEnumerator__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x168) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x168,lVar7);
    }
    FUN_03344898(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UILineInfo>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x170);
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
                    Method_System_Collections_Generic_List<XROcclusionSubsystemDescriptor>__ctor__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x170) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x170,lVar7);
    }
    FUN_0334589c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TransactionItem>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x178);
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
                    Method_System_Collections_Generic_List<XRPlaneSubsystemDescriptor>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x178) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x178,lVar7);
    }
    FUN_0333b540(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>_get_Count__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x180);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Count__
                                );
      FUN_04d6b190(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x180) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x180,lVar7);
    }
    FUN_0333c878(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x188);
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
                   *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceImage>__ctor__,0
                  );
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x188) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x188,lVar7);
    }
    FUN_0333bedc(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<Transform>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 400);
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
                    Method_System_Collections_Generic_List<XRReferenceImage>_GetEnumerator__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 400) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 400,lVar7);
    }
    FUN_0333cee0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>_Clear__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x198);
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
                    Method_System_Collections_Generic_List<XRReferenceImage>_get_Count__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x198) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x198,lVar7);
    }
    FUN_0333c210(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<Transform>_Add__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1a0);
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
                    Method_System_Collections_Generic_List<XRReferenceImage>_get_Item__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1a0) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x1a0,lVar7);
    }
    FUN_0333d214(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<TransactionVirtualCurrency>_GetEnumerator__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1a8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar4;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ValueOutput>_get_Item__);
      FUN_04d6b0dc(lVar7,uVar8,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObject>__ctor__,
                   0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1a8) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x1a8,lVar7);
    }
    FUN_0333c544(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIVertex>__ctor__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b0);
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
                   *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObject>_Add__,0)
      ;
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1b0) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x1b0,lVar7);
    }
    FUN_03345bd0(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIVertex>_get_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b8);
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
                    Method_System_Collections_Generic_List<XRReferenceObject>_GetEnumerator__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1b8) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x1b8,lVar7);
    }
    FUN_0334723c(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIVertex>_set_Capacity__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1c0);
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
                    Method_System_Collections_Generic_List<XRReferenceObject>_IndexOf__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1c0) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x1c0,lVar7);
    }
    FUN_03347570(param_1,lVar7,0,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    puVar1 = Method_System_Collections_Generic_List<UIVertex>_set_Item__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1c8);
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
                    Method_System_Collections_Generic_List<XRReferenceObject>_get_Count__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1c8) = lVar7;
      thunk_FUN_02dd37b4(lVar5 + 0x1c8,lVar7);
    }
    FUN_033478a4(param_1,lVar7,0,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


