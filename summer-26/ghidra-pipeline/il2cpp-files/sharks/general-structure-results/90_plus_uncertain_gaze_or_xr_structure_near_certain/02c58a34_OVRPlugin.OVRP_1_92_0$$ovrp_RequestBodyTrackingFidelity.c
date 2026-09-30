/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_RequestBodyTrackingFidelity
ENTRY_POINT: 02c58a34
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


void OVRPlugin_OVRP_1_92_0__ovrp_RequestBodyTrackingFidelity(void)

{
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x24;
  
  while( true ) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c58b1c();
    FUN_02c58b84();
    if (unaff_x20 == 0) break;
    FUN_02200624();
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w21 == unaff_w22) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


