/*
FUNCTION_NAME: FUN_02353028
ENTRY_POINT: 02353028
PROGRAM: Lovesick-libil2cpp.so
SCORE: 212
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_11;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02353a04) */
/* WARNING: Removing unreachable block (ram,0x02355428) */
/* WARNING: Removing unreachable block (ram,0x02353b60) */
/* WARNING: Removing unreachable block (ram,0x02355430) */

undefined8 FUN_02353028(ulong param_1,long param_2,undefined8 param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 extraout_x1;
  undefined8 *puVar19;
  undefined4 uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long local_108;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_ec;
  long local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  
  puVar2 = StringLiteral_6228;
  if ((DAT_03781d2b & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvt_n_f32_s32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRRayInteractor_SamplePoint>_Clear__);
    thunk_FUN_00d48444(Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadByte__);
    thunk_FUN_00d48444(Meta_Conduit_InvocationContext_TypeInfo);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_FB2089AF82E09593374B65EC2440779FDCF5DD6DA07D26E57AF6790667B937CD
                      );
    thunk_FUN_00d48444(StringLiteral_12143);
    thunk_FUN_00d48444(Method_System_Nullable<InputControlScheme>__ctor__);
    thunk_FUN_00d48444(StringLiteral_13268);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_uint>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Instruction>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12909);
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0810);
    thunk_FUN_00d48444(PTR_DAT_033eea90);
    thunk_FUN_00d48444(PTR_DAT_033f6408);
    thunk_FUN_00d48444(StringLiteral_2691);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ScriptableObject>_GetEnumerator__);
    thunk_FUN_00d48444(
                      Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARFoundation_ARMeshManager_OnEnable__);
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualElementFocusChangeTarget_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                      );
    thunk_FUN_00d48444(Method_PathOfTheTrickster_<>c__DisplayClass25_0_<Awake>b__1__);
    thunk_FUN_00d48444(
                      System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Nullable<JsonSchemaType>_GetValueOrDefault__);
    thunk_FUN_00d48444(System_Xml_XmlNamedNodeMap_TypeInfo);
    thunk_FUN_00d48444(
                      System_Runtime_Remoting_Messaging_MessageDictionary_DictionaryEnumerator_TypeInfo
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputControl<float>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VolumeComponent>_RemoveAt__);
    thunk_FUN_00d48444(StringLiteral_5075);
    thunk_FUN_00d48444(System_Linq_Expressions_MemberAssignment_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_152>__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Length>__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JsonPath_JPath_ParseOperator__);
    thunk_FUN_00d48444(UnityEngine_TextCore_Text_MaterialManager_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputActionSetupExtensions_Rename__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_GSTU_Cell>_get_Current__
                      );
    thunk_FUN_00d48444(Mono_Security_Cryptography_KeyPairPersistence_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0cb8);
    thunk_FUN_00d48444(Meta_Voice_Logging_LazyLogger_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__);
    thunk_FUN_00d48444(Method_RCG_Lovesick_Powers_Tempo_TempoPower_<>c_<HideEffects>b__24_3__);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmls_laneq_s32__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1q_s16__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                      );
    thunk_FUN_00d48444(Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__);
    thunk_FUN_00d48444(StringLiteral_5105);
    thunk_FUN_00d48444(System_Action<FocusEnterEventArgs>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_512);
    thunk_FUN_00d48444(StringLiteral_7647);
    thunk_FUN_00d48444(StringLiteral_3082);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_EventSystem_CreateUIToolkitPanelGameObject__)
    ;
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<Grabbable>__);
    thunk_FUN_00d48444(System_Func<VectorImageRenderInfo>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Edge>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_3420);
    thunk_FUN_00d48444(StringLiteral_10898);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_Clear__)
    ;
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_capacity__
                      );
    thunk_FUN_00d48444(Method_BandhouseFeedbackManager_<>c_<SetFeedbackShaderData>b__26_0__);
    thunk_FUN_00d48444(PTR_DAT_033eefc0);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(UnityEngine_TextCore_GlyphMetrics_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10477);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(PTR_DAT_033f5e48);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Purchase>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vdups_lane_s32__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlshh_laneq_s16__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponents<BoxCollider>__);
    thunk_FUN_00d48444(Method_TMPro_TMP_Dropdown_SetAlpha__);
    thunk_FUN_00d48444(Method_System_ComponentModel_ArrayConverter_ConvertTo__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<TransformFeature,_FeatureDescription>_TypeInfo
                      );
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_952);
    thunk_FUN_00d48444(StringLiteral_4659);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_s16__);
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9754);
    thunk_FUN_00d48444(StringLiteral_11214);
    thunk_FUN_00d48444(PTR_DAT_033f5fe8);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<MedleyArcadeDoorRing>_get_Current__
                      );
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                      );
    thunk_FUN_00d48444(Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<Quaternion>_get_Value__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<InternedString,_Type>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_high_n_s64__);
    thunk_FUN_00d48444(StringLiteral_5259);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_ProperBitConverter_ToInt16__);
    thunk_FUN_00d48444(StringLiteral_6484);
    thunk_FUN_00d48444(StringLiteral_3323);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_X509Certificates_X509Extension_CopyFrom__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<OculusTrackingReference>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>__ctor__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxvq_u32__);
    thunk_FUN_00d48444(PTR_DAT_033ecb58);
    thunk_FUN_00d48444(Meta_WitAi_Json_WitResponseClass_<>c__DisplayClass15_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6228);
    thunk_FUN_00d48444(UnityEngine_UIElements_Focusable_TypeInfo);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Converters_BsonObjectIdConverter_ReadJson__);
    thunk_FUN_00d48444(StringLiteral_3099);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass5_0_<DOOrthoSize>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Array_Empty<WitConfigurationAssetData>__);
    thunk_FUN_00d48444(PTR_DAT_033f4c00);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_subsystemDescriptor__
                      );
    thunk_FUN_00d48444(
                      Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_TypeInfo
                      );
    DAT_03781d2b = 1;
  }
  uStack_148 = 0;
  local_140 = 0;
  local_150 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_170 = 0;
  local_180 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_200 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_260 = 0;
  uStack_258 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_280 = 0;
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (lVar7 != 0) {
    FUN_017b46ec(lVar7,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_0268b4e0(param_2,0,0);
    puVar2 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
    if ((uVar8 & 1) != 0) {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar9 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar10 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__
                                 );
      FUN_016ec5b8(uVar9,uVar10,0);
      uVar10 = thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputRemoting_SendLayoutChange__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar9,uVar10);
    }
    if (param_2 != 0) {
      uVar9 = FUN_0230fea8(param_2,0);
      uVar10 = FUN_0230bd48(param_2,0,0);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar3 = Method_System_Decimal_DecCalc_VarDecFromR4__;
      puVar5 = 
      Method_System_Collections_Generic_List_Enumerator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
      ;
      puVar4 = 
      Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
      ;
      puVar2 = UnityEngine_UIElements_VisualElementFocusChangeTarget_TypeInfo;
      if (lVar11 != 0) {
        FUN_01320f6c(lVar11,uVar10,*(undefined8 *)StringLiteral_9754);
        uVar9 = FUN_022f7fe0(param_3,uVar9,0);
        uVar9 = FUN_010d96e0(uVar9,*(undefined8 *)puVar5);
        lVar12 = FUN_010dfe04(uVar9,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        uVar9 = FUN_0233e4fc(param_2,0,0);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        puVar2 = PTR_DAT_033eea90;
        if (lVar13 != 0) {
          FUN_01320e50(lVar13,*(undefined8 *)StringLiteral_11214);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar2 = Method_BandhouseFeedbackManager_<>c_<SetFeedbackShaderData>b__26_0__;
          if (lVar14 != 0) {
            FUN_01298da0(lVar14,*(undefined8 *)StringLiteral_13268);
            *(long *)(lVar7 + 0x10) = lVar14;
            lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            puVar5 = StringLiteral_2691;
            puVar4 = Method_System_Collections_Generic_List<Edge>_set_Item__;
            if (lVar14 != 0) {
              FUN_012dd38c(lVar14,*(undefined8 *)
                                   Method_System_Collections_Generic_List<Edge>_set_Item__);
              lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
              if (lVar15 != 0) {
                FUN_01298da0(lVar15,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<uint,_uint>__ctor__
                            );
                lVar16 = FUN_0233deb0(uVar9,0);
                lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar17 != 0) &&
                   (FUN_012dd38c(lVar17,*(undefined8 *)puVar4),
                   puVar5 = 
                   Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_152>__
                   , puVar4 = 
                     Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                   , puVar2 = Meta_Voice_Logging_LazyLogger_TypeInfo, lVar12 != 0)) {
                  FUN_01323390(lVar12,&local_2b0,*(undefined8 *)StringLiteral_952);
                  puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
                  fVar1 = DAT_02956e00;
                  uStack_128 = uStack_2a8;
                  local_130 = local_2b0;
                  uStack_118 = uStack_298;
                  uStack_120 = local_2a0;
                  while (uVar8 = FUN_012b894c(&local_130,
                                              *(undefined8 *)
                                               Method_UnityEngine_InputSystem_InputActionSetupExtensions_Rename__
                                             ), puVar6 = StringLiteral_5075, (uVar8 & 1) != 0) {
                    FUN_00ca19d8(&local_130,
                                 *(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmls_laneq_s32__);
                    local_f8 = (int)extraout_x1;
                    uVar8 = FUN_012df150(lVar17,&local_f8,*(undefined8 *)StringLiteral_7647);
                    if ((uVar8 & 1) != 0) {
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      local_ec = (int)extraout_x1;
                      FUN_01299bc0(lVar16,&local_ec,&local_f8,*(undefined8 *)StringLiteral_12909);
                      if (CONCAT44(uStack_f4,local_f8) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_01323390(CONCAT44(uStack_f4,local_f8),&local_2b0,
                                   *(undefined8 *)StringLiteral_4659);
                      uStack_148 = uStack_2a8;
                      local_150 = local_2b0;
                      local_140 = local_2a0;
                      while (uVar8 = FUN_012b894c(&local_150,*(undefined8 *)puVar5),
                            (uVar8 & 1) != 0) {
                        lVar18 = FUN_00ca051c(&local_150,*(undefined8 *)puVar2);
                        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar20 = *(undefined4 *)(lVar18 + 0x14);
                        FUN_0132138c(lVar11,*(undefined4 *)(lVar18 + 0x10),&local_108,
                                     *(undefined8 *)puVar4);
                        if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        fVar23 = *(float *)(local_108 + 0x10);
                        uVar10 = *(undefined8 *)(local_108 + 0x14);
                        FUN_0132138c(lVar11,uVar20,&local_100,*(undefined8 *)puVar4);
                        if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        fVar24 = *(float *)(local_100 + 0x10);
                        uVar25 = *(undefined8 *)(local_100 + 0x14);
                        if (DAT_03774e1a == '\0') {
                          thunk_FUN_00d48444(puVar3);
                          DAT_03774e1a = '\x01';
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        fVar23 = fVar23 - fVar24;
                        fVar24 = (float)uVar10 - (float)uVar25;
                        fVar22 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar25 >> 0x20);
                        fVar23 = SQRT(fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24) + fVar1;
                        if ((float)param_1 <= fVar23) {
                          fVar23 = (float)param_1;
                        }
                        param_1 = (ulong)(uint)fVar23;
                      }
                      FUN_012b8948(&local_150,
                                   *(undefined8 *)
                                    System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord_TypeInfo
                                  );
                    }
                    uVar20 = (undefined4)((ulong)extraout_x1 >> 0x20);
                    local_f8 = uVar20;
                    uVar8 = FUN_012df150(lVar17,&local_f8,*(undefined8 *)StringLiteral_7647);
                    if ((uVar8 & 1) != 0) {
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      local_ec = uVar20;
                      FUN_01299bc0(lVar16,&local_ec,&local_f8,*(undefined8 *)StringLiteral_12909);
                      if (CONCAT44(uStack_f4,local_f8) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_01323390(CONCAT44(uStack_f4,local_f8),&local_2b0,
                                   *(undefined8 *)StringLiteral_4659);
                      uStack_148 = uStack_2a8;
                      local_150 = local_2b0;
                      local_140 = local_2a0;
                      while (uVar8 = FUN_012b894c(&local_150,*(undefined8 *)puVar5),
                            (uVar8 & 1) != 0) {
                        lVar18 = FUN_00ca051c(&local_150,*(undefined8 *)puVar2);
                        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar20 = *(undefined4 *)(lVar18 + 0x14);
                        FUN_0132138c(lVar11,*(undefined4 *)(lVar18 + 0x10),&local_e8,
                                     *(undefined8 *)puVar4);
                        if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        fVar23 = *(float *)(local_e8 + 0x10);
                        uVar10 = *(undefined8 *)(local_e8 + 0x14);
                        FUN_0132138c(lVar11,uVar20,&local_e0,*(undefined8 *)puVar4);
                        if (local_e0 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        fVar24 = *(float *)(local_e0 + 0x10);
                        uVar25 = *(undefined8 *)(local_e0 + 0x14);
                        if (DAT_03774e1a == '\0') {
                          thunk_FUN_00d48444(puVar3);
                          DAT_03774e1a = '\x01';
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        fVar23 = fVar23 - fVar24;
                        fVar24 = (float)uVar10 - (float)uVar25;
                        fVar22 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar25 >> 0x20);
                        fVar23 = SQRT(fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24) + fVar1;
                        if ((float)param_1 <= fVar23) {
                          fVar23 = (float)param_1;
                        }
                        param_1 = (ulong)(uint)fVar23;
                      }
                      FUN_012b8948(&local_150,
                                   *(undefined8 *)
                                    System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord_TypeInfo
                                  );
                    }
                  }
                  FUN_012b8948(&local_130,*(undefined8 *)StringLiteral_5075);
                  if (DAT_028aa290 <= (float)param_1) {
                    FUN_01323390(lVar12,&local_2b0,*(undefined8 *)StringLiteral_952);
                    puVar5 = StringLiteral_7647;
                    puVar4 = Method_System_Array_Empty<WitConfigurationAssetData>__;
                    puVar2 = System_Action<FocusEnterEventArgs>_TypeInfo;
                    uStack_128 = uStack_2a8;
                    local_130 = local_2b0;
                    uStack_118 = uStack_298;
                    uStack_120 = local_2a0;
                    iVar21 = 0;
                    while (uVar8 = FUN_012b894c(&local_130,
                                                *(undefined8 *)
                                                 Method_UnityEngine_InputSystem_InputActionSetupExtensions_Rename__
                                               ), (uVar8 & 1) != 0) {
                      lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Method_Newtonsoft_Json_Converters_BsonObjectIdConverter_ReadJson__
                                                 );
                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_017b46ec(lVar12,0);
                      auVar26 = FUN_00ca19d8(&local_130,
                                             *(undefined8 *)
                                              Method_Unity_Burst_Intrinsics_Arm_Neon_vmls_laneq_s32__
                                            );
                      *(undefined1 (*) [16])(lVar12 + 0x10) = auVar26;
                      lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_012d239c(lVar16,lVar12,
                                   *(undefined8 *)UnityEngine_UIElements_Focusable_TypeInfo,0);
                      FUN_010dafe8(uVar9,lVar16,&local_d8,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<ScriptableObject>_GetEnumerator__
                                  );
                      puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvt_n_f32_s32__;
                      lVar12 = CONCAT44(uStack_d4,local_d8);
                      if ((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) {
                        iVar21 = iVar21 + 1;
                        local_d8 = (undefined4)*(undefined8 *)(lVar12 + 0x18);
                        FUN_010b6ab0(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar12 + 0x20),
                                     &local_d8,
                                     *(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vcvt_n_f32_s32__);
                        local_d8 = *(undefined4 *)(lVar12 + 0x1c);
                        FUN_010b6ab0(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar12 + 0x20),
                                     &local_d8,*(undefined8 *)puVar3);
                        if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        local_d8 = (undefined4)*(undefined8 *)(lVar12 + 0x18);
                        FUN_010b6ab0(*(undefined8 *)(lVar7 + 0x10),
                                     *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x20),&local_d8,
                                     *(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vcvt_n_f32_s32__);
                        if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        local_d8 = *(undefined4 *)(lVar12 + 0x1c);
                        FUN_010b6ab0(*(undefined8 *)(lVar7 + 0x10),
                                     *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x20),&local_d8,
                                     *(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vcvt_n_f32_s32__);
                        local_d8 = (undefined4)*(undefined8 *)(lVar12 + 0x18);
                        FUN_012df150(lVar14,&local_d8,*(undefined8 *)puVar5);
                        local_d8 = *(undefined4 *)(lVar12 + 0x1c);
                        FUN_012df150(lVar14,&local_d8,*(undefined8 *)puVar5);
                        if (*(int *)(*(long *)Meta_Conduit_InvocationContext_TypeInfo + 0xe0) == 0)
                        {
                          thunk_FUN_00d32864();
                        }
                        FUN_02355988(param_1,lVar11,lVar12);
                        FUN_02355988(param_1,lVar11,*(undefined8 *)(lVar12 + 0x38));
                        uVar10 = FUN_02355d90(lVar11,lVar12,*(undefined8 *)(lVar12 + 0x38),lVar15);
                        FUN_01322050(lVar13,uVar10,
                                     *(undefined8 *)
                                      Method_UnityEngine_Component_GetComponents<BoxCollider>__);
                      }
                    }
                    FUN_012b8948(&local_130,*(undefined8 *)puVar6);
                    if (0 < iVar21) {
                      lVar7 = *(long *)puVar4;
                      if (*(int *)(lVar7 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar7 = *(long *)puVar4;
                      }
                      lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                      if (lVar11 == 0) {
                        if (*(int *)(lVar7 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar7 = *(long *)Method_System_Array_Empty<WitConfigurationAssetData>__;
                        }
                        uVar9 = **(undefined8 **)(lVar7 + 0xb8);
                        lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
                        if (lVar11 == 0) goto LAB_02355414;
                        FUN_012d239c(lVar11,uVar9,*(undefined8 *)StringLiteral_3323,0);
                        *(long *)(*(long *)(*(long *)
                                             Method_System_Array_Empty<WitConfigurationAssetData>__
                                           + 0xb8) + 8) = lVar11;
                      }
                      uVar9 = FUN_010dcdb8(lVar13,lVar11,
                                           *(undefined8 *)
                                            Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                                          );
                      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                                  Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo
                                                );
                      if (lVar7 != 0) {
                        FUN_01320f6c(lVar7,uVar9,
                                     *(undefined8 *)
                                      System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
                        lVar7 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f6408);
                        if (lVar7 != 0) {
                          FUN_01298da0(lVar7,*(undefined8 *)
                                              Method_System_Collections_Generic_List<Instruction>__ctor__
                                      );
                          FUN_012de890(lVar14,&local_2b0,
                                       *(undefined8 *)
                                        Method_System_Linq_Enumerable_Where<Grabbable>__);
                          uStack_168 = uStack_2a8;
                          local_170 = local_2b0;
                          local_160 = local_2a0;
                          uVar9 = FUN_0236487c(System_Linq_Expressions_MemberAssignment_TypeInfo);
                          return uVar9;
                        }
                      }
                      goto LAB_02355414;
                    }
                    puVar19 = (undefined8 *)
                              Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_subsystemDescriptor__
                    ;
                    if (*(int *)(*(long *)Method_System_Nullable<Quaternion>_get_Value__ + 0xe0) ==
                        0) {
                      thunk_FUN_00d32864();
                      puVar19 = (undefined8 *)
                                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_subsystemDescriptor__
                      ;
                    }
                  }
                  else {
                    puVar19 = (undefined8 *)
                              Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_TypeInfo
                    ;
                    if (*(int *)(*(long *)Method_System_Nullable<Quaternion>_get_Value__ + 0xe0) ==
                        0) {
                      thunk_FUN_00d32864();
                      puVar19 = (undefined8 *)
                                Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_TypeInfo
                      ;
                    }
                  }
                  FUN_02300330(*puVar19,0);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02355414:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


