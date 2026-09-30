/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_AreControllerDrivenHandPosesNatural
ENTRY_POINT: 04f963ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_87_0__ovrp_AreControllerDrivenHandPosesNatural
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 *unaff_x22;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  long in_stack_00000048;
  
  do {
                    /* catch() { ... } // from try @ 04f963d0 with catch @ 04f963ec */
                    /* try { // try from 04f963f0 to 050963f7 has its CatchHandler @ 04f96448 */
                    /* try { // try from 04f963f8 to 05096417 has its CatchHandler @ 04f960fc */
    FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(param_1 + 0x20),param_3,0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9621c with catch @ 04f963fc
                        */
    uStack0000000000000028 = in_stack_00000000._12_4_;
    in_stack_00000020 = in_stack_00000000._4_8_;
    uStack0000000000000034 = in_stack_00000018;
    uStack000000000000002c = uStack0000000000000010;
    uStack0000000000000030 = uStack0000000000000014;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    /* try { // try from 04f96418 to 0509641b has its CatchHandler @ 04f96434 */
      thunk_FUN_02b9ad44();
    }
                    /* try { // try from 04f9641c to 05096437 has its CatchHandler @ 04f960fc */
    uVar1 = FUN_04f964a8(unaff_x20 & 0xffffffff,&stack0x00000048);
    if (unaff_x19 == 0) {
LAB_04f96464:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
                    /* catch() { ... } // from try @ 04f96418 with catch @ 04f96434 */
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_04f964a4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
                    /* try { // try from 04f96438 to 0509643f has its CatchHandler @ 04f96448 */
    *unaff_x22 = uVar1;
                    /* try { // try from 04f96440 to 0509644b has its CatchHandler @ 04f960fc */
    unaff_x22[8] = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f963f0 with catch @ 04f96448
                       catch(type#2 @ 00000000) { ... } // from try @ 04f96438 with catch @ 04f96448
                        */
                    /* try { // try from 04f9644c to 05096557 has its CatchHandler @ 04f9644c
                       catch() { ... } // from try @ 04f9644c with catch @ 04f9644c
                       catch() { ... } // from try @ 04f965e8 with catch @ 04f9644c
                       catch() { ... } // from try @ 04f966b8 with catch @ 04f9644c
                       catch() { ... } // from try @ 04f966f4 with catch @ 04f9644c
                       catch() { ... } // from try @ 04f96728 with catch @ 04f9644c
                       catch() { ... } // from try @ 04f96748 with catch @ 04f9644c
                       catch() { ... } // from try @ 04f9676c with catch @ 04f9644c
                       catch() { ... } // from try @ 04f96790 with catch @ 04f9644c */
    unaff_x20 = unaff_x20 + 1;
    *(ulong *)(unaff_x22 + 3) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(unaff_x22 + 1) = in_stack_00000020;
    *(undefined8 *)(unaff_x22 + 6) = uStack0000000000000034;
    *(ulong *)(unaff_x22 + 4) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    if (in_stack_00000048 == 0) goto LAB_04f96464;
    if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)unaff_x20) {
      lVar2 = thunk_FUN_02b79644(*unaff_x21);
      FUN_04f965b8();
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = unaff_x19;
        thunk_FUN_02bb0e9c();
        return lVar2;
      }
      goto LAB_04f96464;
    }
    if (*(uint *)(in_stack_00000048 + 0x18) <= unaff_x20) goto LAB_04f964a4;
    param_1 = in_stack_00000048 + unaff_x20 * 8;
    param_3 = 1;
    unaff_x22 = unaff_x22 + 9;
  } while( true );
}


