/*
FUNCTION_NAME: FUN_057a8434
ENTRY_POINT: 057a8434
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;ray_or_cast_sink_hits_18;ui_or_gameplay_sink_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_21
*/


void FUN_057a8434(void)

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
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  puVar2 = Method_System_Collections_Generic_List_Enumerator<PointerEventData>_Dispose__;
  if ((DAT_06bc0b61 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cb890);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<PointerEventData>_Dispose__);
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<PointerEventData>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<PointerEventData>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<PokeInteractor>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<PokeInteractor>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<PokeInteractor>_get_Current__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<PokeInteractor>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<PokeInteractor>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<PokeInteractor>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Popup>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Popup>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__);
    FUN_02f08768(Method_Unity_Collections_NativeArray_Enumerator<Pose>_Dispose__);
    FUN_02f08768(Method_Unity_Collections_NativeArray_Enumerator<Pose>_MoveNext__);
    FUN_02f08768(Method_Unity_Collections_NativeArray_Enumerator<Pose>_get_Current__);
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData>_Dispose__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData>_MoveNext__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData>_get_Current__
                );
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<QueryExpression>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<QueryExpression>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<QueryExpression>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RadioButton>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RadioButton>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RadioButton>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RaycastHit>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RaycastHit>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RaycastHit>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RaycastResult>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RaycastResult>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RaycastResult>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RectTransform>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RectTransform>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RectTransform>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RenderGraph>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RenderGraph>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RenderGraph>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Renderer>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Renderer>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Renderer>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_get_Current__
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Rigidbody>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Rigidbody>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_MoveNext__)
    ;
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_get_Current__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_Dispose__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_get_Current__
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_MoveNext__);
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_get_Current__
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_Dispose__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_MoveNext__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_get_Current__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_Dispose__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_MoveNext__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_get_Current__);
    FUN_02f08768(Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_Dispose__);
    FUN_02f08768(Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_MoveNext__);
    FUN_02f08768(Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_Dispose__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_MoveNext__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_get_Current__
                );
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<string>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<string>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_Queue_Enumerator<string>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_Queue_Enumerator<string>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_Queue_Enumerator<string>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StyleSheet>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StyleValue>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StyleValue>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StyleValue>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_get_Current__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_Dispose__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_MoveNext__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_get_Current__
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Tab>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Tab>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Tab>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<TcpClient>_Dispose__);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_set_Item__
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<TcpClient>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<TcpClient>_get_Current__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Panel>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__);
    FUN_02f08768(PTR_DAT_067cd728);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<Text>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_HashSet_Enumerator<Text>_get_Current__);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                );
    FUN_02f08768(PTR_DAT_067caa08);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<ARContactSpawnTrigger>_Dispose__)
    ;
    FUN_02f08768(PTR_DAT_067d4de8);
    FUN_02f08768(
                System_Collections_Generic_IEnumerator<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Thread>_Dispose__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float3>_Awake__
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Thread>_MoveNext__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Thread>_get_Current__);
    FUN_02f08768(Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_set_Item__
                );
    DAT_06bc0b61 = 1;
  }
  lVar13 = FUN_02f0880c(*(undefined8 *)puVar2,1);
  puVar4 = Method_System_Collections_Generic_List_Enumerator<PokeInteractor>_get_Current__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_set_Item__;
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0x18) != 0) {
      plVar16 = *(long **)(*(long *)
                            Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_set_Item__
                          + 0xb8);
      *(undefined4 *)(lVar13 + 0x20) = 1;
      *plVar16 = lVar13;
      uVar14 = FUN_02f0880c(*(undefined8 *)puVar2,0xb);
      FUN_05009b54(uVar14,*(undefined8 *)puVar4,0);
      uVar15 = *(undefined8 *)puVar2;
      *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar14;
      lVar13 = FUN_02f0880c(uVar15,2);
      if (lVar13 == 0) goto LAB_057aca74;
      if ((*(int *)(lVar13 + 0x18) != 0) &&
         (*(undefined4 *)(lVar13 + 0x20) = 2,
         puVar12 = Method_Unity_Collections_NativeArray_Enumerator<Pose>_get_Current__,
         puVar11 = Method_Unity_Collections_NativeArray_Enumerator<Pose>_MoveNext__,
         puVar10 = Method_Unity_Collections_NativeArray_Enumerator<Pose>_Dispose__,
         puVar9 = Method_System_Collections_Generic_List_Enumerator<Popup>_Dispose__,
         puVar8 = Method_System_Collections_Generic_List_Enumerator<PokeInteractor>_Dispose__,
         puVar7 = Method_System_Collections_Generic_HashSet_Enumerator<PokeInteractor>_get_Current__
         , puVar6 = Method_System_Collections_Generic_HashSet_Enumerator<PokeInteractor>_Dispose__,
         puVar5 = Method_System_Collections_Generic_List_Enumerator<PointerEventData>_get_Current__,
         puVar4 = Method_System_Collections_Generic_List_Enumerator<PointerEventData>_MoveNext__,
         *(int *)(lVar13 + 0x18) != 1)) {
        lVar17 = *(long *)(*(long *)puVar3 + 0xb8);
        uVar14 = *(undefined8 *)puVar2;
        *(undefined4 *)(lVar13 + 0x24) = 0x11;
        *(long *)(lVar17 + 0x10) = lVar13;
        uVar14 = FUN_02f0880c(uVar14,6);
        FUN_05009b54(uVar14,*(undefined8 *)puVar12,0);
        uVar15 = *(undefined8 *)puVar2;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar14;
        uVar14 = FUN_02f0880c(uVar15,10);
        FUN_05009b54(uVar14,*(undefined8 *)puVar5,0);
        uVar15 = *(undefined8 *)puVar2;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar14;
        uVar14 = FUN_02f0880c(uVar15,3);
        FUN_05009b54(uVar14,*(undefined8 *)puVar7,0);
        uVar15 = *(undefined8 *)puVar2;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = uVar14;
        uVar14 = FUN_02f0880c(uVar15,4);
        FUN_05009b54(uVar14,*(undefined8 *)puVar11,0);
        uVar15 = *(undefined8 *)puVar2;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30) = uVar14;
        uVar14 = FUN_02f0880c(uVar15,0x11);
        FUN_05009b54(uVar14,*(undefined8 *)puVar4,0);
        uVar15 = *(undefined8 *)puVar2;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) = uVar14;
        uVar14 = FUN_02f0880c(uVar15,3);
        FUN_05009b54(uVar14,*(undefined8 *)puVar6,0);
        uVar15 = *(undefined8 *)puVar2;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = uVar14;
        uVar14 = FUN_02f0880c(uVar15,8);
        FUN_05009b54(uVar14,*(undefined8 *)puVar8,0);
        uVar15 = *(undefined8 *)puVar2;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48) = uVar14;
        uVar14 = FUN_02f0880c(uVar15,8);
        FUN_05009b54(uVar14,*(undefined8 *)puVar8,0);
        uVar15 = *(undefined8 *)puVar2;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50) = uVar14;
        uVar14 = FUN_02f0880c(uVar15,4);
        FUN_05009b54(uVar14,*(undefined8 *)puVar9,0);
        uVar15 = *(undefined8 *)puVar2;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58) = uVar14;
        uVar14 = FUN_02f0880c(uVar15,0xe);
        FUN_05009b54(uVar14,*(undefined8 *)puVar10,0);
        uVar15 = *(undefined8 *)puVar2;
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60) = uVar14;
        lVar13 = FUN_02f0880c(uVar15,2);
        if (lVar13 == 0) goto LAB_057aca74;
        if ((*(int *)(lVar13 + 0x18) != 0) &&
           (*(undefined4 *)(lVar13 + 0x20) = 2, *(int *)(lVar13 + 0x18) != 1)) {
          lVar17 = *(long *)puVar3;
          *(undefined4 *)(lVar13 + 0x24) = 0x11;
          uVar14 = *(undefined8 *)puVar2;
          *(long *)(*(long *)(lVar17 + 0xb8) + 0x68) = lVar13;
          lVar13 = FUN_02f0880c(uVar14,2);
          if (lVar13 == 0) goto LAB_057aca74;
          if ((*(int *)(lVar13 + 0x18) != 0) &&
             (*(undefined4 *)(lVar13 + 0x20) = 2,
             puVar5 = 
             Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData>_Dispose__,
             puVar4 = Method_System_Collections_Generic_List_Enumerator<PokeInteractor>_MoveNext__,
             *(int *)(lVar13 + 0x18) != 1)) {
            lVar17 = *(long *)puVar3;
            *(undefined4 *)(lVar13 + 0x24) = 0x11;
            uVar14 = *(undefined8 *)puVar2;
            *(long *)(*(long *)(lVar17 + 0xb8) + 0x70) = lVar13;
            uVar14 = FUN_02f0880c(uVar14,5);
            FUN_05009b54(uVar14,*(undefined8 *)puVar4,0);
            uVar15 = *(undefined8 *)puVar2;
            *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x78) = uVar14;
            uVar14 = FUN_02f0880c(uVar15,4);
            FUN_05009b54(uVar14,*(undefined8 *)puVar11,0);
            uVar15 = *(undefined8 *)puVar2;
            *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80) = uVar14;
            uVar14 = FUN_02f0880c(uVar15,4);
            FUN_05009b54(uVar14,*(undefined8 *)puVar5,0);
            uVar15 = *(undefined8 *)puVar2;
            *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x88) = uVar14;
            lVar13 = FUN_02f0880c(uVar15,2);
            if (lVar13 == 0) goto LAB_057aca74;
            if ((*(int *)(lVar13 + 0x18) != 0) &&
               (*(undefined4 *)(lVar13 + 0x20) = 2,
               puVar5 = Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__,
               puVar4 = Method_System_Collections_Generic_List_Enumerator<Popup>_MoveNext__,
               *(int *)(lVar13 + 0x18) != 1)) {
              lVar17 = *(long *)puVar3;
              *(undefined4 *)(lVar13 + 0x24) = 5;
              uVar14 = *(undefined8 *)puVar2;
              *(long *)(*(long *)(lVar17 + 0xb8) + 0x90) = lVar13;
              uVar14 = FUN_02f0880c(uVar14,6);
              FUN_05009b54(uVar14,*(undefined8 *)puVar5,0);
              uVar15 = *(undefined8 *)puVar2;
              *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x98) = uVar14;
              uVar14 = FUN_02f0880c(uVar15,3);
              FUN_05009b54(uVar14,*(undefined8 *)puVar4,0);
              uVar15 = *(undefined8 *)puVar2;
              *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xa0) = uVar14;
              lVar13 = FUN_02f0880c(uVar15,2);
              if (lVar13 == 0) goto LAB_057aca74;
              if ((*(int *)(lVar13 + 0x18) != 0) &&
                 (*(undefined4 *)(lVar13 + 0x20) = 0x2d, *(int *)(lVar13 + 0x18) != 1)) {
                lVar17 = *(long *)puVar3;
                *(undefined4 *)(lVar13 + 0x24) = 0x2e;
                uVar14 = *(undefined8 *)puVar2;
                *(long *)(*(long *)(lVar17 + 0xb8) + 0xa8) = lVar13;
                lVar13 = FUN_02f0880c(uVar14,1);
                puVar6 = 
                Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_MoveNext__;
                puVar5 = 
                Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_Dispose__;
                puVar4 = 
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData>_get_Current__
                ;
                puVar2 = 
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData>_MoveNext__
                ;
                if (lVar13 == 0) goto LAB_057aca74;
                if (*(int *)(lVar13 + 0x18) != 0) {
                  lVar17 = *(long *)puVar3;
                  *(undefined4 *)(lVar13 + 0x20) = 2;
                  uVar14 = *(undefined8 *)puVar2;
                  *(long *)(*(long *)(lVar17 + 0xb8) + 0xb0) = lVar13;
                  lVar13 = FUN_02f0880c(uVar14,7);
                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                  FUN_057acc90(uVar15,0x46,uVar14,0);
                  if (lVar13 == 0) goto LAB_057aca74;
                  if (*(int *)(lVar13 + 0x18) != 0) {
                    *(undefined8 *)(lVar13 + 0x20) = uVar15;
                    puVar6 = 
                    Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_Dispose__
                    ;
                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                    FUN_057acc90(uVar15,0x47,uVar14,0);
                    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar13 + 0x28) = uVar15;
                      puVar6 = 
                      Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_get_Current__
                      ;
                      uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                      FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                      uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                      FUN_057acc90(uVar15,0x31,uVar14,0);
                      if (2 < *(uint *)(lVar13 + 0x18)) {
                        *(undefined8 *)(lVar13 + 0x30) = uVar15;
                        puVar6 = 
                        Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_MoveNext__
                        ;
                        uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                        FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                        uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                        FUN_057acc90(uVar15,0x16,uVar14,0);
                        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
                          *(undefined8 *)(lVar13 + 0x38) = uVar15;
                          puVar7 = 
                          Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_Dispose__
                          ;
                          uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                          FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                          uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                          FUN_057acc90(uVar15,0x32,uVar14,0);
                          if (4 < *(uint *)(lVar13 + 0x18)) {
                            *(undefined8 *)(lVar13 + 0x40) = uVar15;
                            puVar7 = 
                            Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_MoveNext__
                            ;
                            uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                            FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                            uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                            FUN_057acc90(uVar15,0x33,uVar14,0);
                            if (5 < *(uint *)(lVar13 + 0x18)) {
                              *(undefined8 *)(lVar13 + 0x48) = uVar15;
                              puVar7 = 
                              Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_get_Current__
                              ;
                              uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                              FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                              uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                              FUN_057acc90(uVar15,0x34,uVar14,0);
                              if (6 < *(uint *)(lVar13 + 0x18)) {
                                *(undefined8 *)(lVar13 + 0x50) = uVar15;
                                puVar7 = 
                                Method_System_Collections_Generic_List_Enumerator<RadioButton>_Dispose__
                                ;
                                uVar14 = *(undefined8 *)puVar2;
                                *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb8) = lVar13;
                                lVar13 = FUN_02f0880c(uVar14,8);
                                uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                FUN_057acc90(uVar15,0x1e,uVar14,0);
                                if (lVar13 == 0) goto LAB_057aca74;
                                if (*(int *)(lVar13 + 0x18) != 0) {
                                  *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                  puVar7 = 
                                  Method_System_Collections_Generic_List_Enumerator<RadioButton>_MoveNext__
                                  ;
                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_057acc90(uVar15,0x35,uVar14,0);
                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                    puVar7 = 
                                    Method_System_Collections_Generic_List_Enumerator<RadioButton>_get_Current__
                                    ;
                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                    FUN_057acc90(uVar15,0x49,uVar14,0);
                                    if (2 < *(uint *)(lVar13 + 0x18)) {
                                      *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                      uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                      FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                      uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                      FUN_057acc90(uVar15,0x16,uVar14,0);
                                      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
                                        *(undefined8 *)(lVar13 + 0x38) = uVar15;
                                        puVar7 = 
                                        Method_System_Collections_Generic_List_Enumerator<RaycastHit>_Dispose__
                                        ;
                                        uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                        FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                        uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                        FUN_057acc90(uVar15,1,uVar14,0);
                                        if (4 < *(uint *)(lVar13 + 0x18)) {
                                          *(undefined8 *)(lVar13 + 0x40) = uVar15;
                                          puVar7 = 
                                          Method_System_Collections_Generic_List_Enumerator<RaycastHit>_MoveNext__
                                          ;
                                          uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                          FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                          uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                          FUN_057acc90(uVar15,0x3b,uVar14,0);
                                          if (5 < *(uint *)(lVar13 + 0x18)) {
                                            *(undefined8 *)(lVar13 + 0x48) = uVar15;
                                            puVar7 = 
                                            Method_System_Collections_Generic_List_Enumerator<RaycastHit>_get_Current__
                                            ;
                                            uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                            FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                            uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                            FUN_057acc90(uVar15,2,uVar14,0);
                                            if (6 < *(uint *)(lVar13 + 0x18)) {
                                              *(undefined8 *)(lVar13 + 0x50) = uVar15;
                                              puVar7 = 
                                              Method_System_Collections_Generic_List_Enumerator<RaycastResult>_Dispose__
                                              ;
                                              uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                              FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                              uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                              FUN_057acc90(uVar15,0x48,uVar14,0);
                                              if ((*(uint *)(lVar13 + 0x18) & 0xfffffff8) != 0) {
                                                *(undefined8 *)(lVar13 + 0x58) = uVar15;
                                                puVar7 = 
                                                Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_get_Current__
                                                ;
                                                uVar14 = *(undefined8 *)puVar2;
                                                *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc0)
                                                     = lVar13;
                                                lVar13 = FUN_02f0880c(uVar14,0xe);
                                                uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                                FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                FUN_057acc90(uVar15,0x36,uVar14,0);
                                                if (lVar13 == 0) goto LAB_057aca74;
                                                if (*(int *)(lVar13 + 0x18) != 0) {
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                  puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Renderer>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x37,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Renderer>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x1e,uVar14,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Renderer>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x39,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x38) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x35,uVar14,0);
                                                  if (4 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x40) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x49,uVar14,0);
                                                  if (5 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x48) = uVar15;
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (6 < *(uint *)(lVar13 + 0x18)) {
                                                      *(undefined8 *)(lVar13 + 0x50) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,3,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffff8) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x58) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,4,uVar14,0);
                                                  if (8 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x60) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,1,uVar14,0);
                                                  if (9 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x68) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3a,uVar14,0);
                                                  if (10 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x70) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Rigidbody>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3b,uVar14,0);
                                                  if (0xb < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x78) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x38,uVar14,0);
                                                  if (0xc < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x80) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Rigidbody>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,2,uVar14,0);
                                                  if (0xd < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x88) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RectTransform>_MoveNext__
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 200)
                                                       = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,6);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x36,uVar14,0);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RectTransform>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x37,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraph>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x39,uVar14,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar13 + 0x38) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraph>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,10,uVar14,0);
                                                  if (4 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x40) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraph>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,1,uVar14,0);
                                                  if (5 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x48) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0xd0) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,1);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xd8
                                                           ) = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,2);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3c,uVar14,0);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_Dispose__
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xe0
                                                           ) = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,2);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3c,uVar14,0);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                      uVar14 = *(undefined8 *)puVar2;
                                                      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                               0xe8) = lVar13;
                                                      lVar13 = FUN_02f0880c(uVar14,2);
                                                      uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar5);
                                                      FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0)
                                                      ;
                                                      uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar4);
                                                      FUN_057acc90(uVar15,0x16,uVar14,0);
                                                      if (lVar13 == 0) goto LAB_057aca74;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                        puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RectTransform>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,10,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RaycastResult>_MoveNext__
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xf0
                                                           ) = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,2);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3c,uVar14,0);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RaycastResult>_get_Current__
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xf8
                                                           ) = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,2);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3c,uVar14,0);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                      uVar14 = *(undefined8 *)puVar2;
                                                      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                               0x100) = lVar13;
                                                      lVar13 = FUN_02f0880c(uVar14,3);
                                                      uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar5);
                                                      FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0)
                                                      ;
                                                      uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar4);
                                                      FUN_057acc90(uVar15,0x16,uVar14,0);
                                                      if (lVar13 == 0) goto LAB_057aca74;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                        puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x39,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,1,uVar14,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_get_Current__
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                           0x108) = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,2);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3c,uVar14,0);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                      uVar14 = *(undefined8 *)puVar2;
                                                      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                               0x110) = lVar13;
                                                      lVar13 = FUN_02f0880c(uVar14,2);
                                                      uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar5);
                                                      FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0)
                                                      ;
                                                      uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar4);
                                                      FUN_057acc90(uVar15,0x16,uVar14,0);
                                                      if (lVar13 == 0) goto LAB_057aca74;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                        puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ShaderContainer>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x78,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x118) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,2);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SeverityEntry>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x77,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x120) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,2);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,1,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x128) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,2);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3b,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x130) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,2);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,1,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x138) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,4);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,3,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar8 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar8,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,4,uVar14,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    puVar9 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar9,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3b,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x38) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x140) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,3);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar5);
                                                      FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0)
                                                      ;
                                                      uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar4);
                                                      FUN_057acc90(uVar15,3,uVar14,0);
                                                      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                        uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                     puVar5);
                                                        FUN_057aca78(uVar14,0,*(undefined8 *)puVar8,
                                                                     0);
                                                        uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                     puVar4);
                                                        FUN_057acc90(uVar15,4,uVar14,0);
                                                        if (2 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                          uVar14 = *(undefined8 *)puVar2;
                                                          *(long *)(*(long *)(*(long *)puVar3 + 0xb8
                                                                             ) + 0x148) = lVar13;
                                                          lVar13 = FUN_02f0880c(uVar14,5);
                                                          uVar14 = thunk_FUN_02f45270(*(undefined8 *
                                                                                       )puVar5);
                                                          FUN_057aca78(uVar14,0,*(undefined8 *)
                                                                                 puVar6,0);
                                                          uVar15 = thunk_FUN_02f45270(*(undefined8 *
                                                                                       )puVar4);
                                                          FUN_057acc90(uVar15,0x16,uVar14,0);
                                                          if (lVar13 == 0) goto LAB_057aca74;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                            uVar14 = thunk_FUN_02f45270(*(undefined8
                                                                                          *)puVar5);
                                                            FUN_057aca78(uVar14,0,*(undefined8 *)
                                                                                   puVar7,0);
                                                            uVar15 = thunk_FUN_02f45270(*(undefined8
                                                                                          *)puVar4);
                                                            FUN_057acc90(uVar15,3,uVar14,0);
                                                            if ((*(uint *)(lVar13 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar13 + 0x28) =
                                                                   uVar15;
                                                              uVar14 = thunk_FUN_02f45270(*(
                                                  undefined8 *)puVar5);
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar8,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,4,uVar14,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3e,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x38) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3f,uVar14,0);
                                                  if (4 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x40) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x150) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,3);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,1,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x40,uVar14,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x158) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,2);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x79,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x160) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,2);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x79,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x168) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,4);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,1,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x41,uVar14,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x42,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x38) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x170) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,2);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x43,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x178) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,3);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3e,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x43,uVar14,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x180) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,3);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x35,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SceneDecoration>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x44,uVar14,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x188) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,3);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<PropertyPath>_get_Current__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3e,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<QueryExpression>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x3f,uVar14,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_Dispose__
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 400)
                                                       = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,2);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x45,uVar14,0);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_MoveNext__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x7a,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar7 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_Dispose__
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                           0x198) = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,1);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x45,uVar14,0);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x1a0) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,2);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_Dispose__
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057aca78(uVar14,0,*(undefined8 *)puVar7,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_057acc90(uVar15,0x43,uVar14,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x1a8) = lVar13;
                                                    lVar13 = FUN_02f0880c(uVar14,1);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057aca78(uVar14,0,*(undefined8 *)puVar6,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_057acc90(uVar15,0x16,uVar14,0);
                                                    if (lVar13 == 0) goto LAB_057aca74;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Panel>_MoveNext__
                                                  ;
                                                  uVar14 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_get_Current__
                                                  ;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                           0x1b0) = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,0x30);
                                                  uVar15 = **(undefined8 **)(*(long *)puVar3 + 0xb8)
                                                  ;
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar14,0,0,uVar15,0,0,0,1,0);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                    puVar5 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__
                                                  ;
                                                  puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) + 8);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb8);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__
                                                  );
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x4a,1,uVar18,uVar19,uVar14,0,
                                                               1,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x28) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_MoveNext__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xa8);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x1b0);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x4b,2,uVar18,uVar19,uVar14,0,
                                                               1,0);
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x178);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x4c,3,uVar18,uVar19,uVar14,0,
                                                               1,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x38) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x180);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x4d,4,uVar18,uVar19,uVar14,0,
                                                               1,0);
                                                  if (4 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x40) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_get_Current__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x18);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) + 200
                                                            );
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x4e,5,uVar18,uVar19,uVar14,0,
                                                               1,0);
                                                  if (5 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x48) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x10);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xc0);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x4f,6,uVar18,uVar19,uVar14,0,
                                                               1,0);
                                                  if (6 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x50) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x80);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x128);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x50,7,uVar18,uVar19,uVar14,0,
                                                               1,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffff8) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x58) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x130);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x50,8,uVar18,uVar19,uVar14,0,
                                                               1,0);
                                                  if (8 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x60) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_get_Current__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) + 400
                                                            );
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x51,9,uVar18,uVar19,uVar14,0,
                                                               1,0);
                                                  if (9 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x68) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x88);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x138);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x52,10,uVar18,uVar19,uVar14,0
                                                               ,1,0);
                                                  if (10 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x70) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x140);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x52,0xb,uVar18,uVar19,uVar14,
                                                               0,1,0);
                                                  if (0xb < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x78) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x90);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x148);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x53,0xc,uVar18,uVar19,uVar14,
                                                               0,1,0);
                                                  if (0xc < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x80) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x98);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x148);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x54,0xd,uVar18,uVar19,uVar14,
                                                               0,1,0);
                                                  if (0xd < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x88) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_get_Current__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x98);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x148);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x55,0xe,uVar18,uVar19,uVar14,
                                                               0,1,0);
                                                  if (0xe < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x90) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x150);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x56,0xf,uVar18,uVar19,uVar14,
                                                               0,1,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffff0) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x98) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_MoveNext__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x170);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x57,0x10,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x10 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xa0) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x58);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x108);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x58,0x11,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x11 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xa8) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x20);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xd0);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x59,0x12,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x12 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xb0) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_get_Current__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x40);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xf0);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x6c,0x13,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x13 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xb8) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_MoveNext__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x50);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x100);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x6e,0x14,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x14 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xc0) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_Queue_Enumerator<string>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x48);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xf8);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x6d,0x15,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x15 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 200) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_get_Current__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x28);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xd8);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x6f,0x16,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x16 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xd0) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x30);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xe0);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x70,0x17,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x17 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xd8) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_MoveNext__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x38);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xe8);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x71,0x18,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x18 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xe0) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_get_Current__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x70);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x118);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x74,0x19,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x19 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xe8) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x68);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x120);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x72,0x1a,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x1a < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xf0) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<Tab>_MoveNext__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x60);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x110);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x73,0x1b,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x1b < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0xf8) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xa0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x158);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x5a,0x1c,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x1c < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x100) = uVar15;
                                                    uVar18 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0xa0);
                                                    uVar19 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x158);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_057accc0(uVar15,0x5b,0x1d,uVar18,uVar19,
                                                                 uVar14,0,1,0);
                                                    if (0x1d < *(uint *)(lVar13 + 0x18)) {
                                                      *(undefined8 *)(lVar13 + 0x108) = uVar15;
                                                      uVar18 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0xa0);
                                                      uVar19 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x158);
                                                      uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar5);
                                                      FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0)
                                                      ;
                                                      uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_057accc0(uVar15,0x5c,0x1e,uVar18,uVar19,
                                                                   uVar14,0,1,0);
                                                      if (0x1e < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x110) = uVar15;
                                                        puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x160);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x5d,0x1f,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if ((*(uint *)(lVar13 + 0x18) & 0xffffffe0) != 0)
                                                  {
                                                    *(undefined8 *)(lVar13 + 0x118) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_MoveNext__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x168);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x5e,0x20,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x20 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x120) = uVar15;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_Dispose__
                                                  ;
                                                  uVar18 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0xb0);
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x188);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x5f,0x21,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x21 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x128) = uVar15;
                                                    uVar18 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0xb0);
                                                    uVar19 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x188);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_057accc0(uVar15,0x60,0x22,uVar18,uVar19,
                                                                 uVar14,0,1,0);
                                                    if (0x22 < *(uint *)(lVar13 + 0x18)) {
                                                      *(undefined8 *)(lVar13 + 0x130) = uVar15;
                                                      uVar18 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0xb0);
                                                      uVar19 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x188);
                                                      uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar5);
                                                      FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0)
                                                      ;
                                                      uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_057accc0(uVar15,0x61,0x23,uVar18,uVar19,
                                                                   uVar14,0,1,0);
                                                      if (0x23 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x138) = uVar15;
                                                        uVar18 = *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0xb0);
                                                        uVar19 = *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x188);
                                                        uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                     puVar5);
                                                        FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,
                                                                     0);
                                                        uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_057accc0(uVar15,0x62,0x24,uVar18,uVar19,
                                                                     uVar14,0,1,0);
                                                        if (0x24 < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x140) = uVar15;
                                                          uVar18 = *(undefined8 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0xb0);
                                                          uVar19 = *(undefined8 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x188);
                                                          uVar14 = thunk_FUN_02f45270(*(undefined8 *
                                                                                       )puVar5);
                                                          FUN_057acb2c(uVar14,0,*(undefined8 *)
                                                                                 puVar4,0);
                                                          uVar15 = thunk_FUN_02f45270(*(undefined8 *
                                                                                       )puVar2);
                                                          FUN_057accc0(uVar15,99,0x25,uVar18,uVar19,
                                                                       uVar14,0,1,0);
                                                          if (0x25 < *(uint *)(lVar13 + 0x18)) {
                                                            *(undefined8 *)(lVar13 + 0x148) = uVar15
                                                            ;
                                                            uVar18 = *(undefined8 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0xb0);
                                                            uVar19 = *(undefined8 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x188);
                                                            uVar14 = thunk_FUN_02f45270(*(undefined8
                                                                                          *)puVar5);
                                                            FUN_057acb2c(uVar14,0,*(undefined8 *)
                                                                                   puVar4,0);
                                                            uVar15 = thunk_FUN_02f45270(*(undefined8
                                                                                          *)puVar2);
                                                            FUN_057accc0(uVar15,100,0x26,uVar18,
                                                                         uVar19,uVar14,0,1,0);
                                                            if (0x26 < *(uint *)(lVar13 + 0x18)) {
                                                              *(undefined8 *)(lVar13 + 0x150) =
                                                                   uVar15;
                                                              uVar18 = *(undefined8 *)
                                                                        (*(long *)(*(long *)puVar3 +
                                                                                  0xb8) + 0xb0);
                                                              uVar19 = *(undefined8 *)
                                                                        (*(long *)(*(long *)puVar3 +
                                                                                  0xb8) + 0x188);
                                                              uVar14 = thunk_FUN_02f45270(*(
                                                  undefined8 *)puVar5);
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar15,0x65,0x27,uVar18,uVar19,uVar14
                                                               ,0,1,0);
                                                  if (0x27 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x158) = uVar15;
                                                    uVar18 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0xb0);
                                                    uVar19 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x188);
                                                    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0);
                                                    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_057accc0(uVar15,0x66,0x28,uVar18,uVar19,
                                                                 uVar14,0,1,0);
                                                    if (0x28 < *(uint *)(lVar13 + 0x18)) {
                                                      *(undefined8 *)(lVar13 + 0x160) = uVar15;
                                                      uVar18 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0xb0);
                                                      uVar19 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x188);
                                                      uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar5);
                                                      FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,0)
                                                      ;
                                                      uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_057accc0(uVar15,0x67,0x29,uVar18,uVar19,
                                                                   uVar14,0,1,0);
                                                      if (0x29 < *(uint *)(lVar13 + 0x18)) {
                                                        *(undefined8 *)(lVar13 + 0x168) = uVar15;
                                                        uVar18 = *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0xb0);
                                                        uVar19 = *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x188);
                                                        uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                     puVar5);
                                                        FUN_057acb2c(uVar14,0,*(undefined8 *)puVar4,
                                                                     0);
                                                        uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_057accc0(uVar15,0x68,0x2a,uVar18,uVar19,
                                                                     uVar14,0,1,0);
                                                        if (0x2a < *(uint *)(lVar13 + 0x18)) {
                                                          *(undefined8 *)(lVar13 + 0x170) = uVar15;
                                                          uVar18 = *(undefined8 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0xb0);
                                                          uVar19 = *(undefined8 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x188);
                                                          uVar14 = thunk_FUN_02f45270(*(undefined8 *
                                                                                       )puVar5);
                                                          FUN_057acb2c(uVar14,0,*(undefined8 *)
                                                                                 puVar4,0);
                                                          uVar15 = thunk_FUN_02f45270(*(undefined8 *
                                                                                       )puVar2);
                                                          FUN_057accc0(uVar15,0x69,0x2b,uVar18,
                                                                       uVar19,uVar14,0,1,0);
                                                          if (0x2b < *(uint *)(lVar13 + 0x18)) {
                                                            *(undefined8 *)(lVar13 + 0x178) = uVar15
                                                            ;
                                                            uVar18 = *(undefined8 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0xb0);
                                                            uVar19 = *(undefined8 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x188);
                                                            uVar14 = thunk_FUN_02f45270(*(undefined8
                                                                                          *)puVar5);
                                                            FUN_057acb2c(uVar14,0,*(undefined8 *)
                                                                                   puVar4,0);
                                                            uVar15 = thunk_FUN_02f45270(*(undefined8
                                                                                          *)puVar2);
                                                            FUN_057accc0(uVar15,0x75,0x2c,uVar18,
                                                                         uVar19,uVar14,0,1,0);
                                                            if (0x2c < *(uint *)(lVar13 + 0x18)) {
                                                              *(undefined8 *)(lVar13 + 0x180) =
                                                                   uVar15;
                                                              puVar7 = 
                                                  Method_System_Collections_Generic_List_Enumerator<TcpClient>_MoveNext__
                                                  ;
                                                  puVar6 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<string>_MoveNext__
                                                  ;
                                                  puVar4 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_Dispose__
                                                  ;
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x1a0);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar6,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_057acbe0(uVar15,0,*(undefined8 *)puVar4,0);
                                                  uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar18,0x6b,0x2d,0,uVar19,uVar14,
                                                               uVar15,0,0);
                                                  if (0x2d < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x188) = uVar18;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                                                  ;
                                                  puVar4 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_MoveNext__
                                                  ;
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x198);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar6,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_057acbe0(uVar15,0,*(undefined8 *)puVar4,0);
                                                  uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar18,0x6a,0x2e,0,uVar19,uVar14,
                                                               uVar15,0,0);
                                                  if (0x2e < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 400) = uVar18;
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_get_Current__
                                                  ;
                                                  puVar4 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<SmallIntegerArray>_get_Current__
                                                  ;
                                                  uVar19 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x78);
                                                  uVar20 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x1a8);
                                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_057acb2c(uVar14,0,*(undefined8 *)puVar6,0);
                                                  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_057acbe0(uVar15,0,*(undefined8 *)puVar4,0);
                                                  uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_057accc0(uVar18,0x76,0x2f,uVar19,uVar20,uVar14
                                                               ,uVar15,1,0);
                                                  if (0x2f < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x198) = uVar18;
                                                    puVar4 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<PokeInteractor>_MoveNext__
                                                  ;
                                                  puVar2 = PTR_DAT_067c9070;
                                                  uVar14 = *(undefined8 *)PTR_DAT_067cb890;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                           0x1b8) = lVar13;
                                                  uVar14 = FUN_02f0880c(uVar14,6);
                                                  FUN_05009b54(uVar14,*(undefined8 *)puVar4,0);
                                                  uVar15 = *(undefined8 *)puVar2;
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar3 + 0xb8) + 0x1c0) =
                                                       uVar14;
                                                  lVar13 = FUN_02f0880c(uVar15,6);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar13 + 0x18);
                                                  if ((((uVar1 != 0) &&
                                                       (*(undefined8 *)(lVar13 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_get_Current__
                                                  , (uVar1 & 0xfffffffe) != 0)) &&
                                                  (*(undefined8 *)(lVar13 + 0x28) =
                                                        *(undefined8 *)PTR_DAT_067d4de8, 2 < uVar1))
                                                  && (((*(undefined8 *)(lVar13 + 0x30) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float3>_Awake__
                                                  , (uVar1 & 0xfffffffc) != 0 &&
                                                  (*(undefined8 *)(lVar13 + 0x38) =
                                                        *(undefined8 *)PTR_DAT_067caa08, 4 < uVar1))
                                                  && (*(undefined8 *)(lVar13 + 0x40) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<ARContactSpawnTrigger>_Dispose__
                                                  , uVar1 != 5)))) {
                                                    *(undefined8 *)(lVar13 + 0x48) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_Dispose__
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                           0x1c8) = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,2);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  if ((*(uint *)(lVar13 + 0x18) != 0) &&
                                                     (*(undefined8 *)(lVar13 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                                                  , (*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                           0x1d0) = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,3);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar13 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar13 + 0x20) =
                                                            *(undefined8 *)PTR_DAT_067cd728,
                                                      (uVar1 & 0xfffffffe) != 0)) &&
                                                     (*(undefined8 *)(lVar13 + 0x28) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_set_Item__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar13 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_IEnumerator<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                                                  ;
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                           0x1d8) = lVar13;
                                                  lVar13 = FUN_02f0880c(uVar14,3);
                                                  if (lVar13 == 0) goto LAB_057aca74;
                                                  uVar1 = *(uint *)(lVar13 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar13 + 0x20) =
                                                            *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_get_Current__
                                                  , (uVar1 & 0xfffffffe) != 0)) &&
                                                  (*(undefined8 *)(lVar13 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Text>_MoveNext__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar13 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<Thread>_MoveNext__
                                                  ;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                           0x1e0) = lVar13;
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
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_057aca74:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


