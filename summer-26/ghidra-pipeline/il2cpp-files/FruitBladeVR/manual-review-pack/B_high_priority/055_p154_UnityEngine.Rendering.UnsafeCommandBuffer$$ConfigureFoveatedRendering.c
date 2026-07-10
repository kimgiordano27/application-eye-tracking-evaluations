/*
FUNCTION_NAME: UnityEngine.Rendering.UnsafeCommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 0338436c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 70
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_1;strong_foveation_hits_3;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering
               (long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering
              (*(long *)(param_1 + 0x10),param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


