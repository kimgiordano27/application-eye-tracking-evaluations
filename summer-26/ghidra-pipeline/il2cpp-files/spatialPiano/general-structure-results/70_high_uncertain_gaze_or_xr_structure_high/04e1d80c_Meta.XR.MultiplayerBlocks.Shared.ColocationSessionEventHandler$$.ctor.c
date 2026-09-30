/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$.ctor
ENTRY_POINT: 04e1d80c
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


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler___ctor(void)

{
  undefined1 in_CY;
  ulong uVar1;
  uint unaff_w19;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar1 = FUN_060d77bc(unaff_x25 + (long)(int)unaff_w19 * 0x10);
    if ((uVar1 & 1) != 0) break;
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
    in_CY = *(uint *)(unaff_x23 + 0x18) <= unaff_w19;
  }
  return unaff_w19;
}


