/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel
ENTRY_POINT: 02bec82c
PROGRAM: sharks-libil2cpp.so
SCORE: 107
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationLevel(undefined8 param_1)

{
  long *unaff_x24;
  
  FUN_02b844b4(param_1,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*unaff_x24);
  }
  FUN_02bdb538();
  return;
}


