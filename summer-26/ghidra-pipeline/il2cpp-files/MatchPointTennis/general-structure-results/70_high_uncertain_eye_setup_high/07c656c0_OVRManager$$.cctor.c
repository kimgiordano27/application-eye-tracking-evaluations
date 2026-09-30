/*
FUNCTION_NAME: OVRManager$$.cctor
ENTRY_POINT: 07c656c0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager___cctor(void)

{
  long unaff_x19;
  long unaff_x21;
  
  if (unaff_x21 != 0) {
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
    if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
      *(bool *)(*(long *)(unaff_x19 + 0x40) + 0xa8) =
           *(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 2;
      FUN_07c62aa8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


