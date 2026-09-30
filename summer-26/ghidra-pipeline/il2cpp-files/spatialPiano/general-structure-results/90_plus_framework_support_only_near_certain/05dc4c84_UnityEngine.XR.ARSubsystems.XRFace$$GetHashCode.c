/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$GetHashCode
ENTRY_POINT: 05dc4c84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 123
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_XR_ARSubsystems_XRFace__GetHashCode(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  long in_x9;
  long *plVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  
  plVar11 = *(long **)(in_x9 + 0xf08);
  *(undefined1 *)(unaff_x23 + 0x19) = *(undefined1 *)(unaff_x20 + 0x88);
  puVar4 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XROcclusionMeshPass_PassData>__
  ;
  if (*(int *)(*plVar11 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = FUN_06126ea0(0);
  uVar10 = *(undefined4 *)(unaff_x20 + 0x60);
  uVar12 = *unaff_x22;
  uVar1 = *(undefined4 *)(unaff_x22 + 1);
  uVar2 = *(undefined4 *)(unaff_x21 + 0x14);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x2a0);
  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_05e01004(uVar8,0xd2,uVar7,uVar10,uVar12,uVar1,uVar2,uVar13);
  puVar4 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
  ;
  *(undefined8 *)(unaff_x19 + 0x178) = uVar8;
  uVar7 = *unaff_x22;
  uVar10 = *(undefined4 *)(unaff_x22 + 1);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
                    /* try { // try from 05dc4d28 to 05ec4d3b has its CatchHandler @ 05dc4eb4 */
  FUN_05de5e0c(uVar7,uVar10,0x60,0);
  lVar9 = FUN_02f0880c(*(undefined8 *)Method_Unity_AppUI_UI_RectField_OnHFieldChanged__,3);
                    /* try { // try from 05dc4d5c to 05ec4d6b has its CatchHandler @ 05dc4ec8 */
  in_stack_00000050 = 0;
  FUN_0612aaa4(&stack0x00000050,*(undefined8 *)Method_System_Diagnostics_Process_Start__,0);
  puVar4 = Method_System_Diagnostics_Process_OpenProcessHandle__;
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
                    /* try { // try from 05dc4d7c to 05ec4d83 has its CatchHandler @ 05dc4ec4 */
      *(undefined4 *)(lVar9 + 0x20) = in_stack_00000050;
      uStack000000000000009c = 0;
      FUN_0612aaa4((long)&stack0x00000098 + 4,*(undefined8 *)puVar4,0);
      puVar4 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_UpdateCameraResolutionPassData>__
      ;
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 05dc4db4 to 05ec4db7 has its CatchHandler @ 05dc4eb0 */
        *(undefined4 *)(lVar9 + 0x24) = uStack000000000000009c;
        uStack0000000000000098 = 0;
        FUN_0612aaa4(&stack0x00000098,*(undefined8 *)puVar4,0);
        puVar5 = 
        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<RenderGraphUtils_BlitMaterialPassData>__
        ;
        puVar4 = 
        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderGraphUtils_PassData>__
        ;
        if (2 < *(uint *)(lVar9 + 0x18)) {
                    /* try { // try from 05dc4de4 to 05ec4def has its CatchHandler @ 05dc4ee4 */
          *(undefined4 *)(lVar9 + 0x28) = uStack0000000000000098;
                    /* try { // try from 05dc4e04 to 05ec4e0b has its CatchHandler @ 05dc4ee0 */
          uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                                    );
                    /* try { // try from 05dc4e20 to 05ec4e27 has its CatchHandler @ 05dc4ed0 */
          FUN_05df710c(uVar7,0xd3,in_stack_00000048,1,0,0,*(undefined8 *)puVar5,0);
          uVar8 = *(undefined8 *)puVar4;
          uVar12 = *(undefined8 *)(unaff_x19 + 0x2a0);
          *(undefined8 *)(unaff_x19 + 0x180) = uVar7;
          uVar7 = thunk_FUN_02f45270(uVar8);
          FUN_05df8910(uVar7,0xe6,uVar12,0);
                    /* try { // try from 05dc4e50 to 05ec4e57 has its CatchHandler @ 05dc4ecc */
          *(undefined8 *)(unaff_x19 + 0x188) = uVar7;
                    /* try { // try from 05dc4e58 to 05ec4e83 has its CatchHandler @ 05dc4c54 */
          uVar7 = FUN_06126ea0(0);
          uVar10 = *(undefined4 *)(unaff_x20 + 0x60);
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                                    );
          FUN_05dfbdcc(uVar8,*(undefined8 *)
                              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DeferredLights_SetupLightPassData>__
                       ,lVar9,1,0xfa,uVar7,uVar10);
          *(undefined8 *)(unaff_x19 + 400) = uVar8;
          puVar4 = 
          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_PassData>__
          ;
          if (*(int *)(*(long *)PTR_DAT_067cbf08 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar7 = FUN_06126ea0(0);
          uVar10 = *(undefined4 *)(unaff_x20 + 0x60);
          uVar12 = *unaff_x22;
          uVar1 = *(undefined4 *)(unaff_x22 + 1);
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                                    );
          FUN_05dfc26c(uVar8,10,1,0xfa,uVar7,uVar10,uVar12,uVar1);
          *(undefined8 *)(unaff_x19 + 0x198) = uVar8;
          uVar7 = FUN_06126ea0(0);
          uVar10 = *(undefined4 *)(unaff_x20 + 0x60);
          uVar12 = *unaff_x22;
          uVar1 = *(undefined4 *)(unaff_x22 + 1);
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
          FUN_05dfdc8c(uVar8,10,1,0xfa,uVar7,uVar10,uVar12,uVar1);
          puVar4 = 
          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
          ;
          iVar3 = *(int *)(unaff_x19 + 0x2b0);
          *(undefined8 *)(unaff_x19 + 0x1a0) = uVar8;
          uVar10 = 500;
          if (iVar3 != 1) {
            uVar10 = 400;
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          bVar6 = FUN_05dadd80(0);
          uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                                    );
          FUN_05df710c(uVar7,uVar10,in_stack_00000048,1,0,iVar3 == 1 & bVar6,0,0);
          *(undefined8 *)(unaff_x19 + 0x1b0) = uVar7;
          FUN_063fb9e4(&Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


