/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 036a3c10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    FUN_036a3cdc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


