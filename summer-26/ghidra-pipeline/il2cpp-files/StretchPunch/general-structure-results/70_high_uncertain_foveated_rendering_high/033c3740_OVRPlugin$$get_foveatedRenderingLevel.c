/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 033c3740
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


uint OVRPlugin__get_foveatedRenderingLevel(void)

{
  uint in_w8;
  
                    /* try { // try from 033c374c to 034c3783 has its CatchHandler @ 033c3998 */
  return in_w8 & 1;
}


