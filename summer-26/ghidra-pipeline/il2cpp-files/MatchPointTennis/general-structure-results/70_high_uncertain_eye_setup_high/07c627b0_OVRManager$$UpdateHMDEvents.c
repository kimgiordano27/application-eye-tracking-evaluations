/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 07c627b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateHMDEvents(long param_1)

{
  long unaff_x19;
  undefined4 unaff_s8;
  undefined4 unaff_s11;
  
  *(undefined4 *)(param_1 + 0x48) = unaff_s11;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x74) = unaff_s8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


