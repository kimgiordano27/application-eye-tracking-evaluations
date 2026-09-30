/*
FUNCTION_NAME: FUN_05208988
ENTRY_POINT: 05208988
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_13;frame_or_lifecycle_behavior
*/


long FUN_05208988(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_06a52073 & 1) == 0) {
                    /* try { // try from 052089b4 to 053089b7 has its CatchHandler @ 05208c7c */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlayPassData,_RasterGraphContext>_TypeInfo
                );
                    /* try { // try from 052089b8 to 053089bb has its CatchHandler @ 05208c74 */
                    /* try { // try from 052089bc to 053089bf has its CatchHandler @ 05208c78 */
                    /* try { // try from 052089c0 to 053089c3 has its CatchHandler @ 05208c2c */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlaySetupPassData,_ComputeGraphContext>_TypeInfo
                );
                    /* try { // try from 052089c4 to 053089c7 has its CatchHandler @ 05208c28 */
                    /* try { // try from 052089c8 to 053089cb has its CatchHandler @ 05208c1c */
                    /* try { // try from 052089cc to 053089cf has its CatchHandler @ 05208c14 */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData,_ComputeGraphContext>_TypeInfo
                );
                    /* try { // try from 052089d0 to 053089d3 has its CatchHandler @ 05208c00 */
                    /* try { // try from 052089d4 to 053089db has its CatchHandler @ 05208c6c */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_BloomPassData,_UnsafeGraphContext>_TypeInfo
                );
                    /* try { // try from 052089dc to 053089df has its CatchHandler @ 05208b44 */
                    /* try { // try from 052089e0 to 053089e3 has its CatchHandler @ 05208b40 */
                    /* try { // try from 052089e4 to 053089e7 has its CatchHandler @ 05208b38 */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFBokehPassData,_UnsafeGraphContext>_TypeInfo
                );
                    /* try { // try from 052089e8 to 053089eb has its CatchHandler @ 0520742c */
                    /* try { // try from 052089ec to 053089f7 has its CatchHandler @ 05208c6c */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFGaussianPassData,_UnsafeGraphContext>_TypeInfo
                );
                    /* try { // try from 052089f8 to 053089fb has its CatchHandler @ 05208b28 */
                    /* try { // try from 052089fc to 053089ff has its CatchHandler @ 05208b20 */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlarePassData,_UnsafeGraphContext>_TypeInfo
                );
                    /* try { // try from 05208a00 to 05308a03 has its CatchHandler @ 05208b1c */
                    /* try { // try from 05208a04 to 05308a07 has its CatchHandler @ 05208b0c */
                    /* try { // try from 05208a08 to 05308a0f has its CatchHandler @ 0520742c */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlareScreenSpacePassData,_UnsafeGraphContext>_TypeInfo
                );
                    /* try { // try from 05208a10 to 05308a13 has its CatchHandler @ 05208af8 */
                    /* try { // try from 05208a14 to 05308a17 has its CatchHandler @ 05208ae0 */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_MotionBlurPassData,_RasterGraphContext>_TypeInfo
                );
                    /* try { // try from 05208a18 to 05308a1b has its CatchHandler @ 05208ad8 */
                    /* try { // try from 05208a1c to 05308a1f has its CatchHandler @ 05208ad4 */
    DAT_06a52073 = 1;
  }
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_MotionBlurPassData,_RasterGraphContext>_TypeInfo
  ;
                    /* try { // try from 05208a20 to 05308a23 has its CatchHandler @ 05208ad0 */
  lVar9 = *(long *)(param_1 + 0x10);
                    /* try { // try from 05208a24 to 05308a2b has its CatchHandler @ 05208acc */
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
                    /* try { // try from 05208a2c to 05308a33 has its CatchHandler @ 05208ac8 */
  if (lVar9 == 0) {
    lVar4 = 0;
  }
  else {
                    /* try { // try from 05208a34 to 05308a37 has its CatchHandler @ 05208ab8 */
    plVar8 = (long *)(param_1 + 0x20);
    lVar4 = *plVar8;
                    /* try { // try from 05208a38 to 05308a3b has its CatchHandler @ 05208ab4 */
    if (lVar4 == 0) {
                    /* try { // try from 05208a3c to 05308a3f has its CatchHandler @ 05208ab0 */
                    /* try { // try from 05208a40 to 05308a43 has its CatchHandler @ 05208aa4 */
                    /* try { // try from 05208a44 to 05308a47 has its CatchHandler @ 05208aa0 */
      lVar4 = *(long *)
               UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_MotionBlurPassData,_RasterGraphContext>_TypeInfo
      ;
                    /* catch() { ... } // from try @ 052087dc with catch @ 05208a48 */
      if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 05208a50 to 05308a6b has its CatchHandler @ 05208d04 */
        thunk_FUN_02dabd98();
        lVar4 = *(long *)puVar2;
      }
      puVar7 = *(undefined8 **)(lVar4 + 0xb8);
                    /* catch() { ... } // from try @ 052087a8 with catch @ 05208a5c */
      lVar10 = puVar7[1];
      if (lVar10 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 05208a6c to 05308b63 has its CatchHandler @ 0520742c */
          thunk_FUN_02dabd98();
                    /* catch() { ... } // from try @ 052082e0 with catch @ 05208a70 */
                    /* catch() { ... } // from try @ 0520859c with catch @ 05208a74 */
          puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
                    /* catch() { ... } // from try @ 0520856c with catch @ 05208a78 */
                    /* catch() { ... } // from try @ 052082c4 with catch @ 05208a7c */
                    /* catch() { ... } // from try @ 05208290 with catch @ 05208a80 */
        uVar11 = *puVar7;
                    /* catch() { ... } // from try @ 05208550 with catch @ 05208a84 */
                    /* catch() { ... } // from try @ 05208580 with catch @ 05208a88 */
        lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                     UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlayPassData,_RasterGraphContext>_TypeInfo
                                   );
                    /* catch() { ... } // from try @ 052082fc with catch @ 05208a8c */
                    /* catch() { ... } // from try @ 05208470 with catch @ 05208a90 */
                    /* catch() { ... } // from try @ 05208274 with catch @ 05208a94 */
                    /* catch() { ... } // from try @ 052085b8 with catch @ 05208a98 */
                    /* catch() { ... } // from try @ 05208734 with catch @ 05208a9c */
                    /* catch() { ... } // from try @ 05208a44 with catch @ 05208aa0 */
                    /* catch() { ... } // from try @ 05208a40 with catch @ 05208aa4 */
        FUN_046c547c(lVar10,uVar11,
                     *(undefined8 *)
                      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlareScreenSpacePassData,_UnsafeGraphContext>_TypeInfo
                     ,0);
                    /* catch() { ... } // from try @ 0520823c with catch @ 05208aa8 */
                    /* catch() { ... } // from try @ 052082ac with catch @ 05208aac */
                    /* catch() { ... } // from try @ 05208a3c with catch @ 05208ab0 */
                    /* catch() { ... } // from try @ 05208a38 with catch @ 05208ab4 */
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar5 = lVar10;
                    /* catch() { ... } // from try @ 05208a34 with catch @ 05208ab8 */
        thunk_FUN_02dc1ef0(plVar5,lVar10);
      }
                    /* catch() { ... } // from try @ 0520824c with catch @ 05208abc */
                    /* catch() { ... } // from try @ 05208510 with catch @ 05208ac0 */
                    /* catch() { ... } // from try @ 05208204 with catch @ 05208ac4 */
                    /* catch() { ... } // from try @ 05208a2c with catch @ 05208ac8 */
                    /* catch() { ... } // from try @ 05208a24 with catch @ 05208acc */
                    /* catch() { ... } // from try @ 05208a20 with catch @ 05208ad0 */
      FUN_036a7788(lVar9,lVar10,
                   *(undefined8 *)
                    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFGaussianPassData,_UnsafeGraphContext>_TypeInfo
                  );
      puVar2 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlarePassData,_UnsafeGraphContext>_TypeInfo
      ;
                    /* catch() { ... } // from try @ 05208a1c with catch @ 05208ad4 */
                    /* catch() { ... } // from try @ 05208a18 with catch @ 05208ad8 */
                    /* catch() { ... } // from try @ 05208110 with catch @ 05208adc
                       catch() { ... } // from try @ 0520815c with catch @ 05208adc */
                    /* catch() { ... } // from try @ 05208a14 with catch @ 05208ae0 */
                    /* catch() { ... } // from try @ 052080a4 with catch @ 05208ae4
                       catch() { ... } // from try @ 05208130 with catch @ 05208ae4 */
                    /* catch() { ... } // from try @ 0520804c with catch @ 05208ae8 */
                    /* catch() { ... } // from try @ 05207ecc with catch @ 05208aec */
                    /* catch() { ... } // from try @ 05207d28 with catch @ 05208af0 */
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar9 = FUN_036a5b38(*(long *)(param_1 + 0x10),0,
                               *(undefined8 *)
                                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlarePassData,_UnsafeGraphContext>_TypeInfo
                              ), lVar9 != 0)) {
                    /* catch() { ... } // from try @ 05207df8 with catch @ 05208af4 */
                    /* catch() { ... } // from try @ 05208a10 with catch @ 05208af8 */
                    /* catch() { ... } // from try @ 052088a8 with catch @ 05208afc */
                    /* catch() { ... } // from try @ 05207dd4 with catch @ 05208b00 */
                    /* catch() { ... } // from try @ 05207d8c with catch @ 05208b04 */
                    /* catch() { ... } // from try @ 05207f14 with catch @ 05208b08 */
        fVar12 = *(float *)(param_1 + 0x4c) * (float)*(int *)(lVar9 + 0x28);
                    /* catch() { ... } // from try @ 05208a04 with catch @ 05208b0c */
                    /* catch() { ... } // from try @ 05207e04 with catch @ 05208b10 */
                    /* catch() { ... } // from try @ 05207dc8 with catch @ 05208b14 */
                    /* catch() { ... } // from try @ 05207d44 with catch @ 05208b18 */
        iVar1 = -0x80000000;
                    /* catch() { ... } // from try @ 05208a00 with catch @ 05208b1c */
        if (fVar12 != INFINITY) {
          iVar1 = (int)fVar12;
        }
                    /* catch() { ... } // from try @ 052089fc with catch @ 05208b20 */
        if (*(long *)(param_1 + 0x10) != 0) {
                    /* catch() { ... } // from try @ 05207b1c with catch @ 05208b24 */
                    /* catch() { ... } // from try @ 052089f8 with catch @ 05208b28 */
                    /* catch() { ... } // from try @ 05208950 with catch @ 05208b2c */
          lVar9 = FUN_036a5b38(*(long *)(param_1 + 0x10),0,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 05208930 with catch @ 05208b30 */
                    /* catch() { ... } // from try @ 05207ee8 with catch @ 05208b34 */
          if (*(long *)(param_1 + 0x10) != 0) {
                    /* catch() { ... } // from try @ 052089e4 with catch @ 05208b38 */
                    /* catch() { ... } // from try @ 05207f38 with catch @ 05208b3c */
                    /* catch() { ... } // from try @ 052089e0 with catch @ 05208b40 */
                    /* catch() { ... } // from try @ 052089dc with catch @ 05208b44 */
                    /* catch() { ... } // from try @ 05208904 with catch @ 05208b48 */
            FUN_036a68ac(&local_58,*(long *)(param_1 + 0x10),
                         *(undefined8 *)
                          UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFBokehPassData,_UnsafeGraphContext>_TypeInfo
                        );
            puVar2 = 
            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData,_ComputeGraphContext>_TypeInfo
            ;
            while( true ) {
              do {
                lVar10 = lVar9;
                    /* try { // try from 05208b64 to 05308b67 has its CatchHandler @ 05208b94 */
                    /* try { // try from 05208b68 to 05308b97 has its CatchHandler @ 0520742c */
                uVar6 = FUN_049c6928(&local_58,*(undefined8 *)puVar2);
                lVar4 = local_48;
                if ((uVar6 & 1) == 0) {
                    /* try { // try from 05208bc0 to 05308bc3 has its CatchHandler @ 05208bec */
                    /* try { // try from 05208bc4 to 05308bef has its CatchHandler @ 0520742c */
                  FUN_049c6924(&local_58,
                               *(undefined8 *)
                                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlaySetupPassData,_ComputeGraphContext>_TypeInfo
                              );
                  *plVar8 = lVar10;
                  thunk_FUN_02dc1ef0(plVar8,lVar10);
                  return *plVar8;
                }
                if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                lVar9 = lVar10;
              } while (iVar1 < *(int *)(local_48 + 0x28));
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 052089d0 with catch @ 05208c00 */
                FUN_02d4dee8();
              }
              if (*(long *)(local_48 + 0x10) == 0) break;
                    /* catch() { ... } // from try @ 05208b64 with catch @ 05208b94 */
                    /* try { // try from 05208b98 to 05308b9f has its CatchHandler @ 05208d04 */
              iVar3 = FUN_04e7e21c(*(long *)(local_48 + 0x10),*(undefined8 *)(lVar10 + 0x10),0);
                    /* try { // try from 05208ba0 to 05308bbf has its CatchHandler @ 0520742c */
              lVar9 = lVar4;
                    /* catch() { ... } // from try @ 0520885c with catch @ 05208ba4 */
              if (-1 < iVar3) {
                lVar9 = lVar10;
              }
            }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05207e24 with catch @ 05208bfc */
            FUN_02d4dee8();
          }
        }
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05208bf8 to 05308c4f has its CatchHandler @ 0520742c */
      FUN_02d4dee8();
    }
  }
                    /* catch() { ... } // from try @ 05208bc0 with catch @ 05208bec */
                    /* try { // try from 05208bf0 to 05308bf7 has its CatchHandler @ 05208d04 */
  return lVar4;
}


