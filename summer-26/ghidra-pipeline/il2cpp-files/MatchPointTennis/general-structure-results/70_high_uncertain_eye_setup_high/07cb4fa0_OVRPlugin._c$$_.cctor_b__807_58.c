/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_58
ENTRY_POINT: 07cb4fa0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__807_58(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uVar7 = 1;
  uStack0000000000000038 = in_stack_00000010;
  uStack0000000000000030 = in_stack_00000008;
  uStack0000000000000048 = in_stack_00000020;
  uStack0000000000000040 = in_stack_00000018;
  uStack0000000000000050 = in_stack_00000028;
  while( true ) {
    uVar4 = FUN_052607f8(&stack0x00000030,*unaff_x26);
    uVar3 = uStack0000000000000048;
    uVar5 = uStack0000000000000040;
    if ((uVar4 & 1) == 0) {
      FUN_05260918(&stack0x00000030,*unaff_x25);
      puVar2 = PTR_DAT_09f255a8;
      FUN_07a9893c((long)unaff_w21,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*unaff_x24);
      }
      FUN_07cb5184();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      free(unaff_x20);
      if (unaff_x19 != 0) {
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar4 = 0;
          uVar6 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            __ptr = *(void **)(unaff_x19 + 0x20 + uVar4 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            free(__ptr);
            uVar6 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar5 = FUN_07cb3dc0(uVar5);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)(uVar7 - 1) * 8 + 0x20) = uVar5;
    uVar5 = FUN_07cb3dc0(uVar3);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar7) break;
    lVar1 = (long)(int)uVar7;
    uVar7 = uVar7 + 2;
    *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


