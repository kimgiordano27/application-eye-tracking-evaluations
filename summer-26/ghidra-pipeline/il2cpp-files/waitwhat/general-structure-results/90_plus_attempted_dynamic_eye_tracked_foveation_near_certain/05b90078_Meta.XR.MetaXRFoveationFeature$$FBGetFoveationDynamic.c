/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 05b90078
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


float Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic
                (float param_1,float param_2,float param_3,long param_4)

{
  double dVar1;
  float fVar2;
  float unaff_s8;
  float fVar3;
  float unaff_s13;
  
  param_2 = (unaff_s8 * unaff_s13 + param_1 + param_3) / param_2;
  fVar2 = 1.0;
  if (param_2 <= 1.0) {
    fVar2 = param_2;
  }
  fVar3 = -1.0;
  if (-1.0 <= param_2) {
    fVar3 = fVar2;
  }
  if (*(int *)(param_4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  dVar1 = acos((double)fVar3);
  return (float)dVar1 * DAT_012e3848;
}


