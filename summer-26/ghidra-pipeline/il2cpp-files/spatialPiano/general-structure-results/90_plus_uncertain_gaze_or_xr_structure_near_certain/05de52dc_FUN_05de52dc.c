/*
FUNCTION_NAME: FUN_05de52dc
ENTRY_POINT: 05de52dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_05de52dc(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_06bc3d41 & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc3d41 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar6 == 0) {
    return;
  }
  if (*(uint *)(lVar6 + 0x18) <= param_3) goto LAB_05de549c;
  lVar9 = (long)(int)param_3;
  lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
  if (lVar6 != 0) {
    iVar2 = FUN_05c9ce5c(lVar6,0);
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= param_3) goto LAB_05de549c;
      lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
      if (lVar6 != 0) {
        iVar3 = FUN_05c9ce5c(lVar6,0);
        if (iVar2 != iVar3) {
          return;
        }
        *(undefined8 *)(param_2 + 0x18) = 0;
        uVar4 = FUN_05de37f8(param_1,param_3);
        FUN_060d69f4(param_2,uVar4,0);
        puVar1 = 
        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
        ;
        lVar6 = *(long *)(param_1 + 0x38);
        if (lVar6 != 0) {
          lVar5 = *(long *)
                   Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
          ;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar5 = *(long *)puVar1;
          }
          lVar5 = **(long **)(lVar5 + 0xb8);
          if (lVar5 != 0) {
            if (param_3 < *(uint *)(lVar5 + 0x18)) {
              uVar8 = *(undefined8 *)(lVar5 + lVar9 * 8 + 0x20);
              if (*(int *)(*(long *)
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                          + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              if (param_3 < *(uint *)(lVar6 + 0x18)) {
                FUN_05daf224(0,lVar6 + lVar9 * 8 + 0x20,param_2,0,1,1,uVar8,0);
                lVar6 = *(long *)(param_1 + 0x38);
                if (lVar6 == 0) goto LAB_05de5498;
                if (param_3 < *(uint *)(lVar6 + 0x18)) {
                  plVar7 = *(long **)(param_1 + 0x30);
                  if (plVar7 == (long *)0x0) goto LAB_05de5498;
                  lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
                  if ((lVar6 != 0) &&
                     (lVar5 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)
                     ) {
                    uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                    FUN_02f0888c(uVar8,0);
                  }
                  if (param_3 < *(uint *)(plVar7 + 3)) {
                    plVar7[lVar9 + 4] = lVar6;
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
  }
LAB_05de5498:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


