/*
FUNCTION_NAME: FUN_06051560
ENTRY_POINT: 06051560
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_06051560(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = 
  Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_PaniniProjectionPassData>__
  ;
  local_28 = param_1;
  uStack_24 = param_2;
  if ((DAT_06b876da & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_PaniniProjectionPassData>__
                );
    DAT_06b876da = 1;
  }
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_02d9a33c();
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
  }
  if (DAT_06b876f8 == (code *)0x0) {
    DAT_06b876f8 = (code *)FUN_02d60810(
                                       "UnityEngine.Cursor::SetCursor_Injected(System.IntPtr,UnityEngine.Vector2&,UnityEngine.CursorMode)"
                                       );
  }
  (*DAT_06b876f8)(uVar2,&local_28,param_4);
  return;
}


