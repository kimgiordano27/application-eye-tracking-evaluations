/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_RequestBodyTrackingFidelity
ENTRY_POINT: 0604521c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_RequestBodyTrackingFidelity(undefined8 param_1)

{
  long unaff_x19;
  undefined8 *unaff_x22;
  
  while( true ) {
    unaff_x22[-2] = 0;
    thunk_FUN_0322f718(param_1);
    *unaff_x22 = 0;
    unaff_x19 = unaff_x19 + -1;
    if (unaff_x19 == 0) break;
    thunk_FUN_0322f718(unaff_x22[3]);
    param_1 = unaff_x22[5];
    unaff_x22 = unaff_x22 + 5;
  }
  thunk_FUN_0322f718();
  return;
}


