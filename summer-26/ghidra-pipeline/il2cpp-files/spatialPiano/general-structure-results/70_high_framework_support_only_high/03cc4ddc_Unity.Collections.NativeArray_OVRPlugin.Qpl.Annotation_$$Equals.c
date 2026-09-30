/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Equals
ENTRY_POINT: 03cc4ddc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Equals(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
                    /* catch() { ... } // from try @ 03cc4d4c with catch @ 03cc4ddc
                       catch() { ... } // from try @ 03cc4dcc with catch @ 03cc4ddc */
                    /* try { // try from 03cc4de0 to 03dc4de3 has its CatchHandler @ 03cc4dec */
                    /* try { // try from 03cc4de4 to 03dc4def has its CatchHandler @ 03cc4c6c */
  (**(code **)(param_1 + 0x138))();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03cc4de0 with catch @ 03cc4dec
                        */
  if (unaff_x20 == 0) {
                    /* try { // try from 03cc4df0 to 03dc5113 has its CatchHandler @ 03cc4df0
                       catch() { ... } // from try @ 03cc4df0 with catch @ 03cc4df0
                       catch() { ... } // from try @ 03cc51c4 with catch @ 03cc4df0
                       catch() { ... } // from try @ 03cc5200 with catch @ 03cc4df0
                       catch() { ... } // from try @ 03cc52c4 with catch @ 03cc4df0
                       catch() { ... } // from try @ 03cc5318 with catch @ 03cc4df0 */
    if ((unaff_w22 == 9) || (unaff_w22 == 0)) {
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0();
}


