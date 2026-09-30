/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$ExtractMatchInfoFromSessionId
ENTRY_POINT: 0647bb6c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__ExtractMatchInfoFromSessionId
               (undefined8 param_1,long param_2,long param_3)

{
  if ((DAT_0897a16c & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08493d80);
    DAT_0897a16c = 1;
  }
  if (param_2 != 0) {
    FUN_0647bbd4(param_1,param_2,*(undefined4 *)(param_2 + 0x7c),
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


