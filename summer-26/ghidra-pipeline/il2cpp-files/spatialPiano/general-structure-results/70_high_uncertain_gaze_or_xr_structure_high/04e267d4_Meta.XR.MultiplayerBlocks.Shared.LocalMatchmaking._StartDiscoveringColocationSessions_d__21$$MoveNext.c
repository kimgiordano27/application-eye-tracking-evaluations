/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartDiscoveringColocationSessions>d__21$$MoveNext
ENTRY_POINT: 04e267d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartDiscoveringColocationSessions>d__21__MoveNext
               (void)

{
  undefined1 in_ZR;
  ulong uVar1;
  uint unaff_w19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  while( true ) {
    unaff_w19 = unaff_w19 + 1;
                    /* try { // try from 04e267d8 to 04f267eb has its CatchHandler @ 04e266d0 */
    if ((bool)in_ZR) {
                    /* try { // try from 04e267ec to 04f26803 has its CatchHandler @ 04e26870 */
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) break;
    uVar1 = UnityEngine_UIElements_KeyDownEvent_<>c__<_cctor>b__0_0(unaff_x24);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x25 = unaff_x25 + -1;
    in_ZR = unaff_x25 == 0;
    unaff_x24 = unaff_x24 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


