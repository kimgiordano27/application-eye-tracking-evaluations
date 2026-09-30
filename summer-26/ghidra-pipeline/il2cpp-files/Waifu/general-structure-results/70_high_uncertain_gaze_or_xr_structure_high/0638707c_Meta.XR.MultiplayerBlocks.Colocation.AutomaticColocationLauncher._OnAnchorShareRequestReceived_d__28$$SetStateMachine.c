/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 0638707c
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
               (void)

{
  if ((DAT_086ef1b8 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    DAT_086ef1b8 = 1;
  }
  if (*(int *)(DAT_083cf7d8 + 0xe0) != 0) {
    return;
  }
  FUN_033b9870();
  return;
}


