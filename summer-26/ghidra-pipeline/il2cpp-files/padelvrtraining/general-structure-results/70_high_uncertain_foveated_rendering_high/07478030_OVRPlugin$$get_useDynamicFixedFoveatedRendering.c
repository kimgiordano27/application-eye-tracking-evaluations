/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 07478030
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


void OVRPlugin__get_useDynamicFixedFoveatedRendering(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  unaff_x20[8] = unaff_x19;
  thunk_FUN_03d1023c();
                    /* WARNING: Could not recover jumptable at 0x07478058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x188))();
  return;
}


