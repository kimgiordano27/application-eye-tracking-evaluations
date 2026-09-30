/*
FUNCTION_NAME: OVRManager$$add_SpaceListSaveComplete
ENTRY_POINT: 0745a8d8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceListSaveComplete(undefined8 param_1)

{
  long unaff_x19;
  
  FUN_08a4ce98(param_1,0,0);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_08a200c4(*(long *)(unaff_x19 + 0x20),0,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_08a200c4(*(long *)(unaff_x19 + 0x28),0,0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_08a4ce98(*(long *)(unaff_x19 + 0x30),0,0);
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_08a4ce98(*(long *)(unaff_x19 + 0x38),0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


