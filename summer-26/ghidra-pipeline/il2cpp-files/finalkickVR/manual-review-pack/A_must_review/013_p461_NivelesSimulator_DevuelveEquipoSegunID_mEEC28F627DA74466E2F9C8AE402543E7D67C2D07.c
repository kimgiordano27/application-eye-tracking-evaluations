/*
FUNCTION_NAME: NivelesSimulator_DevuelveEquipoSegunID_mEEC28F627DA74466E2F9C8AE402543E7D67C2D07
ENTRY_POINT: 01eb5724
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 303
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_21;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_18;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_18;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_6
*/


undefined8
NivelesSimulator_DevuelveEquipoSegunID_mEEC28F627DA74466E2F9C8AE402543E7D67C2D07(int param_1)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined8 local_18;
  
  puVar18 = Method_System_Collections_Generic_List_Enumerator<Renderer>_MoveNext__;
  puVar17 = Method_System_Collections_Generic_List_Enumerator<Renderer>_Dispose__;
  puVar16 = Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_get_Current__;
  puVar15 = Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_MoveNext__;
  puVar14 = Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_Dispose__;
  puVar13 = Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_get_Current__;
  puVar12 = Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_MoveNext__;
  puVar11 = Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_Dispose__;
  puVar10 = Method_System_Collections_Generic_List_Enumerator<RaycastResult>_get_Current__;
  puVar9 = Method_System_Collections_Generic_List_Enumerator<RaycastResult>_MoveNext__;
  puVar8 = Method_System_Collections_Generic_List_Enumerator<RaycastResult>_Dispose__;
  puVar7 = Method_System_Collections_Generic_List_Enumerator<RaycastHit>_get_Current__;
  puVar6 = Method_System_Collections_Generic_List_Enumerator<RaycastHit>_MoveNext__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<RaycastHit>_Dispose__;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<RadioButton>_get_Current__;
  puVar3 = Method_System_Collections_Generic_List_Enumerator<RadioButton>_MoveNext__;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<RadioButton>_Dispose__;
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<RTHandle>_get_Current__;
  if ((NivelesSimulator_DevuelveEquipoSegunID_mEEC28F627DA74466E2F9C8AE402543E7D67C2D07::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Renderer>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_Dispose__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Rigidbody>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Rigidbody>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_get_Current__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_MoveNext__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_get_Current__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_Dispose__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ShadowCasterGroup2D>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ShadowCasterGroup2D>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ShadowCasterGroup2D>_get_Current__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<SpeechEvents>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<SpeechEvents>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<SpeechEvents>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<string>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<string>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Queue_Enumerator<string>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Queue_Enumerator<string>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Queue_Enumerator<string>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<StyleSheet>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<StyleValue>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<StyleValue>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<StyleValue>_get_Current__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<TTSClipData>_Dispose__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<TTSClipData>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<TTSClipData>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TTSClipData>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TTSClipData>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TTSClipData>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TcpClient>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TcpClient>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TcpClient>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<Text>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<Text>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Thread>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Thread>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Thread>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TimeValue>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TimeValue>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TimeValue>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Toggle>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Toggle>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Toggle>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar8);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<Transform>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<Transform>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<Transform>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Transform>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<TriangulationConstraint>_Dispose__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar9);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<TriangulationConstraint>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<TriangulationConstraint>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Type>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Type>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Type>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_Dispose__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<UIDocument>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<UIDocument>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<UIDocument>_get_Current__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<ulong>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<ulong>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<ulong>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<VText>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<VText>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<VText>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector3>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar10);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector3>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector3>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector4>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector4>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector4>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<VisualElement>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<VisualElement>_MoveNext__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<VisualElement>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_MoveNext__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar11);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Volume>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Volume>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<Volume>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_get_Current__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar12);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar13);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar14);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_get_Current__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<X509Extension>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<X509Extension>_MoveNext__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<X509Extension>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRNodeState>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRNodeState>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRNodeState>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar15);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_get_Current__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_MoveNext__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_Dispose__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_get_Current__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar16);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar17);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_Dispose__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_get_Current__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar18);
    NivelesSimulator_DevuelveEquipoSegunID_mEEC28F627DA74466E2F9C8AE402543E7D67C2D07::
    s_Il2CppMethodInitialized = 1;
  }
  uVar19 = il2cpp_codegen_subtract<int,int>(param_1,1);
  switch(uVar19) {
  case 0:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_get_Current__
    ;
    break;
  case 1:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_Dispose__;
    break;
  case 2:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<string>_get_Current__;
    break;
  case 3:
    local_18 = *(undefined8 *)puVar2;
    break;
  case 4:
    local_18 = *(undefined8 *)
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
    ;
    break;
  case 5:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_get_Current__
    ;
    break;
  case 6:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_Dispose__
    ;
    break;
  case 7:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_MoveNext__;
    break;
  case 8:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_MoveNext__
    ;
    break;
  case 9:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_MoveNext__;
    break;
  case 10:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_MoveNext__;
    break;
  case 0xb:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_Dispose__;
    break;
  case 0xc:
  default:
switchD_01eb6714_default:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<string>_get_Current__;
    break;
  case 0xd:
    goto switchD_01eb6714_default;
  case 0xe:
    goto switchD_01eb6714_default;
  case 0xf:
    goto switchD_01eb6714_default;
  case 0x10:
    goto switchD_01eb6714_default;
  case 0x11:
    goto switchD_01eb6714_default;
  case 0x12:
    goto switchD_01eb6714_default;
  case 0x13:
    goto switchD_01eb6714_default;
  case 0x14:
    goto switchD_01eb6714_default;
  case 0x15:
    goto switchD_01eb6714_default;
  case 0x16:
    goto switchD_01eb6714_default;
  case 0x17:
    goto switchD_01eb6714_default;
  case 0x18:
    goto switchD_01eb6714_default;
  case 0x19:
    goto switchD_01eb6714_default;
  case 0x1a:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_Dispose__
    ;
    break;
  case 0x1b:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_Dispose__;
    break;
  case 0x1c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Rigidbody>_get_Current__;
    break;
  case 0x1d:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_get_Current__
    ;
    break;
  case 0x1e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_MoveNext__;
    break;
  case 0x1f:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_MoveNext__;
    break;
  case 0x20:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__;
    break;
  case 0x21:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_get_Current__;
    break;
  case 0x22:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_Dispose__;
    break;
  case 0x23:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_MoveNext__;
    break;
  case 0x24:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_Dispose__;
    break;
  case 0x25:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Vector3>_get_Current__;
    break;
  case 0x26:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ShadowCasterGroup2D>_Dispose__;
    break;
  case 0x27:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<X509Extension>_MoveNext__;
    break;
  case 0x28:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_MoveNext__;
    break;
  case 0x29:
    goto switchD_01eb6714_default;
  case 0x2a:
    goto switchD_01eb6714_default;
  case 0x2b:
    goto switchD_01eb6714_default;
  case 0x2c:
    goto switchD_01eb6714_default;
  case 0x2d:
    goto switchD_01eb6714_default;
  case 0x2e:
    goto switchD_01eb6714_default;
  case 0x2f:
    goto switchD_01eb6714_default;
  case 0x30:
    goto switchD_01eb6714_default;
  case 0x31:
    goto switchD_01eb6714_default;
  case 0x32:
    goto switchD_01eb6714_default;
  case 0x33:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_get_Current__
    ;
    break;
  case 0x34:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_MoveNext__;
    break;
  case 0x35:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
    ;
    break;
  case 0x36:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_get_Current__;
    break;
  case 0x37:
    goto switchD_01eb6714_default;
  case 0x38:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_MoveNext__;
    break;
  case 0x39:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Vector3>_MoveNext__;
    break;
  case 0x3a:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_Dispose__;
    break;
  case 0x3b:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_Dispose__;
    break;
  case 0x3c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_get_Current__;
    break;
  case 0x3d:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Type>_get_Current__;
    break;
  case 0x3e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_Dispose__
    ;
    break;
  case 0x3f:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_Dispose__
    ;
    break;
  case 0x40:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_MoveNext__
    ;
    break;
  case 0x41:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__;
    break;
  case 0x42:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_Dispose__;
    break;
  case 0x43:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_Dispose__
    ;
    break;
  case 0x44:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_get_Current__
    ;
    break;
  case 0x45:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_Dispose__;
    break;
  case 0x46:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__;
    break;
  case 0x47:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_get_Current__
    ;
    break;
  case 0x48:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRNodeState>_MoveNext__;
    break;
  case 0x49:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Thread>_get_Current__;
    break;
  case 0x4a:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_Dispose__;
    break;
  case 0x4b:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Renderer>_get_Current__;
    break;
  case 0x4c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_get_Current__
    ;
    break;
  case 0x4d:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_Dispose__
    ;
    break;
  case 0x4e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Vector4>_get_Current__;
    break;
  case 0x4f:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_Dispose__
    ;
    break;
  case 0x50:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_MoveNext__;
    break;
  case 0x51:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_get_Current__
    ;
    break;
  case 0x52:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_Dispose__;
    break;
  case 0x53:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__;
    break;
  case 0x54:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_MoveNext__
    ;
    break;
  case 0x55:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__;
    break;
  case 0x56:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_Dispose__;
    break;
  case 0x57:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_MoveNext__
    ;
    break;
  case 0x58:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_Dispose__;
    break;
  case 0x59:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__
    ;
    break;
  case 0x5a:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_get_Current__;
    break;
  case 0x5b:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
    ;
    break;
  case 0x5c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
    ;
    break;
  case 0x5d:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_MoveNext__
    ;
    break;
  case 0x5e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_MoveNext__
    ;
    break;
  case 0x5f:
    goto switchD_01eb6714_default;
  case 0x60:
    goto switchD_01eb6714_default;
  case 0x61:
    goto switchD_01eb6714_default;
  case 0x62:
    goto switchD_01eb6714_default;
  case 99:
    goto switchD_01eb6714_default;
  case 100:
    goto switchD_01eb6714_default;
  case 0x65:
    goto switchD_01eb6714_default;
  case 0x66:
    goto switchD_01eb6714_default;
  case 0x67:
    goto switchD_01eb6714_default;
  case 0x68:
    goto switchD_01eb6714_default;
  case 0x69:
    goto switchD_01eb6714_default;
  case 0x6a:
    goto switchD_01eb6714_default;
  case 0x6b:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Thread>_MoveNext__;
    break;
  case 0x6c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
    ;
    break;
  case 0x6d:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<SpeechEvents>_get_Current__;
    break;
  case 0x6e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_Dispose__
    ;
    break;
  case 0x6f:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__
    ;
    break;
  case 0x70:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ulong>_MoveNext__;
    break;
  case 0x71:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
    ;
    break;
  case 0x72:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_get_Current__;
    break;
  case 0x73:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
    ;
    break;
  case 0x74:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
    ;
    break;
  case 0x75:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_Dispose__;
    break;
  case 0x76:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_MoveNext__
    ;
    break;
  case 0x77:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_Dispose__;
    break;
  case 0x78:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_Dispose__;
    break;
  case 0x79:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_Dispose__;
    break;
  case 0x7a:
    goto switchD_01eb6714_default;
  case 0x7b:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_MoveNext__
    ;
    break;
  case 0x7c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_get_Current__;
    break;
  case 0x7d:
    goto switchD_01eb6714_default;
  case 0x7e:
    goto switchD_01eb6714_default;
  case 0x7f:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_Dispose__;
    break;
  case 0x80:
    goto switchD_01eb6714_default;
  case 0x81:
    goto switchD_01eb6714_default;
  case 0x82:
    goto switchD_01eb6714_default;
  case 0x83:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_Dispose__;
    break;
  case 0x84:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TcpClient>_get_Current__;
    break;
  case 0x85:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ulong>_get_Current__
    ;
    break;
  case 0x86:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_get_Current__
    ;
    break;
  case 0x87:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_Dispose__;
    break;
  case 0x88:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Rigidbody>_Dispose__
    ;
    break;
  case 0x89:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_MoveNext__;
    break;
  case 0x8a:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_Dispose__
    ;
    break;
  case 0x8b:
    local_18 = *(undefined8 *)
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
    ;
    break;
  case 0x8c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_Dispose__;
    break;
  case 0x8d:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TriangulationConstraint>_Dispose__
    ;
    break;
  case 0x8e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_MoveNext__
    ;
    break;
  case 0x8f:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_get_Current__;
    break;
  case 0x90:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_get_Current__
    ;
    break;
  case 0x91:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_MoveNext__
    ;
    break;
  case 0x92:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_get_Current__;
    break;
  case 0x93:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_MoveNext__;
    break;
  case 0x94:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__;
    break;
  case 0x95:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_get_Current__
    ;
    break;
  case 0x96:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_MoveNext__
    ;
    break;
  case 0x97:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_Dispose__
    ;
    break;
  case 0x98:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_get_Current__
    ;
    break;
  case 0x99:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_MoveNext__
    ;
    break;
  case 0x9a:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_Dispose__;
    break;
  case 0x9b:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_Dispose__
    ;
    break;
  case 0x9c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
    break;
  case 0x9d:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TimeValue>_MoveNext__;
    break;
  case 0x9e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StyleValue>_get_Current__;
    break;
  case 0x9f:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<X509Extension>_get_Current__;
    break;
  case 0xa0:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_Dispose__
    ;
    break;
  case 0xa1:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_get_Current__;
    break;
  case 0xa2:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_get_Current__
    ;
    break;
  case 0xa3:
    local_18 = *(undefined8 *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_Dispose__;
    break;
  case 0xa4:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_get_Current__
    ;
    break;
  case 0xa5:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_MoveNext__;
    break;
  case 0xa6:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
    ;
    break;
  case 0xa7:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_MoveNext__;
    break;
  case 0xa8:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_Dispose__;
    break;
  case 0xa9:
    local_18 = *(undefined8 *)puVar6;
    break;
  case 0xaa:
    goto switchD_01eb6714_default;
  case 0xab:
    goto switchD_01eb6714_default;
  case 0xac:
    goto switchD_01eb6714_default;
  case 0xad:
    goto switchD_01eb6714_default;
  case 0xae:
    goto switchD_01eb6714_default;
  case 0xaf:
    goto switchD_01eb6714_default;
  case 0xb0:
    goto switchD_01eb6714_default;
  case 0xb1:
    goto switchD_01eb6714_default;
  case 0xb2:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<string>_MoveNext__;
    break;
  case 0xb3:
    goto switchD_01eb6714_default;
  case 0xb4:
    goto switchD_01eb6714_default;
  case 0xb5:
    goto switchD_01eb6714_default;
  case 0xb6:
    goto switchD_01eb6714_default;
  case 0xb7:
    goto switchD_01eb6714_default;
  case 0xb8:
    goto switchD_01eb6714_default;
  case 0xb9:
    goto switchD_01eb6714_default;
  case 0xba:
    goto switchD_01eb6714_default;
  case 0xbb:
    goto switchD_01eb6714_default;
  case 0xbc:
    goto switchD_01eb6714_default;
  case 0xbd:
    goto switchD_01eb6714_default;
  case 0xbe:
    local_18 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_Dispose__
    ;
    break;
  case 0xbf:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_MoveNext__;
    break;
  case 0xc0:
    goto switchD_01eb6714_default;
  case 0xc1:
    goto switchD_01eb6714_default;
  case 0xc2:
    goto switchD_01eb6714_default;
  case 0xc3:
    goto switchD_01eb6714_default;
  case 0xc4:
    goto switchD_01eb6714_default;
  case 0xc5:
    goto switchD_01eb6714_default;
  case 0xc6:
    goto switchD_01eb6714_default;
  case 199:
    goto switchD_01eb6714_default;
  case 200:
    goto switchD_01eb6714_default;
  case 0xc9:
    goto switchD_01eb6714_default;
  case 0xca:
    goto switchD_01eb6714_default;
  case 0xcb:
    goto switchD_01eb6714_default;
  case 0xcc:
    goto switchD_01eb6714_default;
  case 0xcd:
    goto switchD_01eb6714_default;
  case 0xce:
    goto switchD_01eb6714_default;
  case 0xcf:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_get_Current__
    ;
    break;
  case 0xd0:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
    ;
    break;
  case 0xd1:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_Dispose__;
    break;
  case 0xd2:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_MoveNext__;
    break;
  case 0xd3:
    local_18 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_get_Current__
    ;
    break;
  case 0xd4:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_Dispose__;
    break;
  case 0xd5:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_get_Current__
    ;
    break;
  case 0xd6:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TimeValue>_Dispose__
    ;
    break;
  case 0xd7:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_MoveNext__;
    break;
  case 0xd8:
    goto switchD_01eb6714_default;
  case 0xd9:
    goto switchD_01eb6714_default;
  case 0xda:
    goto switchD_01eb6714_default;
  case 0xdb:
    goto switchD_01eb6714_default;
  case 0xdc:
    goto switchD_01eb6714_default;
  case 0xdd:
    goto switchD_01eb6714_default;
  case 0xde:
    goto switchD_01eb6714_default;
  case 0xdf:
    goto switchD_01eb6714_default;
  case 0xe0:
    goto switchD_01eb6714_default;
  case 0xe1:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_get_Current__
    ;
    break;
  case 0xe2:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_Dispose__;
    break;
  case 0xe3:
    goto switchD_01eb6714_default;
  case 0xe4:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Volume>_MoveNext__;
    break;
  case 0xe5:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Type>_MoveNext__;
    break;
  case 0xe6:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__;
    break;
  case 0xe7:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
    ;
    break;
  case 0xe8:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_MoveNext__
    ;
    break;
  case 0xe9:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_MoveNext__
    ;
    break;
  case 0xea:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TriangulationConstraint>_get_Current__
    ;
    break;
  case 0xeb:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_MoveNext__;
    break;
  case 0xec:
    goto switchD_01eb6714_default;
  case 0xed:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_Dispose__;
    break;
  case 0xee:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_MoveNext__;
    break;
  case 0xef:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_MoveNext__
    ;
    break;
  case 0xf0:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<TTSClipData>_get_Current__;
    break;
  case 0xf1:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_get_Current__
    ;
    break;
  case 0xf2:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_Dispose__;
    break;
  case 0xf3:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<TTSClipData>_Dispose__;
    break;
  case 0xf4:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_MoveNext__
    ;
    break;
  case 0xf5:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_Dispose__;
    break;
  case 0xf6:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Toggle>_get_Current__;
    break;
  case 0xf7:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
    break;
  case 0xf8:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_MoveNext__;
    break;
  case 0xf9:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_get_Current__;
    break;
  case 0xfa:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__;
    break;
  case 0xfb:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__
    ;
    break;
  case 0xfc:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ShadowCasterGroup2D>_get_Current__
    ;
    break;
  case 0xfd:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<SpeechEvents>_Dispose__;
    break;
  case 0xfe:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_MoveNext__
    ;
    break;
  case 0xff:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_MoveNext__;
    break;
  case 0x100:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_Dispose__;
    break;
  case 0x101:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_MoveNext__;
    break;
  case 0x102:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_MoveNext__
    ;
    break;
  case 0x103:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_MoveNext__;
    break;
  case 0x104:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_MoveNext__;
    break;
  case 0x105:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_get_Current__;
    break;
  case 0x106:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_MoveNext__
    ;
    break;
  case 0x107:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_get_Current__;
    break;
  case 0x108:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TriangulationConstraint>_MoveNext__
    ;
    break;
  case 0x109:
    local_18 = *(undefined8 *)puVar8;
    break;
  case 0x10a:
    local_18 = *(undefined8 *)puVar14;
    break;
  case 0x10b:
    local_18 = *(undefined8 *)puVar12;
    break;
  case 0x10c:
    local_18 = *(undefined8 *)puVar3;
    break;
  case 0x10d:
    local_18 = *(undefined8 *)puVar13;
    break;
  case 0x10e:
    local_18 = *(undefined8 *)puVar9;
    break;
  case 0x10f:
    local_18 = *(undefined8 *)puVar11;
    break;
  case 0x110:
    local_18 = *(undefined8 *)puVar17;
    break;
  case 0x111:
    local_18 = *(undefined8 *)puVar1;
    break;
  case 0x112:
    local_18 = *(undefined8 *)puVar10;
    break;
  case 0x113:
    local_18 = *(undefined8 *)puVar15;
    break;
  case 0x114:
    local_18 = *(undefined8 *)puVar18;
    break;
  case 0x115:
    local_18 = *(undefined8 *)puVar5;
    break;
  case 0x116:
    local_18 = *(undefined8 *)puVar16;
    break;
  case 0x117:
    goto switchD_01eb6714_default;
  case 0x118:
    local_18 = *(undefined8 *)puVar4;
    break;
  case 0x119:
    local_18 = *(undefined8 *)puVar7;
    break;
  case 0x11a:
    local_18 = *(undefined8 *)puVar8;
    break;
  case 0x11b:
    local_18 = *(undefined8 *)puVar14;
    break;
  case 0x11c:
    local_18 = *(undefined8 *)puVar12;
    break;
  case 0x11d:
    local_18 = *(undefined8 *)puVar3;
    break;
  case 0x11e:
    local_18 = *(undefined8 *)puVar13;
    break;
  case 0x11f:
    local_18 = *(undefined8 *)puVar9;
    break;
  case 0x120:
    local_18 = *(undefined8 *)puVar11;
    break;
  case 0x121:
    local_18 = *(undefined8 *)puVar17;
    break;
  case 0x122:
    local_18 = *(undefined8 *)puVar1;
    break;
  case 0x123:
    local_18 = *(undefined8 *)puVar10;
    break;
  case 0x124:
    local_18 = *(undefined8 *)puVar15;
    break;
  case 0x125:
    local_18 = *(undefined8 *)puVar18;
    break;
  case 0x126:
    local_18 = *(undefined8 *)puVar5;
    break;
  case 0x127:
    local_18 = *(undefined8 *)puVar16;
    break;
  case 0x128:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Toggle>_MoveNext__;
    break;
  case 0x129:
    local_18 = *(undefined8 *)puVar4;
    break;
  case 0x12a:
    local_18 = *(undefined8 *)puVar7;
    break;
  case 299:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TimeValue>_get_Current__;
    break;
  case 300:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StyleValue>_Dispose__;
    break;
  case 0x12d:
    local_18 = *(undefined8 *)puVar2;
    break;
  case 0x12e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_get_Current__
    ;
    break;
  case 0x12f:
    goto switchD_01eb6714_default;
  case 0x130:
    goto switchD_01eb6714_default;
  case 0x131:
    goto switchD_01eb6714_default;
  case 0x132:
    goto switchD_01eb6714_default;
  case 0x133:
    goto switchD_01eb6714_default;
  case 0x134:
    goto switchD_01eb6714_default;
  case 0x135:
    goto switchD_01eb6714_default;
  case 0x136:
    goto switchD_01eb6714_default;
  case 0x137:
    goto switchD_01eb6714_default;
  case 0x138:
    goto switchD_01eb6714_default;
  case 0x139:
    goto switchD_01eb6714_default;
  case 0x13a:
    goto switchD_01eb6714_default;
  case 0x13b:
    goto switchD_01eb6714_default;
  case 0x13c:
    goto switchD_01eb6714_default;
  case 0x13d:
    goto switchD_01eb6714_default;
  case 0x13e:
    goto switchD_01eb6714_default;
  case 0x13f:
    goto switchD_01eb6714_default;
  case 0x140:
    goto switchD_01eb6714_default;
  case 0x141:
    goto switchD_01eb6714_default;
  case 0x142:
    goto switchD_01eb6714_default;
  case 0x143:
    goto switchD_01eb6714_default;
  case 0x144:
    goto switchD_01eb6714_default;
  case 0x145:
    goto switchD_01eb6714_default;
  case 0x146:
    goto switchD_01eb6714_default;
  case 0x147:
    goto switchD_01eb6714_default;
  case 0x148:
    goto switchD_01eb6714_default;
  case 0x149:
    goto switchD_01eb6714_default;
  case 0x14a:
    goto switchD_01eb6714_default;
  case 0x14b:
    goto switchD_01eb6714_default;
  case 0x14c:
    goto switchD_01eb6714_default;
  case 0x14d:
    goto switchD_01eb6714_default;
  case 0x14e:
    goto switchD_01eb6714_default;
  case 0x14f:
    goto switchD_01eb6714_default;
  case 0x150:
    goto switchD_01eb6714_default;
  case 0x151:
    goto switchD_01eb6714_default;
  case 0x152:
    goto switchD_01eb6714_default;
  case 0x153:
    goto switchD_01eb6714_default;
  case 0x154:
    goto switchD_01eb6714_default;
  case 0x155:
    goto switchD_01eb6714_default;
  case 0x156:
    goto switchD_01eb6714_default;
  case 0x157:
    local_18 = *(undefined8 *)
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
    ;
    break;
  case 0x158:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_get_Current__;
    break;
  case 0x159:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TcpClient>_Dispose__
    ;
    break;
  case 0x15a:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__;
    break;
  case 0x15b:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<string>_Dispose__;
    break;
  case 0x15c:
    local_18 = *(undefined8 *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_MoveNext__;
    break;
  case 0x15d:
    local_18 = *(undefined8 *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_get_Current__
    ;
    break;
  case 0x15e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_get_Current__;
    break;
  case 0x15f:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_MoveNext__;
    break;
  case 0x160:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_MoveNext__
    ;
    break;
  case 0x161:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TTSClipData>_Dispose__;
    break;
  case 0x162:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_Dispose__
    ;
    break;
  case 0x163:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VText>_get_Current__
    ;
    break;
  case 0x164:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_get_Current__
    ;
    break;
  case 0x165:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_get_Current__;
    break;
  case 0x166:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<X509Extension>_Dispose__;
    break;
  case 0x167:
    goto switchD_01eb6714_default;
  case 0x168:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_get_Current__
    ;
    break;
  case 0x169:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__;
    break;
  case 0x16a:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_Dispose__
    ;
    break;
  case 0x16b:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_MoveNext__;
    break;
  case 0x16c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_MoveNext__;
    break;
  case 0x16d:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_get_Current__;
    break;
  case 0x16e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_MoveNext__
    ;
    break;
  case 0x16f:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRNodeState>_get_Current__;
    break;
  case 0x170:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StyleSheet>_Dispose__;
    break;
  case 0x171:
    goto switchD_01eb6714_default;
  case 0x172:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_get_Current__
    ;
    break;
  case 0x173:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_Dispose__;
    break;
  case 0x174:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ShadowCasterGroup2D>_MoveNext__;
    break;
  case 0x175:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
    ;
    break;
  case 0x176:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_get_Current__;
    break;
  case 0x177:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_Dispose__;
    break;
  case 0x178:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_MoveNext__;
    break;
  case 0x179:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_get_Current__;
    break;
  case 0x17a:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_Dispose__;
    break;
  case 0x17b:
    goto switchD_01eb6714_default;
  case 0x17c:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Toggle>_Dispose__;
    break;
  case 0x17d:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_Dispose__
    ;
    break;
  case 0x17e:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TcpClient>_MoveNext__;
    break;
  case 0x17f:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_get_Current__
    ;
    break;
  case 0x180:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_Queue_Enumerator<string>_Dispose__;
    break;
  case 0x181:
    local_18 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_Dispose__;
    break;
  case 0x182:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<Text>_MoveNext__;
    break;
  case 0x183:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Type>_Dispose__;
    break;
  case 0x184:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Volume>_Dispose__;
    break;
  case 0x185:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_Dispose__;
    break;
  case 0x186:
    goto switchD_01eb6714_default;
  case 0x187:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Vector3>_Dispose__;
    break;
  case 0x188:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_Dispose__;
    break;
  case 0x189:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_get_Current__;
    break;
  case 0x18a:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<Transform>_MoveNext__;
    break;
  case 0x18b:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_Dispose__;
    break;
  case 0x18c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_Dispose__
    ;
    break;
  case 0x18d:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ulong>_Dispose__;
    break;
  case 0x18e:
    local_18 = *(undefined8 *)puVar6;
    break;
  case 399:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UIDocument>_get_Current__;
    break;
  case 400:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_get_Current__
    ;
    break;
  case 0x191:
    goto switchD_01eb6714_default;
  case 0x192:
    goto switchD_01eb6714_default;
  case 0x193:
    goto switchD_01eb6714_default;
  case 0x194:
    goto switchD_01eb6714_default;
  case 0x195:
    goto switchD_01eb6714_default;
  case 0x196:
    goto switchD_01eb6714_default;
  case 0x197:
    goto switchD_01eb6714_default;
  case 0x198:
    goto switchD_01eb6714_default;
  case 0x199:
    goto switchD_01eb6714_default;
  case 0x19a:
    goto switchD_01eb6714_default;
  case 0x19b:
    goto switchD_01eb6714_default;
  case 0x19c:
    goto switchD_01eb6714_default;
  case 0x19d:
    goto switchD_01eb6714_default;
  case 0x19e:
    goto switchD_01eb6714_default;
  case 0x19f:
    goto switchD_01eb6714_default;
  case 0x1a0:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
    ;
    break;
  case 0x1a1:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_Queue_Enumerator<string>_MoveNext__;
    break;
  case 0x1a2:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_get_Current__
    ;
    break;
  case 0x1a3:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Vector4>_MoveNext__;
    break;
  case 0x1a4:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__;
    break;
  case 0x1a5:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VText>_Dispose__;
    break;
  case 0x1a6:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_MoveNext__
    ;
    break;
  case 0x1a7:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<Text>_get_Current__;
    break;
  case 0x1a8:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_get_Current__;
    break;
  case 0x1a9:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_Dispose__;
    break;
  case 0x1aa:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__;
    break;
  case 0x1ab:
    local_18 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_MoveNext__;
    break;
  case 0x1ac:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VisualElement>_Dispose__;
    break;
  case 0x1ad:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StyleValue>_MoveNext__;
    break;
  case 0x1ae:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<SpeechEvents>_MoveNext__;
    break;
  case 0x1af:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
    ;
    break;
  case 0x1b0:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRNodeState>_Dispose__;
    break;
  case 0x1b1:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_Dispose__
    ;
    break;
  case 0x1b2:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_Dispose__
    ;
    break;
  case 0x1b3:
    goto switchD_01eb6714_default;
  case 0x1b4:
    goto switchD_01eb6714_default;
  case 0x1b5:
    goto switchD_01eb6714_default;
  case 0x1b6:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_get_Current__
    ;
    break;
  case 0x1b7:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_MoveNext__;
    break;
  case 0x1b8:
    goto switchD_01eb6714_default;
  case 0x1b9:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_get_Current__
    ;
    break;
  case 0x1ba:
    goto switchD_01eb6714_default;
  case 0x1bb:
    local_18 = *(undefined8 *)puVar7;
    break;
  case 0x1bc:
    goto switchD_01eb6714_default;
  case 0x1bd:
    goto switchD_01eb6714_default;
  case 0x1be:
    goto switchD_01eb6714_default;
  case 0x1bf:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<Transform>_get_Current__;
    break;
  case 0x1c0:
    goto switchD_01eb6714_default;
  case 0x1c1:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_get_Current__
    ;
    break;
  case 0x1c2:
    goto switchD_01eb6714_default;
  case 0x1c3:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_Dispose__;
    break;
  case 0x1c4:
    goto switchD_01eb6714_default;
  case 0x1c5:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Volume>_get_Current__;
    break;
  case 0x1c6:
    goto switchD_01eb6714_default;
  case 0x1c7:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_Dispose__
    ;
    break;
  case 0x1c8:
    goto switchD_01eb6714_default;
  case 0x1c9:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_get_Current__
    ;
    break;
  case 0x1ca:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_MoveNext__;
    break;
  case 0x1cb:
    goto switchD_01eb6714_default;
  case 0x1cc:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UIDocument>_Dispose__;
    break;
  case 0x1cd:
    goto switchD_01eb6714_default;
  case 0x1ce:
    goto switchD_01eb6714_default;
  case 0x1cf:
    goto switchD_01eb6714_default;
  case 0x1d0:
    goto switchD_01eb6714_default;
  case 0x1d1:
    goto switchD_01eb6714_default;
  case 0x1d2:
    goto switchD_01eb6714_default;
  case 0x1d3:
    goto switchD_01eb6714_default;
  case 0x1d4:
    goto switchD_01eb6714_default;
  case 0x1d5:
    goto switchD_01eb6714_default;
  case 0x1d6:
    goto switchD_01eb6714_default;
  case 0x1d7:
    goto switchD_01eb6714_default;
  case 0x1d8:
    goto switchD_01eb6714_default;
  case 0x1d9:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_Dispose__;
    break;
  case 0x1da:
    goto switchD_01eb6714_default;
  case 0x1db:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_get_Current__
    ;
    break;
  case 0x1dc:
    goto switchD_01eb6714_default;
  case 0x1dd:
    goto switchD_01eb6714_default;
  case 0x1de:
    goto switchD_01eb6714_default;
  case 0x1df:
    goto switchD_01eb6714_default;
  case 0x1e0:
    goto switchD_01eb6714_default;
  case 0x1e1:
    goto switchD_01eb6714_default;
  case 0x1e2:
    goto switchD_01eb6714_default;
  case 0x1e3:
    goto switchD_01eb6714_default;
  case 0x1e4:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_get_Current__;
    break;
  case 0x1e5:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_get_Current__;
    break;
  case 0x1e6:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_MoveNext__;
    break;
  case 0x1e7:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__;
    break;
  case 0x1e8:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<TTSClipData>_MoveNext__;
    break;
  case 0x1e9:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
    ;
    break;
  case 0x1ea:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VisualElement>_get_Current__;
    break;
  case 0x1eb:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_MoveNext__;
    break;
  case 0x1ec:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Vector4>_Dispose__;
    break;
  case 0x1ed:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__;
    break;
  case 0x1ee:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_MoveNext__
    ;
    break;
  case 0x1ef:
    local_18 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_get_Current__
    ;
    break;
  case 0x1f0:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_MoveNext__;
    break;
  case 0x1f1:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
    break;
  case 0x1f2:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Transform>_get_Current__;
    break;
  case 499:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_get_Current__
    ;
    break;
  case 500:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TTSClipData>_MoveNext__;
    break;
  case 0x1f5:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_Queue_Enumerator<string>_get_Current__;
    break;
  case 0x1f6:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<Transform>_Dispose__;
    break;
  case 0x1f7:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Thread>_Dispose__;
    break;
  case 0x1f8:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<VisualElement>_MoveNext__;
    break;
  case 0x1f9:
    local_18 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_MoveNext__
    ;
    break;
  case 0x1fa:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UIDocument>_MoveNext__;
    break;
  case 0x1fb:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_MoveNext__;
    break;
  case 0x1fc:
    goto switchD_01eb6714_default;
  case 0x1fd:
    goto switchD_01eb6714_default;
  case 0x1fe:
    goto switchD_01eb6714_default;
  case 0x1ff:
    goto switchD_01eb6714_default;
  case 0x200:
    goto switchD_01eb6714_default;
  case 0x201:
    goto switchD_01eb6714_default;
  case 0x202:
    goto switchD_01eb6714_default;
  case 0x203:
    goto switchD_01eb6714_default;
  case 0x204:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<TTSClipData>_get_Current__;
    break;
  case 0x205:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
    ;
    break;
  case 0x206:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_MoveNext__
    ;
    break;
  case 0x207:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_get_Current__
    ;
    break;
  case 0x208:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_get_Current__
    ;
    break;
  case 0x209:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_Dispose__
    ;
    break;
  case 0x20a:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VText>_MoveNext__;
    break;
  case 0x20b:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_get_Current__
    ;
    break;
  case 0x20c:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_get_Current__
    ;
    break;
  case 0x20d:
    local_18 = *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__
    ;
    break;
  case 0x20e:
    goto switchD_01eb6714_default;
  case 0x20f:
    goto switchD_01eb6714_default;
  case 0x210:
    goto switchD_01eb6714_default;
  case 0x211:
    goto switchD_01eb6714_default;
  case 0x212:
    goto switchD_01eb6714_default;
  case 0x213:
    goto switchD_01eb6714_default;
  case 0x214:
    goto switchD_01eb6714_default;
  case 0x215:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_Dispose__
    ;
    break;
  case 0x216:
    local_18 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_get_Current__
    ;
  }
  return local_18;
}


