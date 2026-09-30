/*
FUNCTION_NAME: FoveationFeature$$FBGetFoveationLevel
ENTRY_POINT: 073c52c8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 90
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_1;strong_foveation_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__FBGetFoveationLevel(code *param_1)

{
  long lVar1;
  long unaff_x20;
  
  (*param_1)();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x073c52f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
    return;
  }
  return;
}


