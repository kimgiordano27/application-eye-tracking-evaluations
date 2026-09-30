/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_SetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 061117bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_99_0__ovrp_SetTrackingPoseEnabledForInvisibleSession(undefined8 param_1)

{
  if (DAT_07ee1d00 == (code *)0x0) {
                    /* try { // try from 061117d4 to 062117db has its CatchHandler @ 06111898 */
    DAT_07ee1d00 = (code *)thunk_FUN_036800c0();
  }
  (*DAT_07ee1d00)(param_1);
                    /* try { // try from 0611181c to 06211847 has its CatchHandler @ 0611189c */
  return;
}


