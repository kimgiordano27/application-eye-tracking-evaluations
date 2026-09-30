/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 090a36dc
PROGRAM: Hyper-libil2cpp.so
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
  long unaff_x19;
  undefined4 unaff_s8;
  
  if (unaff_x19 != 0) {
                    /* try { // try from 090a36e0 to 091a36e3 has its CatchHandler @ 090a372c */
    *(undefined4 *)(unaff_x19 + 0xf0) = unaff_s8;
                    /* try { // try from 090a36e4 to 091a36e7 has its CatchHandler @ 090a3728 */
                    /* try { // try from 090a36e8 to 091a36eb has its CatchHandler @ 090a3734 */
                    /* try { // try from 090a36ec to 091a36ef has its CatchHandler @ 090a3724 */
                    /* try { // try from 090a36f0 to 091a36f3 has its CatchHandler @ 090a370c */
                    /* try { // try from 090a36f4 to 091a36f7 has its CatchHandler @ 090a3714 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 090a369c with catch @ 090a36f8
                       try { // try from 090a36f8 to 091a374b has its CatchHandler @ 090a33a0 */
  FUN_0494818c();
}


