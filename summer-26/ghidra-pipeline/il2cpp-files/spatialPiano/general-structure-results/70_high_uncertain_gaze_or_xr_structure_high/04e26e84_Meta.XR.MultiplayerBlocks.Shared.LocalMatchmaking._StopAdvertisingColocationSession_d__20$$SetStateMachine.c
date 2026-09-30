/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$SetStateMachine
ENTRY_POINT: 04e26e84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__SetStateMachine
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  ulong uVar1;
  int in_w8;
  long lVar2;
  long lVar3;
  
  if (!in_ZR && in_NG == in_OV) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = (long)in_w8 - (long)(int)param_4;
    lVar2 = param_2 + (long)(int)param_4 * 0x18 + 0x20;
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar1 = FUN_0626a108(lVar2);
      if ((uVar1 & 1) != 0) {
        return param_4;
      }
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + 0x18;
      param_4 = param_4 + 1;
    } while (lVar3 != 0);
  }
  return 0xffffffff;
}


