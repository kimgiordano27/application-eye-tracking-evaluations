/*
FUNCTION_NAME: OVRPlugin.OVRP_1_109_0$$.cctor
ENTRY_POINT: 063bfba8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_109_0___cctor(undefined8 param_1,undefined8 param_2,undefined1 param_3 [16])

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x19;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined4 unaff_w27;
  long lVar9;
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
  uStack00000000000000d0 = param_2;
  uStack00000000000000f0 = param_1;
  do {
    uVar3 = FUN_05e3d424(&stack0x000000d0,*unaff_x25);
    plVar2 = plStack00000000000000e8;
    uVar8 = uStack00000000000000e0;
    if ((uVar3 & 1) == 0) {
      FUN_05e3d544(&stack0x000000d0,*(undefined8 *)PTR_DAT_07d91a60);
      return;
    }
    if (plStack00000000000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar4 = thunk_FUN_0374b7cc(plStack00000000000000e8,0);
    lVar9 = *(long *)(unaff_x26 + 0x48);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar5 = FUN_062519f8(lVar9 + 0x20,0);
    uVar3 = FUN_0625ad04(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = thunk_FUN_0374b7cc(plVar2,0);
      lVar9 = *(long *)(unaff_x26 + 0x90);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar5 = FUN_062519f8(lVar9 + 0x20,0);
      uVar3 = FUN_0625ad04(uVar4,uVar5,0);
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_0374b7cc(plVar2,0);
        lVar9 = *(long *)(unaff_x26 + 0x80);
        if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar5 = FUN_062519f8(lVar9 + 0x20,0);
        uVar3 = FUN_0625ad04(uVar4,uVar5,0);
        if ((uVar3 & 1) == 0) {
          thunk_FUN_037a15ac(PTR_DAT_07d864a0);
          uVar8 = thunk_FUN_037788cc();
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db7778);
          FUN_0627a0a0(uVar8,uVar4,0);
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db7780);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar8,uVar4);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar2);
        }
        puVar7 = (undefined8 *)thunk_FUN_03778a20(plVar2);
        uVar4 = *puVar7;
        in_stack_000000a0 = uVar8;
        thunk_FUN_037aeb94(&stack0x000000a0,uVar8);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar4;
        thunk_FUN_037aeb94();
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar9 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
        *(undefined8 *)(lVar9 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar9 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar9 + 0x38) = in_stack_000000b8;
        *(long **)(lVar9 + 0x30) = in_stack_000000b0;
        thunk_FUN_037aeb94(lVar9 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar2 != *(long *)(unaff_x26 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar2);
        }
        in_stack_000000a0 = uVar8;
        thunk_FUN_037aeb94(&stack0x000000a0,uVar8);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar2;
        thunk_FUN_037aeb94();
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        in_stack_000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar9 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
        *(undefined8 *)(lVar9 + 0x40) = 0;
        *(ulong *)(lVar9 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar9 + 0x38) = in_stack_000000b8;
        *(long **)(lVar9 + 0x30) = in_stack_000000b0;
        thunk_FUN_037aeb94(lVar9 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar2);
      }
      puVar6 = (undefined4 *)thunk_FUN_03778a20(plVar2);
      uVar1 = *puVar6;
      in_stack_000000a0 = uVar8;
      thunk_FUN_037aeb94(&stack0x000000a0,uVar8);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,unaff_w27);
      in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_037aeb94();
      in_stack_000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      lVar9 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(ulong *)(lVar9 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar9 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar9 + 0x38) = in_stack_000000b8;
      *(long **)(lVar9 + 0x30) = in_stack_000000b0;
      thunk_FUN_037aeb94(lVar9 + 0x20,0);
    }
    unaff_w24 = unaff_w24 + 1;
  } while( true );
}


