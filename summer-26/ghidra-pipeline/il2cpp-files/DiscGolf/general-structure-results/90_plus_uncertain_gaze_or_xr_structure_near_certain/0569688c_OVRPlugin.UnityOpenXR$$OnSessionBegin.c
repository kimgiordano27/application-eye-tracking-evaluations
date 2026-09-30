/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 0569688c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionBegin(undefined8 *param_1)

{
  long unaff_x19;
  
  thunk_FUN_02da42ec(*param_1,0);
  if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


