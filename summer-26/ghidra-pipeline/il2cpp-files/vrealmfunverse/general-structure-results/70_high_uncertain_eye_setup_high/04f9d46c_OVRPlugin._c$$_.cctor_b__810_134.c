/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_134
ENTRY_POINT: 04f9d46c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_134(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  undefined8 unaff_x22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    uVar3 = FUN_04f9c23c(unaff_x22);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)unaff_w27 * 8 + 0x20) = uVar3;
    uVar2 = FUN_047e368c(&stack0x00000030,*unaff_x26);
    unaff_x22 = in_stack_00000048;
    uVar3 = in_stack_00000040;
    if ((uVar2 & 1) == 0) break;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    param_2 = FUN_04f9c23c(uVar3);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    param_1 = unaff_x19 + (long)(int)(unaff_w27 + 1) * 8;
    unaff_w27 = unaff_w27 + 2;
  }
  FUN_047e37ac(&stack0x00000030,*unaff_x25);
  puVar1 = PTR_DAT_0631e258;
  FUN_04dd513c((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*unaff_x24);
  }
  FUN_04f9d5e0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  free(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar2 = 0;
      uVar4 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar2 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        free(__ptr);
        uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


