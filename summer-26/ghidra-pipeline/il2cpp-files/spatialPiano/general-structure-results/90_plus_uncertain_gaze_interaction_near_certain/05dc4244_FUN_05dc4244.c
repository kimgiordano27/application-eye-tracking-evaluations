/*
FUNCTION_NAME: FUN_05dc4244
ENTRY_POINT: 05dc4244
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 265
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_15;telemetry_or_network_hits_19;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_15;functionality_data_collection_or_telemetry_hits_19
*/


void FUN_05dc4244(long param_1,long *param_2)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined4 extraout_var;
  uint uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [12];
  undefined8 in_stack_fffffffffffffe90;
  undefined4 uVar24;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined3 uStack_b3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar7 = Method_System_Data_DataTable_set_Prefix__;
  uVar18 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 0x20);
  if ((DAT_06bc3c11 & 1) == 0) {
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<Rotate>__);
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_SMAAPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_SMAASetupPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                );
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderGraphUtils_PassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_BeginXRPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_PassData>__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_Painter2D_OnMeshGeneration__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<StencilCrossFadeRenderPass_PassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<TemporalAA_TaaPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<Vrs_VisualizationPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XRDepthMotionPass_PassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XROcclusionMeshPass_PassData>__
                );
    FUN_02f08768(Method_System_MemoryExtensions_SequenceEqual<byte>__);
    FUN_02f08768(Method_UnityEngine_InputSystem_Utilities_MemoryHelpers_SetBitsInBuffer__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ARBackgroundRendererFeature_ARCameraBackgroundRenderPass_PassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<FullScreenPassRendererFeature_FullScreenRenderPass_CopyPassData>__
                );
    FUN_02f08768(PTR_DAT_067c9340);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<FullScreenPassRendererFeature_FullScreenRenderPass_MainPassData>__
                );
    FUN_02f08768(Method_Unity_Collections_FixedStringMethods_Append<UnsafeText>__);
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<XRAnchor>>>__
                );
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<ResolvedStyleAccess>__);
    FUN_02f08768(Method_System_Xml_Schema_Parser_LoadAttributeNode__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__);
    FUN_02f08768(PTR_DAT_067cbf08);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData>__
                );
    FUN_02f08768(Method_OVRVirtualKeyboard_Awake__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__);
    FUN_02f08768(Method_Unity_AppUI_UI_RectField_OnHFieldChanged__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRenderPass<ProbeReferenceVolume_RenderFragmentationOverlayPassData>__
                );
    FUN_02f08768(Method_System_Data_DataTable_set_Prefix__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRenderPass<RenderGraph_ProfilingScopePassData>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<StyleBackgroundPosition>__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_DoFBokehPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_DoFGaussianPassData>__
                );
    FUN_02f08768(Method_Unity_Collections_DataStreamReader_CheckBits__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_UpdateCameraResolutionPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<RenderGraphUtils_BlitMaterialPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<RenderGraphUtils_BlitPassData>__
                );
    FUN_02f08768(Method_System_Diagnostics_Process_OpenProcessHandle__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ARCommandBufferSupportRendererFeature_EventInjectionRenderPass_PassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<CapturePass_UnsafePassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DeferredLights_SetupLightPassData>__
                );
    FUN_02f08768(Method_System_Diagnostics_Process_Start__);
    DAT_06bc3c11 = 1;
  }
  puVar8 = 
  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar7 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  uVar12 = FUN_05ca4708(0);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar8);
  }
  puVar8 = Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__;
  uVar13 = FUN_05ca9574(uVar12,0,0);
  lVar14 = *(long *)puVar7;
  *(undefined8 *)(param_1 + 0x360) = uVar13;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar6 = PTR_DAT_067c9340;
  FUN_05d60e04(param_1,param_2,0);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ARBackgroundRendererFeature_ARCameraBackgroundRenderPass_PassData>__
  ;
  FUN_05de2880(0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_033dc90c(&local_68,*(undefined8 *)puVar5);
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_DoFGaussianPassData>__
  ;
  if ((uVar15 & 1) != 0) {
    uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XRDepthMotionPass_PassData>__
                               );
    FUN_04e05f48(uVar13,0,*(undefined8 *)puVar5,0);
    if (local_68 == 0) goto LAB_05dc5470;
    uVar19 = *(undefined8 *)(local_68 + 0x10);
    uVar20 = *(undefined8 *)(local_68 + 0x18);
    if (*(int *)(*(long *)Method_Unity_Collections_DataStreamReader_CheckBits__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05c3b370(uVar13,uVar19,uVar20,0);
    if (local_68 == 0) goto LAB_05dc5470;
    uVar19 = *(undefined8 *)(local_68 + 0x20);
    uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_Unity_Properties_PropertyBag_Register<StyleBackgroundPosition>__
                               );
    FUN_05d9fc70(uVar13,0x96,uVar19,0);
    *(undefined8 *)(param_1 + 0x1f8) = uVar13;
  }
  puVar5 = Method_UnityEngine_InputSystem_Utilities_MemoryHelpers_SetBitsInBuffer__;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_033dc90c(&local_70,*(undefined8 *)puVar5);
  if ((uVar15 & 1) != 0) {
    if (local_70 == 0) goto LAB_05dc5470;
    uVar13 = *(undefined8 *)(local_70 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar13 = FUN_05cb1464(uVar13,0);
    *(undefined8 *)(param_1 + 0x2e0) = uVar13;
    if (local_70 == 0) goto LAB_05dc5470;
    uVar13 = FUN_05cb1464(*(undefined8 *)(local_70 + 0x20),0);
    *(undefined8 *)(param_1 + 0x2e8) = uVar13;
    if (local_70 == 0) goto LAB_05dc5470;
    uVar13 = FUN_05cb1464(*(undefined8 *)(local_70 + 0x38),0);
    *(undefined8 *)(param_1 + 0x2f0) = uVar13;
  }
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<FullScreenPassRendererFeature_FullScreenRenderPass_CopyPassData>__
  ;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_033dc90c(&local_78,*(undefined8 *)puVar5);
  if ((uVar15 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    if (local_78 == 0) goto LAB_05dc5470;
    uVar13 = *(undefined8 *)(local_78 + 0x18);
    uVar19 = *(undefined8 *)(local_78 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar19 = FUN_05cb1464(uVar19,0);
    *(undefined8 *)(param_1 + 0x2f8) = uVar19;
    if (local_78 == 0) goto LAB_05dc5470;
    uVar19 = FUN_05cb1464(*(undefined8 *)(local_78 + 0x30),0);
    *(undefined8 *)(param_1 + 0x300) = uVar19;
    if (local_78 == 0) goto LAB_05dc5470;
    uVar19 = FUN_05cb1464(*(undefined8 *)(local_78 + 0x20),0);
    *(undefined8 *)(param_1 + 0x308) = uVar19;
    if (local_78 == 0) goto LAB_05dc5470;
    uVar20 = *(undefined8 *)(local_78 + 0x38);
    uVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRenderPass<ProbeReferenceVolume_RenderFragmentationOverlayPassData>__
                               );
    FUN_05d9f0c4(uVar19,uVar20,0);
    *(undefined8 *)(param_1 + 0x220) = uVar19;
  }
  if (param_2 == (long *)0x0) goto LAB_05dc5470;
  lVar14 = param_2[0xd];
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x2bd);
  auVar23 = FUN_06127100(0);
  *pauVar1 = auVar23;
  puVar5 = Method_System_MemoryExtensions_SequenceEqual<byte>__;
  if (lVar14 == 0) goto LAB_05dc5470;
  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty__SetValue
            (pauVar1,*(undefined1 *)(lVar14 + 0x10),0);
  FUN_0612b7f4(pauVar1,*(undefined4 *)(lVar14 + 0x18),0);
  FUN_0612b810(pauVar1,*(undefined4 *)(lVar14 + 0x1c),0);
  FUN_0612b82c(pauVar1,*(undefined4 *)(lVar14 + 0x20),0);
  FUN_0612b848(pauVar1,*(undefined4 *)(lVar14 + 0x24),0);
  lVar16 = *(long *)puVar6;
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)((long)param_2 + 0x8c);
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_033dc90c(&local_80,*(undefined8 *)puVar5);
  if ((uVar15 & 1) == 0) {
LAB_05dc4870:
    uVar12 = (undefined4)param_2[0xc];
    *(undefined4 *)(param_1 + 0x350) = uVar12;
  }
  else {
    if (local_80 == 0) goto LAB_05dc5470;
    uVar15 = FUN_05db0474(local_80,0);
    if ((uVar15 & 1) != 0) goto LAB_05dc4870;
    *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)((long)param_2 + 0x5c);
    uVar12 = (undefined4)param_2[0xc];
  }
  *(undefined4 *)(param_1 + 0x354) = uVar12;
  puVar6 = PTR_DAT_067cb280;
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)((long)param_2 + 100);
  lVar16 = *(long *)puVar6;
  *(char *)(param_1 + 0x35c) = (char)param_2[0xe];
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar5 = PTR_DAT_067c8f20;
  lVar16 = FUN_05dd59d4(0);
  if ((lVar16 != 0) && (*(char *)(lVar16 + 0xf7) != '\0')) {
    FUN_05d72d34(&local_120,0);
    local_a0 = CONCAT44(uStack_11c,local_120);
    uStack_98 = uStack_118;
    local_90 = local_110;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar16 = FUN_05dd59d4(0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar5);
    }
    uVar15 = FUN_060f60a4(lVar16,0);
    if ((uVar15 & 1) != 0) {
      if (lVar16 == 0) goto LAB_05dc5470;
      uVar12 = FUN_05d368fc(lVar16,0);
      uStack_98 = CONCAT44(uStack_98._4_4_,uVar12);
      local_a0 = FUN_05d36b24(lVar16,0);
    }
    uVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<XRAnchor>>>__
                               );
    FUN_05d702b8(uVar19,&local_a0,0);
    *(undefined8 *)(param_1 + 0x2d0) = uVar19;
  }
  bVar11 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  lVar16 = *(long *)puVar7;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar16);
  }
  *(byte *)(param_1 + 0x141) = bVar11 & 1;
  bVar11 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
  lVar16 = *(long *)puVar8;
  *(byte *)(param_1 + 0x142) = bVar11 & 1;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bc3979 == '\0') {
    FUN_02f08768(Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__);
    DAT_06bc3979 = '\x01';
  }
  puVar10 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_DoFBokehPassData>__
  ;
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<Vrs_VisualizationPassData>__
  ;
  puVar6 = Method_Unity_Properties_PropertyBag_Register<Rotate>__;
  puVar7 = Method_Unity_Properties_PropertyBag_Register<ResolvedStyleAccess>__;
  lVar16 = *(long *)puVar8;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar16 = *(long *)puVar8;
  }
  *(byte *)(param_1 + 0x142) = *(byte *)(*(long *)(lVar16 + 0xb8) + 8) ^ 1;
  puVar9 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_BeginXRPassData>__
  ;
  uVar17 = *(uint *)((long)param_2 + 0x74);
  uVar20 = *(undefined8 *)(param_1 + 0x2d0);
  uVar19 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
  FUN_05defbc8(uVar19,uVar20,(uVar17 & 0xfffffffe) == 2,0);
  *(undefined8 *)(param_1 + 0x298) = uVar19;
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)((long)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)((long)param_2 + 0x7c);
  uVar12 = FUN_05d6aee8(param_2,0);
  *(undefined4 *)(param_1 + 0x2b4) = uVar12;
  uVar12 = FUN_05d6b040(param_2,0);
  uVar19 = *(undefined8 *)puVar7;
  *(undefined4 *)(param_1 + 0x2b8) = uVar12;
  lVar16 = param_2[8];
  *(undefined1 *)(param_1 + 700) = 0;
  *(char *)(param_1 + 0x134) = (char)lVar16;
  uVar19 = thunk_FUN_02f45270(uVar19);
  FUN_05e02c7c(uVar19,0x32,0);
  uVar20 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x168) = uVar19;
  uVar19 = thunk_FUN_02f45270(uVar20);
  FUN_05dea998(uVar19,0x32,0);
  uVar20 = *(undefined8 *)puVar10;
  *(undefined8 *)(param_1 + 0x170) = uVar19;
  uVar19 = thunk_FUN_02f45270(uVar20);
  FUN_05da1414(uVar19,0xfa,0);
  puVar8 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
  ;
  *(undefined8 *)(param_1 + 0x1e8) = uVar19;
  uVar19 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
  FUN_05df710c(uVar19,0x3ea,uVar13,0,0,0,0,0);
  puVar7 = PTR_DAT_067cbf08;
  *(undefined8 *)(param_1 + 0x1f0) = uVar19;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar19 = FUN_06126ea0(0);
  uVar12 = *(undefined4 *)(param_1 + 0x350);
  uVar20 = thunk_FUN_02f45270(*(undefined8 *)puVar9);
  FUN_05dfaccc(uVar20,0x96,uVar19,uVar12,0);
  *(undefined8 *)(param_1 + 0x148) = uVar20;
  uVar19 = FUN_06126ea0(0);
  uVar12 = *(undefined4 *)(param_1 + 0x350);
  uVar20 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
                             );
  FUN_05df93dc(uVar20,0x96,uVar19,uVar12,0);
  uVar17 = *(uint *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x150) = uVar20;
  if ((uVar17 | 2) == 2) {
    uVar19 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
    FUN_05df710c(uVar19,200,uVar13,1,1,0,0,0);
    uVar17 = *(uint *)(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x158) = uVar19;
  }
  if ((uVar17 | 2) == 3) {
    uVar21 = *(undefined8 *)(param_1 + 0x300);
    uVar20 = *(undefined8 *)(param_1 + 0x2f8);
    uVar19 = *(undefined8 *)(param_1 + 0x2d0);
    uVar3 = *(undefined1 *)(param_1 + 0x134);
    lVar16 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                               );
    local_b7 = 0;
    uStack_b3 = 0;
    local_d0 = uVar20;
    uStack_c8 = uVar21;
    local_c0 = uVar19;
    local_b8 = uVar17 == 3;
    FUN_05de3ab4(lVar16,&local_d0,uVar3,0);
    *(long *)(param_1 + 0x2a0) = lVar16;
    puVar7 = PTR_DAT_067cbf08;
    if (lVar16 != 0) {
      *(char *)(lVar16 + 0x19) = (char)param_2[0x11];
      puVar8 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XROcclusionMeshPass_PassData>__
      ;
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar19 = FUN_06126ea0(0);
      lVar16 = param_2[0xc];
      uVar21 = *(undefined8 *)*pauVar1;
      uVar18 = *(undefined4 *)(param_1 + 0x2c5);
      uVar12 = *(undefined4 *)(lVar14 + 0x14);
      uVar22 = *(undefined8 *)(param_1 + 0x2a0);
      uVar20 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
      FUN_05e01004(uVar20,0xd2,uVar19,(int)lVar16,uVar21,uVar18,uVar12,uVar22,0);
      puVar7 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
      ;
      *(undefined8 *)(param_1 + 0x178) = uVar20;
      uVar19 = *(undefined8 *)*pauVar1;
      uVar18 = *(undefined4 *)(param_1 + 0x2c5);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05de5e0c(uVar19,uVar18,0x60,0);
      lVar16 = FUN_02f0880c(*(undefined8 *)Method_Unity_AppUI_UI_RectField_OnHFieldChanged__,3);
      local_120 = 0;
      FUN_0612aaa4(&local_120,*(undefined8 *)Method_System_Diagnostics_Process_Start__,0);
      puVar7 = Method_System_Diagnostics_Process_OpenProcessHandle__;
      if (lVar16 != 0) {
        if (*(int *)(lVar16 + 0x18) != 0) {
          *(undefined4 *)(lVar16 + 0x20) = local_120;
          local_d4 = 0;
          FUN_0612aaa4(&local_d4,*(undefined8 *)puVar7,0);
          puVar7 = 
          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_UpdateCameraResolutionPassData>__
          ;
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
            *(undefined4 *)(lVar16 + 0x24) = local_d4;
            local_d8 = 0;
            FUN_0612aaa4(&local_d8,*(undefined8 *)puVar7,0);
            puVar8 = 
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<RenderGraphUtils_BlitMaterialPassData>__
            ;
            puVar7 = 
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderGraphUtils_PassData>__
            ;
            if (2 < *(uint *)(lVar16 + 0x18)) {
              *(undefined4 *)(lVar16 + 0x28) = local_d8;
              uVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                                         );
              FUN_05df710c(uVar19,0xd3,uVar13,1,0,0,*(undefined8 *)puVar8,0);
              uVar20 = *(undefined8 *)puVar7;
              uVar21 = *(undefined8 *)(param_1 + 0x2a0);
              *(undefined8 *)(param_1 + 0x180) = uVar19;
              uVar19 = thunk_FUN_02f45270(uVar20);
              FUN_05df8910(uVar19,0xe6,uVar21,0);
              *(undefined8 *)(param_1 + 0x188) = uVar19;
              uVar19 = FUN_06126ea0(0);
              lVar4 = param_2[0xc];
              uVar20 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                                         );
              uVar18 = extraout_var;
              FUN_05dfbdcc(uVar20,*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DeferredLights_SetupLightPassData>__
                           ,lVar16,1,0xfa,uVar19,(int)lVar4);
              *(undefined8 *)(param_1 + 400) = uVar20;
              goto LAB_05dc4eb4;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
    }
LAB_05dc5470:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05dc4eb4:
  puVar7 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_PassData>__
  ;
  if (*(int *)(*(long *)PTR_DAT_067cbf08 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar19 = FUN_06126ea0(0);
  lVar16 = param_2[0xc];
  uVar21 = *(undefined8 *)*pauVar1;
  uVar12 = *(undefined4 *)(param_1 + 0x2c5);
  uVar24 = *(undefined4 *)(lVar14 + 0x14);
  uVar20 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                             );
  uVar22 = CONCAT44(uVar18,uVar24);
  FUN_05dfc26c(uVar20,10,1,0xfa,uVar19,(int)lVar16,uVar21,uVar12,uVar22,0);
  uVar24 = (undefined4)((ulong)uVar22 >> 0x20);
  *(undefined8 *)(param_1 + 0x198) = uVar20;
  uVar19 = FUN_06126ea0(0);
  lVar16 = param_2[0xc];
  uVar21 = *(undefined8 *)*pauVar1;
  uVar18 = *(undefined4 *)(param_1 + 0x2c5);
  uVar12 = *(undefined4 *)(lVar14 + 0x14);
  uVar20 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
  FUN_05dfdc8c(uVar20,10,1,0xfa,uVar19,(int)lVar16,uVar21,uVar18,CONCAT44(uVar24,uVar12),0);
  puVar7 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  iVar2 = *(int *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x1a0) = uVar20;
  uVar18 = 500;
  if (iVar2 != 1) {
    uVar18 = 400;
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  bVar11 = FUN_05dadd80(0);
  uVar19 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                             );
  FUN_05df710c(uVar19,uVar18,uVar13,1,0,iVar2 == 1 & bVar11,0,0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar19;
  FUN_063fb9e4(&Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__);
  return;
}


