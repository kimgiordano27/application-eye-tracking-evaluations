/*
FUNCTION_NAME: Unity.VisualScripting.ArrayCloner$$.ctor
ENTRY_POINT: 07120410
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_ArrayCloner___ctor(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x19;
  undefined8 uVar16;
  undefined8 *unaff_x22;
  
  *(undefined8 *)(unaff_x19 + 0x20) = *param_1;
  thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x20));
  if (1 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x28) =
         *(undefined8 *)
          UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFGaussianPassData,_UnsafeGraphContext>_TypeInfo
    ;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x28));
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) =
           *(undefined8 *)
            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberPostPassData,_RasterGraphContext>_TypeInfo
      ;
      thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x30));
      if (3 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x38) =
             *(undefined8 *)
              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAASetupPassData,_RasterGraphContext>_TypeInfo
        ;
        thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x38));
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) =
               *(undefined8 *)
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_StopNaNsPassData,_RasterGraphContext>_TypeInfo
          ;
          thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x40));
          if (5 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x48) =
                 *(undefined8 *)
                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ProbeVolumeDebugPass_WriteApvData,_ComputeGraphContext>_TypeInfo
            ;
            thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x48));
            puVar2 = System_Action<LocomotionProvider>_TypeInfo;
            puVar1 = PTR_DAT_07d87068;
            if (6 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x50) =
                   *(undefined8 *)
                    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlarePassData,_UnsafeGraphContext>_TypeInfo
              ;
              thunk_FUN_037aeb94();
              **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
              thunk_FUN_037aeb94(*(undefined8 *)(*(long *)puVar2 + 0xb8));
              lVar11 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,7);
              lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
              if (lVar15 == 0) {
LAB_07120a00:
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              if (*(int *)(lVar15 + 0x18) != 0) {
                uVar10 = FUN_07570124(*(undefined8 *)(lVar15 + 0x20),0);
                if (lVar11 == 0) goto LAB_07120a00;
                if (*(int *)(lVar11 + 0x18) != 0) {
                  *(undefined4 *)(lVar11 + 0x20) = uVar10;
                  lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
                  if (lVar15 == 0) goto LAB_07120a00;
                  if (1 < *(uint *)(lVar15 + 0x18)) {
                    uVar10 = FUN_07570124(*(undefined8 *)(lVar15 + 0x28),0);
                    if (1 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined4 *)(lVar11 + 0x24) = uVar10;
                      lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
                      if (lVar15 == 0) goto LAB_07120a00;
                      if (2 < *(uint *)(lVar15 + 0x18)) {
                        uVar10 = FUN_07570124(*(undefined8 *)(lVar15 + 0x30),0);
                        if (2 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined4 *)(lVar11 + 0x28) = uVar10;
                          lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
                          if (lVar15 == 0) goto LAB_07120a00;
                          if (3 < *(uint *)(lVar15 + 0x18)) {
                            uVar10 = FUN_07570124(*(undefined8 *)(lVar15 + 0x38),0);
                            if (3 < *(uint *)(lVar11 + 0x18)) {
                              *(undefined4 *)(lVar11 + 0x2c) = uVar10;
                              lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
                              if (lVar15 == 0) goto LAB_07120a00;
                              if (4 < *(uint *)(lVar15 + 0x18)) {
                                uVar10 = FUN_07570124(*(undefined8 *)(lVar15 + 0x40),0);
                                if (4 < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined4 *)(lVar11 + 0x30) = uVar10;
                                  lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
                                  if (lVar15 == 0) goto LAB_07120a00;
                                  if (5 < *(uint *)(lVar15 + 0x18)) {
                                    uVar10 = FUN_07570124(*(undefined8 *)(lVar15 + 0x48),0);
                                    if (5 < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined4 *)(lVar11 + 0x34) = uVar10;
                                      lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
                                      if (lVar15 == 0) goto LAB_07120a00;
                                      if (6 < *(uint *)(lVar15 + 0x18)) {
                                        uVar10 = FUN_07570124(*(undefined8 *)(lVar15 + 0x50),0);
                                        if (6 < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined4 *)(lVar11 + 0x38) = uVar10;
                                          plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                                          *plVar12 = lVar11;
                                          thunk_FUN_037aeb94(plVar12,lVar11);
                                          lVar11 = RootMotion_FinalIK_Finger___ctor(*unaff_x22,8);
                                          if (lVar11 == 0) goto LAB_07120a00;
                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                            *(undefined8 *)(lVar11 + 0x20) =
                                                 *(undefined8 *)
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlaySetupPassData,_ComputeGraphContext>_TypeInfo
                                            ;
                                            thunk_FUN_037aeb94((undefined8 *)(lVar11 + 0x20));
                                            if (1 < *(uint *)(lVar11 + 0x18)) {
                                              *(undefined8 *)(lVar11 + 0x28) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostFXSetupPassData,_RasterGraphContext>_TypeInfo
                                              ;
                                              thunk_FUN_037aeb94((undefined8 *)(lVar11 + 0x28));
                                              if (2 < *(uint *)(lVar11 + 0x18)) {
                                                *(undefined8 *)(lVar11 + 0x30) =
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_SMAAPassData,_RasterGraphContext>_TypeInfo
                                                ;
                                                thunk_FUN_037aeb94((undefined8 *)(lVar11 + 0x30));
                                                if (3 < *(uint *)(lVar11 + 0x18)) {
                                                  *(undefined8 *)(lVar11 + 0x38) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PaniniProjectionPassData,_RasterGraphContext>_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar11 + 0x38));
                                                  if (4 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x40) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_LensFlareScreenSpacePassData,_UnsafeGraphContext>_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar11 + 0x40));
                                                  if (5 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x48) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlayPassData,_RasterGraphContext>_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar11 + 0x48));
                                                  if (6 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x50) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_BloomPassData,_UnsafeGraphContext>_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar11 + 0x50));
                                                  puVar9 = 
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UpdateCameraResolutionPassData,_UnsafeGraphContext>_TypeInfo
                                                  ;
                                                  puVar8 = 
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberSetupBloomPassData,_RasterGraphContext>_TypeInfo
                                                  ;
                                                  puVar7 = 
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalSetupPassData,_RasterGraphContext>_TypeInfo
                                                  ;
                                                  puVar6 = 
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalFSRScalePassData,_RasterGraphContext>_TypeInfo
                                                  ;
                                                  puVar5 = 
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalBlitPassData,_RasterGraphContext>_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_MotionBlurPassData,_RasterGraphContext>_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData,_ComputeGraphContext>_TypeInfo
                                                  ;
                                                  puVar1 = PTR_DAT_07df4a78;
                                                  if (7 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x58) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFBokehPassData,_UnsafeGraphContext>_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x10);
                                                  *plVar12 = lVar11;
                                                  thunk_FUN_037aeb94(plVar12,lVar11);
                                                  lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
                                                  *(undefined2 *)(lVar11 + 0x18) = 0xffff;
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x30) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x38) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x40) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x48) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_037aeb94();
                                                  lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
                                                  *(undefined4 *)(lVar11 + 0x50) = 0x3f87c409;
                                                  uVar16 = *(undefined8 *)(lVar11 + 0x20);
                                                  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar1)
                                                  ;
                                                  FUN_06f52f88(uVar13,uVar16,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x58);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_037aeb94(puVar14,uVar13);
                                                  uVar16 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x28);
                                                  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar1)
                                                  ;
                                                  FUN_06f52f88(uVar13,uVar16,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x60);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_037aeb94(puVar14,uVar13);
                                                  uVar16 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x48);
                                                  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar1)
                                                  ;
                                                  FUN_06f52f88(uVar13,uVar16,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x68);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_037aeb94(puVar14,uVar13);
                                                  uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar1)
                                                  ;
                                                  FUN_06f52f88(uVar13,*(undefined8 *)puVar5,0);
                                                  puVar14 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x70);
                                                  *puVar14 = uVar13;
                                                  thunk_FUN_037aeb94(puVar14,uVar13);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


