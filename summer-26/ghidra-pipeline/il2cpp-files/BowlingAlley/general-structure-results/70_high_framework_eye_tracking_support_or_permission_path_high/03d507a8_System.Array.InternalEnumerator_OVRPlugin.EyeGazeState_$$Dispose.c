/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 03d507a8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__Dispose
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  bool in_ZR;
  undefined8 in_x10;
  int *unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 2) = in_x10;
  if (in_ZR) {
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    FUN_038ef980();
  }
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


