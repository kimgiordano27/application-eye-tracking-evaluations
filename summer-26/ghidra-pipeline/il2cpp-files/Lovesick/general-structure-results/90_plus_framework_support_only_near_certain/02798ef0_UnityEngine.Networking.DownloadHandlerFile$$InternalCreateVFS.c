/*
FUNCTION_NAME: UnityEngine.Networking.DownloadHandlerFile$$InternalCreateVFS
ENTRY_POINT: 02798ef0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 182
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_5;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_Networking_DownloadHandlerFile__InternalCreateVFS
               (undefined8 *param_1,undefined8 param_2)

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
  long lVar10;
  long unaff_x21;
  undefined8 *puVar11;
  long unaff_x25;
  undefined8 *puVar12;
  long unaff_x29;
  undefined8 *puVar13;
  
  puVar7 = StringLiteral_7787;
  puVar6 = StringLiteral_6369;
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vextq_u16__;
  puVar4 = Method_System_Collections_HashHelpers_GetPrime__;
  puVar2 = Method_System_Linq_Enumerable_Last<__Il2CppFullySharedGenericType>__;
  puVar3 = Method_UnityEngine_XR_ARFoundation_ARRaycastManager_RaycastHitComparer__;
  puVar1 = PTR_DAT_033ede10;
  puVar13 = *(undefined8 **)(unaff_x29 + 0x4a0);
  puVar12 = *(undefined8 **)(unaff_x25 + 0x228);
  puVar11 = *(undefined8 **)(unaff_x21 + 0xb50);
  FUN_01298da0(param_2,*param_1);
  FUN_0129a054(param_2,*puVar13,*puVar12,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)puVar2,*puVar12,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)puVar1,*puVar12,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)puVar4,*(undefined8 *)puVar5,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_System_Reflection_Assembly_GetModules__,
               *(undefined8 *)puVar3,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Meta_Conduit_ConduitDispatcher_InvocationContextFilter_<>c__DisplayClass6_0_TypeInfo
               ,*(undefined8 *)Method_DissolveTest_OnDissolveChanged__,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_System_Reflection_MemberInfo_get_Module__,
               *(undefined8 *)puVar3,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)System_Data_BinaryNode_TypeInfo,*(undefined8 *)puVar7,*puVar11
              );
  FUN_0129a054(param_2,*(undefined8 *)Method_System_Char_IsSurrogate__,*(undefined8 *)puVar7,
               *puVar11);
  puVar4 = Method_Oculus_Interaction_HandPokeOvershootGlow_UpdateVisual__;
  FUN_0129a054(param_2,*(undefined8 *)PTR_DAT_033f2e40,
               *(undefined8 *)Method_Oculus_Interaction_HandPokeOvershootGlow_UpdateVisual__,
               *puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Security_Cryptography_X509Certificates_PublicKey_DecodeRSA__,
               *(undefined8 *)PTR_DAT_033ee968,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_DiscriminatedUnionConverter_Union>_TypeInfo
               ,*(undefined8 *)puVar3,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_System_Reflection_Module_GetCustomAttributes__,
               *(undefined8 *)puVar4,*puVar11);
  puVar1 = 
  Method_System_Collections_Generic_SortedList_KeyList<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_set_Item__
  ;
  FUN_0129a054(param_2,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtms_s32_f32__,
               *(undefined8 *)
                Method_System_Collections_Generic_SortedList_KeyList<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_set_Item__
               ,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_Add__
               ,*(undefined8 *)puVar3,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_UnityEngine_UIElements_GenericDropdownMenu_OnTargetElementDetachFromPanel__
               ,*(undefined8 *)puVar4,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_Obi_ObiNativeList<Vector4>_Dispose__,
               *(undefined8 *)puVar3,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_6436,*(undefined8 *)puVar7,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_Polenter_Serialization_Advanced_DefaultXmlReader_<ReadSubElements>d__0_System_Collections_IEnumerator_Reset__
               ,*(undefined8 *)puVar7,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<IAnimationWindowPreview>_get_Current__
               ,*(undefined8 *)puVar4,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)PTR_DAT_033f3290,
               *(undefined8 *)System_Collections_Generic_IList<ValueTuple<RTHandle,_int>>_TypeInfo,
               *puVar11);
  FUN_0129a054(param_2,*(undefined8 *)PTR_DAT_033ed340,*(undefined8 *)puVar6,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_10020,*(undefined8 *)puVar3,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Field_<PrivateImplementationDetails>_3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE
               ,*(undefined8 *)StringLiteral_6549,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)PTR_DAT_033f4318,
               *(undefined8 *)Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_List<StyleSyntaxToken>__ctor__,
               *(undefined8 *)Method_UnityEngine_UIElements_Clickable_OnMouseDown__,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_UnityEngine_UIElements_CollectionViewController_MakeItem__,
               *(undefined8 *)Method_System_Data_AggregateNode__ctor__,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_List<RenderGraphDebugData_PassDebugData>__ctor__
               ,*(undefined8 *)
                 Method_UnityEngine_Component_GetComponent<SpatialAnchorSpawnerBuildingBlock>__,
               *puVar11);
  puVar2 = Method_System_Collections_Generic_List<Vector3>_GetEnumerator__;
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_Oculus_Platform_Request<__Il2CppFullySharedGenericType>_HandleMessage__
               ,*(undefined8 *)Method_System_Collections_Generic_List<Vector3>_GetEnumerator__,
               *puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_System_Collections_Generic_List<PlayableBinding>_Add__,
               *(undefined8 *)puVar2,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_TunePrompt_<ShowPromptCoroutine>d__11_System_Collections_IEnumerator_Reset__
               ,*(undefined8 *)StringLiteral_3830,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlsl_high_s16__,
               *(undefined8 *)puVar7,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_6107,*(undefined8 *)puVar6,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_List<MB3_MeshBakerRoot_ZSortObjects_Item>__ctor__
               ,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulxq_lane_f32__,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,
               *(undefined8 *)puVar6,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>__ctor__
               ,*(undefined8 *)puVar4,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<InternedString,_Type>_Remove__,
               *(undefined8 *)Method_System_Collections_Generic_List<BaseInputModule>_get_Count__,
               *puVar11);
  FUN_0129a054(param_2,*(undefined8 *)PTR_DAT_033f1e00,*(undefined8 *)puVar6,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_RegistrationList<IXRGroupMember>__ctor__
               ,*(undefined8 *)puVar6,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_TryGetValue__
               ,*(undefined8 *)puVar6,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_1386,*(undefined8 *)puVar6,*puVar11);
  puVar5 = 
  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetEqual<int3,_int3,_Tessellator_TestCellE>__
  ;
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_5398,
               *(undefined8 *)
                Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetEqual<int3,_int3,_Tessellator_TestCellE>__
               ,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_6376,*(undefined8 *)puVar5,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)OVRPlugin_OVRP_1_89_0_TypeInfo,*(undefined8 *)puVar6,*puVar11)
  ;
  FUN_0129a054(param_2,*(undefined8 *)
                        System_Collections_Generic_List<ValueTuple<VolumeParameter,_VolumeParameter>>_TypeInfo
               ,*(undefined8 *)puVar6,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Type,_Type>_get_Item__,
               *(undefined8 *)puVar2,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_System_Collections_Generic_List<int>_get_Item__,
               *(undefined8 *)UnityEngine_Color___TypeInfo,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)OVRControllerTest_BoolMonitor_TypeInfo,*(undefined8 *)puVar1,
               *puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_UnityEngine_InputSystem_RemoteInputPlayerConnection_Subscribe__,
               *(undefined8 *)puVar7,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)TMPro_TMP_FontAsset_TypeInfo,*(undefined8 *)puVar7,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Event,_TextEditor_TextEditOp>__ctor__
               ,*(undefined8 *)puVar7,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_TypeInfo
               ,*(undefined8 *)puVar7,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_OVRTask_Awaiter<bool[]>_get_IsCompleted__,
               *(undefined8 *)
                Method_System_Linq_Enumerable_Any<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo>__
               ,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_7305,*(undefined8 *)puVar6,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass42_0_<DOLocalRotate>b__1__
               ,*(undefined8 *)StringLiteral_9680,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_GetConstructorImpl__
               ,*(undefined8 *)PTR_DAT_033ed160,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>_set_Item__
               ,*(undefined8 *)
                 System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanChar_TypeInfo,
               *puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_19__,
               *(undefined8 *)PTR_DAT_033f7408,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_Unity_Collections_NativeArray<DecalEntity>_Dispose__,
               *(undefined8 *)puVar6,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Field_<PrivateImplementationDetails>_92E9BC30656BF079FC6B0A200B019FF46941857D786F4C391470394CFDC95F0B
               ,*(undefined8 *)StringLiteral_13094,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>__ctor__,
               *(undefined8 *)PTR_DAT_033f5738,*puVar11);
  puVar1 = PTR_DAT_033f5138;
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_1554,*(undefined8 *)PTR_DAT_033f5138,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)PTR_DAT_033f0100,*(undefined8 *)puVar1,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)PTR_DAT_033eb190,
               *(undefined8 *)OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)string_TypeInfo,*(undefined8 *)StringLiteral_12648,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)PTR_DAT_033ebb68,*(undefined8 *)PTR_DAT_033ec118,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)System_Collections_Generic_List<HandSphere>_TypeInfo,
               *(undefined8 *)puVar3,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__,
               *(undefined8 *)Method_System_RuntimeType_GetField__,*puVar11);
  puVar1 = StringLiteral_1057;
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual_OnBeforeRenderLineVisual__
               ,*(undefined8 *)StringLiteral_1057,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)System_Collections_Generic_List<KeyValueItem>_TypeInfo,
               *(undefined8 *)puVar1,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s16__,
               *(undefined8 *)PTR_DAT_033ecb00,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_13424,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<MRUK_<LoadScene>d__64>__
               ,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo___TypeInfo,
               *(undefined8 *)puVar4,*puVar11);
  puVar1 = StringLiteral_5994;
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_9922,*(undefined8 *)StringLiteral_5994,*puVar11)
  ;
  FUN_0129a054(param_2,*(undefined8 *)Method_System_IO_MemoryStream_InternalReadInt32__,
               *(undefined8 *)puVar1,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_UnityEngine_XR_InputTracking_GetNodeStates__,
               *(undefined8 *)puVar1,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_s8__,
               *(undefined8 *)puVar1,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_2678,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<ProBuilderMesh,_HashSet<Face>>_TryGetValue__
               ,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_3911,*(undefined8 *)StringLiteral_13748,*puVar11
              );
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>_get_pointerType__
               ,*(undefined8 *)puVar3,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_Obi_ObiNativeList<CollisionMaterial>_Swap__,
               *(undefined8 *)puVar4,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo
               ,*(undefined8 *)
                 Method_System_Collections_Generic_List<ObiStretchShearConstraintsBatch>_get_Item__,
               *puVar11);
  FUN_0129a054(param_2,*(undefined8 *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__,
               *(undefined8 *)System_Collections_Generic_List<RenderChain>_TypeInfo,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)UnityEngine_Events_UnityAction<Hand>_TypeInfo,
               *(undefined8 *)PTR_DAT_033edfc8,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)
                        Method_Oculus_Interaction_HashSetExtensions_OverlapsNonAlloc<__Il2CppFullySharedGenericType>__
               ,*(undefined8 *)puVar6,*puVar11);
  FUN_0129a054(param_2,*(undefined8 *)StringLiteral_3086,*(undefined8 *)puVar4,*puVar11);
  **(undefined8 **)(*(long *)StringLiteral_2580 + 0xb8) = param_2;
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10079);
  puVar9 = StringLiteral_14305;
  puVar8 = StringLiteral_5325;
  puVar7 = Method_SideFillButton_OnStopTouch__;
  puVar6 = Method_UnityEngine_Component_GetComponent<AudioEventListener>__;
  puVar5 = Method_System_Collections_Generic_List<RenderGraphDebugData_PassDebugData>_Add__;
  puVar4 = Method_System_Collections_Generic_List<ManipulatorActivationFilter>_GetEnumerator__;
  puVar3 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<ulong>_TypeInfo;
  puVar2 = PTR_DAT_033f2de8;
  puVar1 = PTR_DAT_033ee938;
  if (lVar10 != 0) {
    FUN_01298da0(lVar10,*(undefined8 *)Sirenix_Utilities_DeepReflection_var);
    FUN_0129a054(lVar10,*(undefined8 *)puVar3,*(undefined8 *)puVar7,*puVar11);
    FUN_0129a054(lVar10,*(undefined8 *)puVar6,*(undefined8 *)puVar4,*puVar11);
    FUN_0129a054(lVar10,*(undefined8 *)puVar1,*(undefined8 *)puVar9,*puVar11);
    FUN_0129a054(lVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar8,*puVar11);
    FUN_0129a054(lVar10,*(undefined8 *)puVar5,
                 *(undefined8 *)Method_System_Collections_Queue_QueueEnumerator_get_Current__,
                 *puVar11);
    *(long *)(*(long *)(*(long *)StringLiteral_2580 + 0xb8) + 8) = lVar10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


