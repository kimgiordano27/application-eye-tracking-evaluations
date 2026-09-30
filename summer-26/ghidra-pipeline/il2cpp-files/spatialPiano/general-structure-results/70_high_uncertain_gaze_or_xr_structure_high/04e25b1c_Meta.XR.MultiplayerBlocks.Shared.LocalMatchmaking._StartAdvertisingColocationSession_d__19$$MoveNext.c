/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$MoveNext
ENTRY_POINT: 04e25b1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__MoveNext
               (long param_1,long param_2)

{
  bool bVar1;
  
  if (*(byte *)(param_1 + 0x130) < *(byte *)(param_2 + 0x130)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) ==
            param_2;
  }
  return bVar1;
}


