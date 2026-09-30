/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 06ad81e4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose(long param_1)

{
  int in_w8;
  int in_w9;
  long unaff_x20;
  undefined8 uVar1;
  long *unaff_x25;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03cf1244();
  }
  FUN_03c8f97c(param_1,in_w8 - in_w9);
  FUN_06ad7f04();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0710fcf0(uVar1,0);
  FUN_06ffe4e4();
  return;
}


