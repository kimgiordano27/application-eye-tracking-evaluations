/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$Fusion.INetworkRunnerCallbacks.OnConnectRequest
ENTRY_POINT: 052f62b4
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__Fusion_INetworkRunnerCallbacks_OnConnectRequest
               (float param_1,undefined8 param_2)

{
  long unaff_x19;
  long *unaff_x20;
  long lVar1;
  
  FUN_0529a348(-param_1,param_2,0);
  lVar1 = *unaff_x20;
  if (lVar1 != 0) {
    FUN_06744020(lVar1,0);
    FUN_0528b5b0(0);
    FUN_06745500(lVar1,0);
    FUN_0529a8b8(*(undefined4 *)(unaff_x19 + 0xb8),*(undefined4 *)(unaff_x19 + 0xb4),DAT_013f6c2c,
                 *(undefined8 *)(unaff_x19 + 0xd8),0);
    lVar1 = FUN_066c67b0();
    if (lVar1 != 0) {
      FUN_066d4bec(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


