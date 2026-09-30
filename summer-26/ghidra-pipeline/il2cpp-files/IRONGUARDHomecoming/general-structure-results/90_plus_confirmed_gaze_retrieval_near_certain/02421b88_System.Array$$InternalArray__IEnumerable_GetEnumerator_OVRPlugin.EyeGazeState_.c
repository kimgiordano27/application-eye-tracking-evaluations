/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02421b88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>(long param_1)

{
  int unaff_w21;
  
  if (param_1 == 0) {
    FUN_01ecafa0();
  }
  if (unaff_w21 < 0x401) {
    FUN_04068278(unaff_w21,0);
  }
  FUN_0223ef50();
  return;
}


