/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 06946480
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_fixedFoveatedRenderingLevel(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x23;
  
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x20;
  thunk_FUN_03afed3c();
  if (unaff_x19 != 0) {
    FUN_04de9000();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


