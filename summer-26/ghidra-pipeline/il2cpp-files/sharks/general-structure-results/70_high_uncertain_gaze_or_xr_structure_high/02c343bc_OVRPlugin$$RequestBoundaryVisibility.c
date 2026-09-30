/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 02c343bc
PROGRAM: sharks-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBoundaryVisibility(void)

{
  long unaff_x19;
  
  *(code **)(unaff_x19 + 0x18) = FUN_017910d0;
                    /* try { // try from 02c343dc to 02d344bb has its CatchHandler @ 02c343dc
                       catch() { ... } // from try @ 02c343dc with catch @ 02c343dc
                       catch() { ... } // from try @ 02c3492c with catch @ 02c343dc
                       catch() { ... } // from try @ 02c34b6c with catch @ 02c343dc
                       catch() { ... } // from try @ 02c34c90 with catch @ 02c343dc
                       catch() { ... } // from try @ 02c34cd8 with catch @ 02c343dc
                       catch() { ... } // from try @ 02c34d18 with catch @ 02c343dc */
  *(code **)(unaff_x19 + 0x38) = FUN_01790fa8;
  return;
}


