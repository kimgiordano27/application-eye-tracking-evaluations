/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 05cfc7f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported(undefined8 param_1)

{
  long *unaff_x20;
  
  FUN_05b32c00();
  **(undefined8 **)(*unaff_x20 + 0xb8) = param_1;
  thunk_FUN_03048534(*(undefined8 *)(*unaff_x20 + 0xb8),param_1);
  return;
}


