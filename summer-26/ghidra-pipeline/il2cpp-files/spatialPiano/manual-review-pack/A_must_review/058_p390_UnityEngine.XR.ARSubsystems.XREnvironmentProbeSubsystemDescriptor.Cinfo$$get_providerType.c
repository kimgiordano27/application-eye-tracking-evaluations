/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor.Cinfo$$get_providerType
ENTRY_POINT: 05dc4400
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 245
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_13;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_9;functionality_data_collection_or_telemetry_hits_13
*/


void UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Cinfo__get_providerType
               (long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
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
  uint uVar17;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [12];
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 uStack00000000000000b8;
  undefined4 uStack00000000000000b9;
  undefined3 uStack00000000000000bd;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xf58));
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
  *(undefined1 *)(unaff_x22 + 0xc11) = 1;
  puVar7 = 
  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar8 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  uVar12 = FUN_05ca4708(0);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar7);
  }
  puVar7 = Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__;
  uVar13 = FUN_05ca9574(uVar12,0,0);
  lVar14 = *(long *)puVar8;
  *(undefined8 *)(unaff_x19 + 0x360) = uVar13;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar6 = PTR_DAT_067c9340;
  FUN_05d60e04();
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ARBackgroundRendererFeature_ARCameraBackgroundRenderPass_PassData>__
  ;
  FUN_05de2880(0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_033dc90c(&stack0x00000108,*(undefined8 *)puVar5);
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_DoFGaussianPassData>__
  ;
  if ((uVar15 & 1) != 0) {
    uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XRDepthMotionPass_PassData>__
                               );
    FUN_04e05f48(uVar13,0,*(undefined8 *)puVar5,0);
    if (in_stack_00000108 == 0) goto LAB_05dc5470;
    uVar18 = *(undefined8 *)(in_stack_00000108 + 0x10);
    uVar19 = *(undefined8 *)(in_stack_00000108 + 0x18);
    if (*(int *)(*(long *)Method_Unity_Collections_DataStreamReader_CheckBits__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05c3b370(uVar13,uVar18,uVar19,0);
    if (in_stack_00000108 == 0) goto LAB_05dc5470;
    uVar18 = *(undefined8 *)(in_stack_00000108 + 0x20);
    uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_Unity_Properties_PropertyBag_Register<StyleBackgroundPosition>__
                               );
    FUN_05d9fc70(uVar13,0x96,uVar18,0);
    *(undefined8 *)(unaff_x19 + 0x1f8) = uVar13;
  }
  puVar5 = Method_UnityEngine_InputSystem_Utilities_MemoryHelpers_SetBitsInBuffer__;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_033dc90c(&stack0x00000100,*(undefined8 *)puVar5);
  if ((uVar15 & 1) != 0) {
    if (in_stack_00000100 == 0) goto LAB_05dc5470;
    uVar13 = *(undefined8 *)(in_stack_00000100 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar13 = FUN_05cb1464(uVar13,0);
    *(undefined8 *)(unaff_x19 + 0x2e0) = uVar13;
    if (in_stack_00000100 == 0) goto LAB_05dc5470;
    uVar13 = FUN_05cb1464(*(undefined8 *)(in_stack_00000100 + 0x20),0);
    *(undefined8 *)(unaff_x19 + 0x2e8) = uVar13;
    if (in_stack_00000100 == 0) goto LAB_05dc5470;
    uVar13 = FUN_05cb1464(*(undefined8 *)(in_stack_00000100 + 0x38),0);
    *(undefined8 *)(unaff_x19 + 0x2f0) = uVar13;
  }
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<FullScreenPassRendererFeature_FullScreenRenderPass_CopyPassData>__
  ;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_033dc90c(&stack0x000000f8,*(undefined8 *)puVar5);
  if ((uVar15 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    if (in_stack_000000f8 == 0) goto LAB_05dc5470;
    uVar13 = *(undefined8 *)(in_stack_000000f8 + 0x18);
    uVar18 = *(undefined8 *)(in_stack_000000f8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar18 = FUN_05cb1464(uVar18,0);
    *(undefined8 *)(unaff_x19 + 0x2f8) = uVar18;
    if (in_stack_000000f8 == 0) goto LAB_05dc5470;
    uVar18 = FUN_05cb1464(*(undefined8 *)(in_stack_000000f8 + 0x30),0);
    *(undefined8 *)(unaff_x19 + 0x300) = uVar18;
    if (in_stack_000000f8 == 0) goto LAB_05dc5470;
    uVar18 = FUN_05cb1464(*(undefined8 *)(in_stack_000000f8 + 0x20),0);
    *(undefined8 *)(unaff_x19 + 0x308) = uVar18;
    if (in_stack_000000f8 == 0) goto LAB_05dc5470;
    uVar19 = *(undefined8 *)(in_stack_000000f8 + 0x38);
    uVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRenderPass<ProbeReferenceVolume_RenderFragmentationOverlayPassData>__
                               );
    FUN_05d9f0c4(uVar18,uVar19,0);
    *(undefined8 *)(unaff_x19 + 0x220) = uVar18;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_05dc5470;
  lVar14 = unaff_x20[0xd];
  pauVar1 = (undefined1 (*) [12])(unaff_x19 + 0x2bd);
  auVar22 = FUN_06127100(0);
  *pauVar1 = auVar22;
  puVar5 = Method_System_MemoryExtensions_SequenceEqual<byte>__;
  if (lVar14 == 0) goto LAB_05dc5470;
  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty__SetValue
            (pauVar1,*(undefined1 *)(lVar14 + 0x10),0);
  FUN_0612b7f4(pauVar1,*(undefined4 *)(lVar14 + 0x18),0);
  FUN_0612b810(pauVar1,*(undefined4 *)(lVar14 + 0x1c),0);
  FUN_0612b82c(pauVar1,*(undefined4 *)(lVar14 + 0x20),0);
  FUN_0612b848(pauVar1,*(undefined4 *)(lVar14 + 0x24),0);
  lVar16 = *(long *)puVar6;
  *(undefined4 *)(unaff_x19 + 0x2d8) = *(undefined4 *)((long)unaff_x20 + 0x8c);
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_033dc90c(&stack0x000000f0,*(undefined8 *)puVar5);
  if ((uVar15 & 1) == 0) {
LAB_05dc4870:
    uVar12 = (undefined4)unaff_x20[0xc];
    *(undefined4 *)(unaff_x19 + 0x350) = uVar12;
  }
  else {
    if (in_stack_000000f0 == 0) goto LAB_05dc5470;
    uVar15 = FUN_05db0474(in_stack_000000f0,0);
    if ((uVar15 & 1) != 0) goto LAB_05dc4870;
    *(undefined4 *)(unaff_x19 + 0x350) = *(undefined4 *)((long)unaff_x20 + 0x5c);
    uVar12 = (undefined4)unaff_x20[0xc];
  }
  *(undefined4 *)(unaff_x19 + 0x354) = uVar12;
  puVar6 = PTR_DAT_067cb280;
  *(undefined4 *)(unaff_x19 + 0x358) = *(undefined4 *)((long)unaff_x20 + 100);
  lVar16 = *(long *)puVar6;
  *(char *)(unaff_x19 + 0x35c) = (char)unaff_x20[0xe];
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar5 = PTR_DAT_067c8f20;
  lVar16 = FUN_05dd59d4(0);
  if ((lVar16 != 0) && (*(char *)(lVar16 + 0xf7) != '\0')) {
    FUN_05d72d34(&stack0x00000050,0);
    in_stack_000000d0 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
    in_stack_000000d8 = in_stack_00000058;
    in_stack_000000e0 = in_stack_00000060;
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
      in_stack_000000d8 = CONCAT44(in_stack_000000d8._4_4_,uVar12);
      in_stack_000000d0 = FUN_05d36b24(lVar16,0);
    }
    uVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<XRAnchor>>>__
                               );
    FUN_05d702b8(uVar18,&stack0x000000d0,0);
    *(undefined8 *)(unaff_x19 + 0x2d0) = uVar18;
  }
  bVar11 = (**(code **)(*unaff_x20 + 0x178))();
  lVar16 = *(long *)puVar8;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar16);
  }
  *(byte *)(unaff_x19 + 0x141) = bVar11 & 1;
  bVar11 = (**(code **)(*unaff_x20 + 0x198))();
  lVar16 = *(long *)puVar7;
  *(byte *)(unaff_x19 + 0x142) = bVar11 & 1;
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
  puVar8 = Method_Unity_Properties_PropertyBag_Register<ResolvedStyleAccess>__;
  lVar16 = *(long *)puVar7;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar16 = *(long *)puVar7;
  }
  *(byte *)(unaff_x19 + 0x142) = *(byte *)(*(long *)(lVar16 + 0xb8) + 8) ^ 1;
  puVar9 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_BeginXRPassData>__
  ;
  uVar17 = *(uint *)((long)unaff_x20 + 0x74);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x2d0);
  uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
  FUN_05defbc8(uVar18,uVar19,(uVar17 & 0xfffffffe) == 2,0);
  *(undefined8 *)(unaff_x19 + 0x298) = uVar18;
  *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)((long)unaff_x20 + 0x74);
  *(undefined4 *)(unaff_x19 + 0x2b0) = *(undefined4 *)((long)unaff_x20 + 0x7c);
  uVar12 = FUN_05d6aee8();
  *(undefined4 *)(unaff_x19 + 0x2b4) = uVar12;
  uVar12 = FUN_05d6b040();
  uVar18 = *(undefined8 *)puVar8;
  *(undefined4 *)(unaff_x19 + 0x2b8) = uVar12;
  lVar16 = unaff_x20[8];
  *(undefined1 *)(unaff_x19 + 700) = 0;
  *(char *)(unaff_x19 + 0x134) = (char)lVar16;
  uVar18 = thunk_FUN_02f45270(uVar18);
  FUN_05e02c7c(uVar18,0x32,0);
  uVar19 = *(undefined8 *)puVar6;
  *(undefined8 *)(unaff_x19 + 0x168) = uVar18;
  uVar18 = thunk_FUN_02f45270(uVar19);
  FUN_05dea998(uVar18,0x32,0);
  uVar19 = *(undefined8 *)puVar10;
  *(undefined8 *)(unaff_x19 + 0x170) = uVar18;
  uVar18 = thunk_FUN_02f45270(uVar19);
  FUN_05da1414(uVar18,0xfa,0);
  puVar8 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
  ;
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar18;
  uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
  FUN_05df710c(uVar18,0x3ea,uVar13,0,0,0,0,0);
  puVar7 = PTR_DAT_067cbf08;
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar18;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar18 = FUN_06126ea0(0);
  uVar12 = *(undefined4 *)(unaff_x19 + 0x350);
  uVar19 = thunk_FUN_02f45270(*(undefined8 *)puVar9);
  FUN_05dfaccc(uVar19,0x96,uVar18,uVar12,0);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar19;
  uVar18 = FUN_06126ea0(0);
  uVar12 = *(undefined4 *)(unaff_x19 + 0x350);
  uVar19 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
                             );
  FUN_05df93dc(uVar19,0x96,uVar18,uVar12,0);
  uVar17 = *(uint *)(unaff_x19 + 0x2a8);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar19;
  if ((uVar17 | 2) == 2) {
    uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
    FUN_05df710c(uVar18,200,uVar13,1,1,0,0,0);
    uVar17 = *(uint *)(unaff_x19 + 0x2a8);
    *(undefined8 *)(unaff_x19 + 0x158) = uVar18;
  }
  if ((uVar17 | 2) == 3) {
    uVar20 = *(undefined8 *)(unaff_x19 + 0x300);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x2f8);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x2d0);
    uVar4 = *(undefined1 *)(unaff_x19 + 0x134);
    lVar16 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                               );
    uStack00000000000000b9 = 0;
    uStack00000000000000bd = 0;
    in_stack_000000a0 = uVar19;
    in_stack_000000a8 = uVar20;
    in_stack_000000b0 = uVar18;
    uStack00000000000000b8 = uVar17 == 3;
    FUN_05de3ab4(lVar16,&stack0x000000a0,uVar4,0);
    *(long *)(unaff_x19 + 0x2a0) = lVar16;
    puVar7 = PTR_DAT_067cbf08;
    if (lVar16 != 0) {
      *(char *)(lVar16 + 0x19) = (char)unaff_x20[0x11];
      puVar8 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XROcclusionMeshPass_PassData>__
      ;
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar18 = FUN_06126ea0(0);
      lVar16 = unaff_x20[0xc];
      uVar20 = *(undefined8 *)*pauVar1;
      uVar12 = *(undefined4 *)(unaff_x19 + 0x2c5);
      uVar2 = *(undefined4 *)(lVar14 + 0x14);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x2a0);
      uVar19 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
      FUN_05e01004(uVar19,0xd2,uVar18,(int)lVar16,uVar20,uVar12,uVar2,uVar21);
      puVar7 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
      ;
      *(undefined8 *)(unaff_x19 + 0x178) = uVar19;
      uVar18 = *(undefined8 *)*pauVar1;
      uVar12 = *(undefined4 *)(unaff_x19 + 0x2c5);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05de5e0c(uVar18,uVar12,0x60,0);
      lVar14 = FUN_02f0880c(*(undefined8 *)Method_Unity_AppUI_UI_RectField_OnHFieldChanged__,3);
      uStack0000000000000050 = 0;
      FUN_0612aaa4(&stack0x00000050,*(undefined8 *)Method_System_Diagnostics_Process_Start__,0);
      puVar7 = Method_System_Diagnostics_Process_OpenProcessHandle__;
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x18) != 0) {
          *(undefined4 *)(lVar14 + 0x20) = uStack0000000000000050;
          uStack000000000000009c = 0;
          FUN_0612aaa4((long)&stack0x00000098 + 4,*(undefined8 *)puVar7,0);
          puVar7 = 
          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_UpdateCameraResolutionPassData>__
          ;
          if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
            *(undefined4 *)(lVar14 + 0x24) = uStack000000000000009c;
            uStack0000000000000098 = 0;
            FUN_0612aaa4(&stack0x00000098,*(undefined8 *)puVar7,0);
            puVar8 = 
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<RenderGraphUtils_BlitMaterialPassData>__
            ;
            puVar7 = 
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderGraphUtils_PassData>__
            ;
            if (2 < *(uint *)(lVar14 + 0x18)) {
              *(undefined4 *)(lVar14 + 0x28) = uStack0000000000000098;
              uVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                                         );
              FUN_05df710c(uVar18,0xd3,uVar13,1,0,0,*(undefined8 *)puVar8,0);
              uVar19 = *(undefined8 *)puVar7;
              uVar20 = *(undefined8 *)(unaff_x19 + 0x2a0);
              *(undefined8 *)(unaff_x19 + 0x180) = uVar18;
              uVar18 = thunk_FUN_02f45270(uVar19);
              FUN_05df8910(uVar18,0xe6,uVar20,0);
              *(undefined8 *)(unaff_x19 + 0x188) = uVar18;
              uVar18 = FUN_06126ea0(0);
              lVar16 = unaff_x20[0xc];
              uVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                                         );
              FUN_05dfbdcc(uVar19,*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DeferredLights_SetupLightPassData>__
                           ,lVar14,1,0xfa,uVar18,(int)lVar16);
              *(undefined8 *)(unaff_x19 + 400) = uVar19;
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
  uVar18 = FUN_06126ea0(0);
  lVar14 = unaff_x20[0xc];
  uVar20 = *(undefined8 *)*pauVar1;
  uVar12 = *(undefined4 *)(unaff_x19 + 0x2c5);
  uVar19 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                             );
  FUN_05dfc26c(uVar19,10,1,0xfa,uVar18,(int)lVar14,uVar20,uVar12);
  *(undefined8 *)(unaff_x19 + 0x198) = uVar19;
  uVar18 = FUN_06126ea0(0);
  lVar14 = unaff_x20[0xc];
  uVar20 = *(undefined8 *)*pauVar1;
  uVar12 = *(undefined4 *)(unaff_x19 + 0x2c5);
  uVar19 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
  FUN_05dfdc8c(uVar19,10,1,0xfa,uVar18,(int)lVar14,uVar20,uVar12);
  puVar7 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  iVar3 = *(int *)(unaff_x19 + 0x2b0);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar19;
  uVar12 = 500;
  if (iVar3 != 1) {
    uVar12 = 400;
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  bVar11 = FUN_05dadd80(0);
  uVar18 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                             );
  FUN_05df710c(uVar18,uVar12,uVar13,1,0,iVar3 == 1 & bVar11,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar18;
  FUN_063fb9e4(&Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__);
  return;
}


