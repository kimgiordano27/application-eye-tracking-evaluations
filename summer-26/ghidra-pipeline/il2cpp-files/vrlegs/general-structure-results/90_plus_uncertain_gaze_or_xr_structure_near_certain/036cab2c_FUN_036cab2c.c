/*
FUNCTION_NAME: FUN_036cab2c
ENTRY_POINT: 036cab2c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 FUN_036cab2c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  puVar1 = 
  Method_Cysharp_Threading_Tasks_UniTask_Awaiter<CoinChallengeClient_CoinChlgPostResult>_get_IsCompleted__
  ;
  if ((DAT_04133686 & 1) == 0) {
    FUN_01ab69ac(Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_UniTask_Awaiter<CoinChallengeClient_CoinChlgPostResult>_get_IsCompleted__
                );
    DAT_04133686 = 1;
  }
  puVar2 = Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = FUN_01f2f5e4(param_1,*(undefined8 *)puVar2);
  uVar3 = 0;
  if (lVar4 != 0) {
    uVar3 = *(undefined4 *)(lVar4 + 0x10);
  }
  return uVar3;
}


