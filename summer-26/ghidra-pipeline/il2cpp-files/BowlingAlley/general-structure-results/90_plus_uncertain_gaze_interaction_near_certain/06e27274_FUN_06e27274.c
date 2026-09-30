/*
FUNCTION_NAME: FUN_06e27274
ENTRY_POINT: 06e27274
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 209
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_20;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_permission_setup;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06e27274(void)

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
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar10 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Quaternion>__;
  puVar9 = Method_Meta_WitAi_Requests_AudioStreamHandler_OnDecodeComplete__;
  puVar8 = Method_UnityEngine_Audio_AudioMixerPlayable__ctor__;
  puVar7 = Method_UnityEngine_UIElements_UxmlFactory<SliderInt,_SliderInt_UxmlTraits>__ctor__;
  puVar6 = Method_UnityEngine_UIElements_UxmlFactory<SliderFloat,_SliderFloat_UxmlTraits>__ctor__;
  puVar5 = Method_UnityEngine_UIElements_UxmlFactory<RepeatButton,_RepeatButton_UxmlTraits>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__;
  puVar4 = Method_UnityEngine_UIElements_UxmlFactory<Preloader,_Preloader_UxmlTraits>__ctor__;
  puVar3 = Method_UnityEngine_UIElements_UxmlFactory<PopupWindow,_PopupWindow_UxmlTraits>__ctor__;
  puVar1 = PTR_DAT_0727bc00;
  if ((DAT_076eaac3 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727bc00);
    thunk_FUN_032e1da0(Method_Meta_WitAi_Requests_AudioStreamHandler_OnDecodeComplete__);
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<TrackableId>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Audio_AudioMixerPlayable__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_UxmlFactory<Panel,_Panel_UxmlTraits>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<PopupWindow,_PopupWindow_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<uint>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ulong>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<Preloader,_Preloader_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<RangeSliderInt,_RangeSliderInt_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRHandJoint>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<float4>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<CAPI_ovrAvatar2EntityAssetType>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<CAPI_ovrAvatar2Transform>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneModelLoader_<OnLoadSceneModelFailedPermissionNotGranted>d__10>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_PartnerAssetsManager_<DownloadIcons>d__13>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<JobHandle>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<VBones>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Quaternion>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<float4>__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<BitField32>__);
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<bool>__);
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<int>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<RepeatButton,_RepeatButton_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_18>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<SVSquare,_SVSquare_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_220>__);
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_259>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<ScrollView,_ScrollView_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279b80);
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_53>__);
    thunk_FUN_032e1da0(PTR_DAT_07279b88);
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_70>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<Scroller,_Scroller_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_98>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<SearchBar,_TextField_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_99>__);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_AwaitableDownload_<WaitAsync>d__7>__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_UxmlFactory<Slider,_Slider_UxmlTraits>__ctor__)
    ;
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<float3>__);
    thunk_FUN_032e1da0(Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<quaternion>__);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_PartnerAssetsManager_<DownloadIconsByCategory>d__11>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<SliderFloat,_SliderFloat_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_48_InternalType_50>__
                      );
    thunk_FUN_032e1da0(
                      Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_53_InternalType_54>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_UxmlFactory<SliderInt,_SliderInt_UxmlTraits>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_53_InternalType_55>__
                      );
    thunk_FUN_032e1da0(
                      Method_Nova_Compat_NativeCollectionExtensions_GetRawPtrWithoutChecks<UnsafeAtomicCounter32>__
                      );
    thunk_FUN_032e1da0(
                      Method_Nova_Compat_NativeCollectionExtensions_GetRawReadonlyPtr<InternalType_133>__
                      );
    thunk_FUN_032e1da0(
                      Method_Nova_Compat_NativeCollectionExtensions_GetRawReadonlyPtr<InternalType_328>__
                      );
    thunk_FUN_032e1da0(
                      Method_Nova_Compat_NativeCollectionExtensions_GetRawReadonlyPtr<InternalType_53>__
                      );
    DAT_076eaac3 = 1;
  }
  local_68 = 0;
  FUN_03d70e9c(&local_68,*(undefined8 *)puVar10,*(undefined8 *)puVar4);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = local_68;
  thunk_FUN_0333a630(*(undefined8 *)(*(long *)puVar1 + 0xb8),0);
  local_70 = 0;
  FUN_03d70e9c(&local_70,*(undefined8 *)puVar5,*(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8) = local_70;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 8,0);
  local_78 = 0;
  FUN_03d70e9c(&local_78,*(undefined8 *)puVar7,*(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10) = local_78;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x10,0);
  local_80 = 0;
  FUN_03d70e9c(&local_80,*(undefined8 *)puVar6,*(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18) = local_80;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x18,0);
  local_88 = 0;
  FUN_03d70e9c(&local_88,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x20) = local_88;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x20,0);
  local_90 = 0;
  FUN_03d70e9c(&local_90,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<SVSquare,_SVSquare_UxmlTraits>__ctor__,
               *(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x28) = local_90;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x28,0);
  local_98 = 0;
  FUN_03d70e9c(&local_98,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
               ,*(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x30) = local_98;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x30,0);
  local_a0 = 0;
  FUN_03d70e9c(&local_a0,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<Scroller,_Scroller_UxmlTraits>__ctor__,
               *(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x38) = local_a0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x38,0);
  local_a8 = 0;
  FUN_03d70e9c(&local_a8,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<SearchBar,_TextField_UxmlTraits>__ctor__,
               *(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x40) = local_a8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x40,0);
  local_b0 = 0;
  FUN_03d70e9c(&local_b0,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<Slider,_Slider_UxmlTraits>__ctor__,
               *(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48) = local_b0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x48,0);
  local_b8 = 0;
  FUN_03d70e9c(&local_b8,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<RangeSliderInt,_RangeSliderInt_UxmlTraits>__ctor__
               ,*(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x50) = local_b8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x50,0);
  local_c0 = 0;
  FUN_03d70e9c(&local_c0,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__,
               *(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x58) = local_c0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x58,0);
  local_c8 = 0;
  FUN_03d70e9c(&local_c8,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
               ,*(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x60) = local_c8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x60,0);
  local_d0 = 0;
  FUN_03d71770(&local_d0,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
               ,*(undefined8 *)
                 Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<TrackableId>__
              );
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x68) = local_d0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x68,0);
  local_d8 = 0;
  FUN_03d715ac(&local_d8,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<float4>__
               ,*(undefined8 *)puVar3);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x70) = local_d8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x70,0);
  local_e0 = 0;
  FUN_03d715ac(&local_e0,*(undefined8 *)PTR_DAT_07279b88,*(undefined8 *)puVar3);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x78) = local_e0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x78,0);
  local_e8 = 0;
  FUN_03d715ac(&local_e8,*(undefined8 *)PTR_DAT_07279b80,*(undefined8 *)puVar3);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80) = local_e8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x80,0);
  puVar2 = Method_UnityEngine_UIElements_UxmlFactory<Panel,_Panel_UxmlTraits>__ctor__;
  local_f0 = 0;
  FUN_03d71934(&local_f0,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
               ,*(undefined8 *)
                 Method_UnityEngine_UIElements_UxmlFactory<Panel,_Panel_UxmlTraits>__ctor__);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x88) = local_f0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x88,0);
  local_f8 = 0;
  FUN_03d71934(&local_f8,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<ScrollView,_ScrollView_UxmlTraits>__ctor__
               ,*(undefined8 *)puVar2);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x90) = local_f8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x90,0);
  local_100 = 0;
  FUN_03d71af8(&local_100,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<JobHandle>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x98) = local_100;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x98,0);
  local_108 = 0;
  FUN_03d71af8(&local_108,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRHandJoint>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xa0) = local_108;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xa0,0);
  local_110 = 0;
  FUN_03d71af8(&local_110,
               *(undefined8 *)Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<int>__,
               *(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xa8) = local_110;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xa8,0);
  local_118 = 0;
  FUN_03d71af8(&local_118,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtrWithoutChecks<UnsafeAtomicCounter32>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xb0) = local_118;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xb0,0);
  local_120 = 0;
  FUN_03d71af8(&local_120,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xb8) = local_120;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xb8,0);
  local_128 = 0;
  FUN_03d71af8(&local_128,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xc0) = local_128;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xc0,0);
  local_130 = 0;
  FUN_03d71af8(&local_130,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_48_InternalType_50>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 200) = local_130;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 200,0);
  local_138 = 0;
  FUN_03d71af8(&local_138,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_98>__,
               *(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd0) = local_138;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xd0,0);
  local_140 = 0;
  FUN_03d71af8(&local_140,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<float4>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd8) = local_140;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xd8,0);
  local_148 = 0;
  FUN_03d71af8(&local_148,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xe0) = local_148;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xe0,0);
  local_150 = 0;
  FUN_03d71af8(&local_150,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<VBones>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xe8) = local_150;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xe8,0);
  local_158 = 0;
  FUN_03d71af8(&local_158,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_70>__,
               *(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xf0) = local_158;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xf0,0);
  local_160 = 0;
  FUN_03d71af8(&local_160,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_53_InternalType_54>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xf8) = local_160;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0xf8,0);
  local_168 = 0;
  FUN_03d71af8(&local_168,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_53>__,
               *(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x100) = local_168;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x100,0);
  local_170 = 0;
  FUN_03d71af8(&local_170,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_259>__,
               *(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x108) = local_170;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x108,0);
  local_178 = 0;
  FUN_03d71af8(&local_178,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_53_InternalType_55>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x110) = local_178;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x110,0);
  local_180 = 0;
  FUN_03d71af8(&local_180,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x118) = local_180;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x118,0);
  local_188 = 0;
  FUN_03d71af8(&local_188,
               *(undefined8 *)Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<quaternion>__,
               *(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x120) = local_188;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x120,0);
  local_190 = 0;
  FUN_03d71af8(&local_190,
               *(undefined8 *)Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<bool>__,
               *(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x128) = local_190;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x128,0);
  local_198 = 0;
  FUN_03d71af8(&local_198,
               *(undefined8 *)Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<BitField32>__,
               *(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x130) = local_198;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x130,0);
  local_1a0 = 0;
  FUN_03d71af8(&local_1a0,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x138) = local_1a0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x138,0);
  local_1a8 = 0;
  FUN_03d71af8(&local_1a8,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawReadonlyPtr<InternalType_133>__,
               *(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x140) = local_1a8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x140,0);
  local_1b0 = 0;
  FUN_03d71af8(&local_1b0,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x148) = local_1b0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x148,0);
  local_1b8 = 0;
  FUN_03d71af8(&local_1b8,
               *(undefined8 *)Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<float3>__,
               *(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x150) = local_1b8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x150,0);
  local_1c0 = 0;
  FUN_03d71af8(&local_1c0,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
               ,*(undefined8 *)puVar8);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x158) = local_1c0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x158,0);
  local_1c8 = 0;
  FUN_03d713e8(&local_1c8,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<CAPI_ovrAvatar2Transform>__
               ,*(undefined8 *)puVar9);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x160) = local_1c8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x160,0);
  local_1d0 = 0;
  FUN_03d713e8(&local_1d0,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
               ,*(undefined8 *)puVar9);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x168) = local_1d0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x168,0);
  local_1d8 = 0;
  FUN_03d713e8(&local_1d8,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
               ,*(undefined8 *)puVar9);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x170) = local_1d8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x170,0);
  local_1e0 = 0;
  FUN_03d713e8(&local_1e0,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawReadonlyPtr<InternalType_53>__,
               *(undefined8 *)puVar9);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x178) = local_1e0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x178,0);
  local_1e8 = 0;
  FUN_03d713e8(&local_1e8,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_220>__,
               *(undefined8 *)puVar9);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x180) = local_1e8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x180,0);
  local_1f0 = 0;
  FUN_03d71224(&local_1f0,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<CAPI_ovrAvatar2EntityAssetType>__
               ,*(undefined8 *)
                 Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<uint>__
              );
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x188) = local_1f0;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x188,0);
  local_1f8 = 0;
  FUN_03d71060(&local_1f8,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_99>__,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ulong>__
              );
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 400) = local_1f8;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 400,0);
  local_200 = 0;
  FUN_03d71934(&local_200,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneModelLoader_<OnLoadSceneModelFailedPermissionNotGranted>d__10>__
               ,*(undefined8 *)puVar2);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x198) = local_200;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x198,0);
  local_208 = 0;
  FUN_03d715ac(&local_208,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawReadonlyPtr<InternalType_328>__,
               *(undefined8 *)puVar3);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x1a0) = local_208;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x1a0,0);
  local_210 = 0;
  FUN_03d715ac(&local_210,
               *(undefined8 *)
                Method_Nova_Compat_NativeCollectionExtensions_GetRawPtr<InternalType_18>__,
               *(undefined8 *)puVar3);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x1a8) = local_210;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x1a8,0);
  local_218 = 0;
  FUN_03d715ac(&local_218,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
               ,*(undefined8 *)puVar3);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x1b0) = local_218;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x1b0,0);
  local_220 = 0;
  FUN_03d715ac(&local_220,
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
               ,*(undefined8 *)puVar3);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x1b8) = local_220;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x1b8,0);
  local_228 = 0;
  FUN_03d70e9c(&local_228,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_AwaitableDownload_<WaitAsync>d__7>__
               ,*(undefined8 *)puVar4);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x1c0) = local_228;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x1c0,0);
  local_230 = 0;
  FUN_03d715ac(&local_230,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_PartnerAssetsManager_<DownloadIcons>d__13>__
               ,*(undefined8 *)puVar3);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x1c8) = local_230;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x1c8,0);
  local_238 = 0;
  FUN_03d715ac(&local_238,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_PartnerAssetsManager_<DownloadIconsByCategory>d__11>__
               ,*(undefined8 *)puVar3);
  lVar11 = *(long *)puVar1;
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x1d0) = local_238;
  thunk_FUN_0333a630(*(long *)(lVar11 + 0xb8) + 0x1d0,0);
  return;
}


