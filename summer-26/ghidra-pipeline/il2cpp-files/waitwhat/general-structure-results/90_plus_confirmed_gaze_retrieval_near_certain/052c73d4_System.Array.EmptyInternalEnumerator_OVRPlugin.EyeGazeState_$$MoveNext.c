/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 052c73d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext(long param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  if (*unaff_x20 == 0) {
    FUN_05950954(0x32,0);
  }
  lVar1 = *(long *)(unaff_x21 + 0x20);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_05431718();
  return;
}


