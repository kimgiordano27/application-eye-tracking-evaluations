/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 056a3cb8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 141
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked(long param_1,undefined1 param_2 [16])

{
  long unaff_x19;
  long *unaff_x20;
  
  *(long *)(unaff_x19 + 0x18) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x10) = param_2._0_8_;
  **(long **)(param_1 + 0xb8) = unaff_x19;
  LeanTween__value(*(undefined8 *)(*unaff_x20 + 0xb8));
  return;
}


