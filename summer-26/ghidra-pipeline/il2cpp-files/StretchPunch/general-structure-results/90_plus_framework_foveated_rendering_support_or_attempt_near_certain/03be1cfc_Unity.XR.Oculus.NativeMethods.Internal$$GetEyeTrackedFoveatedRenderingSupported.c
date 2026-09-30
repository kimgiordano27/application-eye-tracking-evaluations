/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 03be1cfc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported
               (long param_1,undefined8 *param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
                    /* try { // try from 03be1cfc to 03ce1cff has its CatchHandler @ 03be1dcc */
  uStack0000000000000010 = param_2[2];
                    /* try { // try from 03be1d00 to 03ce1d03 has its CatchHandler @ 03be1d8c */
  uStack0000000000000008 = param_2[1];
  uStack0000000000000000 = *param_2;
                    /* try { // try from 03be1d04 to 03ce1d07 has its CatchHandler @ 03be1db0 */
                    /* try { // try from 03be1d08 to 03ce1d0b has its CatchHandler @ 03be1dcc */
                    /* try { // try from 03be1d0c to 03ce1d17 has its CatchHandler @ 03be1db4 */
  FUN_03be1b1c(param_1,param_1 + 0x110);
                    /* try { // try from 03be1d18 to 03ce1d23 has its CatchHandler @ 03be1dcc */
  return;
}


