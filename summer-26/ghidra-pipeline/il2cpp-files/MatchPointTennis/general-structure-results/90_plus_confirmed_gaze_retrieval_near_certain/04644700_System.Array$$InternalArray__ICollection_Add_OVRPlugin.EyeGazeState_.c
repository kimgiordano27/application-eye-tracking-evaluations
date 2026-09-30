/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04644700
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


void System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>(void)

{
  long unaff_x20;
  
  FUN_04447ba8(PTR_DAT_09f24fc0);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_04482014();
  }
  FUN_0795cf74(0);
  if (*(int *)(*(long *)PTR_DAT_09f24fc0 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07aa9c00();
  FUN_07f9d368();
  FUN_07aa889c();
  return;
}


