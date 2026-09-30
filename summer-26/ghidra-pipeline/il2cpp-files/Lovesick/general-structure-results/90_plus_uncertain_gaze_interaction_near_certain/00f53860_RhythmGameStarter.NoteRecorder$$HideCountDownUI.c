/*
FUNCTION_NAME: RhythmGameStarter.NoteRecorder$$HideCountDownUI
ENTRY_POINT: 00f53860
PROGRAM: Lovesick-libil2cpp.so
SCORE: 227
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_1;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_12
*/


void RhythmGameStarter_NoteRecorder__HideCountDownUI(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x21;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x24;
  
  lVar3 = *unaff_x24;
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18) = unaff_x21;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = PTR_DAT_033f70b0;
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x20) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
                    /* try { // try from 00f538a4 to 010538a7 has its CatchHandler @ 00f538d4 */
      lVar3 = *unaff_x24;
    }
                    /* try { // try from 00f538a8 to 010538ab has its CatchHandler @ 00f538d0 */
                    /* try { // try from 00f538ac to 010538af has its CatchHandler @ 00f538cc */
                    /* try { // try from 00f538b0 to 010538b3 has its CatchHandler @ 00f538c8 */
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
                    /* try { // try from 00f538b4 to 010538b7 has its CatchHandler @ 00f538c4 */
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    /* try { // try from 00f538b8 to 010538bb has its CatchHandler @ 00f538c0 */
    if (lVar3 == 0) goto LAB_00f54b0c;
                    /* try { // try from 00f538bc to 0105390f has its CatchHandler @ 00f5355c */
                    /* catch() { ... } // from try @ 00f538b8 with catch @ 00f538c0 */
                    /* catch() { ... } // from try @ 00f538b4 with catch @ 00f538c4 */
                    /* catch() { ... } // from try @ 00f538b0 with catch @ 00f538c8 */
                    /* catch() { ... } // from try @ 00f538ac with catch @ 00f538cc */
                    /* catch() { ... } // from try @ 00f538a8 with catch @ 00f538d0 */
                    /* catch() { ... } // from try @ 00f538a4 with catch @ 00f538d4 */
    FUN_012d239c(lVar3,uVar7,
                 *(undefined8 *)Method_System_Runtime_CompilerServices_CallSite<object>_Create__,0);
                    /* catch() { ... } // from try @ 00f537ac with catch @ 00f538d8 */
                    /* catch() { ... } // from try @ 00f537b8 with catch @ 00f538dc */
                    /* catch() { ... } // from try @ 00f5379c with catch @ 00f538e0 */
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20) = lVar3;
  }
                    /* catch() { ... } // from try @ 00f5368c with catch @ 00f538e4 */
  puVar2 = StringLiteral_4388;
  puVar1 = StringLiteral_4263;
                    /* catch() { ... } // from try @ 00f53698 with catch @ 00f538e8 */
                    /* catch() { ... } // from try @ 00f5367c with catch @ 00f538ec */
                    /* catch() { ... } // from try @ 00f537f8 with catch @ 00f538f0 */
                    /* catch() { ... } // from try @ 00f536d8 with catch @ 00f538f4 */
                    /* catch() { ... } // from try @ 00f53818 with catch @ 00f538f8 */
                    /* catch() { ... } // from try @ 00f536f8 with catch @ 00f538fc */
                    /* catch() { ... } // from try @ 00f537fc with catch @ 00f53900 */
  uVar7 = FUN_010df764();
  *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_SetStateMachine__;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerBitField_GetValue__,0)
    ;
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x28) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = System_Runtime_Serialization_Formatters_Binary_SizedArray_TypeInfo;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)PTR_DAT_033f2670,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x30) = lVar6;
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_148__;
  puVar1 = Method_System_Collections_Generic_List<InputAction>_AddRange__;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,
                       *(undefined8 *)Method_FlickerSceneOnTabletPlaced_<>c_<FlickerScene>b__3_0__);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = PTR_DAT_033f4e88;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)Method_System_Collections_Generic_List<STMSampleLink>_Clear__,0);
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x38) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_Meta_WitAi_Data_RingBuffer<__Il2CppFullySharedGenericType>_CopyFromBuffer__;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)StringLiteral_6666,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x40) = lVar6;
  }
  puVar2 = Method_System_Tuple<HumanBodyBones,_HumanBodyBones>_get_Item1__;
  puVar1 = ObiContactGrabber_GrabbedParticle_TypeInfo;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,
                       *(undefined8 *)
                        Method_System_Collections_ListDictionaryInternal_NodeEnumerator_get_Key__);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmvn_s8__;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabdl_high_s8__,0
                );
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x48) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = StringLiteral_95;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x50);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcge_f32__,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x50) = lVar6;
  }
  puVar2 = StringLiteral_10775;
  puVar1 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorWithProvider<XRAnchorSubsystem,_XRAnchorSubsystem_Provider>__ctor__
  ;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,
                       *(undefined8 *)
                        Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                      );
  *(undefined8 *)(unaff_x19 + 0x60) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = PTR_DAT_033f58b8;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)
                  Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Add__
                 ,0);
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x58) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphObjectPool_SharedObjectPool<MaterialPropertyBlock>_Get__
  ;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x60);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeReferenceVolume_CellSortInfo>_get_Item__
                 ,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x60) = lVar6;
  }
  puVar2 = Method_System_Collections_Generic_HashSet<Face>_get_Count__;
  puVar1 = PTR_DAT_033ec290;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,*(undefined8 *)StringLiteral_13460);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = System_Globalization_CultureInfo_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x68);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,*(undefined8 *)StringLiteral_3446,0);
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x68) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_System_Collections_Generic_List_Enumerator<DissolveTest_DissolveSet>_get_Current__
  ;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x70);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)StringLiteral_2709,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x70) = lVar6;
  }
  puVar2 = 
  Method_Meta_Voice_TranscriptionRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnPartialTranscription__
  ;
  puVar1 = 
  UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_OnGraphRegisteredDelegate_TypeInfo
  ;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,*(undefined8 *)System_Action<MeshGenerationResult>_TypeInfo
                      );
  *(undefined8 *)(unaff_x19 + 0x80) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = StringLiteral_12912;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x78);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)Method_Sirenix_Serialization_MinimalBaseFormatter<Vector2>__ctor__,0
                );
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x78) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_System_Linq_Expressions_PrimitiveParameterExpression<uint>__ctor__;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x80);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)StringLiteral_6653,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x80) = lVar6;
  }
  puVar2 = Method_System_Collections_Generic_List<CwRoot>_Remove__;
  puVar1 = Method_System_Collections_Generic_List<List<UIRenderDevice_AllocToFree>>_get_Count__;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,
                       *(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildNotation_System__);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = UnityEngine_TextureFormat_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x88);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)Method_Oculus_Interaction_PhysicsGrabbable_<>c_<_ctor>b__35_0__,0);
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x88) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_System_Collections_Generic_List<GrabbableChild>_Add__;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x90);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,
                 *(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<TMP_InputField_LineType>__
                 ,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x90) = lVar6;
  }
  puVar2 = PTR_DAT_033f6640;
  puVar1 = PTR_DAT_033f5af8;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,*(undefined8 *)StringLiteral_1560);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = System_Collections_Generic_List<List<UIRenderDevice_AllocToUpdate>>_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x98);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,*(undefined8 *)StringLiteral_11320,0);
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x98) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = PTR_DAT_033ecfa0;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xa0);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)Method_System_Data_DataRow_GetOriginalRecordNo__,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xa0) = lVar6;
  }
  puVar2 = StringLiteral_3910;
  puVar1 = Method_System_Net_Sockets_Socket_ThrowIfUdp__;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,
                       *(undefined8 *)
                        Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_7__);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_UnityEngine_GameObject_AddComponent<ObiRope>__;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xa8);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)System_Collections_Generic_List<PlayableBinding>_TypeInfo,0);
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0xa8) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_Newtonsoft_Json_Converters_BinaryConverter_ReadJson__;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xb0);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)PTR_DAT_033ed830,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xb0) = lVar6;
  }
  puVar2 = Method_System_Linq_Enumerable_ToList<MethodInfo>__;
  puVar1 = PTR_DAT_033f00a0;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<AudioAffordanceThemeData>__ctor__);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = StringLiteral_4292;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xb8);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,*(undefined8 *)Method_TutorialPopup_Hide__,0);
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0xb8) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_u32__;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xc0);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)StringLiteral_1349,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xc0) = lVar6;
  }
  puVar2 = Method_System_UriParser_Resolve__;
  puVar1 = Method_System_Collections_Generic_Stack<WitResponseNode>_get_Count__;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,*(undefined8 *)StringLiteral_11171);
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = StringLiteral_2898;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 200);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>_get_IsCompleted__
                 ,0);
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 200) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = StringLiteral_9273;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xd0);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)System_Linq_Expressions_NewArrayExpression_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xd0) = lVar6;
  }
  puVar2 = Method_Obi_ObiNativeList<HeightFieldHeader>__ctor__;
  puVar1 = Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_get_Item__
                      );
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = 
  Method_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>_get_Assembly__;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xd8);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,*(undefined8 *)System_Xml_Linq_SaveOptions_var,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xd8) = lVar4;
  }
  uVar7 = FUN_010db508(uVar7,lVar4,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhq_laneq_s32__);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar2 = Method_System_Globalization_CultureInfo_get_CalendarType__;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xe0);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,*(undefined8 *)StringLiteral_3209,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xe0) = lVar4;
  }
  uVar7 = FUN_010dcdb8(uVar7,lVar4,*(undefined8 *)Method_Obi_ObiNativeList<Vector3>_AddRange__);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xe8);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__,0)
    ;
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0xe8) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = UnityEngine_InputSystem_Layouts_InputControlLayout_TypeInfo;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xf0);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)Method_System_Collections_Generic_List<Vector4>__ctor__,
                 0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xf0) = lVar6;
  }
  puVar2 = Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__;
  puVar1 = 
  Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_SetState__
  ;
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                      );
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar7;
  uVar7 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_System_Runtime_Serialization_ObjectManager_CompleteISerializableObject__;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xf8);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)UnityEngine_Timeline_TrackAsset_<get_outputs>d__65_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xf8) = lVar4;
  }
  uVar7 = FUN_010db508(uVar7,lVar4,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxvq_s16__);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar2 = Method_System_Reflection_Emit_TypeBuilder_IsDefined__;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x100);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Rotate>__
                 ,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x100) = lVar4;
  }
  uVar7 = FUN_010dcdb8(uVar7,lVar4,
                       *(undefined8 *)Method_UnityEngine_AI_NavMeshBuilder_CollectSources__);
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x108);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar4,uVar5,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtd_f64__,0);
    lVar3 = *unaff_x24;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x108) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
    lVar3 = *unaff_x24;
  }
  puVar1 = Method_System_Threading_OSSpecificSynchronizationContext_InvocationEntry__;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x110);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar3);
      lVar3 = *unaff_x24;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 == 0) {
LAB_00f54b0c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(lVar6,uVar5,*(undefined8 *)Method_System_Xml_Linq_XHashtable<WeakReference>_Add__,0
                );
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x110) = lVar6;
  }
  uVar7 = FUN_010df764(uVar7,lVar4,lVar6,*(undefined8 *)StringLiteral_773);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar7;
  return;
}


