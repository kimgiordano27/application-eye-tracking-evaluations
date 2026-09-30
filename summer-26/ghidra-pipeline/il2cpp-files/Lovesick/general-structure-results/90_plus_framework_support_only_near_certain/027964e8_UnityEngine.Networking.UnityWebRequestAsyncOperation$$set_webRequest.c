/*
FUNCTION_NAME: UnityEngine.Networking.UnityWebRequestAsyncOperation$$set_webRequest
ENTRY_POINT: 027964e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 175
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_1;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_Networking_UnityWebRequestAsyncOperation__set_webRequest(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 in_w8;
  undefined8 unaff_x19;
  uint unaff_w20;
  int unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w26;
  undefined4 uStack0000000000000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  uint uStack000000000000008c;
  
  uStack0000000000000008 = in_w8;
  FUN_0129a054();
  uStack000000000000008c = unaff_w23 | 8;
  FUN_0129a054();
  uStack000000000000008c = unaff_w20 | unaff_w25;
  FUN_0129a054();
  uStack000000000000008c = unaff_w20 + 0xb;
  FUN_0129a054();
  uStack000000000000008c = unaff_w22 + 0x1e;
  FUN_0129a054();
  uStack000000000000008c = unaff_w20 | 0xc;
  FUN_0129a054();
  *(undefined8 *)(*(long *)(*(long *)StringLiteral_12360 + 0xb8) + 8) = unaff_x19;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_Generic_List<CanvasGroup>_get_Count__);
  puVar3 = Method_UnityEngine_Mesh_GetVertices__;
  if (lVar4 != 0) {
    FUN_01298da0(lVar4,*(undefined8 *)PTR_DAT_033ef698);
    uStack000000000000008c = 0x20000;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)Method_System_Security_Claims_Claim__ctor__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000050;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_Linq_Enumerable_Last<__Il2CppFullySharedGenericType>__
                 ,*(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)PTR_DAT_033ede10,*(undefined8 *)puVar3);
    uStack000000000000008c = 0x40000;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_Collections_HashHelpers_GetPrime__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = 0x70000;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_Reflection_Assembly_GetModules__,*(undefined8 *)puVar3
                );
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Meta_Conduit_ConduitDispatcher_InvocationContextFilter_<>c__DisplayClass6_0_TypeInfo
                 ,*(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_Reflection_MemberInfo_get_Module__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w26 + 2;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)System_Data_BinaryNode_TypeInfo,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)Method_System_Char_IsSurrogate__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 1;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)PTR_DAT_033f2e40,*(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000088;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_PublicKey_DecodeRSA__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w26 + 4;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_DiscriminatedUnionConverter_Union>_TypeInfo
                 ,*(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_Reflection_Module_GetCustomAttributes__,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtms_s32_f32__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000080;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_Add__
                 ,*(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnTargetElementDetachFromPanel__
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w26 + 6;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)Method_Obi_ObiNativeList<Vector4>_Dispose__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000078;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_6436,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w26 + 8;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_Polenter_Serialization_Advanced_DefaultXmlReader_<ReadSubElements>d__0_System_Collections_IEnumerator_Reset__
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 4;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<IAnimationWindowPreview>_get_Current__
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w24 + 1;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)PTR_DAT_033f3290,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 5;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)PTR_DAT_033ed340,*(undefined8 *)puVar3);
    uStack000000000000008c = 0x10000;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_10020,*(undefined8 *)puVar3);
    uStack000000000000008c = 0x30000;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE
                 ,*(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)PTR_DAT_033f4318,*(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000070;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_Collections_Generic_List<StyleSyntaxToken>__ctor__,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_UnityEngine_UIElements_CollectionViewController_MakeItem__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 8;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<RenderGraphDebugData_PassDebugData>__ctor__
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 9;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_Oculus_Platform_Request<__Il2CppFullySharedGenericType>_HandleMessage__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000068;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_Collections_Generic_List<PlayableBinding>_Add__,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_TunePrompt_<ShowPromptCoroutine>d__11_System_Collections_IEnumerator_Reset__
                 ,*(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlsl_high_s16__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0xc;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_6107,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0xd;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<MB3_MeshBakerRoot_ZSortObjects_Item>__ctor__
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000060;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>__ctor__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000058;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<InternedString,_Type>_Remove__,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)PTR_DAT_033f1e00,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0x10;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_RegistrationList<IXRGroupMember>__ctor__
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0x11;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_TryGetValue__
                 ,*(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_1386,*(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000048;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_5398,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0x14;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_6376,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0x15;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)OVRPlugin_OVRP_1_89_0_TypeInfo,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  System_Collections_Generic_List<ValueTuple<VolumeParameter,_VolumeParameter>>_TypeInfo
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000040;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_Type>_get_Item__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w26 + 10;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_Collections_Generic_List<int>_get_Item__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w24 + 4;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)OVRControllerTest_BoolMonitor_TypeInfo,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_RemoteInputPlayerConnection_Subscribe__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0x18;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)TMPro_TMP_FontAsset_TypeInfo,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0x19;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Event,_TextEditor_TextEditOp>__ctor__
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000038;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_TypeInfo
                 ,*(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_OVRTask_Awaiter<bool[]>_get_IsCompleted__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0x1c;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_7305,*(undefined8 *)puVar3);
    uStack000000000000008c = 0x50000;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass42_0_<DOLocalRotate>b__1__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = 0x50001;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_GetConstructorImpl__,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>_set_Item__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w20 + 2;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_19__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0x1d;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<DecalEntity>_Dispose__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000030;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_92E9BC30656BF079FC6B0A200B019FF46941857D786F4C391470394CFDC95F0B
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w24 + 5;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>__ctor__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = 0x60000;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_1554,*(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)PTR_DAT_033f0100,*(undefined8 *)puVar3);
    uStack000000000000008c = 0x60002;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)PTR_DAT_033eb190,*(undefined8 *)puVar3);
    uStack000000000000008c = 0x60003;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)string_TypeInfo,*(undefined8 *)puVar3);
    uStack000000000000008c = 0x50003;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)PTR_DAT_033ebb68,*(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000028;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)System_Collections_Generic_List<HandSphere>_TypeInfo,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w23 + 2;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual_OnBeforeRenderLineVisual__
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w20 + 4;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)System_Collections_Generic_List<KeyValueItem>_TypeInfo,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000020;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_high_laneq_s16__,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_13424,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w20 + 6;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo___TypeInfo,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w23 + 4;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_9922,*(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000018;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_System_IO_MemoryStream_InternalReadInt32__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w23 + 6;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_UnityEngine_XR_InputTracking_GetNodeStates__,
                 *(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_s8__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = in_stack_00000010;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_2678,*(undefined8 *)puVar3);
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_3911,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w20 + 8;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>_get_pointerType__
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = uStack0000000000000008;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_Obi_ObiNativeList<CollisionMaterial>_Swap__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w23 + 8;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceType_TypeInfo
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w20 + 10;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__,
                 *(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w20 + 0xb;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)UnityEngine_Events_UnityAction<Hand>_TypeInfo
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w22 + 0x1e;
    FUN_0129a054(lVar4,&stack0x0000008c,
                 *(undefined8 *)
                  Method_Oculus_Interaction_HashSetExtensions_OverlapsNonAlloc<__Il2CppFullySharedGenericType>__
                 ,*(undefined8 *)puVar3);
    uStack000000000000008c = unaff_w20 + 0xc;
    FUN_0129a054(lVar4,&stack0x0000008c,*(undefined8 *)StringLiteral_3086,*(undefined8 *)puVar3);
    puVar3 = StringLiteral_12360;
    *(long *)(*(long *)(*(long *)StringLiteral_12360 + 0xb8) + 0x10) = lVar4;
    lVar4 = FUN_00da4fb8(*(undefined8 *)OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo,0x50);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if ((((((((((uVar1 == 0) || (*(undefined4 *)(lVar4 + 0x20) = 0x20000, uVar1 == 1)) ||
                (*(uint *)(lVar4 + 0x24) = unaff_w20 + 0x10000, uVar1 < 3)) ||
               ((*(int *)(lVar4 + 0x28) = unaff_w22, uVar1 == 3 ||
                (*(undefined4 *)(lVar4 + 0x2c) = 0x40000, uVar1 < 5)))) ||
              (*(undefined4 *)(lVar4 + 0x30) = 0x70000, uVar1 == 5)) ||
             ((*(int *)(lVar4 + 0x34) = unaff_w26, uVar1 < 7 ||
              (*(int *)(lVar4 + 0x38) = unaff_w26 + 1, uVar1 == 7)))) ||
            ((*(int *)(lVar4 + 0x3c) = unaff_w26 + 2, uVar1 < 9 ||
             (((*(int *)(lVar4 + 0x40) = unaff_w26 + 3, uVar1 == 9 ||
               (*(int *)(lVar4 + 0x44) = unaff_w22 + 1, uVar1 < 0xb)) ||
              (*(uint *)(lVar4 + 0x48) = unaff_w23 + 0x10000, uVar1 == 0xb)))))) ||
           ((((*(int *)(lVar4 + 0x4c) = unaff_w26 + 4, uVar1 < 0xd ||
              (*(int *)(lVar4 + 0x50) = unaff_w22 + 2, uVar1 == 0xd)) ||
             (*(int *)(lVar4 + 0x54) = unaff_w24, uVar1 < 0xf)) ||
            ((*(int *)(lVar4 + 0x58) = unaff_w26 + 5, uVar1 == 0xf ||
             (*(int *)(lVar4 + 0x5c) = unaff_w22 + 3, uVar1 < 0x11)))))) ||
          (((((((*(int *)(lVar4 + 0x60) = unaff_w26 + 6, uVar1 == 0x11 ||
                (((*(int *)(lVar4 + 100) = unaff_w26 + 7, uVar1 < 0x13 ||
                  (*(int *)(lVar4 + 0x68) = unaff_w26 + 8, uVar1 == 0x13)) ||
                 (*(int *)(lVar4 + 0x6c) = unaff_w22 + 4, uVar1 < 0x15)))) ||
               (((*(int *)(lVar4 + 0x70) = unaff_w24 + 1, uVar1 == 0x15 ||
                 (*(int *)(lVar4 + 0x74) = unaff_w22 + 5, uVar1 < 0x17)) ||
                ((*(undefined4 *)(lVar4 + 0x78) = 0x10000, uVar1 == 0x17 ||
                 (((*(int *)(lVar4 + 0x7c) = unaff_w22 + 6, uVar1 < 0x19 ||
                   (*(int *)(lVar4 + 0x80) = unaff_w24 + 2, uVar1 == 0x19)) ||
                  ((*(int *)(lVar4 + 0x84) = unaff_w22 + 7, uVar1 < 0x1b ||
                   ((((*(int *)(lVar4 + 0x88) = unaff_w22 + 8, uVar1 == 0x1b ||
                      (*(int *)(lVar4 + 0x8c) = unaff_w22 + 9, uVar1 < 0x1d)) ||
                     (*(int *)(lVar4 + 0x90) = unaff_w22 + 10, uVar1 == 0x1d)) ||
                    ((*(int *)(lVar4 + 0x94) = unaff_w22 + 0xb, uVar1 < 0x1f ||
                     (*(uint *)(lVar4 + 0x98) = unaff_w20, uVar1 == 0x1f)))))))))))))) ||
              (*(int *)(lVar4 + 0x9c) = unaff_w22 + 0xc, uVar1 < 0x21)) ||
             ((*(int *)(lVar4 + 0xa0) = unaff_w22 + 0xd, uVar1 == 0x21 ||
              (*(int *)(lVar4 + 0xa4) = unaff_w22 + 0xe, uVar1 < 0x23)))) ||
            ((((*(uint *)(lVar4 + 0xa8) = unaff_w20 + 1, uVar1 == 0x23 ||
               (((*(int *)(lVar4 + 0xac) = unaff_w24 + 3, uVar1 < 0x25 ||
                 (*(int *)(lVar4 + 0xb0) = unaff_w22 + 0xf, uVar1 == 0x25)) ||
                (*(int *)(lVar4 + 0xb4) = unaff_w22 + 0x10, uVar1 < 0x27)))) ||
              (((*(int *)(lVar4 + 0xb8) = unaff_w22 + 0x11, uVar1 == 0x27 ||
                (*(int *)(lVar4 + 0xbc) = unaff_w22 + 0x12, uVar1 < 0x29)) ||
               (*(int *)(lVar4 + 0xc0) = unaff_w22 + 0x13, uVar1 == 0x29)))) ||
             (((*(int *)(lVar4 + 0xc4) = unaff_w22 + 0x14, uVar1 < 0x2b ||
               (*(int *)(lVar4 + 200) = unaff_w22 + 0x15, uVar1 == 0x2b)) ||
              ((*(int *)(lVar4 + 0xcc) = unaff_w22 + 0x16, uVar1 < 0x2d ||
               (((*(int *)(lVar4 + 0xd0) = unaff_w26 + 9, uVar1 == 0x2d ||
                 (*(int *)(lVar4 + 0xd4) = unaff_w26 + 10, uVar1 < 0x2f)) ||
                (*(int *)(lVar4 + 0xd8) = unaff_w24 + 4, uVar1 == 0x2f)))))))))) ||
           (((*(int *)(lVar4 + 0xdc) = unaff_w22 + 0x17, uVar1 < 0x31 ||
             (*(int *)(lVar4 + 0xe0) = unaff_w22 + 0x18, uVar1 == 0x31)) ||
            (((*(int *)(lVar4 + 0xe4) = unaff_w22 + 0x19, uVar1 < 0x33 ||
              (((*(int *)(lVar4 + 0xe8) = unaff_w22 + 0x1a, uVar1 == 0x33 ||
                (*(int *)(lVar4 + 0xec) = unaff_w22 + 0x1b, uVar1 < 0x35)) ||
               ((*(int *)(lVar4 + 0xf0) = unaff_w22 + 0x1c, uVar1 == 0x35 ||
                ((((*(undefined4 *)(lVar4 + 0xf4) = 0x50000, uVar1 < 0x37 ||
                   (*(undefined4 *)(lVar4 + 0xf8) = 0x50001, uVar1 == 0x37)) ||
                  (*(uint *)(lVar4 + 0xfc) = unaff_w23, uVar1 < 0x39)) ||
                 ((*(uint *)(lVar4 + 0x100) = unaff_w20 + 2, uVar1 == 0x39 ||
                  (*(int *)(lVar4 + 0x104) = unaff_w22 + 0x1d, uVar1 < 0x3b)))))))))) ||
             (*(undefined4 *)(lVar4 + 0x108) = 0x50002, uVar1 == 0x3b)))))))) ||
         (((((*(undefined4 *)(lVar4 + 0x10c) = 0x50003, uVar1 < 0x3d ||
             (*(uint *)(lVar4 + 0x110) = unaff_w23 + 1, uVar1 == 0x3d)) ||
            ((((*(uint *)(lVar4 + 0x114) = unaff_w23 + 2, uVar1 < 0x3f ||
               (((*(uint *)(lVar4 + 0x118) = unaff_w20 + 3, uVar1 == 0x3f ||
                 (*(uint *)(lVar4 + 0x11c) = unaff_w20 + 4, uVar1 < 0x41)) ||
                (*(uint *)(lVar4 + 0x120) = unaff_w20 + 5, uVar1 == 0x41)))) ||
              (((*(uint *)(lVar4 + 0x124) = unaff_w23 + 3, uVar1 < 0x43 ||
                (*(uint *)(lVar4 + 0x128) = unaff_w20 + 6, uVar1 == 0x43)) ||
               (*(uint *)(lVar4 + 300) = unaff_w23 + 4, uVar1 < 0x45)))) ||
             ((*(uint *)(lVar4 + 0x130) = unaff_w23 + 5, uVar1 == 0x45 ||
              (*(uint *)(lVar4 + 0x134) = unaff_w23 + 6, uVar1 < 0x47)))))) ||
           (((*(uint *)(lVar4 + 0x138) = unaff_w23 + 7, uVar1 == 0x47 ||
             (((*(uint *)(lVar4 + 0x13c) = unaff_w20 + 7, uVar1 < 0x49 ||
               (*(int *)(lVar4 + 0x140) = unaff_w24 + 6, uVar1 == 0x49)) ||
              (*(uint *)(lVar4 + 0x144) = unaff_w20 + 8, uVar1 < 0x4b)))) ||
            ((*(uint *)(lVar4 + 0x148) = unaff_w20 + 9, uVar1 == 0x4b ||
             (*(uint *)(lVar4 + 0x14c) = unaff_w23 + 8, uVar1 < 0x4d)))))) ||
          ((*(uint *)(lVar4 + 0x150) = unaff_w20 + 10, uVar1 == 0x4d ||
           ((*(uint *)(lVar4 + 0x154) = unaff_w20 + 0xb, uVar1 < 0x4f ||
            (*(int *)(lVar4 + 0x158) = unaff_w22 + 0x1e, uVar1 == 0x4f)))))))) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(uint *)(lVar4 + 0x15c) = unaff_w20 + 0xc;
      puVar2 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale__;
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = lVar4;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar5 != 0) {
        FUN_012dd468(lVar5,lVar4,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqabsb_s8__);
        **(long **)(*(long *)puVar3 + 0xb8) = lVar5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


