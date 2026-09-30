/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_SetInsightPassthroughKeyboardHandsIntensity
ENTRY_POINT: 07a6c084
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_SetInsightPassthroughKeyboardHandsIntensity
               (undefined8 param_1,undefined8 param_2)

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
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long lVar9;
  int unaff_w29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    uVar3 = FUN_05385f24(&stack0x00000040,param_2);
    plVar2 = in_stack_00000058;
    uVar8 = in_stack_00000050;
    if ((uVar3 & 1) == 0) {
      FUN_05386044(&stack0x00000040,*(undefined8 *)PTR_DAT_09287440);
      return;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar4 = thunk_FUN_0408781c(in_stack_00000058,0);
    lVar9 = *(long *)(unaff_x27 + 0x48);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar5 = FUN_0768890c(lVar9 + 0x20,0);
    uVar3 = FUN_07691f40(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = thunk_FUN_0408781c(plVar2,0);
      lVar9 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar5 = FUN_0768890c(lVar9 + 0x20,0);
      uVar3 = FUN_07691f40(uVar4,uVar5,0);
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_0408781c(plVar2,0);
        lVar9 = *(long *)(unaff_x27 + 0x80);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar5 = FUN_0768890c(lVar9 + 0x20,0);
        uVar3 = FUN_07691f40(uVar4,uVar5,0);
        if ((uVar3 & 1) == 0) {
          thunk_FUN_040dedf8(PTR_DAT_09285a20);
          uVar8 = thunk_FUN_040b4efc();
          uVar4 = thunk_FUN_040dedf8(PTR_DAT_092f0f90);
          FUN_076b16a0(uVar8,uVar4,0);
          uVar4 = thunk_FUN_040dedf8(PTR_DAT_092f0f98);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar8,uVar4);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar2);
        }
        puVar7 = (undefined8 *)thunk_FUN_040b5044(plVar2);
        uVar4 = *puVar7;
        in_stack_00000010 = uVar8;
        thunk_FUN_040ec700(&stack0x00000010,uVar8);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar4;
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
        lVar9 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar9 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar9 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar9 + 0x38) = in_stack_00000028;
        *(long **)(lVar9 + 0x30) = in_stack_00000020;
        thunk_FUN_040ec700(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar2 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar2);
        }
        in_stack_00000010 = uVar8;
        thunk_FUN_040ec700(&stack0x00000010,uVar8);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar2;
        thunk_FUN_040ec700(unaff_x23 + 0x10,plVar2);
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
        lVar9 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar9 + 0x40) = 0;
        *(ulong *)(lVar9 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar9 + 0x38) = in_stack_00000028;
        *(long **)(lVar9 + 0x30) = in_stack_00000020;
        thunk_FUN_040ec700(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
    }
    else {
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar2);
      }
      puVar6 = (undefined4 *)thunk_FUN_040b5044(plVar2);
      uVar1 = *puVar6;
      in_stack_00000010 = uVar8;
      thunk_FUN_040ec700(&stack0x00000010,uVar8);
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
      lVar9 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(ulong *)(lVar9 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar9 + 0x20) = in_stack_00000010;
      *(ulong *)(lVar9 + 0x38) = in_stack_00000028;
      *(long **)(lVar9 + 0x30) = in_stack_00000020;
      thunk_FUN_040ec700(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    }
    unaff_w24 = unaff_w24 + 1;
    param_2 = *unaff_x26;
  } while( true );
}


