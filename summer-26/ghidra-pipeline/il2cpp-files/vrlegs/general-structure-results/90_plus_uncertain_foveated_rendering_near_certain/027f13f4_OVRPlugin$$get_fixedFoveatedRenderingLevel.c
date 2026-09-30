/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 027f13f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel(void)

{
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_01a4adbc();
  }
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


