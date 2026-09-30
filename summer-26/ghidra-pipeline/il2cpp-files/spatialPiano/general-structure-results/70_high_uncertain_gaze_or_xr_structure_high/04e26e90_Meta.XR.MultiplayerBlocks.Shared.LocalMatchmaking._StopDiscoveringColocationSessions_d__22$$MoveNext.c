/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__22$$MoveNext
ENTRY_POINT: 04e26e90
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


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22__MoveNext
               (void)

{
  ulong uVar1;
  uint in_w3;
  int in_w8;
  long unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)in_w8 - (long)(int)in_w3;
  lVar2 = unaff_x22 + (long)(int)in_w3 * 0x18 + 0x20;
  while( true ) {
    if (*(uint *)(unaff_x22 + 0x18) <= in_w3) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar1 = FUN_0626a108(lVar2);
    if ((uVar1 & 1) != 0) break;
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 + 0x18;
    in_w3 = in_w3 + 1;
    if (lVar3 == 0) {
      return 0xffffffff;
    }
  }
  return in_w3;
}


