/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 01f601a0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


bool OVRManager__get_useDynamicFixedFoveatedRendering(void)

{
  undefined4 in_w8;
  int unaff_w20;
  long unaff_x21;
  undefined4 *unaff_x23;
  int unaff_w27;
  undefined4 unaff_w28;
  
  *unaff_x23 = unaff_w28;
  if (unaff_w27 < unaff_w20) {
    *(undefined4 *)(unaff_x21 + 0x10) = in_w8;
  }
  return unaff_w20 <= unaff_w27;
}


