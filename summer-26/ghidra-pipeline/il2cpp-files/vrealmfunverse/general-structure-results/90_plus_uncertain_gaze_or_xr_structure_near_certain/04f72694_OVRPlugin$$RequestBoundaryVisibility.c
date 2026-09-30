/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 04f72694
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBoundaryVisibility(void)

{
  long unaff_x19;
  long unaff_x20;
  
  thunk_FUN_02b9ad44();
  if (unaff_x20 != 0) {
    thunk_FUN_05c5b958(*(undefined4 *)(unaff_x19 + 0xac));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


