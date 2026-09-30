/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 01a1d708
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingSupported(long param_1)

{
  undefined8 uVar1;
  long in_x9;
  long in_x10;
  undefined8 unaff_x19;
  long unaff_x20;
  
  uVar1 = unaff_x19;
  if (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) != param_1) {
    uVar1 = 0;
  }
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x19;
  return;
}


