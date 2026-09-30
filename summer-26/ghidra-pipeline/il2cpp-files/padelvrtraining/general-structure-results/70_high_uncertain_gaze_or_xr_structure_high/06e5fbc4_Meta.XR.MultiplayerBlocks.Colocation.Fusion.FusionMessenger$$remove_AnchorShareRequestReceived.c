/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$remove_AnchorShareRequestReceived
ENTRY_POINT: 06e5fbc4
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


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__remove_AnchorShareRequestReceived
               (undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  *param_1 = param_2;
  thunk_FUN_03d1023c();
  if (unaff_x20 != 0) {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x2c);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined4 *)(unaff_x19 + 8) = 0;
    *(undefined4 *)(unaff_x19 + 0xc) = uVar1;
                    /* try { // try from 06e5fbe0 to 06f5fc07 has its CatchHandler @ 06e60064 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


