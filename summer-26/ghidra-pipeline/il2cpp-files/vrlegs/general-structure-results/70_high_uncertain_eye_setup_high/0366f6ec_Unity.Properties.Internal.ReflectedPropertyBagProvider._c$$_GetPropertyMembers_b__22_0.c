/*
FUNCTION_NAME: Unity.Properties.Internal.ReflectedPropertyBagProvider.<>c$$<GetPropertyMembers>b__22_0
ENTRY_POINT: 0366f6ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0366f8b0) */

void Unity_Properties_Internal_ReflectedPropertyBagProvider_<>c__<GetPropertyMembers>b__22_0
               (long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int in_w9;
  int unaff_w20;
  int unaff_w22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *in_stack_00000008;
  int iStack0000000000000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000028;
  
  do {
    if (in_w9 <= unaff_w20) {
LAB_0366f870:
      if (in_stack_00000028._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      return;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = **(long **)(*unaff_x23 + 0xb8);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(param_1,unaff_w20,&stack0x00000010,*unaff_x24);
    if (unaff_w22 < iStack0000000000000010) goto LAB_0366f870;
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x23;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(**(long **)(lVar2 + 0xb8),unaff_w20,&stack0x00000010,*unaff_x24);
    if (unaff_w22 == iStack0000000000000010) {
      lVar2 = *unaff_x23;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *unaff_x23;
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(**(long **)(lVar2 + 0xb8),unaff_w20,&stack0x00000010,*unaff_x24);
      uVar1 = _iStack0000000000000010;
      in_stack_00000008 = in_stack_00000018;
      plVar3 = (long *)FUN_027b7178();
      if (plVar3 != (long *)0x0) {
        if (*plVar3 != *(long *)PTR_DAT_03cbf360) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar3);
        }
        if (*plVar3 != *(long *)PTR_DAT_03cbf360) {
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
      in_stack_00000018 = in_stack_00000008;
      _iStack0000000000000010 = uVar1;
      FUN_02215b6c(**(long **)(*unaff_x23 + 0xb8),unaff_w20,&stack0x00000010,
                   *(undefined8 *)
                    Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeATM_<AddPlayerCoinsAsync>d__18>__
                  );
      if (in_stack_00000008 == (long *)0x0) {
        lVar2 = *unaff_x23;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar2 = *unaff_x23;
        }
        if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_022190f4(**(long **)(lVar2 + 0xb8),unaff_w20,
                     *(undefined8 *)
                      Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<ValueTuple<bool,_int>>_Start<RechargeBundleBoard_<ProcessBundleSKUAsync>d__19>__
                    );
      }
      goto LAB_0366f870;
    }
    unaff_w20 = unaff_w20 + 1;
    param_2 = *unaff_x23;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_2 = *unaff_x23;
    }
    param_1 = **(long **)(param_2 + 0xb8);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_w9 = *(int *)(param_1 + 0x18);
  } while( true );
}


