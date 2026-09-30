/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 07477f48
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(long param_1)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  FUN_07477f78();
  *(undefined8 *)(param_1 + 0x50) = unaff_x20;
  thunk_FUN_03d1023c();
  *(undefined8 *)(param_1 + 0x48) = unaff_x19;
  thunk_FUN_03d1023c((undefined8 *)(param_1 + 0x48));
  return;
}


