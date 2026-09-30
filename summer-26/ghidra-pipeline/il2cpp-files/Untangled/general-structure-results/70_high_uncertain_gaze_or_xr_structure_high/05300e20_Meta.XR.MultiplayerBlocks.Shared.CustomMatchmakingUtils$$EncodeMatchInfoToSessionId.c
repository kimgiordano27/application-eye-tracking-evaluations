/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$EncodeMatchInfoToSessionId
ENTRY_POINT: 05300e20
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__EncodeMatchInfoToSessionId(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  
  FUN_04c73c60();
  if (unaff_x21 != 0) {
                    /* try { // try from 05300e28 to 05400f47 has its CatchHandler @ 05300e28
                       catch() { ... } // from try @ 05300e28 with catch @ 05300e28
                       catch() { ... } // from try @ 05301000 with catch @ 05300e28
                       catch() { ... } // from try @ 053010c0 with catch @ 05300e28
                       catch() { ... } // from try @ 05301164 with catch @ 05300e28 */
    FUN_04c7462c();
    FUN_04c7462c();
    uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0x90);
    thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02b98,&stack0x0000000c);
    FUN_04c7462c();
    thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d04190);
    FUN_04c7462c();
    FUN_05300f18();
    return unaff_x19 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


