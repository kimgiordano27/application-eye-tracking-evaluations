/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 0339fe8c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked(long param_1)

{
  uint unaff_w19;
  
  (**(code **)(param_1 + 0x138))();
  return unaff_w19 & 1;
}


