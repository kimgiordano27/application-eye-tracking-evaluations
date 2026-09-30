/*
FUNCTION_NAME: Unity.AI.Navigation.NavMeshLink$$get_bidirectional
ENTRY_POINT: 01fd3e38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 238
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_9;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_14;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_17;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_13;functionality_data_collection_or_telemetry_hits_12
*/


void Unity_AI_Navigation_NavMeshLink__get_bidirectional(void)

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
  long lVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  
                    /* catch() { ... } // from try @ 01fd3d0c with catch @ 01fd3e38 */
  thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo);
  thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_IXRFocusInteractable_TypeInfo);
  thunk_FUN_00d48444(System_Threading_Timer_Scheduler_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_4294);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ctor__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<Canvas>__);
  thunk_FUN_00d48444(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_get_IsCompleted__);
  thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSessionStateChangedEventArgs_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<BezierPoint>__ctor__);
  thunk_FUN_00d48444(System_Collections_Generic_List<SoundTracking>_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_Math_Average__);
  thunk_FUN_00d48444(Method_System_Xml_Serialization_TypeTranslator_GetTypeData__);
  thunk_FUN_00d48444(
                    Method_RenderScaleManager_<CheckStatus>d__7_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetStateMachine__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_HashSet_Enumerator<__Il2CppFullySharedGenericType>_MoveNext__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<InputAction>__ctor__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastTriggerInteraction__
                    );
  thunk_FUN_00d48444(Method_System_GC_SuppressFinalize__);
  thunk_FUN_00d48444(System_Guid___var);
  thunk_FUN_00d48444(System_BitConverter_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_3514);
  thunk_FUN_00d48444(UnityEngine_Rendering_CullingResults_TypeInfo);
  thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToArray<Vector4>__);
  thunk_FUN_00d48444(Method_OVREnumerable_Enumerator<Type>_Dispose__);
  thunk_FUN_00d48444(
                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
                    );
  thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_1__);
  thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer_LogAOTError__);
  thunk_FUN_00d48444(Method_UnityEngine_XR_ARFoundation_TrackableCollection<ARPlane>_get_count__);
  *(undefined1 *)(unaff_x19 + 0x716) = 1;
  lVar11 = thunk_FUN_00d62348(*unaff_x20);
  puVar10 = StringLiteral_13433;
  puVar9 = 
  Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_<>c_<_ctor>b__226_0__;
  puVar8 = 
  Method_System_Linq_Expressions_Interpreter_LightCompiler_<>c_<CompileSwitchExpression>b__56_0__;
  puVar7 = Method_System_Threading_Tasks_Task<WebRequestStream>_ConfigureAwait__;
  puVar6 = Method_Unity_Collections_NativeSlice<byte>_op_Implicit__;
  puVar5 = Method_System_Collections_Generic_List<DebugPanel>_Add__;
  puVar4 = UnityEngine_Rendering_Universal_LightCookieManager_ShaderProperty_TypeInfo;
  puVar3 = UnityEngine_UIElements_IStylePainter_TypeInfo;
  puVar2 = UnityEngine_UIElements_Button_TypeInfo;
  puVar1 = System_Collections_Generic_List<ProbeBrickIndex_ReservedBrick>_TypeInfo;
  if (lVar11 != 0) {
    FUN_01298de8(lVar11,0x112,*(undefined8 *)StringLiteral_6809);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<float>_get_Item__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<MRUKAnchor,_GameObject>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_6916,*(undefined8 *)StringLiteral_2531,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_IXRFocusInteractable_TypeInfo,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaSimpleType___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Linq_Enumerable_Select<Transform,_Vector3>__,
                 *(undefined8 *)System_Linq_Expressions_IndexExpression_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_UnityEngine_UIElements_NavigationEventBase<NavigationTabEvent>__ctor__
                 ,*(undefined8 *)System_Nullable<BigInteger>_var,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)UnityEngine_InputSystem_HID_HID_UsagePage_TypeInfo,
                 *(undefined8 *)StringLiteral_10929,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Xml_XmlDocument_AppendChildForLoad__,
                 *(undefined8 *)StringLiteral_4055,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARSessionStateChangedEventArgs_TypeInfo,
                 *(undefined8 *)Method_UnityEngine_ProBuilder_Math_Average__,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<float>_Insert__,
                 *(undefined8 *)PTR_DAT_033ee138,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         System_Action<OVRManager_PassthroughInitializationState>_TypeInfo,
                 *(undefined8 *)Method_OVREnumerable_Enumerator<OVRSpatialAnchor>_Dispose__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_4826,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_MB3_MultiMeshCombiner_CombinedMesh>_TryGetValue__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass9_0_TypeInfo,
                 *(undefined8 *)Method_System_Collections_Generic_List<Vector4>_Add__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_get_IsCompleted__,
                 *(undefined8 *)StringLiteral_13767,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f3a90,*(undefined8 *)StringLiteral_11634,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)puVar2,*(undefined8 *)puVar10,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)puVar8,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)puVar6,
                 *(undefined8 *)Method_UnityEngine_GameObject_GetComponentInChildren<Canvas>__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_1517,
                 *(undefined8 *)Method_Newtonsoft_Json_Utilities_EnumUtils_ParseEnum__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<string[]>__ctor__,
                 *(undefined8 *)StringLiteral_1093,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Text_RegularExpressions_Regex_InitializeReferences__,
                 *(undefined8 *)Method_System_Collections_Generic_List<Vector2>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_UnityEngine_XR_InputDevices_GetDevicesWithCharacteristics__,
                 *(undefined8 *)
                  Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetStateMachine__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)System_Collections_Generic_HashSet<MRUKAnchor>_TypeInfo,
                 *(undefined8 *)
                  Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_<>c__DisplayClass27_0_<FindHoles>b__1__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_TypeInfo
                 ,*(undefined8 *)Method_TMPro_TweenRunner<FloatTween>_Init__,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_UnityEngine_ProBuilder_ArrayUtility_Add<Face>__,
                 *(undefined8 *)Method_System_Collections_Generic_List<UnityEvent>_set_Item__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Xml_Serialization_TypeTranslator_GetTypeData__,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_7730,*(undefined8 *)StringLiteral_11193,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f02f8,
                 *(undefined8 *)Method_System_Reflection_SignatureType_IsValueTypeImpl__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Convert_ToUInt16__,
                 *(undefined8 *)UnityEngine_Rect_TypeInfo,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SpatialAnchorCoreBuildingBlock_<EraseAnchorsAsync>d__28>__
                 ,*(undefined8 *)
                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__13>__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_Sirenix_OdinInspector_ValueDropdownList<bool>__ctor__,
                 *(undefined8 *)System_Collections_SortedList_ValueList_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_3989,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<Slider,_Slider_UxmlTraits>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<int,_ProfilingSampler>_TryGetValue__
                 ,*(undefined8 *)System_Collections_Generic_HashSet<ParameterExpression>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_7690,
                 *(undefined8 *)System_IValueTupleInternal_TypeInfo,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)System_Collections_Generic_IEnumerable<JsonSchema>_TypeInfo,
                 *(undefined8 *)UnityEngine_UIElements_SliderInt_UxmlFactory_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonWriter_<WriteConstructorDateAsync>d__32>__
                 ,*(undefined8 *)StringLiteral_5260,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f1460,*(undefined8 *)StringLiteral_14372,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)System_Xml_Serialization_XmlSerializer_TypeInfo,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<ObiDistanceField,_ObiDistanceFieldHandle>_Dispose__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_13394,
                 *(undefined8 *)Method_System_Net_WebRequest_get_Method__,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)UnityEngine_UI_IMaterialModifier_TypeInfo,
                 *(undefined8 *)PTR_DAT_033f05c8,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)OVRPlugin_OVRP_1_66_0_TypeInfo,
                 *(undefined8 *)StringLiteral_4470,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         System_Collections_Generic_Dictionary<string,_XmlSqlBinaryReader_NamespaceDecl>_TypeInfo
                 ,*(undefined8 *)Method_System_Collections_Generic_List<RenderTexture>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_Newtonsoft_Json_Schema_JsonSchemaBuilder_ResolveReferences__,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_TrackableCollection<ARPlane>_get_count__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebSocket_<Connect>d__30>__
                 ,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTexture_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f26d8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_KeyCollection<Rigidbody,_bool>_GetEnumerator__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)System_Func<AudioMixerGroup,_bool>_TypeInfo,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRPass>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaAttDef>_get_Values__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_Dictionary<string,_OVRGLTFInputNode>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Key__
                 ,*(undefined8 *)Method_System_Array_SetValue__,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<float,_float,_FloatOptions>>__
                 ,*(undefined8 *)Method_GameMenu_<>c_<Show>b__61_1__,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_UnityEngine_GameObject_GetComponent<OniColliderWorld>__,
                 *(undefined8 *)Method_System_Data_XSDSchema_SetProperties__,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_7638,*(undefined8 *)StringLiteral_6952,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f2350,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_88>__ctor__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass57_0_<DOShakeRotation>b__1__
                 ,*(undefined8 *)Method_OVRSpatialAnchor_LoadUnboundAnchorsAsync__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f4b90,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_10964,*(undefined8 *)StringLiteral_1924,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         System_Collections_Generic_List<InstructionList_DebugView_InstructionView>_TypeInfo
                 ,*(undefined8 *)System_Xml_Schema_XmlSchemaSequence_TypeInfo,*(undefined8 *)puVar1)
    ;
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_5669,
                 *(undefined8 *)DG_Tweening_EaseFunction_TypeInfo,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033ec9e8,
                 *(undefined8 *)Method_System_Array_Resize<Camera>__,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_2544,
                 *(undefined8 *)System_Collections_Generic_IEnumerable<XRGrabInteractable>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f4e48,*(undefined8 *)StringLiteral_5781,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_Universal_LightCookieManager_LightCookieMapping_<>c_<_cctor>b__6_1__
                 ,*(undefined8 *)Method_System_ThrowHelper_ThrowSerializationException__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Block__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_MoveNext__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractor>__ctor__
                 ,*(undefined8 *)StringLiteral_12692,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Linq_Enumerable_ToList<TuneTarget>__,
                 *(undefined8 *)StringLiteral_10896,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
                 ,*(undefined8 *)Method_System_Threading_SemaphoreSlim_CheckDispose__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Meta_Voice_Audio_Decoding_AudioDecoderJson_TypeInfo,
                 *(undefined8 *)StringLiteral_4376,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_PlaySoundOnButtonPressed_PlaySound__,
                 *(undefined8 *)StringLiteral_8579,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                 ,*(undefined8 *)PTR_DAT_033ee180,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_UnityEngine_InputSystem_InputControlExtensions_ReadValueAsObject__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Material,_Material>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)UnityEngine_Vector4___TypeInfo,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JConstructor>_get_IsCompleted__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Field_<PrivateImplementationDetails>_684312AFB7719E57993D2826FFBAF7EA965614F20F91D999FB19B01E21AA62E6
                 ,*(undefined8 *)StringLiteral_7630,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Xml_XmlResolver_SupportsType__,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_get_arSessionOrigin__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)System_Func<RANSACVelocity>_TypeInfo,
                 *(undefined8 *)Method_System_TimeZoneInfo_EnumerateFilesRecursively__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)System_Net_SystemNetworkCredential_TypeInfo,
                 *(undefined8 *)
                  Method_UnityEngine_ProBuilder_Poly2Tri_DelaunayTriangle_MarkNeighbor__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f2eb0,*(undefined8 *)StringLiteral_3837,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_GameMenu_RightTriggerDown__,
                 *(undefined8 *)
                  System_Runtime_Serialization_Formatters_Binary_InternalObjectTypeE_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033eea20,*(undefined8 *)PTR_DAT_033ec530,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)UnityEngine_SystemClock_TypeInfo,
                 *(undefined8 *)
                  Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AddVectorsDelegate>__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_8979,*(undefined8 *)StringLiteral_1332,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_OVRPlugin_get_version__,
                 *(undefined8 *)Method_System_Type_MakePointerType__,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_<ExecuteFilter>d__2_System_Collections_IEnumerator_Reset__
                 ,*(undefined8 *)
                   UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_3903,
                 *(undefined8 *)Method_System_Threading_CancellationTokenSource_TimerCallbackLogic__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_GetTokenValue<uint>__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<ObiSolver>__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_781,
                 *(undefined8 *)
                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass40_0_<DOBlendableColor>b__0__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033ec0a8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_HashSet_Enumerator<__Il2CppFullySharedGenericType>_MoveNext__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_ValueTuple<Vector4,_Vector4,_Vector4>__ctor__,
                 *(undefined8 *)Oculus_Interaction_ColliderGroup_TypeInfo,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<string,_WitResponseNode>_get_Key__
                 ,*(undefined8 *)StringLiteral_10050,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)System_Guid___var,*(undefined8 *)StringLiteral_9903,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_GetInterfaces__,
                 *(undefined8 *)StringLiteral_6964,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<MB2_TexturePacker_Image>_get_Item__,
                 *(undefined8 *)Method_Mono_Net_Security_MobileAuthenticatedStream_ProcessRead__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)UnityEngine_UIElements_UIR_BaseShaderInfoStorage_TypeInfo,
                 *(undefined8 *)
                  Method_HandMirror_<HideReflectionCoroutine>d__20_System_Collections_IEnumerator_Reset__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo,
                 *(undefined8 *)Method_OVREnumerable_Enumerator<Type>_Dispose__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRTrackedObject,_XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider>__ctor__
                 ,*(undefined8 *)
                   Method_System_Collections_Generic_Dictionary_KeyCollection<AxisAlignedBox_BoxSurface,_float>_GetEnumerator__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_System_Data_SqlTypes_SqlInt32_op_Addition__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_get_Count__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_4294,
                 *(undefined8 *)System_Func<MemberHolder,_MemberInfo[]>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Obi_IBounded_TypeInfo,
                 *(undefined8 *)Method_MetaXRAcousticGeometry_MeshGatherer_<>c_<visit>b__1_1__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_Oculus_Interaction_PointableDebugVisual_HandlePointerEventRaised__,
                 *(undefined8 *)StringLiteral_10630,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_SetStateMachine__
                 ,*(undefined8 *)Meta_XR_MultiplayerBlocks_Colocation_LogLevel_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f1ea8,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Input_ControllerAnimatedHand_<>c_<_ctor>b__54_0__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_OVRBounded2D_TryGetBoundaryPoints__,
                 *(undefined8 *)System_Data_SyntaxErrorException_TypeInfo,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f1b90,
                 *(undefined8 *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass14_0_<DOShadowStrength>b__0__
                 ,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_Polenter_Serialization_Serializing_PropertyTypeInfo<SimpleProperty>__ctor__
                 ,*(undefined8 *)PTR_DAT_033f6798,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Sirenix_Serialization_PrimitiveArrayFormatter<T>_var,
                 *(undefined8 *)Method_Mono_Net_Security_MonoTlsProviderFactory_LookupProvider__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         UnityEngine_Rendering_Universal_DebugDisplaySettingsUI_<>c__DisplayClass3_0_TypeInfo
                 ,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_u64__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_high_u32__,
                 *(undefined8 *)PTR_DAT_033ed700,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_HashSet<InputAction>__ctor__,
                 *(undefined8 *)StringLiteral_3836,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_6409,*(undefined8 *)PTR_DAT_033efbb8,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_9376,
                 *(undefined8 *)System_Action<InputStateHistory_Record>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<EasingFunction>_get_Current__
                 ,*(undefined8 *)System_Xml_XmlNodeReaderNavigator_VirtualAttribute___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_ShouldIgnoreError__
                 ,*(undefined8 *)System_Xml_Serialization_XmlIncludeAttribute_var,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033f2f70,*(undefined8 *)StringLiteral_7610,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_Create__,
                 *(undefined8 *)PTR_DAT_033eb138,*(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ctor__
                 ,*(undefined8 *)Method_System_Collections_Generic_List<StylePropertyValue>_Clear__,
                 *(undefined8 *)puVar1);
    FUN_0129a054(lVar11,*(undefined8 *)Meta_Voice_TelemetryUtilities_RuntimeTelemetry_TypeInfo,
                 *(undefined8 *)Method_OVRSceneManager_FetchAnchorsAsync<OVRRoomLayout>__,
                 *(undefined8 *)puVar1);
    FUN_01fecf68(Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVProfile>_get_Current__
                 ,lVar11,*(undefined8 *)StringLiteral_1123);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


