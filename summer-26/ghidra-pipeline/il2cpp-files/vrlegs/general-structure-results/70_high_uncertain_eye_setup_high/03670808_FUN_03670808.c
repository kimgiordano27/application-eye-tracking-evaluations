/*
FUNCTION_NAME: FUN_03670808
ENTRY_POINT: 03670808
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03670948) */

void FUN_03670808(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_40 [8];
  long local_38;
  char local_24 [4];
  
  puVar1 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_ErrorInfo>>_get_Task__
  ;
  if ((DAT_04130e63 & 1) == 0) {
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_ErrorInfo>>_get_Task__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeATM_<AddPlayerCoinsAsync>d__18>__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
                );
    DAT_04130e63 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar5,local_24,0);
  puVar2 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
  ;
  iVar6 = 0;
  while( true ) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    lVar4 = **(long **)(lVar3 + 0xb8);
    if (lVar4 == 0) break;
    if (*(int *)(lVar4 + 0x18) <= iVar6) {
      if (local_24[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
      }
      return;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar4,iVar6,auStack_40,*(undefined8 *)puVar2);
    if (local_38 != 0) {
      (**(code **)(local_38 + 0x18))
                (*(undefined8 *)(local_38 + 0x40),*(undefined8 *)(local_38 + 0x28));
    }
    iVar6 = iVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


