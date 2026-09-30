/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 07521ce8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  int *in_x10;
  long unaff_x19;
  
  (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0452a004();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e3c();
}


