/*
FUNCTION_NAME: Unity.Properties.Internal.ReadOnlyAdapterCollection.Enumerator$$MoveNext
ENTRY_POINT: 0366f274
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

void Unity_Properties_Internal_ReadOnlyAdapterCollection_Enumerator__MoveNext
               (long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long *unaff_x23;
  long *in_stack_00000008;
  ulong in_stack_00000010;
  long *in_stack_00000018;
  uint uStack0000000000000020;
  long *in_stack_00000028;
  char cStack000000000000003c;
  
  uVar8 = **(undefined8 **)(param_1 + 0xb8);
  cStack000000000000003c = '\0';
  FUN_027e0bd8(uVar8,&stack0x0000003c,0);
  puVar3 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
  ;
  puVar2 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<bool>,_RechargeATM_<AddPlayerCoinsAsync>d__18>__
  ;
  puVar1 = PTR_DAT_03cbf360;
  iVar9 = 0;
  do {
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar6);
      lVar6 = *unaff_x23;
    }
    lVar7 = **(long **)(lVar6 + 0xb8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar7 + 0x18) <= iVar9) {
LAB_0366f364:
      in_stack_00000018 = (long *)0x0;
      in_stack_00000010 = (ulong)param_2;
      plVar5 = (long *)FUN_027b6f80(0);
      if (plVar5 != (long *)0x0) {
        lVar6 = *(long *)puVar1;
        if (*plVar5 != lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar5);
        }
        if (*plVar5 != lVar6) {
          in_stack_00000018 = plVar5;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar5);
        }
      }
      in_stack_00000018 = plVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000018,plVar5);
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *unaff_x23;
      }
      if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      _uStack0000000000000020 = in_stack_00000010;
      in_stack_00000028 = in_stack_00000018;
      FUN_02217ecc(**(long **)(lVar6 + 0xb8),iVar9,&stack0x00000020,*(undefined8 *)puVar2);
      goto LAB_0366f4b4;
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar6);
      lVar7 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar7,iVar9,&stack0x00000020,*(undefined8 *)puVar3);
    if ((int)param_2 < (int)uStack0000000000000020) goto LAB_0366f364;
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x23;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(**(long **)(lVar6 + 0xb8),iVar9,&stack0x00000020,*(undefined8 *)puVar3);
    if (param_2 == uStack0000000000000020) {
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *unaff_x23;
      }
      if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(**(long **)(lVar6 + 0xb8),iVar9,&stack0x00000020,*(undefined8 *)puVar3);
      uVar4 = _uStack0000000000000020;
      in_stack_00000008 = in_stack_00000028;
      plVar5 = (long *)FUN_027b6f80();
      if (plVar5 != (long *)0x0) {
        lVar6 = *(long *)puVar1;
        if (*plVar5 != lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar5);
        }
        if (*plVar5 != lVar6) {
          in_stack_00000008 = plVar5;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar5);
        }
      }
      in_stack_00000008 = plVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000008,plVar5);
      if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000028 = in_stack_00000008;
      _uStack0000000000000020 = uVar4;
      FUN_02215b6c(**(long **)(*unaff_x23 + 0xb8),iVar9,&stack0x00000020,
                   *(undefined8 *)
                    Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
                  );
LAB_0366f4b4:
      if (cStack000000000000003c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
      }
      return;
    }
    iVar9 = iVar9 + 1;
  } while( true );
}


