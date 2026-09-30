/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 05783404
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(code *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  if (param_1 == (code *)0x0) {
                    /* try { // try from 05783434 to 0588347b has its CatchHandler @ 05783434
                       catch() { ... } // from try @ 05783434 with catch @ 05783434
                       catch() { ... } // from try @ 057834a4 with catch @ 05783434
                       catch() { ... } // from try @ 057834bc with catch @ 05783434
                       catch() { ... } // from try @ 057834f4 with catch @ 05783434
                       catch() { ... } // from try @ 05783568 with catch @ 05783434 */
    param_1 = (code *)thunk_FUN_02ef1ac4();
    *(code **)(unaff_x20 + 0x850) = param_1;
  }
  (*param_1)(param_2);
  return;
}


