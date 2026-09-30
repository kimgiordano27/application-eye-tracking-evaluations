/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 05fdac70
PROGRAM: vandalizer-libil2cpp.so
SCORE: 125
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked
               (undefined1 param_1 [16],undefined4 param_2)

{
  long unaff_x19;
  undefined4 unaff_s13;
  
  *(undefined4 *)(unaff_x19 + 0x10) = param_2;
  *(undefined4 *)(unaff_x19 + 0x14) = unaff_s13;
  return;
}


