/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetSkeleton3
ENTRY_POINT: 090d6650
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_92_0__ovrp_GetSkeleton3(long param_1)

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
    FUN_09038efc(&stack0x00000000 + 4,*(undefined8 *)(param_1 + unaff_x20 * 8 + 0x20),1,0);
    uStack0000000000000028 = in_stack_00000000._12_4_;
    in_stack_00000020 = in_stack_00000000._4_8_;
    uStack0000000000000034 = in_stack_00000018;
    uStack000000000000002c = uStack0000000000000010;
    uStack0000000000000030 = uStack0000000000000014;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
                    /* try { // try from 090d6690 to 091d68e3 has its CatchHandler @ 090d6690
                       catch() { ... } // from try @ 090d6690 with catch @ 090d6690
                       catch() { ... } // from try @ 090d697c with catch @ 090d6690
                       catch() { ... } // from try @ 090d69e0 with catch @ 090d6690
                       catch() { ... } // from try @ 090d6a0c with catch @ 090d6690 */
    uVar1 = FUN_090d6714(unaff_x20 & 0xffffffff,&stack0x00000048);
    if (unaff_x19 == 0) {
LAB_090d66d0:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) break;
    *unaff_x22 = uVar1;
    unaff_x22[8] = 0;
    unaff_x20 = unaff_x20 + 1;
    *(ulong *)(unaff_x22 + 3) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(unaff_x22 + 1) = in_stack_00000020;
    *(undefined8 *)(unaff_x22 + 6) = uStack0000000000000034;
    *(ulong *)(unaff_x22 + 4) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    if (in_stack_00000048 == 0) goto LAB_090d66d0;
    if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)unaff_x20) {
      lVar2 = thunk_FUN_04983f60(*unaff_x21);
      FUN_090d6824();
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = unaff_x19;
        thunk_FUN_049ee3d8();
        return lVar2;
      }
      goto LAB_090d66d0;
    }
    param_1 = in_stack_00000048;
    unaff_x22 = unaff_x22 + 9;
  } while (unaff_x20 < *(uint *)(in_stack_00000048 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


