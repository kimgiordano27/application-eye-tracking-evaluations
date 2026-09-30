/*
FUNCTION_NAME: Unity.VisualScripting.DictionaryCloner$$.ctor
ENTRY_POINT: 071207a4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_DictionaryCloner___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x19;
  undefined8 uVar12;
  long *unaff_x21;
  
  *(undefined8 *)(unaff_x19 + 0x40) = **(undefined8 **)(param_1 + 0x8a8);
  thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x40));
  if (5 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x48) =
         *(undefined8 *)
          UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlayPassData,_RasterGraphContext>_TypeInfo
    ;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x48));
    if (6 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x50) =
           *(undefined8 *)
            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_BloomPassData,_UnsafeGraphContext>_TypeInfo
      ;
      thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x50));
      puVar8 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UpdateCameraResolutionPassData,_UnsafeGraphContext>_TypeInfo
      ;
      puVar7 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberSetupBloomPassData,_RasterGraphContext>_TypeInfo
      ;
      puVar6 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalSetupPassData,_RasterGraphContext>_TypeInfo
      ;
      puVar5 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalFSRScalePassData,_RasterGraphContext>_TypeInfo
      ;
      puVar4 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalBlitPassData,_RasterGraphContext>_TypeInfo
      ;
      puVar3 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_MotionBlurPassData,_RasterGraphContext>_TypeInfo
      ;
      puVar2 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData,_ComputeGraphContext>_TypeInfo
      ;
      puVar1 = PTR_DAT_07df4a78;
      if (7 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x58) =
             *(undefined8 *)
              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFBokehPassData,_UnsafeGraphContext>_TypeInfo
        ;
        thunk_FUN_037aeb94();
        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10) = unaff_x19;
        thunk_FUN_037aeb94();
        lVar9 = *(long *)(*unaff_x21 + 0xb8);
        *(undefined2 *)(lVar9 + 0x18) = 0xffff;
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar5;
        thunk_FUN_037aeb94();
        *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28) = *(undefined8 *)puVar2;
        thunk_FUN_037aeb94();
        *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30) = *(undefined8 *)puVar6;
        thunk_FUN_037aeb94();
        *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38) = *(undefined8 *)puVar3;
        thunk_FUN_037aeb94();
        *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40) = *(undefined8 *)puVar7;
        thunk_FUN_037aeb94();
        *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x48) = *(undefined8 *)puVar8;
        thunk_FUN_037aeb94();
        lVar9 = *(long *)(*unaff_x21 + 0xb8);
        *(undefined4 *)(lVar9 + 0x50) = 0x3f87c409;
        uVar12 = *(undefined8 *)(lVar9 + 0x20);
        uVar10 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
        FUN_06f52f88(uVar10,uVar12,0);
        puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x58);
        *puVar11 = uVar10;
        thunk_FUN_037aeb94(puVar11,uVar10);
        uVar12 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
        uVar10 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
        FUN_06f52f88(uVar10,uVar12,0);
        puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x60);
        *puVar11 = uVar10;
        thunk_FUN_037aeb94(puVar11,uVar10);
        uVar12 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x48);
        uVar10 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
        FUN_06f52f88(uVar10,uVar12,0);
        puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x68);
        *puVar11 = uVar10;
        thunk_FUN_037aeb94(puVar11,uVar10);
        uVar10 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
        FUN_06f52f88(uVar10,*(undefined8 *)puVar4,0);
        puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x70);
        *puVar11 = uVar10;
        thunk_FUN_037aeb94(puVar11,uVar10);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


