/*
FUNCTION_NAME: OVRTelemetryMarker$$AddAnnotation
ENTRY_POINT: 0613a62c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetryMarker__AddAnnotation(void)

{
  byte bVar1;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xd8d) = 1;
  FUN_05e5ae34();
                    /* try { // try from 0613a644 to 0623a647 has its CatchHandler @ 0613a668 */
                    /* try { // try from 0613a648 to 0623a66b has its CatchHandler @ 0613a420 */
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  bVar1 = OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled();
  *(byte *)(unaff_x19 + 0x10) = bVar1 & 1;
                    /* catch() { ... } // from try @ 0613a644 with catch @ 0613a668 */
                    /* try { // try from 0613a66c to 0623a673 has its CatchHandler @ 0613a67c */
  return;
}


