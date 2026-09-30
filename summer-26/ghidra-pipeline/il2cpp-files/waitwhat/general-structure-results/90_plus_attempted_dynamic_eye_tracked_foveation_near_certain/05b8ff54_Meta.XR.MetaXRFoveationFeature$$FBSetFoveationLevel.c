/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 05b8ff54
PROGRAM: waitwhat-libil2cpp.so
SCORE: 123
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel(float param_1,float param_2,float param_3)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  int in_w8;
  double dVar1;
  
  if (in_ZR || in_NG != in_OV) {
    param_2 = param_1;
  }
  if (param_3 <= param_1) {
    param_3 = param_2;
  }
  if (in_w8 == 0) {
    thunk_FUN_031e5338();
  }
  dVar1 = acos((double)param_3);
  return (float)dVar1 * DAT_012e3848;
}


