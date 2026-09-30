/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 0574c3d0
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering(long param_1,long param_2)

{
  int *in_x9;
  
  if (*(int *)(param_2 + 0x30) != 8) {
    in_x9 = (int *)(param_2 + 0x30);
  }
  FUN_0574a038(*in_x9,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
  return;
}


