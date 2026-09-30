/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$PermissionGrantedCallback
ENTRY_POINT: 06a482c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 110
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_permission_setup;functionality_foveated_rendering
*/


uint Unity_XR_Oculus_Utils__PermissionGrantedCallback(void)

{
  uint uVar1;
  long *unaff_x21;
  
  thunk_FUN_032a57f4();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar1 = Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled();
  return uVar1 & 1;
}


