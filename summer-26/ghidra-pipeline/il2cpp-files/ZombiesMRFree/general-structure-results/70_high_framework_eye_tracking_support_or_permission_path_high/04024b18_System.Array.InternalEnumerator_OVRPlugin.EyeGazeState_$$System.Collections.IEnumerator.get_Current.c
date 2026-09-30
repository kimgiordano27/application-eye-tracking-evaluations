/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04024b18
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
               (ulong param_1)

{
  int *unaff_x19;
  
                    /* try { // try from 04024b18 to 04124b1b has its CatchHandler @ 04024b24 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 04024b1c to 04124b27 has its CatchHandler @ 04024868 */
    FUN_02feb2c4();
  }
  FUN_03b63ea4();
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


