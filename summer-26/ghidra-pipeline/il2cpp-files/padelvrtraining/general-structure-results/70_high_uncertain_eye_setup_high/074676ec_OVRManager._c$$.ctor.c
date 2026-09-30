/*
FUNCTION_NAME: OVRManager.<>c$$.ctor
ENTRY_POINT: 074676ec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager_<>c___ctor(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_03d2d2b0();
  *(undefined1 *)(unaff_x20 + 0x864) = 1;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    return *(long *)(unaff_x19 + 0x10) != *(long *)(*(long *)(unaff_x19 + 0x18) + 0xd0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


