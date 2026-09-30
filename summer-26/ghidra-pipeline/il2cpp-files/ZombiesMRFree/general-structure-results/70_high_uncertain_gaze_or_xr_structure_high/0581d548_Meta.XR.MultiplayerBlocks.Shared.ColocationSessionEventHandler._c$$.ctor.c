/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c$$.ctor
ENTRY_POINT: 0581d548
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c___ctor(void)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  while( true ) {
    uVar1 = FUN_06b274fc(unaff_x24);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x25 = unaff_x25 + -1;
    unaff_x24 = unaff_x24 + 0x10;
    if (unaff_x25 == 0) break;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
  }
  return 0xffffffff;
}


