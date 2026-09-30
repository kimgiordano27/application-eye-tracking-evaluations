/*
FUNCTION_NAME: FUN_05f8df74
ENTRY_POINT: 05f8df74
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


undefined4 FUN_05f8df74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000006e9488a & 1) == 0) {
    FUN_02e3ca1c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlaySetupPassData,_ComputeGraphContext>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData,_ComputeGraphContext>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_BloomPassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFBokehPassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFGaussianPassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlarePassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlareScreenSpacePassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_MotionBlurPassData,_RasterGraphContext>_TypeInfo
                );
    bRam0000000006e9488a = 1;
  }
  uVar2 = FUN_05f8e964(param_2);
  if (uVar2 < 0xa39e1840) {
    if (0x828c1e65 < uVar2) {
      puVar5 = (undefined8 *)
               UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFGaussianPassData,_UnsafeGraphContext>_TypeInfo
      ;
      if (uVar2 != 0x9c180b95) {
        if (uVar2 != 0xa39e183f) {
          return 0;
        }
        uVar3 = thunk_FUN_0548b788(param_2,*(undefined8 *)
                                            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_BloomPassData,_UnsafeGraphContext>_TypeInfo
                                   ,0);
        puVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo
        ;
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar4 = *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo
        ;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar4 = *(long *)puVar1;
        }
        return *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x10);
      }
LAB_05f8e1dc:
      uVar3 = thunk_FUN_0548b788(param_2,*puVar5,0);
      puVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo;
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      lVar4 = *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar4 = *(long *)puVar1;
      }
      return *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x28);
    }
    if (uVar2 == 0x828c1e65) {
      uVar3 = thunk_FUN_0548b788(param_2,*(undefined8 *)
                                          UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlarePassData,_UnsafeGraphContext>_TypeInfo
                                 ,0);
      puVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo;
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      lVar4 = *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar4 = *(long *)puVar1;
      }
      return *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x20);
    }
    puVar5 = (undefined8 *)
             UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFBokehPassData,_UnsafeGraphContext>_TypeInfo
    ;
    if (uVar2 != 0x6ba22b6c) {
      return 0;
    }
  }
  else {
    if (0xb5c81501 < uVar2) {
      if (uVar2 == 0xceeed9fd) {
        uVar3 = thunk_FUN_0548b788(param_2,*(undefined8 *)
                                            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData,_ComputeGraphContext>_TypeInfo
                                   ,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        return 0x33;
      }
      puVar5 = (undefined8 *)
               UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_MotionBlurPassData,_RasterGraphContext>_TypeInfo
      ;
      if (uVar2 != 0xdee862bf) {
        return 0;
      }
      goto LAB_05f8e1dc;
    }
    if (uVar2 == 0xa3c94c5c) {
      uVar3 = thunk_FUN_0548b788(param_2,*(undefined8 *)
                                          UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlaySetupPassData,_ComputeGraphContext>_TypeInfo
                                 ,0);
      puVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo;
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      lVar4 = *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar4 = *(long *)puVar1;
      }
      return *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x14);
    }
    puVar5 = (undefined8 *)
             UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlareScreenSpacePassData,_UnsafeGraphContext>_TypeInfo
    ;
    if (uVar2 != 0xb5c81501) {
      return 0;
    }
  }
  uVar3 = thunk_FUN_0548b788(param_2,*puVar5,0);
  puVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo;
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar4 = *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CurrencyDefinition>_TypeInfo;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar4 = *(long *)puVar1;
  }
  return *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xc);
}


