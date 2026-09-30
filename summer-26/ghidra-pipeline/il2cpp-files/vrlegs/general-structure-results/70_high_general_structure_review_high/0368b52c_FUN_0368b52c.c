/*
FUNCTION_NAME: FUN_0368b52c
ENTRY_POINT: 0368b52c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_0368b52c(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  if ((DAT_04131160 & 1) == 0) {
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpResponseMessage>,_CoinChallengeClient_<SubmitCoinChallengeAsync>d__26>__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_AwaitUnsafeOnCompleted<UniTask_Awaiter,_CoinChallengeClient_<SubmitCoinChallengeAsync>d__26>__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_Start<CoinChallengeClient_<SubmitChallengeAsync>d__23>__
                );
    FUN_01ab69ac(PTR_DAT_03cbdf20);
    FUN_01ab69ac(
                Unity_Physics_Systems_ColliderBlobCleanupSystem___codegen__OnCreate_00000A99_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_Start<CoinChallengeClient_<SubmitCoinChallengeAsync>d__26>__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_Create__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_SetException__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_SetResult__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_SetStateMachine__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_get_Task__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_CoinChlgPostResult,_ErrorInfo>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<ErrorInfo>,_CoinChallengeClient_<GetChallengesAsync>d__25>__
                );
    DAT_04131160 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar7 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(
                              Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<OpenLootBoxResult,_ErrorInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpResponseMessage>,_VirtualPurchaseLootBox_<OpenLootBoxAsync>d__34>__
                              );
    FUN_026a44fc(uVar7,uVar6,0);
  }
  else {
    if ((param_2 != 0) || (param_3 != 0)) {
      if (param_2 != 0) {
        iVar5 = FUN_022158c0(param_2,*(undefined8 *)
                                      Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpResponseMessage>,_CoinChallengeClient_<SubmitCoinChallengeAsync>d__26>__
                            );
        iVar9 = *(int *)(param_1 + 0x18);
        if (iVar5 < iVar9) {
          FUN_022158dc(param_2,iVar9,
                       *(undefined8 *)
                        Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_Create__
                      );
          iVar9 = *(int *)(param_1 + 0x18);
        }
        if (*(int *)(param_2 + 0x18) < iVar9) {
          FUN_01fbd1d0(param_2,iVar9,
                       *(undefined8 *)
                        Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_get_Task__
                      );
        }
      }
      puVar4 = 
      Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_SetStateMachine__
      ;
      puVar3 = 
      Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_SetResult__
      ;
      puVar2 = 
      Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_SetException__
      ;
      if (param_3 != 0) {
        iVar5 = FUN_022158c0(param_3,*(undefined8 *)
                                      Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_AwaitUnsafeOnCompleted<UniTask_Awaiter,_CoinChallengeClient_<SubmitCoinChallengeAsync>d__26>__
                            );
        iVar9 = *(int *)(param_1 + 0x18);
        if (iVar5 < iVar9) {
          FUN_022158dc(param_3,iVar9,
                       *(undefined8 *)
                        Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_ChallengeItem,_ErrorInfo>>_Start<CoinChallengeClient_<SubmitCoinChallengeAsync>d__26>__
                      );
          iVar9 = *(int *)(param_1 + 0x18);
        }
        if (*(int *)(param_3 + 0x18) < iVar9) {
          FUN_01fbd1d0(param_3,iVar9,
                       *(undefined8 *)
                        Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_CoinChlgPostResult,_ErrorInfo>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<ErrorInfo>,_CoinChallengeClient_<GetChallengesAsync>d__25>__
                      );
        }
      }
      uVar6 = FUN_01fbd154(param_1,*(undefined8 *)puVar3);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar7 = FUN_01fbd154(param_2,*(undefined8 *)puVar2);
      uVar8 = FUN_01fbd154(param_3,*(undefined8 *)puVar4);
      if (DAT_04131168 == (code *)0x0) {
        DAT_04131168 = (code *)FUN_01ab6968(
                                           "UnityEngine.LightProbes::CalculateInterpolatedLightAndOcclusionProbes_Internal(UnityEngine.Vector3[],System.Int32,UnityEngine.Rendering.SphericalHarmonicsL2[],UnityEngine.Vector4[])"
                                           );
      }
                    /* WARNING: Could not recover jumptable at 0x0368b73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_04131168)(uVar6,uVar1,uVar7,uVar8);
      return;
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar7 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(
                              Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<UsePromoCodeTaskResult,_ErrorInfo>>_get_Task__
                              );
    FUN_026b274c(uVar7,uVar6,0);
  }
  uVar6 = thunk_FUN_01a6ca08(
                            Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<CoinChallengeClient_CoinChlgPostResult,_ErrorInfo>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinChallengeClient_CoinChlgPostResult>,_CoinChallengeClient_<GetChallengesAsync>d__25>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar7,uVar6);
}


