/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameSize
ENTRY_POINT: 05774c5c
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


void OVRPlugin_Media__GetMrcFrameSize(undefined8 param_1,undefined8 param_2,undefined1 param_3 [16])

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *puVar12;
  long unaff_x28;
  long *plVar13;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000e0;
  long *plStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  
  plStack00000000000000e8 = param_3._8_8_;
  uStack00000000000000e0 = param_3._0_8_;
  puVar12 = *(undefined8 **)(unaff_x27 + 0x130);
  plVar13 = *(long **)(unaff_x28 + 0xeb0);
  uVar11 = 0;
  lVar1 = unaff_x21 + 0x10;
                    /* try { // try from 05774c70 to 05874c87 has its CatchHandler @ 05774c8c */
  uStack00000000000000d0 = param_2;
  uStack00000000000000f0 = param_1;
  do {
    uVar4 = FUN_04e98e80(&stack0x000000d0,*unaff_x26);
    plVar3 = plStack00000000000000e8;
    uVar8 = uStack00000000000000e0;
    if ((uVar4 & 1) == 0) {
      FUN_04e98fa0(&stack0x000000d0,*(undefined8 *)PTR_DAT_06d59c88);
      return;
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05774c70 with catch @ 05774c8c
                        */
    if (plStack00000000000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = thunk_FUN_02ebbee0(plStack00000000000000e8,0);
    uVar10 = *puVar12;
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar10 = FUN_056109c0(uVar10,0);
    uVar4 = FUN_05619d34(uVar5,uVar10,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = thunk_FUN_02ebbee0(plVar3,0);
      uVar10 = *(undefined8 *)PTR_DAT_06d02548;
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar10 = FUN_056109c0(uVar10,0);
      uVar4 = FUN_05619d34(uVar5,uVar10,0);
      if ((uVar4 & 1) == 0) {
        uVar5 = thunk_FUN_02ebbee0(plVar3,0);
        uVar10 = *(undefined8 *)PTR_DAT_06d040f8;
        if (*(int *)(*plVar13 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar10 = FUN_056109c0(uVar10,0);
        uVar4 = FUN_05619d34(uVar5,uVar10,0);
        if ((uVar4 & 1) == 0) {
          thunk_FUN_02f239f0(PTR_DAT_06d021d0);
          uVar8 = thunk_FUN_02ef1808();
          uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d5a0f8);
          FUN_05639edc(uVar8,uVar5,0);
          uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d5a100);
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar8,uVar5);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar3 + 0x40) != *(long *)(*(long *)PTR_DAT_06d04108 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar3);
        }
        puVar7 = (undefined8 *)thunk_FUN_02ef195c(plVar3);
        uVar5 = *puVar7;
        in_stack_000000a0 = uVar8;
        thunk_FUN_02f411dc(&stack0x000000a0,uVar8);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar5;
        thunk_FUN_02f411dc(lVar1,0);
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar9 = unaff_x19 + (long)(int)uVar11 * 0x28;
        *(undefined8 *)(lVar9 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar9 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar9 + 0x38) = in_stack_000000b8;
        *(long **)(lVar9 + 0x30) = in_stack_000000b0;
        thunk_FUN_02f411dc(lVar9 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar3 != *(long *)PTR_DAT_06d02350) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar3);
        }
        in_stack_000000a0 = uVar8;
        thunk_FUN_02f411dc(&stack0x000000a0,uVar8);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar3;
        thunk_FUN_02f411dc(lVar1,plVar3);
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        in_stack_000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar9 = unaff_x19 + (long)(int)uVar11 * 0x28;
        *(undefined8 *)(lVar9 + 0x40) = 0;
        *(ulong *)(lVar9 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar9 + 0x38) = in_stack_000000b8;
        *(long **)(lVar9 + 0x30) = in_stack_000000b0;
        thunk_FUN_02f411dc(lVar9 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar3 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar3);
      }
      puVar6 = (undefined4 *)thunk_FUN_02ef195c(plVar3);
      uVar2 = *puVar6;
      in_stack_000000a0 = uVar8;
      thunk_FUN_02f411dc(&stack0x000000a0,uVar8);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar2);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_02f411dc(lVar1,0);
      in_stack_000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar9 = unaff_x19 + (long)(int)uVar11 * 0x28;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(ulong *)(lVar9 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar9 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar9 + 0x38) = in_stack_000000b8;
      *(long **)(lVar9 + 0x30) = in_stack_000000b0;
      thunk_FUN_02f411dc(lVar9 + 0x20,0);
    }
    uVar11 = uVar11 + 1;
  } while( true );
}


