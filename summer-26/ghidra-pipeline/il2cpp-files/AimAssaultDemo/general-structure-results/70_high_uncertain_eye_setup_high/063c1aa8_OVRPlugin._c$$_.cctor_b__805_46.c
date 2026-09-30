/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__805_46
ENTRY_POINT: 063c1aa8
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


void OVRPlugin_<>c__<_cctor>b__805_46(void)

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
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_05b0fb30();
                    /* try { // try from 063c1ab8 to 064c1abb has its CatchHandler @ 063c1ad0 */
  uVar7 = 1;
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000028;
  while( true ) {
    uVar4 = FUN_05e3d424(&stack0x00000030,*unaff_x26);
    uVar3 = in_stack_00000048;
    uVar5 = in_stack_00000040;
                    /* catch() { ... } // from try @ 063c1ab8 with catch @ 063c1ad0 */
    if ((uVar4 & 1) == 0) {
      FUN_05e3d544(&stack0x00000030,*unaff_x25);
      puVar2 = PTR_DAT_07d889a0;
      FUN_0629d2ec((long)unaff_w21,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03798b70(*unaff_x24);
      }
      FUN_063c1c90();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      free(unaff_x20);
      if (unaff_x19 != 0) {
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar4 = 0;
          uVar6 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            __ptr = *(void **)(unaff_x19 + 0x20 + uVar4 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            free(__ptr);
            uVar6 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
                    /* try { // try from 063c1adc to 064c1aef has its CatchHandler @ 063c1b08 */
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar5 = FUN_063c08cc(uVar5);
                    /* try { // try from 063c1af0 to 064c1aff has its CatchHandler @ 063c1978 */
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
                    /* try { // try from 063c1b00 to 064c1b07 has its CatchHandler @ 063c1b08 */
    if (*(uint *)(unaff_x19 + 0x18) <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063c1a94 with catch @ 063c1b08
                       catch(type#2 @ 00000000) { ... } // from try @ 063c1adc with catch @ 063c1b08
                       catch(type#2 @ 00000000) { ... } // from try @ 063c1b00 with catch @ 063c1b08
                        */
    *(undefined8 *)(unaff_x19 + (long)(int)(uVar7 - 1) * 8 + 0x20) = uVar5;
    uVar5 = FUN_063c08cc(uVar3);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar7) break;
    lVar1 = (long)(int)uVar7;
    uVar7 = uVar7 + 2;
    *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


