/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 05b4ee74
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = FUN_0367c9fc();
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = FUN_05b4ed44(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x30));
  if (unaff_x19 != 0) {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_0744af74(lVar1,*(undefined8 *)(unaff_x19 + 0x20),0);
  }
  return lVar1;
}


