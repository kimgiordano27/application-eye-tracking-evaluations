/*
FUNCTION_NAME: OVRPlugin$$set_cpuLevel
ENTRY_POINT: 076c58a4
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__set_cpuLevel
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                undefined8 *param_4,undefined1 *param_5)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float unaff_s8;
  undefined8 uStack0000000000000000;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined1 in_stack_00000060 [16];
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_000000b8;
  
  uVar5 = param_3._8_8_;
  uStack0000000000000020 = param_3._0_8_;
  uStack0000000000000054 = param_2._8_8_;
  uVar4 = param_2._0_8_;
  while( true ) {
    uStack0000000000000034 = *(undefined8 *)(unaff_x20 + 0x14);
    uStack000000000000004c = (undefined4)uVar4;
    uStack0000000000000050 = (undefined4)((ulong)uVar4 >> 0x20);
                    /* try { // try from 076c58ac to 077c58b7 has its CatchHandler @ 076c5a00 */
    uStack0000000000000028 = (undefined4)uVar5;
    uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
    uStack0000000000000000 = in_stack_00000060._4_8_;
    uStack0000000000000014 = in_stack_00000078;
    uStack000000000000000c = in_stack_00000070;
    fVar3 = (float)FUN_076c5464(param_4,param_5);
                    /* try { // try from 076c58cc to 077c58db has its CatchHandler @ 076c5a14 */
    unaff_s8 = unaff_s8 + fVar3;
    uVar2 = unaff_x24 - 1;
    unaff_x22 = unaff_x22 + unaff_x23;
    if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -2) <= (long)uVar2) {
                    /* try { // try from 076c58f0 to 077c58f3 has its CatchHandler @ 076c59fc */
                    /* try { // try from 076c58f4 to 077c590b has its CatchHandler @ 076c5a18 */
      return unaff_s8;
    }
    if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= uVar2) break;
    if (in_stack_000000b8 == 0) {
LAB_076c590c:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar1 = unaff_x19 + uVar2 * 4;
    FUN_076f102c(&stack0x0000009c,in_stack_000000b8,*(undefined4 *)(lVar1 + 0x20),0);
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x24) break;
    if (in_stack_000000b8 == 0) goto LAB_076c590c;
    FUN_076f102c(&stack0x00000080,in_stack_000000b8,*(undefined4 *)(lVar1 + 0x24),0);
    unaff_x24 = unaff_x24 + 1;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x24) break;
    if (in_stack_000000b8 == 0) goto LAB_076c590c;
    FUN_076f102c(&stack0x00000060 + 4,in_stack_000000b8,
                 *(undefined4 *)(unaff_x19 + (unaff_x22 >> 0x1e) + 0x20),0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x1c);
    uStack0000000000000054 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    param_4 = &stack0x00000040;
    param_5 = (undefined1 *)&stack0x00000020;
    in_stack_00000048 = (undefined4)*(undefined8 *)(unaff_x20 + 0x24);
    uStack0000000000000020 = in_stack_00000080;
    uVar5 = in_stack_00000088;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 076c5910 to 077c591b has its CatchHandler @ 076c5a08 */
  FUN_04031894();
}


