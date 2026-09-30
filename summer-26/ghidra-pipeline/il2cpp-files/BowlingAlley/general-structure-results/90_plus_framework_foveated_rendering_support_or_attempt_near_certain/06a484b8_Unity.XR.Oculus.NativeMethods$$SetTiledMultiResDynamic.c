/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetTiledMultiResDynamic
ENTRY_POINT: 06a484b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 90
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


uint Unity_XR_Oculus_NativeMethods__SetTiledMultiResDynamic
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_3;
  uStack0000000000000020 = param_4;
  uStack0000000000000030 = param_1;
  uVar1 = Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled();
  return uVar1 & 1;
}


