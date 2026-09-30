/*
FUNCTION_NAME: FUN_05cc0534
ENTRY_POINT: 05cc0534
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05cc0534(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_14;
  
  if (param_2 < 9) {
    *(uint *)(param_1 + 4) = param_2;
    param_1[1] = 0xffffffffffffffff;
    *param_1 = 0xffffffffffffffff;
    param_1[3] = 0xffffffffffffffff;
    param_1[2] = 0xffffffffffffffff;
    return;
  }
  local_14 = 8;
  uVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_14);
  uVar2 = thunk_FUN_02ba3594(
                            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_DoFGaussianPassData>__
                            );
  uVar1 = FUN_04c00984(uVar2,uVar1,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
  uVar2 = thunk_FUN_02b79644();
  FUN_04cf4a4c(uVar2,uVar1,0);
  uVar1 = thunk_FUN_02ba3594(
                            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<PostProcessPass_UpdateCameraResolutionPassData>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar2,uVar1);
}


