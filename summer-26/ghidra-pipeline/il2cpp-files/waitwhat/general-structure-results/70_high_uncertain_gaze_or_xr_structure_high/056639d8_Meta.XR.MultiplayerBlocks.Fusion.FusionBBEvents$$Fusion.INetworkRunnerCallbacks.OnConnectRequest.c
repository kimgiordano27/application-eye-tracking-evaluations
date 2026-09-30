/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$Fusion.INetworkRunnerCallbacks.OnConnectRequest
ENTRY_POINT: 056639d8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__Fusion_INetworkRunnerCallbacks_OnConnectRequest
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               int param_6)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = (param_5 - param_6) + 1;
  if (iVar2 <= (int)param_5) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar1 = param_2 + (long)(int)param_5 * 0x10;
      uVar3 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),param_3
                         ,param_4,*(undefined8 *)(*param_1 + 0x1c0));
      if ((uVar3 & 1) != 0) {
        return param_5;
      }
      param_5 = param_5 - 1;
    } while (iVar2 <= (int)param_5);
  }
  return 0xffffffff;
}


