/*
FUNCTION_NAME: FoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 05ab0464
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 90
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_1;strong_foveation_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__FBSetFoveationLevel(void)

{
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 05ab046c to 05bb0493 has its CatchHandler @ 05ab086c */
  FUN_03bf3b34(in_stack_00000008,*unaff_x22);
  if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  return;
}


