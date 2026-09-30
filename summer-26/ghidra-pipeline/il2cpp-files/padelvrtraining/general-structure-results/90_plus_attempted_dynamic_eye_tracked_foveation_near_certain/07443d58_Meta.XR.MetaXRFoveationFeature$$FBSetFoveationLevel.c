/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 07443d58
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 107
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel(void)

{
  undefined8 *unaff_x19;
  uint unaff_w21;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  
  FUN_07445d78();
  *unaff_x19 = in_stack_00000050;
  *(undefined4 *)(unaff_x19 + 1) = in_stack_00000058;
  return unaff_w21 & 1;
}


