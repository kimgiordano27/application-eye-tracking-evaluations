/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcAudioSampleRate
ENTRY_POINT: 05774dc0
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcAudioSampleRate(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar7;
  uint unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    uVar4 = FUN_05619d34(unaff_x23,param_1,0);
    if ((uVar4 & 1) == 0) {
      uVar2 = thunk_FUN_02ebbee0(unaff_x21,0);
      uVar7 = *(undefined8 *)PTR_DAT_06d040f8;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar7 = FUN_056109c0(uVar7,0);
      uVar4 = FUN_05619d34(uVar2,uVar7,0);
      if ((uVar4 & 1) == 0) {
        thunk_FUN_02f239f0(PTR_DAT_06d021d0);
        uVar2 = thunk_FUN_02ef1808();
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d5a0f8);
        FUN_05639edc(uVar2,uVar7,0);
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d5a100);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar2,uVar7);
      }
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)PTR_DAT_06d04108 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(unaff_x21);
      }
      puVar5 = (undefined8 *)thunk_FUN_02ef195c(unaff_x21);
      uVar2 = *puVar5;
      in_stack_000000a0 = unaff_x22;
      thunk_FUN_02f411dc(&stack0x000000a0,unaff_x22);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
      in_stack_000000b0 = (long *)0x0;
      in_stack_000000c0 = uVar2;
      thunk_FUN_02f411dc();
      in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar6 = unaff_x19 + (int)unaff_w25 * unaff_x29;
      *(undefined8 *)(lVar6 + 0x40) = in_stack_000000c0;
      *(ulong *)(lVar6 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar6 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar6 + 0x38) = in_stack_000000b8;
      *(long **)(lVar6 + 0x30) = in_stack_000000b0;
      thunk_FUN_02f411dc(lVar6 + 0x20,0);
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*unaff_x21 != *(long *)PTR_DAT_06d02350) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(unaff_x21);
      }
      in_stack_000000a0 = unaff_x22;
      thunk_FUN_02f411dc(&stack0x000000a0,unaff_x22);
      in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
      in_stack_000000b0 = unaff_x21;
      thunk_FUN_02f411dc();
      in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
      in_stack_000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar6 = unaff_x19 + (int)unaff_w25 * unaff_x29;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(ulong *)(lVar6 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar6 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar6 + 0x38) = in_stack_000000b8;
      *(long **)(lVar6 + 0x30) = in_stack_000000b0;
      thunk_FUN_02f411dc(lVar6 + 0x20,0);
    }
    while( true ) {
      unaff_w25 = unaff_w25 + 1;
      uVar4 = FUN_04e98e80(&stack0x000000d0,*unaff_x26);
      unaff_x21 = in_stack_000000e8;
      unaff_x22 = in_stack_000000e0;
      if ((uVar4 & 1) == 0) {
        FUN_04e98fa0(&stack0x000000d0,*(undefined8 *)PTR_DAT_06d59c88);
        return;
      }
      if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar2 = thunk_FUN_02ebbee0(in_stack_000000e8,0);
      uVar7 = *unaff_x27;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar7 = FUN_056109c0(uVar7,0);
      uVar4 = FUN_05619d34(uVar2,uVar7,0);
      if ((uVar4 & 1) == 0) break;
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(unaff_x21);
      }
      puVar3 = (undefined4 *)thunk_FUN_02ef195c(unaff_x21);
      uVar1 = *puVar3;
      in_stack_000000a0 = unaff_x22;
      thunk_FUN_02f411dc(&stack0x000000a0,unaff_x22);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_02f411dc();
      in_stack_000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar6 = unaff_x19 + (int)unaff_w25 * unaff_x29;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(ulong *)(lVar6 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar6 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar6 + 0x38) = in_stack_000000b8;
      *(long **)(lVar6 + 0x30) = in_stack_000000b0;
      thunk_FUN_02f411dc(lVar6 + 0x20,0);
    }
    unaff_x23 = thunk_FUN_02ebbee0(unaff_x21,0);
    uVar2 = *(undefined8 *)PTR_DAT_06d02548;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    param_1 = FUN_056109c0(uVar2,0);
  } while( true );
}


