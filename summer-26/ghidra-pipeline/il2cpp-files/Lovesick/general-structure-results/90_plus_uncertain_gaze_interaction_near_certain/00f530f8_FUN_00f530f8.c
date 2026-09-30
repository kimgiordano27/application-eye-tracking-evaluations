/*
FUNCTION_NAME: FUN_00f530f8
ENTRY_POINT: 00f530f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 253
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_21;functionality_possible_biometrics_hits_2
*/


void FUN_00f530f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = System_ConsoleCancelEventArgs_TypeInfo;
  puVar2 = System_Func<NoteWave,_bool>_TypeInfo;
  puVar1 = PTR_DAT_033f01d0;
                    /* try { // try from 00f53100 to 010531f7 has its CatchHandler @ 00f53100
                       catch() { ... } // from try @ 00f53100 with catch @ 00f53100
                       catch() { ... } // from try @ 00f53284 with catch @ 00f53100
                       catch() { ... } // from try @ 00f532d4 with catch @ 00f53100
                       catch() { ... } // from try @ 00f53318 with catch @ 00f53100
                       catch() { ... } // from try @ 00f53348 with catch @ 00f53100 */
  if ((DAT_03775727 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhq_laneq_s32__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxvq_s16__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector3>_AddRange__);
    thunk_FUN_00d48444(Method_UnityEngine_AI_NavMeshBuilder_CollectSources__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<AudioAffordanceThemeData>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                      );
    thunk_FUN_00d48444(StringLiteral_773);
    thunk_FUN_00d48444(Method_System_Collections_ListDictionaryInternal_NodeEnumerator_get_Key__);
    thunk_FUN_00d48444(System_Action<MeshGenerationResult>_TypeInfo);
    thunk_FUN_00d48444(Method_FlickerSceneOnTabletPlaced_<>c_<FlickerScene>b__3_0__);
    thunk_FUN_00d48444(StringLiteral_1560);
    thunk_FUN_00d48444(
                      Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<OVRSkeleton_BoneId,_HumanBodyBones>_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_11171);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_7__);
    thunk_FUN_00d48444(StringLiteral_13460);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XsdBuilder_BuildNotation_System__);
    thunk_FUN_00d48444(PTR_DAT_033f6b80);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_SetStateMachine__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Converters_BinaryConverter_ReadJson__);
    thunk_FUN_00d48444(Method_System_Globalization_CultureInfo_get_CalendarType__);
    thunk_FUN_00d48444(StringLiteral_12912);
    thunk_FUN_00d48444(StringLiteral_9273);
    thunk_FUN_00d48444(System_Globalization_CultureInfo_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4292);
    thunk_FUN_00d48444(
                      Method_Meta_WitAi_Data_RingBuffer<__Il2CppFullySharedGenericType>_CopyFromBuffer__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmvn_s8__);
    thunk_FUN_00d48444(PTR_DAT_033f4088);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GrabbableChild>_Add__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_ListLayout_<>c_<_ctor>b__11_1__);
    thunk_FUN_00d48444(StringLiteral_2898);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<ObiRope>__);
    thunk_FUN_00d48444(UnityEngine_TextureFormat_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_95);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SimpleTuple<Face,_Face>>__ctor__);
    thunk_FUN_00d48444(Method_System_Threading_OSSpecificSynchronizationContext_InvocationEntry__);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_TypeBuilder_IsDefined__);
    thunk_FUN_00d48444(PTR_DAT_033f58b8);
    thunk_FUN_00d48444(PTR_DAT_033f4e88);
    thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_SizedArray_TypeInfo);
    thunk_FUN_00d48444(
                      Method_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>_get_Assembly__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_ObjectManager_CompleteISerializableObject__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ecfa0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DissolveTest_DissolveSet>_get_Current__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f70b0);
    thunk_FUN_00d48444(System_Collections_Generic_List<List<UIRenderDevice_AllocToUpdate>>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Linq_Expressions_PrimitiveParameterExpression<uint>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphObjectPool_SharedObjectPool<MaterialPropertyBlock>_Get__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_Layouts_InputControlLayout_TypeInfo);
    thunk_FUN_00d48444(Method_System_Net_Sockets_Socket_ThrowIfUdp__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<HeightFieldHeader>__ctor__);
    thunk_FUN_00d48444(Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_148__);
    thunk_FUN_00d48444(PTR_DAT_033ec290);
    thunk_FUN_00d48444(StringLiteral_4388);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CwRoot>_Remove__);
    thunk_FUN_00d48444(ObiContactGrabber_GrabbedParticle_TypeInfo);
    thunk_FUN_00d48444(Method_System_Security_Claims_ClaimsIdentity_set_Actor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<WitResponseNode>_get_Count__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<MethodInfo>__);
    thunk_FUN_00d48444(PTR_DAT_033f5af8);
    thunk_FUN_00d48444(StringLiteral_10775);
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_OnGraphRegisteredDelegate_TypeInfo
                      );
    thunk_FUN_00d48444(System_Func<NoteWave,_bool>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Array_Find<__Il2CppFullySharedGenericType>__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Add__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeReferenceVolume_CellSortInfo>_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_3446);
    thunk_FUN_00d48444(StringLiteral_2709);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_MinimalBaseFormatter<Vector2>__ctor__);
    thunk_FUN_00d48444(StringLiteral_6653);
    thunk_FUN_00d48444(Method_Oculus_Interaction_PhysicsGrabbable_<>c_<_ctor>b__35_0__);
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<TMP_InputField_LineType>__);
    thunk_FUN_00d48444(StringLiteral_11320);
    thunk_FUN_00d48444(Method_System_Data_DataRow_GetOriginalRecordNo__);
    thunk_FUN_00d48444(Method_System_Uri_UnescapeDataString__);
    thunk_FUN_00d48444(System_Collections_Generic_List<PlayableBinding>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ed830);
    thunk_FUN_00d48444(Method_TutorialPopup_Hide__);
    thunk_FUN_00d48444(StringLiteral_1349);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>_get_IsCompleted__
                      );
    thunk_FUN_00d48444(System_Linq_Expressions_NewArrayExpression_TypeInfo);
    thunk_FUN_00d48444(System_Xml_Linq_SaveOptions_var);
    thunk_FUN_00d48444(StringLiteral_3209);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Vector4>__ctor__);
    thunk_FUN_00d48444(Method_System_Text_StringBuilder_ThreadSafeCopy__);
    thunk_FUN_00d48444(UnityEngine_Timeline_TrackAsset_<get_outputs>d__65_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Rotate>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_Linq_XHashtable<WeakReference>_Add__);
    thunk_FUN_00d48444(Method_System_Runtime_CompilerServices_CallSite<object>_Create__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerBitField_GetValue__);
    thunk_FUN_00d48444(PTR_DAT_033f2670);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<STMSampleLink>_Clear__);
    thunk_FUN_00d48444(StringLiteral_6666);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabdl_high_s8__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcge_f32__);
    thunk_FUN_00d48444(System_ConsoleCancelEventArgs_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__
                      );
    thunk_FUN_00d48444(
                      Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_SetState__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f00a0);
    thunk_FUN_00d48444(PTR_DAT_033edc00);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnPartialTranscription__
                      );
    thunk_FUN_00d48444(StringLiteral_3910);
    thunk_FUN_00d48444(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRAnchorSubsystem,_XRAnchorSubsystem_Provider>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f01d0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<InputAction>_AddRange__);
    thunk_FUN_00d48444(StringLiteral_4263);
    thunk_FUN_00d48444(PTR_DAT_033f6640);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Face>_get_Count__);
    thunk_FUN_00d48444(Method_System_Tuple<HumanBodyBones,_HumanBodyBones>_get_Item1__);
    thunk_FUN_00d48444(Method_System_UriParser_Resolve__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<List<UIRenderDevice_AllocToFree>>_get_Count__
                      );
    DAT_03775727 = 1;
  }
  uVar4 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar5);
    lVar5 = *(long *)puVar3;
  }
  puVar1 = PTR_DAT_033f4088;
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar7,
                 *(undefined8 *)Method_System_Array_Find<__Il2CppFullySharedGenericType>__,0);
    lVar5 = *(long *)puVar3;
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar6;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar5);
    lVar5 = *(long *)puVar3;
  }
  puVar1 = Method_Oculus_Interaction_ListLayout_<>c_<_ctor>b__11_1__;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar8 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar8,uVar7,*(undefined8 *)Method_System_Uri_UnescapeDataString__,0);
    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar8;
  }
  uVar4 = FUN_010df764(uVar4,lVar6,lVar8,*(undefined8 *)PTR_DAT_033f6b80);
  puVar2 = Method_System_Security_Claims_ClaimsIdentity_set_Actor__;
  puVar1 = PTR_DAT_033edc00;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_System_Collections_Generic_List<SimpleTuple<Face,_Face>>__ctor__;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,*(undefined8 *)Method_System_Text_StringBuilder_ThreadSafeCopy__,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0x18) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_033f70b0;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,
                   *(undefined8 *)Method_System_Runtime_CompilerServices_CallSite<object>_Create__,0
                  );
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = lVar8;
    }
    puVar2 = StringLiteral_4388;
    puVar1 = StringLiteral_4263;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_Enumerator<OVRSkeleton_BoneId,_HumanBodyBones>_get_Current__
                        );
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_SetStateMachine__;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,
                   *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerBitField_GetValue__,
                   0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0x28) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = System_Runtime_Serialization_Formatters_Binary_SizedArray_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,*(undefined8 *)PTR_DAT_033f2670,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30) = lVar8;
    }
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_148__;
    puVar1 = Method_System_Collections_Generic_List<InputAction>_AddRange__;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,
                         *(undefined8 *)Method_FlickerSceneOnTabletPlaced_<>c_<FlickerScene>b__3_0__
                        );
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_033f4e88;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,
                   *(undefined8 *)Method_System_Collections_Generic_List<STMSampleLink>_Clear__,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0x38) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_Meta_WitAi_Data_RingBuffer<__Il2CppFullySharedGenericType>_CopyFromBuffer__;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,*(undefined8 *)StringLiteral_6666,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40) = lVar8;
    }
    puVar2 = Method_System_Tuple<HumanBodyBones,_HumanBodyBones>_get_Item1__;
    puVar1 = ObiContactGrabber_GrabbedParticle_TypeInfo;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,
                         *(undefined8 *)
                          Method_System_Collections_ListDictionaryInternal_NodeEnumerator_get_Key__)
    ;
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmvn_s8__;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabdl_high_s8__
                   ,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0x48) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = StringLiteral_95;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x50);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcge_f32__,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50) = lVar8;
    }
    puVar2 = StringLiteral_10775;
    puVar1 = 
    Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRAnchorSubsystem,_XRAnchorSubsystem_Provider>__ctor__
    ;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                        );
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_033f58b8;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,
                   *(undefined8 *)
                    Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Add__
                   ,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0x58) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = 
    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphObjectPool_SharedObjectPool<MaterialPropertyBlock>_Get__
    ;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ProbeReferenceVolume_CellSortInfo>_get_Item__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60) = lVar8;
    }
    puVar2 = Method_System_Collections_Generic_HashSet<Face>_get_Count__;
    puVar1 = PTR_DAT_033ec290;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,*(undefined8 *)StringLiteral_13460);
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = System_Globalization_CultureInfo_TypeInfo;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,*(undefined8 *)StringLiteral_3446,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0x68) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = 
    Method_System_Collections_Generic_List_Enumerator<DissolveTest_DissolveSet>_get_Current__;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,*(undefined8 *)StringLiteral_2709,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70) = lVar8;
    }
    puVar2 = 
    Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnPartialTranscription__
    ;
    puVar1 = 
    UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_OnGraphRegisteredDelegate_TypeInfo
    ;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,
                         *(undefined8 *)System_Action<MeshGenerationResult>_TypeInfo);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = StringLiteral_12912;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,
                   *(undefined8 *)Method_Sirenix_Serialization_MinimalBaseFormatter<Vector2>__ctor__
                   ,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0x78) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_System_Linq_Expressions_PrimitiveParameterExpression<uint>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,*(undefined8 *)StringLiteral_6653,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80) = lVar8;
    }
    puVar2 = Method_System_Collections_Generic_List<CwRoot>_Remove__;
    puVar1 = Method_System_Collections_Generic_List<List<UIRenderDevice_AllocToFree>>_get_Count__;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,
                         *(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildNotation_System__);
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = UnityEngine_TextureFormat_TypeInfo;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x88);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,
                   *(undefined8 *)Method_Oculus_Interaction_PhysicsGrabbable_<>c_<_ctor>b__35_0__,0)
      ;
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0x88) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_System_Collections_Generic_List<GrabbableChild>_Add__;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x90);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,
                   *(undefined8 *)
                    Method_TMPro_SetPropertyUtility_SetStruct<TMP_InputField_LineType>__,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x90) = lVar8;
    }
    puVar2 = PTR_DAT_033f6640;
    puVar1 = PTR_DAT_033f5af8;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,*(undefined8 *)StringLiteral_1560);
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = System_Collections_Generic_List<List<UIRenderDevice_AllocToUpdate>>_TypeInfo;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,*(undefined8 *)StringLiteral_11320,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0x98) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_033ecfa0;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa0);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,*(undefined8 *)Method_System_Data_DataRow_GetOriginalRecordNo__,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xa0) = lVar8;
    }
    puVar2 = StringLiteral_3910;
    puVar1 = Method_System_Net_Sockets_Socket_ThrowIfUdp__;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,
                         *(undefined8 *)
                          Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_7__);
    *(undefined8 *)(param_1 + 0xb0) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_UnityEngine_GameObject_AddComponent<ObiRope>__;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,
                   *(undefined8 *)System_Collections_Generic_List<PlayableBinding>_TypeInfo,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_Newtonsoft_Json_Converters_BinaryConverter_ReadJson__;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb0);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,*(undefined8 *)PTR_DAT_033ed830,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb0) = lVar8;
    }
    puVar2 = Method_System_Linq_Enumerable_ToList<MethodInfo>__;
    puVar1 = PTR_DAT_033f00a0;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<AudioAffordanceThemeData>__ctor__);
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = StringLiteral_4292;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb8);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,*(undefined8 *)Method_TutorialPopup_Hide__,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0xb8) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xc0);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,*(undefined8 *)StringLiteral_1349,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc0) = lVar8;
    }
    puVar2 = Method_System_UriParser_Resolve__;
    puVar1 = Method_System_Collections_Generic_Stack<WitResponseNode>_get_Count__;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,*(undefined8 *)StringLiteral_11171);
    *(undefined8 *)(param_1 + 0xd0) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = StringLiteral_2898;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 200);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>_get_IsCompleted__
                   ,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 200) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = StringLiteral_9273;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd0);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,*(undefined8 *)System_Linq_Expressions_NewArrayExpression_TypeInfo,0)
      ;
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xd0) = lVar8;
    }
    puVar2 = Method_Obi_ObiNativeList<HeightFieldHeader>__ctor__;
    puVar1 = Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_get_Item__
                        );
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = 
    Method_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>_get_Assembly__;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd8);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,*(undefined8 *)System_Xml_Linq_SaveOptions_var,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xd8) = lVar6;
    }
    uVar4 = FUN_010db508(uVar4,lVar6,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhq_laneq_s32__
                        );
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar2 = Method_System_Globalization_CultureInfo_get_CalendarType__;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,*(undefined8 *)StringLiteral_3209,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xe0) = lVar6;
    }
    uVar4 = FUN_010dcdb8(uVar4,lVar6,*(undefined8 *)Method_Obi_ObiNativeList<Vector3>_AddRange__);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe8);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__,
                   0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0xe8) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = UnityEngine_InputSystem_Layouts_InputControlLayout_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf0);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,
                   *(undefined8 *)Method_System_Collections_Generic_List<Vector4>__ctor__,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xf0) = lVar8;
    }
    puVar2 = Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__;
    puVar1 = 
    Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_SetState__
    ;
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                        );
    *(undefined8 *)(param_1 + 0xf0) = uVar4;
    uVar4 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_System_Runtime_Serialization_ObjectManager_CompleteISerializableObject__;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf8);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,
                   *(undefined8 *)UnityEngine_Timeline_TrackAsset_<get_outputs>d__65_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xf8) = lVar6;
    }
    uVar4 = FUN_010db508(uVar4,lVar6,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxvq_s16__);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar2 = Method_System_Reflection_Emit_TypeBuilder_IsDefined__;
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x100);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Rotate>__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x100) = lVar6;
    }
    uVar4 = FUN_010dcdb8(uVar4,lVar6,
                         *(undefined8 *)Method_UnityEngine_AI_NavMeshBuilder_CollectSources__);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x108);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar6,uVar7,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtd_f64__,0);
      lVar5 = *(long *)puVar3;
      *(long *)(*(long *)(lVar5 + 0xb8) + 0x108) = lVar6;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar3;
    }
    puVar1 = Method_System_Threading_OSSpecificSynchronizationContext_InvocationEntry__;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x110);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f54b0c;
      FUN_012d239c(lVar8,uVar7,*(undefined8 *)Method_System_Xml_Linq_XHashtable<WeakReference>_Add__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x110) = lVar8;
    }
    uVar4 = FUN_010df764(uVar4,lVar6,lVar8,*(undefined8 *)StringLiteral_773);
    *(undefined8 *)(param_1 + 0x100) = uVar4;
    return;
  }
LAB_00f54b0c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


