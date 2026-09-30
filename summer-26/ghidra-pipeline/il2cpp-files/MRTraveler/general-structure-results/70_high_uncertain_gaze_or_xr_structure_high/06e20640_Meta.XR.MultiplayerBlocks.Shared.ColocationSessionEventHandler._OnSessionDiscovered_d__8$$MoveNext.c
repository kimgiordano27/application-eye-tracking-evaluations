/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscovered>d__8$$MoveNext
ENTRY_POINT: 06e20640
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscovered>d__8__MoveNext
               (void)

{
  undefined *puVar1;
  undefined4 *unaff_x19;
  undefined8 uVar2;
  long *unaff_x24;
  
  FUN_06e1d3dc();
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x88);
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_08e78268;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
                    /* try { // try from 06e2079c to 06f20893 has its CatchHandler @ 06e2079c
                       catch() { ... } // from try @ 06e2079c with catch @ 06e2079c
                       catch() { ... } // from try @ 06e208ac with catch @ 06e2079c
                       catch() { ... } // from try @ 06e20900 with catch @ 06e2079c
                       catch() { ... } // from try @ 06e20940 with catch @ 06e2079c */
  FUN_063c7630(unaff_x19 + 2,uVar2,*(undefined8 *)puVar1);
  return;
}


