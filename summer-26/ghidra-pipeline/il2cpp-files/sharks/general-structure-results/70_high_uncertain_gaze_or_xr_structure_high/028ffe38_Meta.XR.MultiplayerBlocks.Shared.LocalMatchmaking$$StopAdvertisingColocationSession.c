/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopAdvertisingColocationSession
ENTRY_POINT: 028ffe38
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopAdvertisingColocationSession(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000020 = unaff_x20[4];
  uStack0000000000000008 = unaff_x20[1];
  uStack0000000000000000 = *unaff_x20;
  uStack0000000000000018 = unaff_x20[3];
  uStack0000000000000010 = unaff_x20[2];
  thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0));
  if (unaff_x21 != 0) {
    FUN_02b9f22c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


