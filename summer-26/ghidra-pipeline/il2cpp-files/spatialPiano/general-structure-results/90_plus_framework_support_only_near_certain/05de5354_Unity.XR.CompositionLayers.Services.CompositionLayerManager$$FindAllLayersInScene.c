/*
FUNCTION_NAME: Unity.XR.CompositionLayers.Services.CompositionLayerManager$$FindAllLayersInScene
ENTRY_POINT: 05de5354
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Unity_XR_CompositionLayers_Services_CompositionLayerManager__FindAllLayersInScene
               (long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  long unaff_x23;
  
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_w19) goto LAB_05de549c;
    lVar3 = *(long *)(param_1 + unaff_x23 * 8 + 0x20);
    if (lVar3 != 0) {
      iVar2 = FUN_05c9ce5c(lVar3,0);
      if (param_2 != iVar2) {
        return;
      }
      *(undefined8 *)(unaff_x21 + 0x18) = 0;
      FUN_05de37f8();
      FUN_060d69f4();
      puVar1 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
      ;
      lVar3 = *(long *)(unaff_x20 + 0x38);
      if (lVar3 != 0) {
        lVar4 = *(long *)
                 Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
        ;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar4 = *(long *)puVar1;
        }
        if (**(long **)(lVar4 + 0xb8) != 0) {
          if (unaff_w19 < *(uint *)(**(long **)(lVar4 + 0xb8) + 0x18)) {
            if (*(int *)(*(long *)
                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                        + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            if (unaff_w19 < *(uint *)(lVar3 + 0x18)) {
              FUN_05daf224(0,lVar3 + unaff_x23 * 8 + 0x20);
              lVar3 = *(long *)(unaff_x20 + 0x38);
              if (lVar3 == 0) goto LAB_05de5498;
              if (unaff_w19 < *(uint *)(lVar3 + 0x18)) {
                plVar6 = *(long **)(unaff_x20 + 0x30);
                if (plVar6 == (long *)0x0) goto LAB_05de5498;
                lVar3 = *(long *)(lVar3 + unaff_x23 * 8 + 0x20);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
                {
                  uVar5 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                  FUN_02f0888c(uVar5,0);
                }
                if (unaff_w19 < *(uint *)(plVar6 + 3)) {
                  plVar6[unaff_x23 + 4] = lVar3;
                  return;
                }
              }
            }
          }
LAB_05de549c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
      }
    }
  }
LAB_05de5498:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


