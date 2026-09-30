/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$MoveNext
ENTRY_POINT: 04e26bb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__MoveNext
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  
  uStack0000000000000008 = param_3[1];
  uStack0000000000000000 = *param_3;
  uStack0000000000000010 = *(undefined4 *)(param_3 + 2);
  uVar1 = FUN_0625cbc4(param_2);
  return uVar1 & 1;
}


