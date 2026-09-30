/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03bdd7f0
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


void Unity_XR_Oculus_Utils__get_eyeTrackedFoveatedRenderingEnabled(ulong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* catch() { ... } // from try @ 03bdd610 with catch @ 03bdd7f0 */
  if ((param_1 & 1) != 0) {
                    /* catch() { ... } // from try @ 03bdd5d8 with catch @ 03bdd7f4 */
                    /* catch() { ... } // from try @ 03bdd5d4 with catch @ 03bdd7f8 */
                    /* catch() { ... } // from try @ 03bdd76c with catch @ 03bdd7fc */
                    /* catch() { ... } // from try @ 03bdd688 with catch @ 03bdd800 */
                    /* catch() { ... } // from try @ 03bdd6dc with catch @ 03bdd804 */
    if (*(int *)(*(long *)PTR_DAT_042448c8 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03bdd5f8 with catch @ 03bdd808 */
      thunk_FUN_01dc4f30();
    }
                    /* catch() { ... } // from try @ 03bdd738 with catch @ 03bdd80c */
    UNRECOVERED_JUMPTABLE = (code *)FUN_03bde550();
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03bdd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  FUN_03be0ac4();
  return;
}


