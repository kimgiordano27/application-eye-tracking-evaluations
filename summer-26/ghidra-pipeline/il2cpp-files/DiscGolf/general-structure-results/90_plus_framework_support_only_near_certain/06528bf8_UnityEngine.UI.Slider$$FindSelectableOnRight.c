/*
FUNCTION_NAME: UnityEngine.UI.Slider$$FindSelectableOnRight
ENTRY_POINT: 06528bf8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_12;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_UI_Slider__FindSelectableOnRight(long param_1)

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
  long *plVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xd18));
  FUN_02d965b8(System_Reflection_ConstructorInfo_var);
  *(undefined1 *)(unaff_x19 + 0x90c) = 1;
  lVar11 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_04e92874(lVar11,*unaff_x20);
  puVar10 = StringLiteral_239;
  puVar9 = StringLiteral_217;
  puVar8 = StringLiteral_177;
  puVar7 = StringLiteral_174;
  puVar6 = Method_UI_InputWindow_<>c__DisplayClass7_0_<Show>b__0__;
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__807_51__;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__807_5__;
  puVar3 = Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__;
  puVar2 = PTR_DAT_06a0d5d8;
  puVar1 = PTR_DAT_069ff500;
  if (lVar11 != 0) {
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_48__,
                 *(undefined8 *)StringLiteral_239,*(undefined8 *)PTR_DAT_069ff500);
    FUN_04e935f0(lVar11,*(undefined8 *)puVar4,*(undefined8 *)puVar10,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar10,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_53__,
                 *(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_62__,
                 *(undefined8 *)StringLiteral_176,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)StringLiteral_227,*(undefined8 *)StringLiteral_230,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_85__,
                 *(undefined8 *)StringLiteral_221,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_88__,
                 *(undefined8 *)StringLiteral_201,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_9__,
                 *(undefined8 *)StringLiteral_173,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_92__,
                 *(undefined8 *)StringLiteral_178,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_95__,
                 *(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_97__,
                 *(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRSceneManager_<>c__DisplayClass45_0_<LoadSceneModelAsync>b__0__,
                 *(undefined8 *)puVar8,*(undefined8 *)puVar1);
    puVar3 = StringLiteral_196;
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRSceneManager_<>c__DisplayClass53_0_<CheckClassificationsInRooms>b__0__
                 ,*(undefined8 *)StringLiteral_196,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)StringLiteral_236,*(undefined8 *)StringLiteral_175,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__33_0__,
                 *(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62_MoveNext__,
                 *(undefined8 *)puVar3,*(undefined8 *)puVar1);
    puVar5 = StringLiteral_208;
    FUN_04e935f0(lVar11,*(undefined8 *)StringLiteral_188,*(undefined8 *)StringLiteral_208,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64_MoveNext__,
                 *(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__,
                 *(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__,
                 *(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRTask_Builder_ToResultTask<OVRAnchor_SaveResult>__,
                 *(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRTask_Builder_ToResultTask<OVRColocationSession_Result>__,
                 *(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRTask_Builder_ToTask<OVRSpatialAnchor_OperationResult>__,
                 *(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)StringLiteral_198,*(undefined8 *)StringLiteral_183,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_Internal_MultiColumnHeaderColumnMoveLocationPreview_TypeInfo
                 ,*(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)PTR_DAT_06a0c310,*(undefined8 *)puVar9,*(undefined8 *)puVar1)
    ;
    FUN_04e935f0(lVar11,*(undefined8 *)PTR_DAT_06a13ff8,*(undefined8 *)StringLiteral_215,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRTask_Builder_ToTask<Guid,_OVRColocationSession_Result>__,
                 *(undefined8 *)StringLiteral_199,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)PTR_DAT_06a131e8,*(undefined8 *)StringLiteral_187,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRTask_Builder_ToTask<OVRSpatialAnchor_UnboundAnchor[]>__,
                 *(undefined8 *)StringLiteral_189,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRTask_Builder_ToTask<OVRAnchor>__,
                 *(undefined8 *)StringLiteral_235,*(undefined8 *)puVar1);
    puVar4 = StringLiteral_203;
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRVirtualKeyboard_<>c_<InitializeGlTFModel>b__92_2__,
                 *(undefined8 *)StringLiteral_203,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRVirtualKeyboard_<InitializeGlTFModel>d__92_System_Collections_IEnumerator_Reset__
                 ,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_OVRVirtualKeyboard_HandInputSource__ctor__,
                 *(undefined8 *)StringLiteral_181,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRVirtualKeyboard_InteractorRootTransformOverride_Enqueue__,
                 *(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_Internal_MultiColumnHeaderColumnIcon_TypeInfo,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OVRVirtualKeyboard_TextHandlerScope_set_OnTextChanged__,
                 *(undefined8 *)StringLiteral_224,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)UnityEngine_InputSystem_Processors_AxisDeadzoneProcessor_var,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<AudioResource>__,
                 *(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)StringLiteral_202,*(undefined8 *)StringLiteral_233,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Canvas>__,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<ComputeShader>__,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<LightProbeProxyVolume>__
                 ,*(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Mesh>__,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    puVar2 = StringLiteral_180;
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Object>__,
                 *(undefined8 *)StringLiteral_180,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)PTR_DAT_06a10f90,*(undefined8 *)puVar2,*(undefined8 *)puVar1)
    ;
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<RenderTexture>__,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)PTR_DAT_06a10fa0,*(undefined8 *)puVar7,*(undefined8 *)puVar1)
    ;
    FUN_04e935f0(lVar11,*(undefined8 *)PTR_DAT_06a137c8,*(undefined8 *)puVar4,*(undefined8 *)puVar1)
    ;
    FUN_04e935f0(lVar11,*(undefined8 *)Method_System_Xml_Schema_XmlSchemaSet_RemoveRecursive__,
                 *(undefined8 *)StringLiteral_216,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)StringLiteral_186,*(undefined8 *)puVar5,*(undefined8 *)puVar1
                );
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<ScriptableObject>__
                 ,*(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Sprite>__,
                 *(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Terrain>__,
                 *(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Texture2D>__,
                 *(undefined8 *)puVar8,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)PTR_DAT_06a14570,*(undefined8 *)StringLiteral_179,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo,
                 *(undefined8 *)puVar7,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Transform>__,
                 *(undefined8 *)StringLiteral_190,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)System_Reflection_ConstructorInfo_var,
                 *(undefined8 *)StringLiteral_192,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AssetBundle>__
                 ,*(undefined8 *)StringLiteral_240,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioSource>__
                 ,*(undefined8 *)StringLiteral_237,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)UnityEngine_EventSystems_BaseInput_var,*(undefined8 *)puVar7,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<BoxCollider>__
                 ,*(undefined8 *)StringLiteral_182,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)StringLiteral_225,*(undefined8 *)StringLiteral_219,
                 *(undefined8 *)puVar1);
    puVar2 = StringLiteral_214;
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CanvasGroup>__
                 ,*(undefined8 *)StringLiteral_214,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CapsuleCollider>__
                 ,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Collider>__,
                 *(undefined8 *)StringLiteral_194,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<ComputeShader>__
                 ,*(undefined8 *)StringLiteral_210,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<ValueTuple<RenderGraphResourceType,_int>,_List<int>>__ctor__
                 ,*(undefined8 *)StringLiteral_207,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Font>__,
                 *(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)StringLiteral_206,*(undefined8 *)StringLiteral_212,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Joint>__,
                 *(undefined8 *)StringLiteral_238,*(undefined8 *)puVar1);
    puVar2 = StringLiteral_226;
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<LODGroup>__,
                 *(undefined8 *)StringLiteral_226,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Material>__,
                 *(undefined8 *)puVar2,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<SkinnedMeshRenderer>__
                 ,*(undefined8 *)StringLiteral_205,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<SortingGroup>__
                 ,*(undefined8 *)StringLiteral_231,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Sprite>__,
                 *(undefined8 *)puVar3,*(undefined8 *)puVar1);
    puVar2 = StringLiteral_218;
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<SpriteRenderer>__
                 ,*(undefined8 *)StringLiteral_218,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<TerrainLayer>__
                 ,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<TextMesh>__,
                 *(undefined8 *)puVar2,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Texture2D>__
                 ,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Texture3D>__
                 ,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Transform>__
                 ,*(undefined8 *)StringLiteral_197,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<VisualEffect>__
                 ,*(undefined8 *)StringLiteral_220,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__64_0__,
                 *(undefined8 *)StringLiteral_234,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)StringLiteral_204,*(undefined8 *)StringLiteral_213,
                 *(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolver_ResolveType__
                 ,*(undefined8 *)puVar9,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_System_Collections_IEnumerator_Reset__
                 ,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_Assets_Scripts_Menu_OfflinePanel_<LoadNewScene>d__5_System_Collections_IEnumerator_Reset__
                 ,*(undefined8 *)StringLiteral_228,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_0__,
                 *(undefined8 *)StringLiteral_222,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_1__,
                 *(undefined8 *)StringLiteral_195,*(undefined8 *)puVar1);
    FUN_04e935f0(lVar11,*(undefined8 *)PTR_DAT_06a10fe0,*(undefined8 *)puVar7,*(undefined8 *)puVar1)
    ;
    FUN_04e935f0(lVar11,*(undefined8 *)
                         Method_OnlineAvatarPanel_<LoadNewScene>d__6_System_Collections_IEnumerator_Reset__
                 ,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
    **(long **)(*(long *)puVar6 + 0xb8) = lVar11;
    LeanTween__value(*(undefined8 *)(*(long *)puVar6 + 0xb8),lVar11);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff510);
    FUN_04e92874(lVar11,*(undefined8 *)PTR_DAT_069ff508);
    puVar10 = StringLiteral_229;
    puVar9 = StringLiteral_223;
    puVar8 = StringLiteral_211;
    puVar7 = StringLiteral_209;
    puVar5 = StringLiteral_200;
    puVar4 = StringLiteral_193;
    puVar3 = StringLiteral_191;
    puVar2 = StringLiteral_185;
    if (lVar11 != 0) {
      FUN_04e935f0(lVar11,*(undefined8 *)StringLiteral_184,*(undefined8 *)StringLiteral_232,
                   *(undefined8 *)puVar1);
      FUN_04e935f0(lVar11,*(undefined8 *)puVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
      FUN_04e935f0(lVar11,*(undefined8 *)puVar4,*(undefined8 *)puVar5,*(undefined8 *)puVar1);
      FUN_04e935f0(lVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
      FUN_04e935f0(lVar11,*(undefined8 *)puVar8,*(undefined8 *)puVar7,*(undefined8 *)puVar1);
      plVar12 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
      *plVar12 = lVar11;
      LeanTween__value(plVar12,lVar11);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


