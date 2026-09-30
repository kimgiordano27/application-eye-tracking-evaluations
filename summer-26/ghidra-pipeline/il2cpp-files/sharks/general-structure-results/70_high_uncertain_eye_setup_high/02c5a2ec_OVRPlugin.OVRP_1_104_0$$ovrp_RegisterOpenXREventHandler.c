/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_RegisterOpenXREventHandler
ENTRY_POINT: 02c5a2ec
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_RegisterOpenXREventHandler(void)

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
    uVar4 = FUN_02358864(&stack0x00000030,*unaff_x26);
    uVar3 = uStack0000000000000048;
    uVar5 = uStack0000000000000040;
    if ((uVar4 & 1) == 0) {
      FUN_02358984(&stack0x00000030,*unaff_x25);
      puVar2 = PTR_DAT_037f90f8;
      FUN_02c28224((long)unaff_w21,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*unaff_x24);
      }
      FUN_02c5a4d0();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      free(unaff_x20);
      if (unaff_x19 != 0) {
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar4 = 0;
          uVar6 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5b0();
            }
            __ptr = *(void **)(unaff_x19 + 0x20 + uVar4 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            free(__ptr);
            uVar6 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar5 = FUN_02c5910c(uVar5);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)(uVar7 - 1) * 8 + 0x20) = uVar5;
    uVar5 = FUN_02c5910c(uVar3);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar7) break;
    lVar1 = (long)(int)uVar7;
    uVar7 = uVar7 + 2;
    *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


