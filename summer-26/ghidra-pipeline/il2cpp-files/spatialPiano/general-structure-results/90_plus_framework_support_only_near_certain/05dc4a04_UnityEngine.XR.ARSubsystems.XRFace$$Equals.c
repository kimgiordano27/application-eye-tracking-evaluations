/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$Equals
ENTRY_POINT: 05dc4a04
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 126
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_9
*/


void UnityEngine_XR_ARSubsystems_XRFace__Equals(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar13;
  long *unaff_x24;
  undefined8 uVar14;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *puVar15;
  undefined8 uVar16;
  long unaff_x29;
  undefined8 *puVar17;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 uStack00000000000000b8;
  undefined4 uStack00000000000000b9;
  undefined3 uStack00000000000000bd;
  
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_DoFBokehPassData>__
  ;
  puVar15 = *(undefined8 **)(unaff_x26 + 600);
  puVar17 = *(undefined8 **)(unaff_x29 + 0x260);
  lVar10 = *unaff_x24;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar10 = *unaff_x24;
  }
  *(byte *)(unaff_x19 + 0x142) = *(byte *)(*(long *)(lVar10 + 0xb8) + 8) ^ 1;
  puVar7 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_BeginXRPassData>__
  ;
  uVar12 = *(uint *)(unaff_x20 + 0x74);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x2d0);
  uVar11 = thunk_FUN_02f45270(*unaff_x25);
  FUN_05defbc8(uVar11,uVar13,(uVar12 & 0xfffffffe) == 2,0);
  *(undefined8 *)(unaff_x19 + 0x298) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x20 + 0x74);
  *(undefined4 *)(unaff_x19 + 0x2b0) = *(undefined4 *)(unaff_x20 + 0x7c);
  uVar9 = FUN_05d6aee8();
  *(undefined4 *)(unaff_x19 + 0x2b4) = uVar9;
  uVar9 = FUN_05d6b040();
  uVar11 = *puVar15;
  *(undefined4 *)(unaff_x19 + 0x2b8) = uVar9;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x40);
  *(undefined1 *)(unaff_x19 + 700) = 0;
  *(undefined1 *)(unaff_x19 + 0x134) = uVar4;
  uVar11 = thunk_FUN_02f45270(uVar11);
  FUN_05e02c7c(uVar11,0x32,0);
  uVar13 = *puVar17;
  *(undefined8 *)(unaff_x19 + 0x168) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar13);
  FUN_05dea998(uVar11,0x32,0);
  uVar13 = *(undefined8 *)puVar5;
  *(undefined8 *)(unaff_x19 + 0x170) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar13);
  FUN_05da1414(uVar11,0xfa,0);
  puVar6 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
  ;
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar11;
  uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
  FUN_05df710c(uVar11,0x3ea,in_stack_00000048,0,0,0,0,0);
  puVar5 = PTR_DAT_067cbf08;
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar11;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar11 = FUN_06126ea0(0);
  uVar9 = *(undefined4 *)(unaff_x19 + 0x350);
  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
  FUN_05dfaccc(uVar13,0x96,uVar11,uVar9,0);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar13;
  uVar11 = FUN_06126ea0(0);
  uVar9 = *(undefined4 *)(unaff_x19 + 0x350);
  uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>__
                             );
  FUN_05df93dc(uVar13,0x96,uVar11,uVar9,0);
  uVar12 = *(uint *)(unaff_x19 + 0x2a8);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar13;
  if ((uVar12 | 2) == 2) {
    uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
    FUN_05df710c(uVar11,200,in_stack_00000048,1,1,0,0,0);
    uVar12 = *(uint *)(unaff_x19 + 0x2a8);
    *(undefined8 *)(unaff_x19 + 0x158) = uVar11;
  }
  if ((uVar12 | 2) != 3) {
LAB_05dc4eb4:
    puVar5 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_PassData>__
    ;
    if (*(int *)(*(long *)PTR_DAT_067cbf08 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_06126ea0(0);
    uVar9 = *(undefined4 *)(unaff_x20 + 0x60);
    uVar14 = *unaff_x22;
    uVar1 = *(undefined4 *)(unaff_x22 + 1);
    uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                               );
    FUN_05dfc26c(uVar13,10,1,0xfa,uVar11,uVar9,uVar14,uVar1);
    *(undefined8 *)(unaff_x19 + 0x198) = uVar13;
    uVar11 = FUN_06126ea0(0);
    uVar9 = *(undefined4 *)(unaff_x20 + 0x60);
    uVar14 = *unaff_x22;
    uVar1 = *(undefined4 *)(unaff_x22 + 1);
    uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
    FUN_05dfdc8c(uVar13,10,1,0xfa,uVar11,uVar9,uVar14,uVar1);
    puVar5 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
    ;
    iVar3 = *(int *)(unaff_x19 + 0x2b0);
    *(undefined8 *)(unaff_x19 + 0x1a0) = uVar13;
    uVar9 = 500;
    if (iVar3 != 1) {
      uVar9 = 400;
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    bVar8 = FUN_05dadd80(0);
    uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                               );
    FUN_05df710c(uVar11,uVar9,in_stack_00000048,1,0,iVar3 == 1 & bVar8,0,0);
    *(undefined8 *)(unaff_x19 + 0x1b0) = uVar11;
    FUN_063fb9e4(&Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__);
    return;
  }
  uVar14 = *(undefined8 *)((long)unaff_x22 + 0x43);
  uVar13 = *(undefined8 *)((long)unaff_x22 + 0x3b);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x2d0);
  uVar4 = *(undefined1 *)(unaff_x19 + 0x134);
  lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                             );
  uStack00000000000000b9 = 0;
                    /* try { // try from 05dc4c54 to 05ec4d27 has its CatchHandler @ 05dc4c54
                       catch() { ... } // from try @ 05dc4c54 with catch @ 05dc4c54
                       catch() { ... } // from try @ 05dc4e58 with catch @ 05dc4c54
                       catch() { ... } // from try @ 05dc4e90 with catch @ 05dc4c54
                       catch() { ... } // from try @ 05dc4eac with catch @ 05dc4c54
                       catch() { ... } // from try @ 05dc4f04 with catch @ 05dc4c54
                       catch() { ... } // from try @ 05dc4f2c with catch @ 05dc4c54 */
  uStack00000000000000bd = 0;
  in_stack_000000a0 = uVar13;
  in_stack_000000a8 = uVar14;
  in_stack_000000b0 = uVar11;
  uStack00000000000000b8 = uVar12 == 3;
  FUN_05de3ab4(lVar10,&stack0x000000a0,uVar4,0);
  *(long *)(unaff_x19 + 0x2a0) = lVar10;
  puVar5 = PTR_DAT_067cbf08;
  if (lVar10 != 0) {
    *(undefined1 *)(lVar10 + 0x19) = *(undefined1 *)(unaff_x20 + 0x88);
    puVar6 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XROcclusionMeshPass_PassData>__
    ;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_06126ea0(0);
    uVar9 = *(undefined4 *)(unaff_x20 + 0x60);
    uVar14 = *unaff_x22;
    uVar1 = *(undefined4 *)(unaff_x22 + 1);
    uVar2 = *(undefined4 *)(unaff_x21 + 0x14);
    uVar16 = *(undefined8 *)(unaff_x19 + 0x2a0);
    uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
    FUN_05e01004(uVar13,0xd2,uVar11,uVar9,uVar14,uVar1,uVar2,uVar16);
    puVar5 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
    ;
    *(undefined8 *)(unaff_x19 + 0x178) = uVar13;
    uVar11 = *unaff_x22;
    uVar9 = *(undefined4 *)(unaff_x22 + 1);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05de5e0c(uVar11,uVar9,0x60,0);
    lVar10 = FUN_02f0880c(*(undefined8 *)Method_Unity_AppUI_UI_RectField_OnHFieldChanged__,3);
    in_stack_00000050 = 0;
    FUN_0612aaa4(&stack0x00000050,*(undefined8 *)Method_System_Diagnostics_Process_Start__,0);
    puVar5 = Method_System_Diagnostics_Process_OpenProcessHandle__;
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) != 0) {
        *(undefined4 *)(lVar10 + 0x20) = in_stack_00000050;
        uStack000000000000009c = 0;
        FUN_0612aaa4((long)&stack0x00000098 + 4,*(undefined8 *)puVar5,0);
        puVar5 = 
        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_UpdateCameraResolutionPassData>__
        ;
        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
          *(undefined4 *)(lVar10 + 0x24) = uStack000000000000009c;
          uStack0000000000000098 = 0;
          FUN_0612aaa4(&stack0x00000098,*(undefined8 *)puVar5,0);
          puVar6 = 
          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<RenderGraphUtils_BlitMaterialPassData>__
          ;
          puVar5 = 
          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderGraphUtils_PassData>__
          ;
          if (2 < *(uint *)(lVar10 + 0x18)) {
            *(undefined4 *)(lVar10 + 0x28) = uStack0000000000000098;
            uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                                       );
            FUN_05df710c(uVar11,0xd3,in_stack_00000048,1,0,0,*(undefined8 *)puVar6,0);
            uVar13 = *(undefined8 *)puVar5;
            uVar14 = *(undefined8 *)(unaff_x19 + 0x2a0);
            *(undefined8 *)(unaff_x19 + 0x180) = uVar11;
            uVar11 = thunk_FUN_02f45270(uVar13);
            FUN_05df8910(uVar11,0xe6,uVar14,0);
            *(undefined8 *)(unaff_x19 + 0x188) = uVar11;
            uVar11 = FUN_06126ea0(0);
            uVar9 = *(undefined4 *)(unaff_x20 + 0x60);
            uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                         Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                                       );
            FUN_05dfbdcc(uVar13,*(undefined8 *)
                                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DeferredLights_SetupLightPassData>__
                         ,lVar10,1,0xfa,uVar11,uVar9);
            *(undefined8 *)(unaff_x19 + 400) = uVar13;
            goto LAB_05dc4eb4;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


