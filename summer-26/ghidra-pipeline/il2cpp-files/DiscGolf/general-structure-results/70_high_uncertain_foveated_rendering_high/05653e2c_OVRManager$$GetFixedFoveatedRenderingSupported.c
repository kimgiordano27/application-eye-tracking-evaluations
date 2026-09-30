/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 05653e2c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported(code *param_1,undefined4 param_2)

{
  long unaff_x27;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)thunk_FUN_02dd33e4();
    *(code **)(unaff_x27 + 0x410) = param_1;
  }
  (*param_1)(param_2);
  return;
}


