/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$add_AnchorShareRequestReceived
ENTRY_POINT: 06e5fb14
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__add_AnchorShareRequestReceived
               (void)

{
  long lVar1;
  int in_w8;
  long in_x9;
  long unaff_x19;
  
  if (in_x9 != 0) {
    if (in_w8 == *(int *)(in_x9 + 0x20) + 1) {
      FUN_07199c28(0);
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
                    /* try { // try from 06e5fb54 to 06f5fb7b has its CatchHandler @ 06e60014 */
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


