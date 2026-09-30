/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_65
ENTRY_POINT: 0697f030
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


void OVRPlugin_<>c__<_cctor>b__810_65(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 in_w8;
  long lVar8;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int unaff_w29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *plStack0000000000000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,unaff_w20);
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,in_w8);
    plStack0000000000000020 = (long *)0x0;
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
    lVar8 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(ulong *)(lVar8 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar8 + 0x20) = in_stack_00000010;
    *(ulong *)(lVar8 + 0x38) = in_stack_00000028;
    *(long **)(lVar8 + 0x30) = plStack0000000000000020;
    thunk_FUN_03afed3c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    while( true ) {
      unaff_w24 = unaff_w24 + 1;
      uVar2 = FUN_06290cc0(&stack0x00000040,*unaff_x26);
      plVar1 = in_stack_00000058;
      uVar7 = in_stack_00000050;
      if ((uVar2 & 1) == 0) {
        FUN_06290de0(&stack0x00000040,*(undefined8 *)PTR_DAT_084b1a60);
        return;
      }
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar3 = thunk_FUN_03a9a6e8(in_stack_00000058,0);
      lVar8 = *(long *)(unaff_x27 + 0x48);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar4 = FUN_0675ff58(lVar8 + 0x20,0);
      uVar2 = FUN_067690d8(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) break;
      uVar3 = thunk_FUN_03a9a6e8(plVar1,0);
      lVar8 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar4 = FUN_0675ff58(lVar8 + 0x20,0);
      uVar2 = FUN_067690d8(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = thunk_FUN_03a9a6e8(plVar1,0);
        lVar8 = *(long *)(unaff_x27 + 0x80);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar4 = FUN_0675ff58(lVar8 + 0x20,0);
        uVar2 = FUN_067690d8(uVar3,uVar4,0);
        if ((uVar2 & 1) == 0) {
          thunk_FUN_03af1434(PTR_DAT_08488858);
          uVar7 = thunk_FUN_03ac74bc();
          uVar3 = thunk_FUN_03af1434(PTR_DAT_084b7738);
          FUN_06788354(uVar7,uVar3,0);
          uVar3 = thunk_FUN_03af1434(PTR_DAT_084b7740);
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar7,uVar3);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        plStack0000000000000020 = (long *)0x0;
        if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar1);
        }
        puVar6 = (undefined8 *)thunk_FUN_03ac7604(plVar1);
        uVar3 = *puVar6;
        in_stack_00000010 = uVar7;
        thunk_FUN_03afed3c(&stack0x00000010,uVar7);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        plStack0000000000000020 = (long *)0x0;
        in_stack_00000030 = uVar3;
        thunk_FUN_03afed3c(unaff_x23 + 0x10,0);
        in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar8 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar8 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar8 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar8 + 0x38) = in_stack_00000028;
        *(long **)(lVar8 + 0x30) = plStack0000000000000020;
        thunk_FUN_03afed3c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        plStack0000000000000020 = (long *)0x0;
        if (*plVar1 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar1);
        }
        in_stack_00000010 = uVar7;
        thunk_FUN_03afed3c(&stack0x00000010,uVar7);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        plStack0000000000000020 = plVar1;
        thunk_FUN_03afed3c(unaff_x23 + 0x10,plVar1);
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
        lVar8 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(ulong *)(lVar8 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar8 + 0x38) = in_stack_00000028;
        *(long **)(lVar8 + 0x30) = plStack0000000000000020;
        thunk_FUN_03afed3c(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
    }
    in_stack_00000030 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    plStack0000000000000020 = (long *)0x0;
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar1);
    }
    puVar5 = (undefined4 *)thunk_FUN_03ac7604(plVar1);
    unaff_w20 = *puVar5;
    in_stack_00000010 = uVar7;
    thunk_FUN_03afed3c(&stack0x00000010,uVar7);
    in_w8 = 1;
  } while( true );
}


