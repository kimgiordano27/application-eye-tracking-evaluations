/*
FUNCTION_NAME: FUN_05dcf574
ENTRY_POINT: 05dcf574
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


void FUN_05dcf574(void)

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
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar3 = System_Collections_Generic_IEnumerator<TelemetryBatchProto>_TypeInfo;
  puVar2 = System_Collections_Generic_IEnumerator<Task>_TypeInfo;
  puVar1 = System_Collections_Generic_ICollection<Variant>_TypeInfo;
  if ((DAT_06a7af32 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<TeleportInteractable>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<TimelineClip>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<Toggle>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<ToyConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<TrackAsset>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<TelemetryBatchProto>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<Transform>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<TransformFeatureConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Collections_Generic_IEnumerator<Task>_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<Variant>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Collections_Generic_IEnumerator<Type>_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<TypeValuePair>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<UnitCategory>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<ValueInput>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<ValueInputDefinition>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<ValueOutputDefinition>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<VariableDeclaration>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<Variant>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<Vector2>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<Vector4>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<VisualElement>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<VolumeParameter>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<WwiseAddressableSoundBank>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<X509Extension>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<XNode>_TypeInfo);
    DAT_06a7af32 = 1;
  }
  puVar11 = System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo;
  puVar10 = System_Collections_Generic_IEnumerator<UnitCategory>_TypeInfo;
  puVar9 = System_Collections_Generic_IEnumerator<TransformFeatureConfig>_TypeInfo;
  puVar8 = System_Collections_Generic_IEnumerator<Transform>_TypeInfo;
  puVar7 = System_Collections_Generic_IEnumerator<ToyConfig>_TypeInfo;
  puVar6 = System_Collections_Generic_IEnumerator<Toggle>_TypeInfo;
  puVar5 = System_Collections_Generic_IEnumerator<TimelineClip>_TypeInfo;
  puVar4 = System_Collections_Generic_IEnumerator<TeleportInteractable>_TypeInfo;
  uVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar12,*(undefined8 *)System_Collections_Generic_IEnumerator<TrackAsset>_TypeInfo);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar12;
  lVar13 = *(long *)puVar2;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar13 = *(long *)puVar2;
  }
  uVar14 = **(undefined8 **)(lVar13 + 0xb8);
  uVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
  FUN_04a48c38(uVar12,uVar14,*(undefined8 *)puVar8,0);
  uVar15 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar14 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_047b3b70(uVar14,uVar15,*(undefined8 *)puVar9,0);
  uVar15 = thunk_FUN_02cea894(*(undefined8 *)puVar7);
  FUN_03804370(uVar15,uVar12,0,uVar14,0,0,10000,*(undefined8 *)puVar6);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar15;
  uVar12 = FUN_05ea9644(*(undefined8 *)puVar11,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)puVar10,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)
                         System_Collections_Generic_IEnumerator<ValueInputDefinition>_TypeInfo,1,0,0
                        ,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)System_Collections_Generic_IEnumerator<Type>_TypeInfo,1,0,0,0
                       );
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)System_Collections_Generic_IEnumerator<ValueInput>_TypeInfo,1
                        ,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)System_Collections_Generic_IEnumerator<Vector2>_TypeInfo,1,0,
                        0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)System_Collections_Generic_IEnumerator<XNode>_TypeInfo,1,0,0,
                        0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)System_Collections_Generic_IEnumerator<Variant>_TypeInfo,1,0,
                        0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)
                         System_Collections_Generic_IEnumerator<TypeValuePair>_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)System_Collections_Generic_IEnumerator<Vector4>_TypeInfo,1,0,
                        0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)System_Collections_Generic_IEnumerator<Vector3>_TypeInfo,1,0,
                        0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)
                         System_Collections_Generic_IEnumerator<VisualElement>_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)
                         System_Collections_Generic_IEnumerator<X509Extension>_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)
                         System_Collections_Generic_IEnumerator<VariableDeclaration>_TypeInfo,1,0,0,
                        0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)
                         System_Collections_Generic_IEnumerator<VolumeParameter>_TypeInfo,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)
                         System_Collections_Generic_IEnumerator<ValueOutputDefinition>_TypeInfo,1,0,
                        0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo,1
                        ,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90) = uVar12;
  uVar12 = FUN_05ea9644(*(undefined8 *)
                         System_Collections_Generic_IEnumerator<WwiseAddressableSoundBank>_TypeInfo,
                        1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98) = uVar12;
  return;
}


