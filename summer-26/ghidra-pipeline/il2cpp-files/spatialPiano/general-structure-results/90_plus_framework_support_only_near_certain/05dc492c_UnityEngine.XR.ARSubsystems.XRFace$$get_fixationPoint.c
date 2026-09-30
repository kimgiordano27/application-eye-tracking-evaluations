/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$get_fixationPoint
ENTRY_POINT: 05dc492c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 131
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_9;functionality_possible_biometrics_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRFace__get_fixationPoint(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar15;
  long *unaff_x24;
  undefined8 uVar16;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 uVar17;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 uStack00000000000000b8;
  undefined4 uStack00000000000000b9;
  undefined3 uStack00000000000000bd;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  
  if (unaff_x23 != 0) {
    in_stack_000000d8 = FUN_05d368fc();
    in_stack_000000d0 = FUN_05d36b24();
    uVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<XRAnchor>>>__
                               );
    FUN_05d702b8(uVar12,&stack0x000000d0,0);
    *(undefined8 *)(unaff_x19 + 0x2d0) = uVar12;
    bVar10 = (**(code **)(*unaff_x20 + 0x178))();
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x26);
    }
    *(byte *)(unaff_x19 + 0x141) = bVar10 & 1;
    bVar10 = (**(code **)(*unaff_x20 + 0x198))();
    lVar13 = *unaff_x24;
    *(byte *)(unaff_x19 + 0x142) = bVar10 & 1;
    if (*(int *)(lVar13 + 0xe4) == 0) {
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
    puVar6 = Method_Unity_Properties_PropertyBag_Register<Rotate>__;
    puVar5 = Method_Unity_Properties_PropertyBag_Register<ResolvedStyleAccess>__;
    lVar13 = *unaff_x24;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar13 = *unaff_x24;
    }
    *(byte *)(unaff_x19 + 0x142) = *(byte *)(*(long *)(lVar13 + 0xb8) + 8) ^ 1;
    puVar7 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_BeginXRPassData>__
    ;
    uVar14 = *(uint *)((long)unaff_x20 + 0x74);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x2d0);
    uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
    FUN_05defbc8(uVar12,uVar15,(uVar14 & 0xfffffffe) == 2,0);
    *(undefined8 *)(unaff_x19 + 0x298) = uVar12;
    *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)((long)unaff_x20 + 0x74);
    *(undefined4 *)(unaff_x19 + 0x2b0) = *(undefined4 *)((long)unaff_x20 + 0x7c);
    uVar11 = FUN_05d6aee8();
    *(undefined4 *)(unaff_x19 + 0x2b4) = uVar11;
    uVar11 = FUN_05d6b040();
    uVar12 = *(undefined8 *)puVar5;
    *(undefined4 *)(unaff_x19 + 0x2b8) = uVar11;
    lVar13 = unaff_x20[8];
    *(undefined1 *)(unaff_x19 + 700) = 0;
    *(char *)(unaff_x19 + 0x134) = (char)lVar13;
    uVar12 = thunk_FUN_02f45270(uVar12);
    FUN_05e02c7c(uVar12,0x32,0);
    uVar15 = *(undefined8 *)puVar6;
    *(undefined8 *)(unaff_x19 + 0x168) = uVar12;
    uVar12 = thunk_FUN_02f45270(uVar15);
    FUN_05dea998(uVar12,0x32,0);
    uVar15 = *(undefined8 *)puVar9;
    *(undefined8 *)(unaff_x19 + 0x170) = uVar12;
    uVar12 = thunk_FUN_02f45270(uVar15);
    FUN_05da1414(uVar12,0xfa,0);
    puVar6 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
    ;
    *(undefined8 *)(unaff_x19 + 0x1e8) = uVar12;
    uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
    FUN_05df710c(uVar12,0x3ea,unaff_x27,0,0,0,0,0);
    puVar5 = PTR_DAT_067cbf08;
    *(undefined8 *)(unaff_x19 + 0x1f0) = uVar12;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = FUN_06126ea0(0);
    uVar11 = *(undefined4 *)(unaff_x19 + 0x350);
    uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
    FUN_05dfaccc(uVar15,0x96,uVar12,uVar11,0);
    *(undefined8 *)(unaff_x19 + 0x148) = uVar15;
    uVar12 = FUN_06126ea0(0);
    uVar11 = *(undefined4 *)(unaff_x19 + 0x350);
    uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
                               );
    FUN_05df93dc(uVar15,0x96,uVar12,uVar11,0);
    uVar14 = *(uint *)(unaff_x19 + 0x2a8);
    *(undefined8 *)(unaff_x19 + 0x150) = uVar15;
    if ((uVar14 | 2) == 2) {
      uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
      FUN_05df710c(uVar12,200,unaff_x27,1,1,0,0,0);
      uVar14 = *(uint *)(unaff_x19 + 0x2a8);
      *(undefined8 *)(unaff_x19 + 0x158) = uVar12;
    }
    if ((uVar14 | 2) != 3) {
LAB_05dc4eb4:
      puVar5 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_PassData>__
      ;
      if (*(int *)(*(long *)PTR_DAT_067cbf08 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar12 = FUN_06126ea0(0);
      lVar13 = unaff_x20[0xc];
      uVar16 = *unaff_x22;
      uVar11 = *(undefined4 *)(unaff_x22 + 1);
      uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                                 );
      FUN_05dfc26c(uVar15,10,1,0xfa,uVar12,(int)lVar13,uVar16,uVar11);
      *(undefined8 *)(unaff_x19 + 0x198) = uVar15;
      uVar12 = FUN_06126ea0(0);
      lVar13 = unaff_x20[0xc];
      uVar16 = *unaff_x22;
      uVar11 = *(undefined4 *)(unaff_x22 + 1);
      uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
      FUN_05dfdc8c(uVar15,10,1,0xfa,uVar12,(int)lVar13,uVar16,uVar11);
      puVar5 = 
      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
      ;
      iVar2 = *(int *)(unaff_x19 + 0x2b0);
      *(undefined8 *)(unaff_x19 + 0x1a0) = uVar15;
      uVar11 = 500;
      if (iVar2 != 1) {
        uVar11 = 400;
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      bVar10 = FUN_05dadd80(0);
      uVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                                 );
      FUN_05df710c(uVar12,uVar11,unaff_x27,1,0,iVar2 == 1 & bVar10,0,0);
      *(undefined8 *)(unaff_x19 + 0x1b0) = uVar12;
      FUN_063fb9e4(&Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__);
      return;
    }
    uVar16 = *(undefined8 *)((long)unaff_x22 + 0x43);
    uVar15 = *(undefined8 *)((long)unaff_x22 + 0x3b);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x2d0);
    uVar3 = *(undefined1 *)(unaff_x19 + 0x134);
    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                               );
    uStack00000000000000b9 = 0;
    uStack00000000000000bd = 0;
    in_stack_000000a0 = uVar15;
    in_stack_000000a8 = uVar16;
    in_stack_000000b0 = uVar12;
    uStack00000000000000b8 = uVar14 == 3;
    FUN_05de3ab4(lVar13,&stack0x000000a0,uVar3,0);
    *(long *)(unaff_x19 + 0x2a0) = lVar13;
    puVar5 = PTR_DAT_067cbf08;
    if (lVar13 != 0) {
      *(char *)(lVar13 + 0x19) = (char)unaff_x20[0x11];
      puVar6 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XROcclusionMeshPass_PassData>__
      ;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar12 = FUN_06126ea0(0);
      lVar13 = unaff_x20[0xc];
      uVar16 = *unaff_x22;
      uVar11 = *(undefined4 *)(unaff_x22 + 1);
      uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
      uVar17 = *(undefined8 *)(unaff_x19 + 0x2a0);
      uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
      FUN_05e01004(uVar15,0xd2,uVar12,(int)lVar13,uVar16,uVar11,uVar1,uVar17);
      puVar5 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
      ;
      *(undefined8 *)(unaff_x19 + 0x178) = uVar15;
      uVar12 = *unaff_x22;
      uVar11 = *(undefined4 *)(unaff_x22 + 1);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05de5e0c(uVar12,uVar11,0x60,0);
      lVar13 = FUN_02f0880c(*(undefined8 *)Method_Unity_AppUI_UI_RectField_OnHFieldChanged__,3);
      in_stack_00000050 = 0;
      FUN_0612aaa4(&stack0x00000050,*(undefined8 *)Method_System_Diagnostics_Process_Start__,0);
      puVar5 = Method_System_Diagnostics_Process_OpenProcessHandle__;
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) != 0) {
          *(undefined4 *)(lVar13 + 0x20) = in_stack_00000050;
          uStack000000000000009c = 0;
          FUN_0612aaa4((long)&stack0x00000098 + 4,*(undefined8 *)puVar5,0);
          puVar5 = 
          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_UpdateCameraResolutionPassData>__
          ;
          if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
            *(undefined4 *)(lVar13 + 0x24) = uStack000000000000009c;
            uStack0000000000000098 = 0;
            FUN_0612aaa4(&stack0x00000098,*(undefined8 *)puVar5,0);
            puVar6 = 
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<RenderGraphUtils_BlitMaterialPassData>__
            ;
            puVar5 = 
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderGraphUtils_PassData>__
            ;
            if (2 < *(uint *)(lVar13 + 0x18)) {
              *(undefined4 *)(lVar13 + 0x28) = uStack0000000000000098;
              uVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                                         );
              FUN_05df710c(uVar12,0xd3,unaff_x27,1,0,0,*(undefined8 *)puVar6,0);
              uVar15 = *(undefined8 *)puVar5;
              uVar16 = *(undefined8 *)(unaff_x19 + 0x2a0);
              *(undefined8 *)(unaff_x19 + 0x180) = uVar12;
              uVar12 = thunk_FUN_02f45270(uVar15);
              FUN_05df8910(uVar12,0xe6,uVar16,0);
              *(undefined8 *)(unaff_x19 + 0x188) = uVar12;
              uVar12 = FUN_06126ea0(0);
              lVar4 = unaff_x20[0xc];
              uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                                         );
              FUN_05dfbdcc(uVar15,*(undefined8 *)
                                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DeferredLights_SetupLightPassData>__
                           ,lVar13,1,0xfa,uVar12,(int)lVar4);
              *(undefined8 *)(unaff_x19 + 400) = uVar15;
              goto LAB_05dc4eb4;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


