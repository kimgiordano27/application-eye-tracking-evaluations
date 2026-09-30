/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 04654768
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


int System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__Dispose(long param_1,long param_2)

{
  undefined1 in_ZR;
  long in_x9;
  int unaff_w20;
  
  while( true ) {
    if ((bool)in_ZR) {
      return -1;
    }
    if (*(long *)(param_1 + (long)unaff_w20 * 8) == param_2) break;
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    unaff_w20 = unaff_w20 + 1;
  }
  return unaff_w20;
}


