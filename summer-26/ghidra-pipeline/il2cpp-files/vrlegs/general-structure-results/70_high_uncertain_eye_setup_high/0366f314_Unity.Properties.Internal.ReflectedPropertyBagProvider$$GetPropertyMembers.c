/*
FUNCTION_NAME: Unity.Properties.Internal.ReflectedPropertyBagProvider$$GetPropertyMembers
ENTRY_POINT: 0366f314
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

void Unity_Properties_Internal_ReflectedPropertyBagProvider__GetPropertyMembers(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int unaff_w20;
  uint unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *in_stack_00000008;
  ulong in_stack_00000010;
  long *in_stack_00000018;
  uint uStack0000000000000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000038;
  
  while ((int)uStack0000000000000020 <= (int)unaff_w22) {
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x23;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(**(long **)(lVar2 + 0xb8),unaff_w20,&stack0x00000020,*unaff_x26);
    if (unaff_w22 == uStack0000000000000020) {
      lVar2 = *unaff_x23;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *unaff_x23;
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(**(long **)(lVar2 + 0xb8),unaff_w20,&stack0x00000020,*unaff_x26);
      uVar1 = _uStack0000000000000020;
      in_stack_00000008 = in_stack_00000028;
      plVar3 = (long *)FUN_027b6f80();
      if (plVar3 != (long *)0x0) {
        if (*plVar3 != *unaff_x24) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar3);
        }
        if (*plVar3 != *unaff_x24) {
          in_stack_00000008 = plVar3;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar3);
        }
      }
      in_stack_00000008 = plVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000008,plVar3);
      if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000028 = in_stack_00000008;
      _uStack0000000000000020 = uVar1;
      FUN_02215b6c(**(long **)(*unaff_x23 + 0xb8),unaff_w20,&stack0x00000020,
                   *(undefined8 *)
                    Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
                  );
      goto LAB_0366f4b4;
    }
    unaff_w20 = unaff_w20 + 1;
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar2);
      lVar2 = *unaff_x23;
    }
    lVar4 = **(long **)(lVar2 + 0xb8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar4 + 0x18) <= unaff_w20) break;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar2);
      lVar4 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar4,unaff_w20,&stack0x00000020,*unaff_x26);
  }
  in_stack_00000018 = (long *)0x0;
  in_stack_00000010 = (ulong)unaff_w22;
  plVar3 = (long *)FUN_027b6f80(0);
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != *unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar3);
    }
    if (*plVar3 != *unaff_x24) {
      in_stack_00000018 = plVar3;
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar3);
    }
  }
  in_stack_00000018 = plVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000018,plVar3);
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x23;
  }
  if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  _uStack0000000000000020 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000018;
  FUN_02217ecc(**(long **)(lVar2 + 0xb8),unaff_w20,&stack0x00000020,*unaff_x25);
LAB_0366f4b4:
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


