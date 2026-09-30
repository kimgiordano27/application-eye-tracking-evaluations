/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 069464d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFoveatedRendering
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  bool in_NG;
  
  if (!in_NG) {
    param_3 = param_2;
  }
  *(undefined4 *)(param_4 + 0x6c) = param_3;
  return;
}


