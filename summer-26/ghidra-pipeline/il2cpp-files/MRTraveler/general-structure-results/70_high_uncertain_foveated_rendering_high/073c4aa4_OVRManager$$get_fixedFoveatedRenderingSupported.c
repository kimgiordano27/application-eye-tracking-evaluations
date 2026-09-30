/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 073c4aa4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x23;
  
  uVar1 = thunk_FUN_03cf5138();
  *(undefined8 *)(unaff_x19 + 0x138) = uVar1;
  uVar1 = thunk_FUN_03cf5138();
  thunk_FUN_03d233cc(unaff_x19 + 0x138,uVar1);
  thunk_FUN_03cf5138(*(undefined8 *)(unaff_x19 + 0x120),*unaff_x23);
  FUN_04ec13d8();
  return;
}


