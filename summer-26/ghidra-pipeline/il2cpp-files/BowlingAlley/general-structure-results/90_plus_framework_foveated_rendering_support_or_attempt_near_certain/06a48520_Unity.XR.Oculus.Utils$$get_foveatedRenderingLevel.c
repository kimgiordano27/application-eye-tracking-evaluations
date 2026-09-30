/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$get_foveatedRenderingLevel
ENTRY_POINT: 06a48520
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 100
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_3;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


uint Unity_XR_Oculus_Utils__get_foveatedRenderingLevel(void)

{
  uint uVar1;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  *(undefined1 *)(unaff_x22 + 0xc5a) = 1;
  uStack0000000000000058 = unaff_x20[3];
  uStack0000000000000050 = unaff_x20[2];
  uStack0000000000000068 = unaff_x20[5];
  uStack0000000000000060 = unaff_x20[4];
  uStack0000000000000070 = unaff_x20[6];
  uStack0000000000000048 = unaff_x20[1];
  uStack0000000000000040 = *unaff_x20;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar1 = Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled();
  return ~uVar1 & 1;
}


