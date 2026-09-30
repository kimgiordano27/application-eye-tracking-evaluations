/*
FUNCTION_NAME: FUN_0366f600
ENTRY_POINT: 0366f600
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0366f8b0) */

void FUN_0366f600(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long *local_58;
  int local_50 [2];
  long *plStack_48;
  char local_34 [4];
  
  puVar1 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_ErrorInfo>>_get_Task__
  ;
  if ((DAT_04130e62 & 1) == 0) {
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_ErrorInfo>>_get_Task__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeATM_<AddPlayerCoinsAsync>d__18>__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
                );
    FUN_01ab69ac(PTR_DAT_03cbf360);
    DAT_04130e62 = 1;
  }
  local_58 = (long *)0x0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar3 = FUN_03684c88(param_1);
  uVar7 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar7,local_34,0);
  puVar2 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
  ;
  iVar8 = 0;
  while( true ) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    lVar6 = **(long **)(lVar4 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar6 + 0x18) <= iVar8) goto LAB_0366f870;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar6,iVar8,local_50,*(undefined8 *)puVar2);
    if (iVar3 < local_50[0]) goto LAB_0366f870;
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(**(long **)(lVar4 + 0xb8),iVar8,local_50,*(undefined8 *)puVar2);
    if (iVar3 == local_50[0]) break;
    iVar8 = iVar8 + 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar1;
  }
  if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02215a88(**(long **)(lVar4 + 0xb8),iVar8,local_50,*(undefined8 *)puVar2);
  local_58 = plStack_48;
  plVar5 = (long *)FUN_027b7178(plStack_48,param_1,0);
  if (plVar5 != (long *)0x0) {
    if (*plVar5 != *(long *)PTR_DAT_03cbf360) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar5);
    }
    if (*plVar5 != *(long *)PTR_DAT_03cbf360) {
      local_58 = plVar5;
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar5);
    }
  }
  local_58 = plVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_58,plVar5);
  if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plStack_48 = local_58;
  FUN_02215b6c(**(long **)(*(long *)puVar1 + 0xb8),iVar8,local_50,
               *(undefined8 *)
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
              );
  if (local_58 == (long *)0x0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_022190f4(**(long **)(lVar4 + 0xb8),iVar8,
                 *(undefined8 *)
                  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
                );
  }
LAB_0366f870:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return;
}


