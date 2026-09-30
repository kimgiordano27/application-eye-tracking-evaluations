/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 02c35094
PROGRAM: sharks-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetDeveloperTelemetryConsent(void)

{
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_0184c01c();
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_018fe5f4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a0();
}


