/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 06950e14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBodyTrackingFidelity(void)

{
  long unaff_x19;
  
  FUN_07cac358();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* try { // try from 06950e2c to 06a50e47 has its CatchHandler @ 06950eb8 */
    FUN_07cad904(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x18),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


