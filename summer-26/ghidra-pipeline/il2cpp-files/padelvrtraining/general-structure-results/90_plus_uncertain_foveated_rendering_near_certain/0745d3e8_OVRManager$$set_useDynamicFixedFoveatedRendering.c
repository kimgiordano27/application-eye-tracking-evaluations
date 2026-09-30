/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 0745d3e8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 110
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering(long param_1)

{
  long lVar1;
  int in_w8;
  
  if (in_w8 == 2) {
    lVar1 = *(long *)(param_1 + 0x38);
  }
  else {
    if (in_w8 != 1) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x40);
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_08a66a6c(lVar1,0);
  return;
}


