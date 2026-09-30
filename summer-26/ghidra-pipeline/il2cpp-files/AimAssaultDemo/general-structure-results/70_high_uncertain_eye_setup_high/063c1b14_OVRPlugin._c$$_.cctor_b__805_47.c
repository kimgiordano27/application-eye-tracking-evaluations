/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__805_47
ENTRY_POINT: 063c1b14
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__805_47(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)unaff_w27 * 8 + 0x20) = param_1;
    uVar3 = FUN_05e3d424(&stack0x00000030,*unaff_x26);
    uVar2 = in_stack_00000048;
    uVar4 = in_stack_00000040;
    if ((uVar3 & 1) == 0) break;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_063c08cc(uVar4);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)(unaff_w27 + 1) * 8 + 0x20) = uVar4;
    param_1 = FUN_063c08cc(uVar2);
    unaff_w27 = unaff_w27 + 2;
  }
  FUN_05e3d544(&stack0x00000030,*unaff_x25);
  puVar1 = PTR_DAT_07d889a0;
  FUN_0629d2ec((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x24);
  }
  FUN_063c1c90();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  free(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar3 = 0;
      uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar3 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        free(__ptr);
        uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


