/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06a4cd34
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 131
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


bool Unity_XR_Oculus_NativeMethods_Internal__SetEyeTrackedFoveatedRenderingEnabled
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7,long param_8)

{
                    /* try { // try from 06a4cd38 to 06b4cd3b has its CatchHandler @ 06a4cd48 */
                    /* catch() { ... } // from try @ 06a4cd38 with catch @ 06a4cd48 */
  if ((param_6 <= param_5) && (param_1 - param_2 <= param_3 - param_4)) {
    if (*(float *)(param_8 + 4) + *(float *)(param_8 + 0x10) <=
        *(float *)(param_7 + 4) + *(float *)(param_7 + 0x10)) {
                    /* try { // try from 06a4cd8c to 06b4cdb3 has its CatchHandler @ 06a4cdc8 */
      if (*(float *)(param_8 + 8) + *(float *)(param_8 + 0x14) <=
          *(float *)(param_7 + 8) + *(float *)(param_7 + 0x14)) {
        return *(float *)(param_7 + 4) - *(float *)(param_7 + 0x10) <=
               *(float *)(param_8 + 4) - *(float *)(param_8 + 0x10) &&
               *(float *)(param_7 + 8) - *(float *)(param_7 + 0x14) <=
               *(float *)(param_8 + 8) - *(float *)(param_8 + 0x14);
      }
    }
  }
  return false;
}


