/*
FUNCTION_NAME: FUN_036cabac
ENTRY_POINT: 036cabac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_036cabac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__;
  puVar3 = Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__;
  puVar2 = 
  Method_Cysharp_Threading_Tasks_UniTask_Awaiter<CoinChallengeClient_CoinChlgPostResult>_get_IsCompleted__
  ;
  puVar1 = 
  Method_Cysharp_Threading_Tasks_UniTask_Awaiter<CoinChallengeClient_ChallengeItem>_get_IsCompleted__
  ;
  if ((DAT_04133687 & 1) == 0) {
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_UniTask_Awaiter<CoinChallengeClient_CoinChlgPostResult>_get_IsCompleted__
                );
    FUN_01ab69ac(Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
    FUN_01ab69ac(Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__);
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_UniTask_Awaiter<CoinChallengeClient_ChallengeItem>_get_IsCompleted__
                );
    DAT_04133687 = 1;
  }
  uVar5 = FUN_01ab6a94(*(undefined8 *)puVar3,1);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            (*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
  uVar5 = FUN_01ab6a94(*(undefined8 *)puVar4,1);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar6 = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,uVar5);
  uVar5 = FUN_01ab6a94(*(undefined8 *)puVar1,1);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar6 = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,uVar5);
  return;
}


