/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 01eb25fc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_010400dc(*unaff_x21);
                    /* try { // try from 01eb2604 to 01fb2607 has its CatchHandler @ 01eb262c */
                    /* try { // try from 01eb2608 to 01fb262f has its CatchHandler @ 01eb21f4 */
  FUN_01d67190(uVar1,1,7,0,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
                    /* catch() { ... } // from try @ 01eb2604 with catch @ 01eb262c */
                    /* try { // try from 01eb2630 to 01fb2637 has its CatchHandler @ 01eb264c */
                    /* try { // try from 01eb2638 to 01fb2643 has its CatchHandler @ 01eb21f4 */
  thunk_FUN_0106e12c(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  return;
}


