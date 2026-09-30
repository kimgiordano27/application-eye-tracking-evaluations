/*
FUNCTION_NAME: OVRPlugin.OVRP_1_113_0$$.cctor
ENTRY_POINT: 063bfdc8
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


void OVRPlugin_OVRP_1_113_0___cctor(undefined8 param_1,undefined8 param_2)

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
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined8 uVar7;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  while( true ) {
    uVar4 = FUN_0625ad04(param_1,param_2,0);
    if ((uVar4 & 1) == 0) {
      thunk_FUN_037a15ac(PTR_DAT_07d864a0);
      uVar7 = thunk_FUN_037788cc();
      uVar2 = thunk_FUN_037a15ac(PTR_DAT_07db7778);
      FUN_0627a0a0(uVar7,uVar2,0);
      uVar2 = thunk_FUN_037a15ac(PTR_DAT_07db7780);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar7,uVar2);
    }
    in_stack_000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = (long *)0x0;
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(unaff_x21);
    }
    puVar5 = (undefined8 *)thunk_FUN_03778a20(unaff_x21);
    uVar7 = *puVar5;
    in_stack_000000a0 = unaff_x22;
    thunk_FUN_037aeb94(&stack0x000000a0,unaff_x22);
    in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
    in_stack_000000b0 = (long *)0x0;
    in_stack_000000c0 = uVar7;
    thunk_FUN_037aeb94();
    in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) break;
    lVar6 = unaff_x19 + (int)unaff_w24 * unaff_x28;
    *(undefined8 *)(lVar6 + 0x40) = in_stack_000000c0;
    *(ulong *)(lVar6 + 0x28) = in_stack_000000a8;
    *(undefined8 *)(lVar6 + 0x20) = in_stack_000000a0;
    *(ulong *)(lVar6 + 0x38) = in_stack_000000b8;
    *(long **)(lVar6 + 0x30) = in_stack_000000b0;
    thunk_FUN_037aeb94(lVar6 + 0x20,0);
    while( true ) {
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        uVar4 = FUN_05e3d424(&stack0x000000d0,*unaff_x25);
        unaff_x21 = in_stack_000000e8;
        unaff_x22 = in_stack_000000e0;
        if ((uVar4 & 1) == 0) {
          FUN_05e3d544(&stack0x000000d0,*(undefined8 *)PTR_DAT_07d91a60);
          return;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar7 = thunk_FUN_0374b7cc(in_stack_000000e8,0);
        lVar6 = *(long *)(unaff_x26 + 0x48);
        if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar2 = FUN_062519f8(lVar6 + 0x20,0);
        uVar4 = FUN_0625ad04(uVar7,uVar2,0);
        if ((uVar4 & 1) == 0) break;
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(unaff_x21);
        }
        puVar3 = (undefined4 *)thunk_FUN_03778a20(unaff_x21);
        uVar1 = *puVar3;
        in_stack_000000a0 = unaff_x22;
        thunk_FUN_037aeb94(&stack0x000000a0,unaff_x22);
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
        lVar6 = unaff_x19 + (int)unaff_w24 * unaff_x28;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *(ulong *)(lVar6 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar6 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar6 + 0x38) = in_stack_000000b8;
        *(long **)(lVar6 + 0x30) = in_stack_000000b0;
        thunk_FUN_037aeb94(lVar6 + 0x20,0);
      }
      uVar7 = thunk_FUN_0374b7cc(unaff_x21,0);
      lVar6 = *(long *)(unaff_x26 + 0x90);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar2 = FUN_062519f8(lVar6 + 0x20,0);
      uVar4 = FUN_0625ad04(uVar7,uVar2,0);
      if ((uVar4 & 1) == 0) break;
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*unaff_x21 != *(long *)(unaff_x26 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(unaff_x21);
      }
      in_stack_000000a0 = unaff_x22;
      thunk_FUN_037aeb94(&stack0x000000a0,unaff_x22);
      in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
      in_stack_000000b0 = unaff_x21;
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
      lVar6 = unaff_x19 + (int)unaff_w24 * unaff_x28;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(ulong *)(lVar6 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar6 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar6 + 0x38) = in_stack_000000b8;
      *(long **)(lVar6 + 0x30) = in_stack_000000b0;
      thunk_FUN_037aeb94(lVar6 + 0x20,0);
    }
    param_1 = thunk_FUN_0374b7cc(unaff_x21,0);
    lVar6 = *(long *)(unaff_x26 + 0x80);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    param_2 = FUN_062519f8(lVar6 + 0x20,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


