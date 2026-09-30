/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 07a3bfa8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingSupported(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  thunk_FUN_040ec700();
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x28));
  return;
}


