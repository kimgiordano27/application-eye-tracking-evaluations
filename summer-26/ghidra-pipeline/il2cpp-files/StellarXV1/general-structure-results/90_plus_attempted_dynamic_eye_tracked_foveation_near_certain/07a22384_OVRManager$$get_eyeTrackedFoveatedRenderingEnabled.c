/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07a22384
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
               undefined1 param_7 [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_rev64(param_7,4);
  FUN_089dbfa0((param_5._4_4_ + param_3._4_4_ + param_2._8_4_) - auVar1._4_4_ * param_1._4_4_,
               (param_5._8_4_ + param_3._8_4_ + param_6._12_4_) - auVar1._8_4_ * param_1._8_4_,
               (param_5._0_4_ + param_3._0_4_ + param_6._8_4_) - auVar1._0_4_ * param_1._0_4_,
               ((param_4._12_4_ - param_3._12_4_) - param_2._12_4_) - auVar1._12_4_ * param_1._12_4_
              );
  return;
}


