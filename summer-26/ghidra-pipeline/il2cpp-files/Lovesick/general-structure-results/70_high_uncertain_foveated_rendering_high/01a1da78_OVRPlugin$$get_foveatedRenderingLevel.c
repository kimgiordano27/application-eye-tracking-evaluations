/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 01a1da78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_foveatedRenderingLevel(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x9c) = 0;
                    /* try { // try from 01a1dae4 to 01b1dae7 has its CatchHandler @ 01a1e01c */
  return 0;
}


