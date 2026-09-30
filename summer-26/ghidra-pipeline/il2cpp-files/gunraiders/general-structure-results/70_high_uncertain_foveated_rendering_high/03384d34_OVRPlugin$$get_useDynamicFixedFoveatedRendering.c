/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 03384d34
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFixedFoveatedRendering(long param_1,undefined8 param_2,byte param_3)

{
  byte unaff_w20;
  
  FUN_033a8464(param_1,0);
  *(byte *)(param_1 + 0x10) = unaff_w20 & 1;
  *(byte *)(param_1 + 0x12) = param_3 & 1;
  return;
}


