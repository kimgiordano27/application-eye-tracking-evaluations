/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$EncodeMatchInfoToSessionId
ENTRY_POINT: 04e229d0
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


uint Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__EncodeMatchInfoToSessionId
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5 [16],undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uStack0000000000000004 = param_2;
  uStack0000000000000008 = param_3;
  uStack000000000000000c = param_4;
  uVar2 = FUN_050e7ab4();
  if ((((uVar2 & 1) == 0) || (uVar2 = FUN_050e7ab4(param_6,&stack0x00000004,0), (uVar2 & 1) == 0))
     || (uVar2 = FUN_050e7ab4(param_7,&stack0x00000008,0), (uVar2 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_050e7ab4(param_8,&stack0x0000000c,0);
  }
  return uVar1 & 1;
}


