/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0387915c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  int iStack0000000000000048;
  
  *(undefined8 *)(&stack0x00000040 + unaff_x20 * 8) = unaff_x19;
  iStack0000000000000048 = (int)unaff_x20 + 1;
  __cxa_end_catch();
  FUN_05d3a3f8();
  return;
}


