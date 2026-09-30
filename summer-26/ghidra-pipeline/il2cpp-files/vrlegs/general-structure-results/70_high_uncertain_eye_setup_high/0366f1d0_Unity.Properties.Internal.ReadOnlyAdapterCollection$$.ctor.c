/*
FUNCTION_NAME: Unity.Properties.Internal.ReadOnlyAdapterCollection$$.ctor
ENTRY_POINT: 0366f1d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0366f4f8) */

void Unity_Properties_Internal_ReadOnlyAdapterCollection___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long *local_78;
  ulong local_70;
  long *local_68;
  ulong local_60;
  long *plStack_58;
  char local_44 [4];
  
  puVar2 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_ErrorInfo>>_get_Task__
  ;
  if ((DAT_04130e61 & 1) == 0) {
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_ErrorInfo>>_get_Task__
                );
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<bool>,_RechargeATM_<AddPlayerCoinsAsync>d__18>__
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
    DAT_04130e61 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_03684c88(param_1);
  uVar9 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar9,local_44,0);
  puVar4 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
  ;
  puVar3 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<bool>,_RechargeATM_<AddPlayerCoinsAsync>d__18>__
  ;
  puVar1 = PTR_DAT_03cbf360;
  iVar10 = 0;
  do {
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar7 = *(long *)puVar2;
    }
    lVar8 = **(long **)(lVar7 + 0xb8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar8 + 0x18) <= iVar10) {
LAB_0366f364:
      local_68 = (long *)0x0;
      local_70 = (ulong)uVar5;
      plVar6 = (long *)FUN_027b6f80(0,param_1,0);
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)puVar1;
        if (*plVar6 != lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
        if (*plVar6 != lVar7) {
          local_68 = plVar6;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
      }
      local_68 = plVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_68,plVar6);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *(long *)puVar2;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_60 = local_70;
      plStack_58 = local_68;
      FUN_02217ecc(**(long **)(lVar7 + 0xb8),iVar10,&local_60,*(undefined8 *)puVar3);
      goto LAB_0366f4b4;
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar8,iVar10,&local_60,*(undefined8 *)puVar4);
    if ((int)uVar5 < (int)(uint)local_60) goto LAB_0366f364;
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar2;
    }
    if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(**(long **)(lVar7 + 0xb8),iVar10,&local_60,*(undefined8 *)puVar4);
    if (uVar5 == (uint)local_60) {
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *(long *)puVar2;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(**(long **)(lVar7 + 0xb8),iVar10,&local_60,*(undefined8 *)puVar4);
      local_78 = plStack_58;
      plVar6 = (long *)FUN_027b6f80(plStack_58,param_1,0);
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)puVar1;
        if (*plVar6 != lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
        if (*plVar6 != lVar7) {
          local_78 = plVar6;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
      }
      local_78 = plVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_78,plVar6);
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plStack_58 = local_78;
      FUN_02215b6c(**(long **)(*(long *)puVar2 + 0xb8),iVar10,&local_60,
                   *(undefined8 *)
                    Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
                  );
LAB_0366f4b4:
      if (local_44[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
      }
      return;
    }
    iVar10 = iVar10 + 1;
  } while( true );
}


