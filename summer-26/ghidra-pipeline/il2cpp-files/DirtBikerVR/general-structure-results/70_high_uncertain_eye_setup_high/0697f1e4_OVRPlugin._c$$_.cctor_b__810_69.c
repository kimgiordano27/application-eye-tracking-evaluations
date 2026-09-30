/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_69
ENTRY_POINT: 0697f1e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_69(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
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
    thunk_FUN_03afed3c(param_1,param_2);
                    /* try { // try from 0697f1e8 to 06a7f1f3 has its CatchHandler @ 0697f344 */
    in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0697f290 to 06a7f2ff has its CatchHandler @ 0697f088 */
      FUN_03a8a9c0();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    lVar9 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
    *(undefined8 *)(lVar9 + 0x40) = in_stack_00000030;
    *(ulong *)(lVar9 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar9 + 0x20) = in_stack_00000010;
    *(ulong *)(lVar9 + 0x38) = in_stack_00000028;
    *(long **)(lVar9 + 0x30) = in_stack_00000020;
    thunk_FUN_03afed3c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    while( true ) {
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        uVar3 = FUN_06290cc0(&stack0x00000040,*unaff_x26);
        plVar2 = in_stack_00000058;
        uVar8 = in_stack_00000050;
        if ((uVar3 & 1) == 0) {
          FUN_06290de0(&stack0x00000040,*(undefined8 *)PTR_DAT_084b1a60);
          return;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar4 = thunk_FUN_03a9a6e8(in_stack_00000058,0);
        lVar9 = *(long *)(unaff_x27 + 0x48);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar5 = FUN_0675ff58(lVar9 + 0x20,0);
        uVar3 = FUN_067690d8(uVar4,uVar5,0);
        if ((uVar3 & 1) == 0) break;
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar2);
        }
        puVar6 = (undefined4 *)thunk_FUN_03ac7604(plVar2);
        uVar1 = *puVar6;
        in_stack_00000010 = uVar8;
        thunk_FUN_03afed3c(&stack0x00000010,uVar8);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar1);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
        in_stack_00000020 = (long *)0x0;
        thunk_FUN_03afed3c(unaff_x23 + 0x10,0);
        in_stack_00000030 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar9 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar9 + 0x40) = 0;
        *(ulong *)(lVar9 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar9 + 0x38) = in_stack_00000028;
        *(long **)(lVar9 + 0x30) = in_stack_00000020;
        thunk_FUN_03afed3c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      uVar4 = thunk_FUN_03a9a6e8(plVar2,0);
      lVar9 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_0675ff58(lVar9 + 0x20,0);
      uVar3 = FUN_067690d8(uVar4,uVar5,0);
      if ((uVar3 & 1) == 0) break;
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = (long *)0x0;
      if (*plVar2 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar2);
      }
      in_stack_00000010 = uVar8;
      thunk_FUN_03afed3c(&stack0x00000010,uVar8);
      in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
      in_stack_00000020 = plVar2;
      thunk_FUN_03afed3c(unaff_x23 + 0x10,plVar2);
      in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
      in_stack_00000030 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar9 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(ulong *)(lVar9 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar9 + 0x20) = in_stack_00000010;
      *(ulong *)(lVar9 + 0x38) = in_stack_00000028;
      *(long **)(lVar9 + 0x30) = in_stack_00000020;
      thunk_FUN_03afed3c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    }
    uVar4 = thunk_FUN_03a9a6e8(plVar2,0);
    lVar9 = *(long *)(unaff_x27 + 0x80);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_0675ff58(lVar9 + 0x20,0);
    uVar3 = FUN_067690d8(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03af1434(PTR_DAT_08488858);
      uVar8 = thunk_FUN_03ac74bc();
      uVar4 = thunk_FUN_03af1434(PTR_DAT_084b7738);
      FUN_06788354(uVar8,uVar4,0);
      uVar4 = thunk_FUN_03af1434(PTR_DAT_084b7740);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar8,uVar4);
    }
    in_stack_00000030 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = (long *)0x0;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar2);
    }
    puVar7 = (undefined8 *)thunk_FUN_03ac7604(plVar2);
    uVar4 = *puVar7;
    in_stack_00000010 = uVar8;
    thunk_FUN_03afed3c(&stack0x00000010,uVar8);
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
    in_stack_00000020 = (long *)0x0;
    param_1 = unaff_x23 + 0x10;
    param_2 = 0;
    in_stack_00000030 = uVar4;
  } while( true );
}


