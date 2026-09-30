/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopDiscoveringColocationSessions
ENTRY_POINT: 06e25d34
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopDiscoveringColocationSessions(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  uVar1 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_06e25a6c();
  *(undefined8 *)(unaff_x19 + 0x80) = uVar1;
                    /* catch() { ... } // from try @ 06e25d20 with catch @ 06e25d4c */
                    /* try { // try from 06e25d50 to 06f25d57 has its CatchHandler @ 06e25d6c */
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x80),uVar1);
                    /* try { // try from 06e25d58 to 06f25d63 has its CatchHandler @ 06e25cc0 */
                    /* try { // try from 06e25d64 to 06f25d6b has its CatchHandler @ 06e25d6c */
  FUN_05ac04ec();
  return;
}


