/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 076cc9a8
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  FUN_057d4cdc();
  lVar1 = thunk_FUN_0406deb8(*unaff_x22);
  FUN_075273c0(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(long *)(unaff_x19 + 0x30) = lVar1;
  return;
}


