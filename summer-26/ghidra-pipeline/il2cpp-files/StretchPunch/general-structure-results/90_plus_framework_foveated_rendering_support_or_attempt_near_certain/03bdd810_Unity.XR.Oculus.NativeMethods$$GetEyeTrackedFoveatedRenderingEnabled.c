/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03bdd810
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled
               (code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* catch() { ... } // from try @ 03bdd654 with catch @ 03bdd818 */
                    /* catch() { ... } // from try @ 03bdd7bc with catch @ 03bdd820 */
                    /* catch() { ... } // from try @ 03bdd79c with catch @ 03bdd824 */
                    /* catch() { ... } // from try @ 03bdd6b8 with catch @ 03bdd828 */
                    /* try { // try from 03bdd83c to 03cdd83f has its CatchHandler @ 03bdd858 */
                    /* try { // try from 03bdd840 to 03cdd857 has its CatchHandler @ 03bdd85c */
                    /* WARNING: Could not recover jumptable at 0x03bdd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* catch() { ... } // from try @ 03bdd83c with catch @ 03bdd858
                       try { // try from 03bdd858 to 03cdd87b has its CatchHandler @ 03bdd514 */
                    /* catch() { ... } // from try @ 03bdd840 with catch @ 03bdd85c */
  FUN_03be0ac4();
  return;
}


