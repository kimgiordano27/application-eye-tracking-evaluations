/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Implicit
ENTRY_POINT: 059cf6f0
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Implicit(void)

{
  long unaff_x19;
  int unaff_w24;
  
  if (unaff_w24 != 5) {
    if (unaff_w24 != 0) {
      return;
    }
    FUN_059cffe8();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* catch(type#1 @ 08931438) { ... } // from try @ 059cf6ac with catch @ 059cf724
                       try { // try from 059cf724 to 05acf73b has its CatchHandler @ 059cf65c */
  return;
}


