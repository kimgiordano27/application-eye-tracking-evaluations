/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 069278dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__GetDynamicFoveatedRenderingEnabled
                (float param_1,undefined1 param_2 [16],float param_3)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_1 <= 1.0) {
    fVar1 = param_1;
  }
  if (param_1 < 0.0) {
    fVar1 = param_3;
  }
  return fVar1;
}


