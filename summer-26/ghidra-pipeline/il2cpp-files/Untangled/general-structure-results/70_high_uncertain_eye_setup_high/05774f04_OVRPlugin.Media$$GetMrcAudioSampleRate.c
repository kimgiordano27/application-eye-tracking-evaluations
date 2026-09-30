/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcAudioSampleRate
ENTRY_POINT: 05774f04
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


void OVRPlugin_Media__GetMrcAudioSampleRate(void)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 uVar9;
  uint unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 unaff_d8;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *plStack00000000000000b0;
  ulong in_stack_000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
    plStack00000000000000b0 = (long *)0x0;
    uStack00000000000000c0 = unaff_d8;
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
    lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
    *(undefined8 *)(lVar8 + 0x40) = uStack00000000000000c0;
    *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
    *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
    *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
    *(long **)(lVar8 + 0x30) = plStack00000000000000b0;
    thunk_FUN_02f411dc(lVar8 + 0x20,0);
    while( true ) {
      while( true ) {
        unaff_w25 = unaff_w25 + 1;
        uVar3 = FUN_04e98e80(&stack0x000000d0,*unaff_x26);
        plVar2 = in_stack_000000e8;
        uVar7 = in_stack_000000e0;
        if ((uVar3 & 1) == 0) {
          FUN_04e98fa0(&stack0x000000d0,*(undefined8 *)PTR_DAT_06d59c88);
          return;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar4 = thunk_FUN_02ebbee0(in_stack_000000e8,0);
        uVar9 = *unaff_x27;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar9 = FUN_056109c0(uVar9,0);
        uVar3 = FUN_05619d34(uVar4,uVar9,0);
        if ((uVar3 & 1) == 0) break;
        uStack00000000000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        plStack00000000000000b0 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar2);
        }
        puVar5 = (undefined4 *)thunk_FUN_02ef195c(plVar2);
        uVar1 = *puVar5;
        in_stack_000000a0 = uVar7;
        thunk_FUN_02f411dc(&stack0x000000a0,uVar7);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
        in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
        plStack00000000000000b0 = (long *)0x0;
        thunk_FUN_02f411dc();
        uStack00000000000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
        *(long **)(lVar8 + 0x30) = plStack00000000000000b0;
        thunk_FUN_02f411dc(lVar8 + 0x20,0);
      }
      uVar4 = thunk_FUN_02ebbee0(plVar2,0);
      uVar9 = *(undefined8 *)PTR_DAT_06d02548;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_056109c0(uVar9,0);
      uVar3 = FUN_05619d34(uVar4,uVar9,0);
      if ((uVar3 & 1) == 0) break;
      uStack00000000000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      plStack00000000000000b0 = (long *)0x0;
      if (*plVar2 != *(long *)PTR_DAT_06d02350) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar2);
      }
      in_stack_000000a0 = uVar7;
      thunk_FUN_02f411dc(&stack0x000000a0,uVar7);
      in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
      plStack00000000000000b0 = plVar2;
      thunk_FUN_02f411dc();
      in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
      uStack00000000000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
      *(long **)(lVar8 + 0x30) = plStack00000000000000b0;
      thunk_FUN_02f411dc(lVar8 + 0x20,0);
    }
    uVar4 = thunk_FUN_02ebbee0(plVar2,0);
    uVar9 = *(undefined8 *)PTR_DAT_06d040f8;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_056109c0(uVar9,0);
    uVar3 = FUN_05619d34(uVar4,uVar9,0);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_02f239f0(PTR_DAT_06d021d0);
      uVar7 = thunk_FUN_02ef1808();
      uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d5a0f8);
      FUN_05639edc(uVar7,uVar4,0);
      uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d5a100);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar7,uVar4);
    }
    uStack00000000000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    plStack00000000000000b0 = (long *)0x0;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_06d04108 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar2);
    }
    puVar6 = (undefined8 *)thunk_FUN_02ef195c(plVar2);
    unaff_d8 = *puVar6;
    in_stack_000000a0 = uVar7;
    thunk_FUN_02f411dc(&stack0x000000a0,uVar7);
  } while( true );
}


