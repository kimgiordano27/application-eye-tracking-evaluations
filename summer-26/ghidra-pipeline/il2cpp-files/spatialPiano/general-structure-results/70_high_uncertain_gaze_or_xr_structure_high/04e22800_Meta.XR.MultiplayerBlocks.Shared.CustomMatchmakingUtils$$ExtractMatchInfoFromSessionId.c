/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$ExtractMatchInfoFromSessionId
ENTRY_POINT: 04e22800
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__ExtractMatchInfoFromSessionId(void)

{
  ulong uVar1;
  long in_x9;
  uint unaff_w19;
  long unaff_x22;
  long unaff_x24;
  
  while( true ) {
    in_x9 = in_x9 + 0x20;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
                    /* try { // try from 04e22814 to 04f2282b has its CatchHandler @ 04e228c4 */
                    /* try { // try from 04e2282c to 04f2283f has its CatchHandler @ 04e22724 */
    uVar1 = FUN_061731d8(in_x9);
    if ((uVar1 & 1) != 0) break;
    unaff_x24 = unaff_x24 + -1;
    unaff_w19 = unaff_w19 + 1;
                    /* try { // try from 04e22840 to 04f22857 has its CatchHandler @ 04e228c4 */
    if (unaff_x24 == 0) {
                    /* try { // try from 04e22858 to 04f228b3 has its CatchHandler @ 04e22724 */
      return 0xffffffff;
    }
  }
  return unaff_w19;
}


