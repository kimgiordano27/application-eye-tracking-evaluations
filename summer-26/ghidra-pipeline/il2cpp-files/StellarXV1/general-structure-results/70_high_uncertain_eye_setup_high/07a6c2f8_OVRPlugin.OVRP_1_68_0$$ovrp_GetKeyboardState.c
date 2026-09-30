/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_GetKeyboardState
ENTRY_POINT: 07a6c2f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_GetKeyboardState
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long lVar8;
  int unaff_w29;
  long *plVar9;
  ulong uVar10;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  uVar10 = param_3._8_8_;
  uVar7 = param_3._0_8_;
  uVar2 = param_2._8_8_;
  plVar9 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(param_1 + 0x40) = in_stack_00000030;
    *(ulong *)(param_1 + 0x28) = uVar10;
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    *(ulong *)(param_1 + 0x38) = uVar2;
    *(long **)(param_1 + 0x30) = plVar9;
    thunk_FUN_040ec700(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    while( true ) {
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        uVar2 = FUN_05385f24(&stack0x00000040,*unaff_x26);
        plVar9 = in_stack_00000058;
        uVar7 = in_stack_00000050;
        if ((uVar2 & 1) == 0) {
          FUN_05386044(&stack0x00000040,*(undefined8 *)PTR_DAT_09287440);
          return;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar3 = thunk_FUN_0408781c(in_stack_00000058,0);
        lVar8 = *(long *)(unaff_x27 + 0x48);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar4 = FUN_0768890c(lVar8 + 0x20,0);
        uVar2 = FUN_07691f40(uVar3,uVar4,0);
        if ((uVar2 & 1) == 0) break;
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar9);
        }
        puVar5 = (undefined4 *)thunk_FUN_040b5044(plVar9);
        uVar1 = *puVar5;
        in_stack_00000010 = uVar7;
        thunk_FUN_040ec700(&stack0x00000010,uVar7);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar1);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
        in_stack_00000020 = (long *)0x0;
        thunk_FUN_040ec700(unaff_x23 + 0x10,0);
        in_stack_00000030 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar8 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(ulong *)(lVar8 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar8 + 0x38) = in_stack_00000028;
        *(long **)(lVar8 + 0x30) = in_stack_00000020;
        thunk_FUN_040ec700(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      uVar3 = thunk_FUN_0408781c(plVar9,0);
      lVar8 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_0768890c(lVar8 + 0x20,0);
      uVar2 = FUN_07691f40(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) break;
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = (long *)0x0;
      if (*plVar9 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar9);
      }
      in_stack_00000010 = uVar7;
      thunk_FUN_040ec700(&stack0x00000010,uVar7);
      in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
      in_stack_00000020 = plVar9;
      thunk_FUN_040ec700(unaff_x23 + 0x10,plVar9);
      in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
      in_stack_00000030 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar8 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(ulong *)(lVar8 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_00000010;
      *(ulong *)(lVar8 + 0x38) = in_stack_00000028;
      *(long **)(lVar8 + 0x30) = in_stack_00000020;
      thunk_FUN_040ec700(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    }
    uVar3 = thunk_FUN_0408781c(plVar9,0);
    lVar8 = *(long *)(unaff_x27 + 0x80);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_0768890c(lVar8 + 0x20,0);
    uVar2 = FUN_07691f40(uVar3,uVar4,0);
    if ((uVar2 & 1) == 0) {
      thunk_FUN_040dedf8(PTR_DAT_09285a20);
      uVar7 = thunk_FUN_040b4efc();
      uVar3 = thunk_FUN_040dedf8(PTR_DAT_092f0f90);
      FUN_076b16a0(uVar7,uVar3,0);
      uVar3 = thunk_FUN_040dedf8(PTR_DAT_092f0f98);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar7,uVar3);
    }
    in_stack_00000030 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = (long *)0x0;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar9);
    }
    puVar6 = (undefined8 *)thunk_FUN_040b5044(plVar9);
    uVar3 = *puVar6;
    in_stack_00000010 = uVar7;
    thunk_FUN_040ec700(&stack0x00000010,uVar7);
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
    in_stack_00000020 = (long *)0x0;
    in_stack_00000030 = uVar3;
    thunk_FUN_040ec700(unaff_x23 + 0x10,0);
    in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    param_1 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
    plVar9 = in_stack_00000020;
    uVar2 = in_stack_00000028;
    uVar7 = in_stack_00000010;
    uVar10 = in_stack_00000018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


