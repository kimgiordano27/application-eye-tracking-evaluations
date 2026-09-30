/*
FUNCTION_NAME: Unity.Properties.Internal.ReadOnlyAdapterCollection$$GetEnumerator
ENTRY_POINT: 0366f1d8
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

void Unity_Properties_Internal_ReadOnlyAdapterCollection__GetEnumerator(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long *in_stack_00000008;
  ulong in_stack_00000010;
  long *in_stack_00000018;
  uint uStack0000000000000020;
  long *in_stack_00000028;
  char cStack000000000000003c;
  
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
  in_stack_00000010 = 0;
  in_stack_00000018 = (long *)0x0;
  in_stack_00000008 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_03684c88(param_1);
  uVar10 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  cStack000000000000003c = '\0';
  FUN_027e0bd8(uVar10,&stack0x0000003c,0);
  puVar4 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
  ;
  puVar3 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<bool>,_RechargeATM_<AddPlayerCoinsAsync>d__18>__
  ;
  puVar1 = PTR_DAT_03cbf360;
  iVar11 = 0;
  do {
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar8);
      lVar8 = *(long *)puVar2;
    }
    lVar9 = **(long **)(lVar8 + 0xb8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar9 + 0x18) <= iVar11) {
LAB_0366f364:
      in_stack_00000018 = (long *)0x0;
      in_stack_00000010 = (ulong)uVar6;
      plVar7 = (long *)FUN_027b6f80(0,param_1,0);
      if (plVar7 != (long *)0x0) {
        lVar8 = *(long *)puVar1;
        if (*plVar7 != lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar7);
        }
        if (*plVar7 != lVar8) {
          in_stack_00000018 = plVar7;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar7);
        }
      }
      in_stack_00000018 = plVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000018,plVar7);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *(long *)puVar2;
      }
      if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      _uStack0000000000000020 = in_stack_00000010;
      in_stack_00000028 = in_stack_00000018;
      FUN_02217ecc(**(long **)(lVar8 + 0xb8),iVar11,&stack0x00000020,*(undefined8 *)puVar3);
      goto LAB_0366f4b4;
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar8);
      lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar9,iVar11,&stack0x00000020,*(undefined8 *)puVar4);
    if ((int)uVar6 < (int)uStack0000000000000020) goto LAB_0366f364;
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar2;
    }
    if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(**(long **)(lVar8 + 0xb8),iVar11,&stack0x00000020,*(undefined8 *)puVar4);
    if (uVar6 == uStack0000000000000020) {
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *(long *)puVar2;
      }
      if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(**(long **)(lVar8 + 0xb8),iVar11,&stack0x00000020,*(undefined8 *)puVar4);
      uVar5 = _uStack0000000000000020;
      in_stack_00000008 = in_stack_00000028;
      plVar7 = (long *)FUN_027b6f80(in_stack_00000028,param_1,0);
      if (plVar7 != (long *)0x0) {
        lVar8 = *(long *)puVar1;
        if (*plVar7 != lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar7);
        }
        if (*plVar7 != lVar8) {
          in_stack_00000008 = plVar7;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar7);
        }
      }
      in_stack_00000008 = plVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000008,plVar7);
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000028 = in_stack_00000008;
      _uStack0000000000000020 = uVar5;
      FUN_02215b6c(**(long **)(*(long *)puVar2 + 0xb8),iVar11,&stack0x00000020,
                   *(undefined8 *)
                    Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
                  );
LAB_0366f4b4:
      if (cStack000000000000003c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
      }
      return;
    }
    iVar11 = iVar11 + 1;
  } while( true );
}


