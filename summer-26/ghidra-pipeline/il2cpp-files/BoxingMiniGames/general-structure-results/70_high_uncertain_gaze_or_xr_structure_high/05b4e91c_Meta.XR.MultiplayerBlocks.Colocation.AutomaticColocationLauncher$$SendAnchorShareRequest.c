/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 05b4e91c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest
          (undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = thunk_FUN_036a490c(param_1,0);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)thunk_FUN_0367ff68();
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


