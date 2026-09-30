/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 015e5f98
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 156
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  long lVar1;
  
  lVar1 = System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor();
  if (lVar1 != 0) {
    FUN_01c6113c();
    FUN_024e104c();
    FUN_024e4eec();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


