/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<LoadScene>d__14$$MoveNext
ENTRY_POINT: 04e1dc10
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


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<LoadScene>d__14__MoveNext(void)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  while( true ) {
    unaff_x24 = unaff_x24 + -1;
    unaff_x23 = unaff_x23 + 0x58;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x24 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    memcpy(&stack0x00000008,unaff_x21,0x58);
    uVar1 = FUN_05a9b444(unaff_x23,&stack0x00000008,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10));
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


