/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionDiscoveredWithSpaceSharing
ENTRY_POINT: 04ab576c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionDiscoveredWithSpaceSharing
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x22;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(long *)(lVar1 + 0xb8) + 0x20);
                    /* try { // try from 04ab5798 to 04bb57af has its CatchHandler @ 04ab57fc */
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
                    /* try { // try from 04ab57b0 to 04bb57eb has its CatchHandler @ 04ab56a4 */
                    /* WARNING: Could not recover jumptable at 0x04ab57c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98))();
  return;
}


