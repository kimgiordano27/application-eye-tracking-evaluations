/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_StartKeyboardTracking
ENTRY_POINT: 07a6c118
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_StartKeyboardTracking(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int unaff_w29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    thunk_FUN_040ec700(param_1,unaff_x21);
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,unaff_w20);
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
    lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
    *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
    *(long **)(lVar7 + 0x30) = in_stack_00000020;
    thunk_FUN_040ec700(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    while( true ) {
      unaff_w24 = unaff_w24 + 1;
      uVar2 = FUN_05385f24(&stack0x00000040,*unaff_x26);
      plVar1 = in_stack_00000058;
      unaff_x21 = in_stack_00000050;
      if ((uVar2 & 1) == 0) {
        FUN_05386044(&stack0x00000040,*(undefined8 *)PTR_DAT_09287440);
        return;
      }
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar3 = thunk_FUN_0408781c(in_stack_00000058,0);
      lVar7 = *(long *)(unaff_x27 + 0x48);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_0768890c(lVar7 + 0x20,0);
      uVar2 = FUN_07691f40(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) break;
      uVar3 = thunk_FUN_0408781c(plVar1,0);
      lVar7 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_0768890c(lVar7 + 0x20,0);
      uVar2 = FUN_07691f40(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = thunk_FUN_0408781c(plVar1,0);
        lVar7 = *(long *)(unaff_x27 + 0x80);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar4 = FUN_0768890c(lVar7 + 0x20,0);
        uVar2 = FUN_07691f40(uVar3,uVar4,0);
        if ((uVar2 & 1) == 0) {
          thunk_FUN_040dedf8(PTR_DAT_09285a20);
          uVar3 = thunk_FUN_040b4efc();
          uVar4 = thunk_FUN_040dedf8(PTR_DAT_092f0f90);
          FUN_076b16a0(uVar3,uVar4,0);
          uVar4 = thunk_FUN_040dedf8(PTR_DAT_092f0f98);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar3,uVar4);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar1);
        }
        puVar6 = (undefined8 *)thunk_FUN_040b5044(plVar1);
        uVar3 = *puVar6;
        in_stack_00000010 = unaff_x21;
        thunk_FUN_040ec700(&stack0x00000010,unaff_x21);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar3;
        thunk_FUN_040ec700(unaff_x23 + 0x10,0);
        in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar7 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
        *(long **)(lVar7 + 0x30) = in_stack_00000020;
        thunk_FUN_040ec700(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar1 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar1);
        }
        in_stack_00000010 = unaff_x21;
        thunk_FUN_040ec700(&stack0x00000010,unaff_x21);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar1;
        thunk_FUN_040ec700(unaff_x23 + 0x10,plVar1);
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
        lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(ulong *)(lVar7 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar7 + 0x38) = in_stack_00000028;
        *(long **)(lVar7 + 0x30) = in_stack_00000020;
        thunk_FUN_040ec700(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
    }
    in_stack_00000030 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = (long *)0x0;
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar1);
    }
    puVar5 = (undefined4 *)thunk_FUN_040b5044(plVar1);
    unaff_w20 = *puVar5;
    in_stack_00000010 = unaff_x21;
    param_1 = &stack0x00000010;
  } while( true );
}


