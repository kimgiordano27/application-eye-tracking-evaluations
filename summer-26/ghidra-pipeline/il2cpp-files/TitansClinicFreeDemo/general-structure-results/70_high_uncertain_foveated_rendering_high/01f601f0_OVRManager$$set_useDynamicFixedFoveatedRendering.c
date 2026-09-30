/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 01f601f0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


int OVRManager__set_useDynamicFixedFoveatedRendering(long param_1,long *param_2)

{
  return *(ushort *)(*param_2 + param_1 * 2) - 0x30;
}


