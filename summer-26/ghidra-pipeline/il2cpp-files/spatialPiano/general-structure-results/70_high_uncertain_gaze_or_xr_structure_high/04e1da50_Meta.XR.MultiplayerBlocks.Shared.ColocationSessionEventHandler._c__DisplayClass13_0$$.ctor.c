/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c__DisplayClass13_0$$.ctor
ENTRY_POINT: 04e1da50
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0___ctor
               (void)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  
  while( true ) {
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar1 = FUN_0613a200(unaff_x24 + (long)(int)unaff_w19 * 8);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


