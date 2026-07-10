/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass$$Execute
ENTRY_POINT: 0352d244
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_8;telemetry_or_network_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass__Execute
               (long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if ((DAT_03ef6262 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBufferHelpers_TypeInfo_03cd29d0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalCameraData>___03cdab38
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalPostProcessingData>___03cdc3c0
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_CoreUtils_TypeInfo_03cb67e0);
    DAT_03ef6262 = 1;
  }
  puVar1 = 
  PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalPostProcessingData>___03cdc3c0;
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar3 = FUN_0348482c(lVar8,*(undefined8 *)
                                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalCameraData>___03cdab38
                        );
    uVar4 = FUN_0348482c(lVar8,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0xd0) != 0) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0xd0) + 0x10);
      *puVar7 = uVar3;
      thunk_FUN_01cc8040(puVar7,uVar3);
      if (*(long *)(param_1 + 0xd0) != 0) {
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0xd0) + 0x18);
        *puVar7 = uVar4;
        thunk_FUN_01cc8040(puVar7,uVar4);
        if (*(long *)(param_1 + 0xd0) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x20) = *(undefined8 *)(param_1 + 0xb8);
          thunk_FUN_01cc8040();
          if (*(long *)(param_1 + 0xd0) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x28) = *(undefined8 *)(param_1 + 0xc0);
            thunk_FUN_01cc8040();
            if (*(long *)(param_1 + 0xd0) != 0) {
              *(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x30) = *(undefined1 *)(param_1 + 0xe0);
              lVar8 = UnityEngine_Rendering_Universal_CameraData__get_xr(param_3 + 1,0);
              if (lVar8 != 0) {
                uVar5 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering
                                  (lVar8,0);
                if ((uVar5 & 1) != 0) {
                  plVar6 = (long *)UnityEngine_Rendering_Universal_RenderingData__get_commandBuffer
                                             (param_3,0);
                  if (*plVar6 == 0) goto LAB_0352d47c;
                  UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(*plVar6,0,0);
                }
                puVar2 = PTR_UnityEngine_Rendering_CommandBufferHelpers_TypeInfo_03cd29d0;
                puVar1 = PTR_UnityEngine_Rendering_CoreUtils_TypeInfo_03cb67e0;
                puVar7 = (undefined8 *)
                         UnityEngine_Rendering_Universal_RenderingData__get_commandBuffer(param_3,0)
                ;
                uVar4 = *(undefined8 *)(param_1 + 0xd8);
                uVar3 = *puVar7;
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                }
                UnityEngine_Rendering_CoreUtils__SetRenderTarget
                          (0,0,0,0,uVar3,uVar4,2,0,0,0,0xffffffff,0xffffffff,0);
                puVar7 = (undefined8 *)
                         UnityEngine_Rendering_Universal_RenderingData__get_commandBuffer(param_3,0)
                ;
                uVar3 = *puVar7;
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                }
                if (DAT_03ef5dac == '\0') {
                  FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBufferHelpers_TypeInfo_03cd29d0);
                  DAT_03ef5dac = '\x01';
                }
                lVar8 = *(long *)puVar2;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                  lVar8 = *(long *)puVar2;
                }
                if (**(long **)(lVar8 + 0xb8) != 0) {
                  puVar7 = (undefined8 *)(**(long **)(lVar8 + 0xb8) + 0x10);
                  *puVar7 = uVar3;
                  thunk_FUN_01cc8040(puVar7,uVar3);
                  UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass__ExecutePass
                            (**(undefined8 **)(*(long *)puVar2 + 0xb8),
                             *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0352d47c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


