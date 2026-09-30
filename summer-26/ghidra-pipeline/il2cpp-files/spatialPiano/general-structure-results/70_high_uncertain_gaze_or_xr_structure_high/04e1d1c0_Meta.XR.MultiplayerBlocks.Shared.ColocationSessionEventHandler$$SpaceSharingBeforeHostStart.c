/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$SpaceSharingBeforeHostStart
ENTRY_POINT: 04e1d1c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__SpaceSharingBeforeHostStart
               (ulong param_1)

{
  uint unaff_w19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  while( true ) {
    if ((param_1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x25 = unaff_x25 + -1;
    unaff_x24 = unaff_x24 + 0x10;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x25 == 0) break;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    param_1 = FUN_050cfa2c(unaff_x24);
  }
  return 0xffffffff;
}


