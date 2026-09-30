/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 05305ca0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__set_foveatedRenderingLevel(float param_1,float param_2)

{
  float *unaff_x19;
  
  if (0.0 <= param_1) {
    param_2 = param_1;
  }
  *unaff_x19 = param_2;
  return 1;
}


