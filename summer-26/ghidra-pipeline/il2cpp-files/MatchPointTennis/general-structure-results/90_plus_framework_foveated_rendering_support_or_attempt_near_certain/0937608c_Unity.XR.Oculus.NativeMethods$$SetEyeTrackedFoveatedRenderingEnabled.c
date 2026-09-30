/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0937608c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 122
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 093760bc to 094760bf has its CatchHandler @ 093761a4 */
    return 0;
  }
  FUN_093671b4(*(undefined8 *)(unaff_x20 + 0x30),0);
                    /* try { // try from 0937609c to 094760ab has its CatchHandler @ 093761b4 */
  if (unaff_x19 != 0) {
    uVar1 = FUN_098505e4();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 093760d0 to 094760d7 has its CatchHandler @ 093761a0 */
  FUN_04447e44();
}


