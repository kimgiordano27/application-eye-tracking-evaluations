/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 09083a6c
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFoveatedRendering(void)

{
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x19 + 999) = in_w8;
  if (*(char *)(unaff_x20 + 0x23b) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    *(undefined1 *)(unaff_x20 + 0x23b) = 1;
  }
  FUN_0a16adac(0);
  FUN_0a16a4c4(0);
  return;
}


