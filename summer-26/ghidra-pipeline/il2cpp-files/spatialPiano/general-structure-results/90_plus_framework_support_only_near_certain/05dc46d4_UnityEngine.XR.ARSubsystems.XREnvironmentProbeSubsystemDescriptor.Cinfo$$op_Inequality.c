/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor.Cinfo$$op_Inequality
ENTRY_POINT: 05dc46d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 111
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_9
*/


void UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Cinfo__op_Inequality(void)

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
  byte bVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long unaff_x19;
  long *unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *unaff_x24;
  undefined8 uVar19;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 uVar20;
  undefined1 auVar21 [12];
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
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  
  uVar12 = FUN_05cb1464();
  *(undefined8 *)(unaff_x19 + 0x2e8) = uVar12;
  if (in_stack_00000100 == 0) goto LAB_05dc5470;
  uVar12 = FUN_05cb1464(*(undefined8 *)(in_stack_00000100 + 0x38),0);
  *(undefined8 *)(unaff_x19 + 0x2f0) = uVar12;
  puVar6 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<FullScreenPassRendererFeature_FullScreenRenderPass_CopyPassData>__
  ;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar13 = FUN_033dc90c(&stack0x000000f8,*(undefined8 *)puVar6);
  if ((uVar13 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    if (in_stack_000000f8 == 0) goto LAB_05dc5470;
    uVar12 = *(undefined8 *)(in_stack_000000f8 + 0x18);
    uVar17 = *(undefined8 *)(in_stack_000000f8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar17 = FUN_05cb1464(uVar17,0);
    *(undefined8 *)(unaff_x19 + 0x2f8) = uVar17;
    if (in_stack_000000f8 == 0) goto LAB_05dc5470;
    uVar17 = FUN_05cb1464(*(undefined8 *)(in_stack_000000f8 + 0x30),0);
    *(undefined8 *)(unaff_x19 + 0x300) = uVar17;
    if (in_stack_000000f8 == 0) goto LAB_05dc5470;
    uVar17 = FUN_05cb1464(*(undefined8 *)(in_stack_000000f8 + 0x20),0);
    *(undefined8 *)(unaff_x19 + 0x308) = uVar17;
    if (in_stack_000000f8 == 0) goto LAB_05dc5470;
    uVar18 = *(undefined8 *)(in_stack_000000f8 + 0x38);
    uVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRenderPass<ProbeReferenceVolume_RenderFragmentationOverlayPassData>__
                               );
    FUN_05d9f0c4(uVar17,uVar18,0);
    *(undefined8 *)(unaff_x19 + 0x220) = uVar17;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_05dc5470;
  lVar16 = unaff_x20[0xd];
  pauVar1 = (undefined1 (*) [12])(unaff_x19 + 0x2bd);
  auVar21 = FUN_06127100(0);
  *pauVar1 = auVar21;
  puVar6 = Method_System_MemoryExtensions_SequenceEqual<byte>__;
  if (lVar16 == 0) goto LAB_05dc5470;
  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty__SetValue
            (pauVar1,*(undefined1 *)(lVar16 + 0x10),0);
  FUN_0612b7f4(pauVar1,*(undefined4 *)(lVar16 + 0x18),0);
  FUN_0612b810(pauVar1,*(undefined4 *)(lVar16 + 0x1c),0);
  FUN_0612b82c(pauVar1,*(undefined4 *)(lVar16 + 0x20),0);
  FUN_0612b848(pauVar1,*(undefined4 *)(lVar16 + 0x24),0);
  lVar14 = *unaff_x25;
  *(undefined4 *)(unaff_x19 + 0x2d8) = *(undefined4 *)((long)unaff_x20 + 0x8c);
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar13 = FUN_033dc90c(&stack0x000000f0,*(undefined8 *)puVar6);
  if ((uVar13 & 1) == 0) {
LAB_05dc4870:
    uVar11 = (undefined4)unaff_x20[0xc];
    *(undefined4 *)(unaff_x19 + 0x350) = uVar11;
  }
  else {
    if (in_stack_000000f0 == 0) goto LAB_05dc5470;
    uVar13 = FUN_05db0474(in_stack_000000f0,0);
    if ((uVar13 & 1) != 0) goto LAB_05dc4870;
    *(undefined4 *)(unaff_x19 + 0x350) = *(undefined4 *)((long)unaff_x20 + 0x5c);
    uVar11 = (undefined4)unaff_x20[0xc];
  }
  *(undefined4 *)(unaff_x19 + 0x354) = uVar11;
  puVar6 = PTR_DAT_067cb280;
  *(undefined4 *)(unaff_x19 + 0x358) = *(undefined4 *)((long)unaff_x20 + 100);
  lVar14 = *(long *)puVar6;
  *(char *)(unaff_x19 + 0x35c) = (char)unaff_x20[0xe];
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar5 = PTR_DAT_067c8f20;
  lVar14 = FUN_05dd59d4(0);
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0xf7) != '\0')) {
    FUN_05d72d34(&stack0x00000050,0);
    in_stack_000000d0 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
    in_stack_000000d8 = in_stack_00000058;
    in_stack_000000e0 = in_stack_00000060;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar14 = FUN_05dd59d4(0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar5);
    }
    uVar13 = FUN_060f60a4(lVar14,0);
    if ((uVar13 & 1) != 0) {
      if (lVar14 == 0) goto LAB_05dc5470;
      uVar11 = FUN_05d368fc(lVar14,0);
      in_stack_000000d8 = CONCAT44(in_stack_000000d8._4_4_,uVar11);
      in_stack_000000d0 = FUN_05d36b24(lVar14,0);
    }
    uVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<XRAnchor>>>__
                               );
    FUN_05d702b8(uVar17,&stack0x000000d0,0);
    *(undefined8 *)(unaff_x19 + 0x2d0) = uVar17;
  }
  bVar10 = (**(code **)(*unaff_x20 + 0x178))();
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x26);
  }
  *(byte *)(unaff_x19 + 0x141) = bVar10 & 1;
  bVar10 = (**(code **)(*unaff_x20 + 0x198))();
  lVar14 = *unaff_x24;
  *(byte *)(unaff_x19 + 0x142) = bVar10 & 1;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bc3979 == '\0') {
    FUN_02f08768(Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__);
    DAT_06bc3979 = '\x01';
  }
  puVar9 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_DoFBokehPassData>__
  ;
  puVar8 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<Vrs_VisualizationPassData>__
  ;
  puVar5 = Method_Unity_Properties_PropertyBag_Register<Rotate>__;
  puVar6 = Method_Unity_Properties_PropertyBag_Register<ResolvedStyleAccess>__;
  lVar14 = *unaff_x24;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar14 = *unaff_x24;
  }
  *(byte *)(unaff_x19 + 0x142) = *(byte *)(*(long *)(lVar14 + 0xb8) + 8) ^ 1;
  puVar7 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_BeginXRPassData>__
  ;
  uVar15 = *(uint *)((long)unaff_x20 + 0x74);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x2d0);
  uVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
  FUN_05defbc8(uVar17,uVar18,(uVar15 & 0xfffffffe) == 2,0);
  *(undefined8 *)(unaff_x19 + 0x298) = uVar17;
  *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)((long)unaff_x20 + 0x74);
  *(undefined4 *)(unaff_x19 + 0x2b0) = *(undefined4 *)((long)unaff_x20 + 0x7c);
  uVar11 = FUN_05d6aee8();
  *(undefined4 *)(unaff_x19 + 0x2b4) = uVar11;
  uVar11 = FUN_05d6b040();
  uVar17 = *(undefined8 *)puVar6;
  *(undefined4 *)(unaff_x19 + 0x2b8) = uVar11;
  lVar14 = unaff_x20[8];
  *(undefined1 *)(unaff_x19 + 700) = 0;
  *(char *)(unaff_x19 + 0x134) = (char)lVar14;
  uVar17 = thunk_FUN_02f45270(uVar17);
  FUN_05e02c7c(uVar17,0x32,0);
  uVar18 = *(undefined8 *)puVar5;
  *(undefined8 *)(unaff_x19 + 0x168) = uVar17;
  uVar17 = thunk_FUN_02f45270(uVar18);
  FUN_05dea998(uVar17,0x32,0);
  uVar18 = *(undefined8 *)puVar9;
  *(undefined8 *)(unaff_x19 + 0x170) = uVar17;
  uVar17 = thunk_FUN_02f45270(uVar18);
  FUN_05da1414(uVar17,0xfa,0);
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
  ;
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar17;
  uVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
  FUN_05df710c(uVar17,0x3ea,uVar12,0,0,0,0,0);
  puVar6 = PTR_DAT_067cbf08;
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar17;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar17 = FUN_06126ea0(0);
  uVar11 = *(undefined4 *)(unaff_x19 + 0x350);
  uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
  FUN_05dfaccc(uVar18,0x96,uVar17,uVar11,0);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar18;
  uVar17 = FUN_06126ea0(0);
  uVar11 = *(undefined4 *)(unaff_x19 + 0x350);
  uVar18 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
                             );
  FUN_05df93dc(uVar18,0x96,uVar17,uVar11,0);
  uVar15 = *(uint *)(unaff_x19 + 0x2a8);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar18;
  if ((uVar15 | 2) == 2) {
    uVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
    FUN_05df710c(uVar17,200,uVar12,1,1,0,0,0);
    uVar15 = *(uint *)(unaff_x19 + 0x2a8);
    *(undefined8 *)(unaff_x19 + 0x158) = uVar17;
  }
  if ((uVar15 | 2) == 3) {
    uVar19 = *(undefined8 *)(unaff_x19 + 0x300);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x2f8);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x2d0);
    uVar4 = *(undefined1 *)(unaff_x19 + 0x134);
    lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                               );
    uStack00000000000000b9 = 0;
    uStack00000000000000bd = 0;
    in_stack_000000a0 = uVar18;
    in_stack_000000a8 = uVar19;
    in_stack_000000b0 = uVar17;
    uStack00000000000000b8 = uVar15 == 3;
    FUN_05de3ab4(lVar14,&stack0x000000a0,uVar4,0);
    *(long *)(unaff_x19 + 0x2a0) = lVar14;
    puVar6 = PTR_DAT_067cbf08;
    if (lVar14 != 0) {
      *(char *)(lVar14 + 0x19) = (char)unaff_x20[0x11];
      puVar5 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XROcclusionMeshPass_PassData>__
      ;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar17 = FUN_06126ea0(0);
      lVar14 = unaff_x20[0xc];
      uVar19 = *(undefined8 *)*pauVar1;
      uVar11 = *(undefined4 *)(unaff_x19 + 0x2c5);
      uVar2 = *(undefined4 *)(lVar16 + 0x14);
      uVar20 = *(undefined8 *)(unaff_x19 + 0x2a0);
      uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
      FUN_05e01004(uVar18,0xd2,uVar17,(int)lVar14,uVar19,uVar11,uVar2,uVar20);
      puVar6 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
      ;
      *(undefined8 *)(unaff_x19 + 0x178) = uVar18;
      uVar17 = *(undefined8 *)*pauVar1;
      uVar11 = *(undefined4 *)(unaff_x19 + 0x2c5);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05de5e0c(uVar17,uVar11,0x60,0);
      lVar16 = FUN_02f0880c(*(undefined8 *)Method_Unity_AppUI_UI_RectField_OnHFieldChanged__,3);
      uStack0000000000000050 = 0;
      FUN_0612aaa4(&stack0x00000050,*(undefined8 *)Method_System_Diagnostics_Process_Start__,0);
      puVar6 = Method_System_Diagnostics_Process_OpenProcessHandle__;
      if (lVar16 != 0) {
        if (*(int *)(lVar16 + 0x18) != 0) {
          *(undefined4 *)(lVar16 + 0x20) = uStack0000000000000050;
          uStack000000000000009c = 0;
          FUN_0612aaa4((long)&stack0x00000098 + 4,*(undefined8 *)puVar6,0);
          puVar6 = 
          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_UpdateCameraResolutionPassData>__
          ;
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
            *(undefined4 *)(lVar16 + 0x24) = uStack000000000000009c;
            uStack0000000000000098 = 0;
            FUN_0612aaa4(&stack0x00000098,*(undefined8 *)puVar6,0);
            puVar5 = 
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<RenderGraphUtils_BlitMaterialPassData>__
            ;
            puVar6 = 
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderGraphUtils_PassData>__
            ;
            if (2 < *(uint *)(lVar16 + 0x18)) {
              *(undefined4 *)(lVar16 + 0x28) = uStack0000000000000098;
              uVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                                         );
              FUN_05df710c(uVar17,0xd3,uVar12,1,0,0,*(undefined8 *)puVar5,0);
              uVar18 = *(undefined8 *)puVar6;
              uVar19 = *(undefined8 *)(unaff_x19 + 0x2a0);
              *(undefined8 *)(unaff_x19 + 0x180) = uVar17;
              uVar17 = thunk_FUN_02f45270(uVar18);
              FUN_05df8910(uVar17,0xe6,uVar19,0);
              *(undefined8 *)(unaff_x19 + 0x188) = uVar17;
              uVar17 = FUN_06126ea0(0);
              lVar14 = unaff_x20[0xc];
              uVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                                         );
              FUN_05dfbdcc(uVar18,*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DeferredLights_SetupLightPassData>__
                           ,lVar16,1,0xfa,uVar17,(int)lVar14);
              *(undefined8 *)(unaff_x19 + 400) = uVar18;
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
  puVar6 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_PassData>__
  ;
  if (*(int *)(*(long *)PTR_DAT_067cbf08 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar17 = FUN_06126ea0(0);
  lVar16 = unaff_x20[0xc];
  uVar19 = *(undefined8 *)*pauVar1;
  uVar11 = *(undefined4 *)(unaff_x19 + 0x2c5);
  uVar18 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                             );
  FUN_05dfc26c(uVar18,10,1,0xfa,uVar17,(int)lVar16,uVar19,uVar11);
  *(undefined8 *)(unaff_x19 + 0x198) = uVar18;
  uVar17 = FUN_06126ea0(0);
  lVar16 = unaff_x20[0xc];
  uVar19 = *(undefined8 *)*pauVar1;
  uVar11 = *(undefined4 *)(unaff_x19 + 0x2c5);
  uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
  FUN_05dfdc8c(uVar18,10,1,0xfa,uVar17,(int)lVar16,uVar19,uVar11);
  puVar6 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  iVar3 = *(int *)(unaff_x19 + 0x2b0);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar18;
  uVar11 = 500;
  if (iVar3 != 1) {
    uVar11 = 400;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  bVar10 = FUN_05dadd80(0);
  uVar17 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                             );
  FUN_05df710c(uVar17,uVar11,uVar12,1,0,iVar3 == 1 & bVar10,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar17;
  FUN_063fb9e4(&Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__);
  return;
}


