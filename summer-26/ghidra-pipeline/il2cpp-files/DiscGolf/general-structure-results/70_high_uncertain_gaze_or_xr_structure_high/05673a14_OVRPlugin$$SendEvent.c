/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 05673a14
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(void)

{
  int in_w8;
  long unaff_x19;
  long unaff_x23;
  long in_stack_00000048;
  
  if (in_w8 == -1) {
    *(undefined4 *)(unaff_x19 + 0x1a0) = 1;
  }
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


