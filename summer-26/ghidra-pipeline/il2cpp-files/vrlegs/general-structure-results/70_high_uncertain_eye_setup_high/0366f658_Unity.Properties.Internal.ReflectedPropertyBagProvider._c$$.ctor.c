/*
FUNCTION_NAME: Unity.Properties.Internal.ReflectedPropertyBagProvider.<>c$$.ctor
ENTRY_POINT: 0366f658
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

void Unity_Properties_Internal_ReflectedPropertyBagProvider_<>c___ctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  int iVar8;
  long *unaff_x23;
  long *in_stack_00000008;
  int iStack0000000000000010;
  long *in_stack_00000018;
  char cStack000000000000002c;
  
  FUN_01ab69ac();
  FUN_01ab69ac(
              Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
              );
  FUN_01ab69ac(PTR_DAT_03cbf360);
  *(undefined1 *)(unaff_x19 + 0xe62) = 1;
  in_stack_00000008 = (long *)0x0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar3 = FUN_03684c88();
  uVar7 = **(undefined8 **)(*unaff_x23 + 0xb8);
  cStack000000000000002c = '\0';
  FUN_027e0bd8(uVar7,&stack0x0000002c,0);
  puVar1 = 
  Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_AwaitUnsafeOnCompleted<UniTask_Awaiter<CoinDataResult>,_RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
  ;
  iVar8 = 0;
  while( true ) {
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *unaff_x23;
    }
    lVar6 = **(long **)(lVar4 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar6 + 0x18) <= iVar8) goto LAB_0366f870;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar6,iVar8,&stack0x00000010,*(undefined8 *)puVar1);
    if (iVar3 < iStack0000000000000010) goto LAB_0366f870;
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *unaff_x23;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(**(long **)(lVar4 + 0xb8),iVar8,&stack0x00000010,*(undefined8 *)puVar1);
    if (iVar3 == iStack0000000000000010) break;
    iVar8 = iVar8 + 1;
  }
  lVar4 = *unaff_x23;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *unaff_x23;
  }
  if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02215a88(**(long **)(lVar4 + 0xb8),iVar8,&stack0x00000010,*(undefined8 *)puVar1);
  uVar2 = _iStack0000000000000010;
  in_stack_00000008 = in_stack_00000018;
  plVar5 = (long *)FUN_027b7178();
  if (plVar5 != (long *)0x0) {
    if (*plVar5 != *(long *)PTR_DAT_03cbf360) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar5);
    }
    if (*plVar5 != *(long *)PTR_DAT_03cbf360) {
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
  in_stack_00000018 = in_stack_00000008;
  _iStack0000000000000010 = uVar2;
  FUN_02215b6c(**(long **)(*unaff_x23 + 0xb8),iVar8,&stack0x00000010,
               *(undefined8 *)
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
              );
  if (in_stack_00000008 == (long *)0x0) {
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *unaff_x23;
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
  if (cStack000000000000002c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return;
}


