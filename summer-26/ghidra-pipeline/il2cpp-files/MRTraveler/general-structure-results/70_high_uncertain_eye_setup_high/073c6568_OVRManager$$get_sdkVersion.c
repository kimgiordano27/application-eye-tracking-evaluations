/*
FUNCTION_NAME: OVRManager$$get_sdkVersion
ENTRY_POINT: 073c6568
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_sdkVersion(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    FUN_085db068(param_1,0,0);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_085db068(*(long *)(unaff_x19 + 0x48),0,0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_085b3aa8(*(long *)(unaff_x19 + 0x20),0,0);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_085b3aa8(*(long *)(unaff_x19 + 0x28),0,0);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            FUN_085db068(*(long *)(unaff_x19 + 0x30),0,0);
            if (*(long *)(unaff_x19 + 0x38) != 0) {
              FUN_085db068(*(long *)(unaff_x19 + 0x38),0,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


