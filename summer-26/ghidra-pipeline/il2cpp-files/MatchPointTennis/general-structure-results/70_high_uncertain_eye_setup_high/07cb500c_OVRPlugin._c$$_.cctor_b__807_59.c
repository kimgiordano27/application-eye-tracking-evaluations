/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_59
ENTRY_POINT: 07cb500c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__807_59(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint in_w8;
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
    if (in_w8 <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)unaff_w27 * 8 + 0x20) = param_1;
    uVar3 = FUN_052607f8(&stack0x00000030,*unaff_x26);
    uVar2 = in_stack_00000048;
    uVar4 = in_stack_00000040;
    if ((uVar3 & 1) == 0) break;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = FUN_07cb3dc0(uVar4);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)(unaff_w27 + 1) * 8 + 0x20) = uVar4;
    param_1 = FUN_07cb3dc0(uVar2);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    unaff_w27 = unaff_w27 + 2;
  }
  FUN_05260918(&stack0x00000030,*unaff_x25);
  puVar1 = PTR_DAT_09f255a8;
  FUN_07a9893c((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x24);
  }
  FUN_07cb5184();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  free(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar3 = 0;
      uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar3 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        free(__ptr);
        uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


