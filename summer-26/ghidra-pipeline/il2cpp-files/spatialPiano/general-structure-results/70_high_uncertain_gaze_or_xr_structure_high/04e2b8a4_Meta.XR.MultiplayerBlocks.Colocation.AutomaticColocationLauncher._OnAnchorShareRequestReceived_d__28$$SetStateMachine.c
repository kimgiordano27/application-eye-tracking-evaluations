/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 04e2b8a4
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


uint Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
               (float param_1,float param_2,float param_3,undefined8 param_4,long param_5,
               uint param_6)

{
  long lVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int in_w8;
  
  if (in_ZR || in_NG != in_OV) {
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar1 = param_5 + 0x20;
    do {
      if (*(uint *)(param_5 + 0x18) <= param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (((*(float *)(lVar1 + (long)(int)param_6 * 0xc) == param_1) &&
          (*(float *)(lVar1 + (long)(int)param_6 * 0xc + 4) == param_2)) &&
         (*(float *)(lVar1 + (long)(int)param_6 * 0xc + 8) == param_3)) {
        return param_6;
      }
      param_6 = param_6 - 1;
    } while (in_w8 <= (int)param_6);
  }
  return 0xffffffff;
}


