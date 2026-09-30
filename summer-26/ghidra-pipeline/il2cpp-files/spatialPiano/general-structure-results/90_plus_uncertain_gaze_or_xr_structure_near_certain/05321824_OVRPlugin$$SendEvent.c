/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 05321824
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_05320a9c();
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


