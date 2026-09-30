/*
FUNCTION_NAME: Unity.Properties.Internal.ReadOnlyAdapterCollection.Enumerator$$set_Current
ENTRY_POINT: 0366f26c
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

void Unity_Properties_Internal_ReadOnlyAdapterCollection_Enumerator__set_Current(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long *unaff_x23;
  long *in_stack_00000008;
  ulong in_stack_00000010;
  long *in_stack_00000018;
  uint uStack0000000000000020;
  long *in_stack_00000028;
  char cStack000000000000003c;
  
  uVar5 = FUN_03684c88();
  uVar9 = **(undefined8 **)(*unaff_x23 + 0xb8);
  cStack000000000000003c = '\0';
  FUN_027e0bd8(uVar9,&stack0x0000003c,0);
  puVar3 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
  ;
  puVar2 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<bool>,_RechargeATM_<AddPlayerCoinsAsync>d__18>__
  ;
  puVar1 = PTR_DAT_03cbf360;
  iVar10 = 0;
  do {
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar7 = *unaff_x23;
    }
    lVar8 = **(long **)(lVar7 + 0xb8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar8 + 0x18) <= iVar10) {
LAB_0366f364:
      in_stack_00000018 = (long *)0x0;
      in_stack_00000010 = (ulong)uVar5;
      plVar6 = (long *)FUN_027b6f80(0);
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)puVar1;
        if (*plVar6 != lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
        if (*plVar6 != lVar7) {
          in_stack_00000018 = plVar6;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
      }
      in_stack_00000018 = plVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000018,plVar6);
      lVar7 = *unaff_x23;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *unaff_x23;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      _uStack0000000000000020 = in_stack_00000010;
      in_stack_00000028 = in_stack_00000018;
      FUN_02217ecc(**(long **)(lVar7 + 0xb8),iVar10,&stack0x00000020,*(undefined8 *)puVar2);
      goto LAB_0366f4b4;
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar8 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar8,iVar10,&stack0x00000020,*(undefined8 *)puVar3);
    if ((int)uVar5 < (int)uStack0000000000000020) goto LAB_0366f364;
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *unaff_x23;
    }
    if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(**(long **)(lVar7 + 0xb8),iVar10,&stack0x00000020,*(undefined8 *)puVar3);
    if (uVar5 == uStack0000000000000020) {
      lVar7 = *unaff_x23;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *unaff_x23;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(**(long **)(lVar7 + 0xb8),iVar10,&stack0x00000020,*(undefined8 *)puVar3);
      uVar4 = _uStack0000000000000020;
      in_stack_00000008 = in_stack_00000028;
      plVar6 = (long *)FUN_027b6f80();
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)puVar1;
        if (*plVar6 != lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
        if (*plVar6 != lVar7) {
          in_stack_00000008 = plVar6;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
      }
      in_stack_00000008 = plVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000008,plVar6);
      if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000028 = in_stack_00000008;
      _uStack0000000000000020 = uVar4;
      FUN_02215b6c(**(long **)(*unaff_x23 + 0xb8),iVar10,&stack0x00000020,
                   *(undefined8 *)
                    Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
                  );
LAB_0366f4b4:
      if (cStack000000000000003c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
      }
      return;
    }
    iVar10 = iVar10 + 1;
  } while( true );
}


