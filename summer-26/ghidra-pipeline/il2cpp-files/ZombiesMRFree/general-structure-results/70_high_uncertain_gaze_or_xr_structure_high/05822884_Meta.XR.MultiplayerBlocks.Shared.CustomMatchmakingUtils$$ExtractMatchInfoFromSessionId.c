/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$ExtractMatchInfoFromSessionId
ENTRY_POINT: 05822884
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__ExtractMatchInfoFromSessionId
               (undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined1 in_ZR;
  int in_w8;
  uint in_w9;
  int *in_x10;
  long in_x11;
  
  while( true ) {
    if (((bool)in_ZR) && (*in_x10 == in_w8)) {
      return param_4;
    }
    param_4 = param_4 + 1;
    in_x11 = in_x11 + -1;
    if (in_x11 == 0) {
      return 0xffffffff;
    }
    if (in_w9 <= param_4) break;
    in_ZR = in_x10[1] == param_3;
    in_x10 = in_x10 + 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


