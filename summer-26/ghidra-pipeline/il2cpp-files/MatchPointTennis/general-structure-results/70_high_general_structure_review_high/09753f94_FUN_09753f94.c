/*
FUNCTION_NAME: FUN_09753f94
ENTRY_POINT: 09753f94
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


long FUN_09753f94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_BloomPassData,_UnsafeGraphContext>_TypeInfo
  ;
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData,_ComputeGraphContext>_TypeInfo
  ;
  if ((DAT_0a5476b6 & 1) == 0) {
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData,_ComputeGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFBokehPassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFGaussianPassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlarePassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlareScreenSpacePassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_MotionBlurPassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PaniniProjectionPassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostFXSetupPassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalBlitPassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalFSRScalePassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalSetupPassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_BloomPassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAAPassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAASetupPassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f7f9a8);
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_StopNaNsPassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f3d250);
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberPostPassData,_RasterGraphContext>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f3c0c0);
    FUN_04447ba8(PTR_DAT_09f3c0c8);
    FUN_04447ba8(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberSetupBloomPassData,_RasterGraphContext>_TypeInfo
                );
    DAT_0a5476b6 = 1;
  }
  puVar4 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberSetupBloomPassData,_RasterGraphContext>_TypeInfo
  ;
  puVar1 = PTR_DAT_09f3c0c8;
  lVar5 = FUN_04447c90(*(undefined8 *)puVar2,4);
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar7);
    lVar7 = *(long *)puVar3;
  }
  uVar8 = *(undefined8 *)puVar4;
  uVar9 = *(undefined8 *)puVar1;
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar7);
      lVar7 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0448520c(*(undefined8 *)
                                 UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFGaussianPassData,_UnsafeGraphContext>_TypeInfo
                               );
    FUN_05568c2c(lVar10,uVar11,
                 *(undefined8 *)
                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlarePassData,_UnsafeGraphContext>_TypeInfo
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar10;
    thunk_FUN_044bb4b4(plVar6,lVar10);
    lVar7 = *(long *)puVar3;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar7);
    lVar7 = *(long *)puVar3;
  }
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFBokehPassData,_UnsafeGraphContext>_TypeInfo
  ;
  lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar12 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar7);
      lVar7 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar12 = thunk_FUN_0448520c(*(undefined8 *)
                                 UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAAPassData,_RasterGraphContext>_TypeInfo
                               );
    FUN_06f7af54(lVar12,uVar11,
                 *(undefined8 *)
                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlareScreenSpacePassData,_UnsafeGraphContext>_TypeInfo
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *plVar6 = lVar12;
    thunk_FUN_044bb4b4(plVar6,lVar12);
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_054e5638(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar2);
  puVar4 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberPostPassData,_RasterGraphContext>_TypeInfo
  ;
  puVar1 = PTR_DAT_09f3c0c0;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x28) = uStack_68;
    *(undefined8 *)(lVar5 + 0x20) = local_70;
    *(undefined8 *)(lVar5 + 0x38) = uStack_58;
    *(undefined8 *)(lVar5 + 0x30) = uStack_60;
    thunk_FUN_044bb4b4(lVar5 + 0x20,0);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *(long *)puVar3;
    }
    uVar8 = *(undefined8 *)puVar4;
    uVar9 = *(undefined8 *)puVar1;
    lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar10 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar3;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      lVar10 = thunk_FUN_0448520c(*(undefined8 *)
                                   UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFGaussianPassData,_UnsafeGraphContext>_TypeInfo
                                 );
      FUN_05568c2c(lVar10,uVar11,
                   *(undefined8 *)
                    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_MotionBlurPassData,_RasterGraphContext>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      *plVar6 = lVar10;
      thunk_FUN_044bb4b4(plVar6,lVar10);
      lVar7 = *(long *)puVar3;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *(long *)puVar3;
    }
    lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    if (lVar12 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar3;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      lVar12 = thunk_FUN_0448520c(*(undefined8 *)
                                   UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAAPassData,_RasterGraphContext>_TypeInfo
                                 );
      FUN_06f7af54(lVar12,uVar11,
                   *(undefined8 *)
                    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PaniniProjectionPassData,_RasterGraphContext>_TypeInfo
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
      *plVar6 = lVar12;
      thunk_FUN_044bb4b4(plVar6,lVar12);
    }
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    FUN_054e5638(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar2);
    puVar4 = 
    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAASetupPassData,_RasterGraphContext>_TypeInfo
    ;
    puVar1 = PTR_DAT_09f7f9a8;
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x48) = uStack_68;
      *(undefined8 *)(lVar5 + 0x40) = local_70;
      *(undefined8 *)(lVar5 + 0x58) = uStack_58;
      *(undefined8 *)(lVar5 + 0x50) = uStack_60;
      thunk_FUN_044bb4b4(lVar5 + 0x40,0);
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar3;
      }
      uVar8 = *(undefined8 *)puVar4;
      uVar9 = *(undefined8 *)puVar1;
      lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
      if (lVar10 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar3;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0xb8);
        lVar10 = thunk_FUN_0448520c(*(undefined8 *)
                                     UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFGaussianPassData,_UnsafeGraphContext>_TypeInfo
                                   );
        FUN_05568c2c(lVar10,uVar11,
                     *(undefined8 *)
                      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostFXSetupPassData,_RasterGraphContext>_TypeInfo
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
        *plVar6 = lVar10;
        thunk_FUN_044bb4b4(plVar6,lVar10);
        lVar7 = *(long *)puVar3;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar3;
      }
      lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
      if (lVar12 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar3;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0xb8);
        lVar12 = thunk_FUN_0448520c(*(undefined8 *)
                                     UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAAPassData,_RasterGraphContext>_TypeInfo
                                   );
        FUN_06f7af54(lVar12,uVar11,
                     *(undefined8 *)
                      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalBlitPassData,_RasterGraphContext>_TypeInfo
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
        *plVar6 = lVar12;
        thunk_FUN_044bb4b4(plVar6,lVar12);
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      FUN_054e5638(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar2);
      puVar4 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_StopNaNsPassData,_RasterGraphContext>_TypeInfo
      ;
      puVar1 = PTR_DAT_09f3d250;
      if (2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x68) = uStack_68;
        *(undefined8 *)(lVar5 + 0x60) = local_70;
        *(undefined8 *)(lVar5 + 0x78) = uStack_58;
        *(undefined8 *)(lVar5 + 0x70) = uStack_60;
        thunk_FUN_044bb4b4(lVar5 + 0x60,0);
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar3;
        }
        uVar8 = *(undefined8 *)puVar4;
        uVar9 = *(undefined8 *)puVar1;
        lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
        if (lVar10 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar7 = *(long *)puVar3;
          }
          uVar11 = **(undefined8 **)(lVar7 + 0xb8);
          lVar10 = thunk_FUN_0448520c(*(undefined8 *)
                                       UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFGaussianPassData,_UnsafeGraphContext>_TypeInfo
                                     );
          FUN_05568c2c(lVar10,uVar11,
                       *(undefined8 *)
                        UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalFSRScalePassData,_RasterGraphContext>_TypeInfo
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
          *plVar6 = lVar10;
          thunk_FUN_044bb4b4(plVar6,lVar10);
          lVar7 = *(long *)puVar3;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar3;
        }
        lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
        if (lVar12 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar7 = *(long *)puVar3;
          }
          uVar11 = **(undefined8 **)(lVar7 + 0xb8);
          lVar12 = thunk_FUN_0448520c(*(undefined8 *)
                                       UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAAPassData,_RasterGraphContext>_TypeInfo
                                     );
          FUN_06f7af54(lVar12,uVar11,
                       *(undefined8 *)
                        UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalSetupPassData,_RasterGraphContext>_TypeInfo
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
          *plVar6 = lVar12;
          thunk_FUN_044bb4b4(plVar6,lVar12);
        }
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        FUN_054e5638(&local_70,uVar9,uVar8,lVar10,lVar12,*(undefined8 *)puVar2);
        if (3 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x88) = uStack_68;
          *(undefined8 *)(lVar5 + 0x80) = local_70;
          *(undefined8 *)(lVar5 + 0x98) = uStack_58;
          *(undefined8 *)(lVar5 + 0x90) = uStack_60;
          thunk_FUN_044bb4b4(lVar5 + 0x80,0);
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


