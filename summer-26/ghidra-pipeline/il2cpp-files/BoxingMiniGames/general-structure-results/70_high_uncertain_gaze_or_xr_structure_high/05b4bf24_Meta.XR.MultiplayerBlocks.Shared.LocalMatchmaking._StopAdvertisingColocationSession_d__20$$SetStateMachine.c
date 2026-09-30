/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$SetStateMachine
ENTRY_POINT: 05b4bf24
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__SetStateMachine
               (long param_1)

{
  ushort *in_x9;
  
  if ((*in_x9 & 1) == 0) {
    param_1 = FUN_0367c9fc(param_1);
  }
  if ((*(ushort *)(**(long **)(param_1 + 0xc0) + 0x135) & 1) == 0) {
    FUN_0367c9fc(**(long **)(param_1 + 0xc0));
  }
  FUN_03156018();
  return;
}


