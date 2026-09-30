/*
FUNCTION_NAME: UnityEngine.Rendering.RasterCommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 05e2e708
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_3;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_RasterCommandBuffer__ConfigureFoveatedRendering(void)

{
  long lVar1;
  int unaff_w20;
  long lVar2;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  lVar2 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  FUN_05e27864(in_stack_00000008,0);
  if (unaff_w20 == 0) {
    lVar1 = *unaff_x23;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar1 = *unaff_x23;
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
    if (lVar1 == 0) goto LAB_05e2e784;
    FUN_05de1b14(lVar1,0);
  }
  if (lVar2 != 0) {
    FUN_05dec41c(lVar2);
    return;
  }
LAB_05e2e784:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


