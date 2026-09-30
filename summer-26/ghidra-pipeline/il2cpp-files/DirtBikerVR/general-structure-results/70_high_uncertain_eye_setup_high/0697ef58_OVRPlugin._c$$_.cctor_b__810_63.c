/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_63
ENTRY_POINT: 0697ef58
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


void OVRPlugin_<>c__<_cctor>b__810_63(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x23;
  uint uVar12;
  long lVar13;
  undefined8 uStack0000000000000000;
  undefined1 *puStack0000000000000008;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *plStack0000000000000040;
  ulong uStack0000000000000048;
  long *plStack0000000000000050;
  long *plStack0000000000000058;
  undefined8 uStack0000000000000060;
  
  puVar4 = PTR_DAT_084b1a68;
  puVar3 = PTR_DAT_08486760;
  puStack0000000000000008 = (undefined1 *)&stack0x00000040;
  uVar12 = 0;
  lVar1 = unaff_x19 + 0x20;
  uStack0000000000000048 = in_stack_00000018;
  plStack0000000000000040 = in_stack_00000010;
  plStack0000000000000058 = in_stack_00000028;
  plStack0000000000000050 = in_stack_00000020;
  uStack0000000000000060 = in_stack_00000030;
  uStack0000000000000000 = 0;
  do {
    uVar7 = FUN_06290cc0(&stack0x00000040,*(undefined8 *)puVar4);
    plVar6 = plStack0000000000000058;
    plVar5 = plStack0000000000000050;
    if ((uVar7 & 1) == 0) {
      FUN_06290de0(&stack0x00000040,*(undefined8 *)PTR_DAT_084b1a60);
      return;
    }
    if (plStack0000000000000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar8 = thunk_FUN_03a9a6e8(plStack0000000000000058,0);
    lVar13 = *(long *)(puVar3 + 0x48);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_0675ff58(lVar13 + 0x20,0);
    uVar7 = FUN_067690d8(uVar8,uVar9,0);
    if ((uVar7 & 1) == 0) {
      uVar8 = thunk_FUN_03a9a6e8(plVar6,0);
      lVar13 = *(long *)(puVar3 + 0x90);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar9 = FUN_0675ff58(lVar13 + 0x20,0);
      uVar7 = FUN_067690d8(uVar8,uVar9,0);
      if ((uVar7 & 1) == 0) {
        uVar8 = thunk_FUN_03a9a6e8(plVar6,0);
        lVar13 = *(long *)(puVar3 + 0x80);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar9 = FUN_0675ff58(lVar13 + 0x20,0);
        uVar7 = FUN_067690d8(uVar8,uVar9,0);
        if ((uVar7 & 1) == 0) {
          thunk_FUN_03af1434(PTR_DAT_08488858);
          uVar8 = thunk_FUN_03ac74bc();
          uVar9 = thunk_FUN_03af1434(PTR_DAT_084b7738);
          FUN_06788354(uVar8,uVar9,0);
          uVar9 = thunk_FUN_03af1434(PTR_DAT_084b7740);
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar8,uVar9);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)(puVar3 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar6);
        }
        puVar11 = (undefined8 *)thunk_FUN_03ac7604(plVar6);
        uVar8 = *puVar11;
        in_stack_00000010 = plVar5;
        thunk_FUN_03afed3c(&stack0x00000010,plVar5);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar8;
        thunk_FUN_03afed3c(unaff_x23 + 0x10,0);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar13 = unaff_x19 + (long)(int)uVar12 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar13 + 0x28) = in_stack_00000018;
        *(long **)(lVar13 + 0x20) = in_stack_00000010;
        *(long **)(lVar13 + 0x38) = in_stack_00000028;
        *(long **)(lVar13 + 0x30) = in_stack_00000020;
        thunk_FUN_03afed3c(lVar1 + (long)(int)uVar12 * 0x28,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar6 != *(long *)(puVar3 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar6);
        }
        in_stack_00000010 = plVar5;
        thunk_FUN_03afed3c(&stack0x00000010,plVar5);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar6;
        thunk_FUN_03afed3c(unaff_x23 + 0x10,plVar6);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        in_stack_00000030 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar13 = unaff_x19 + (long)(int)uVar12 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(ulong *)(lVar13 + 0x28) = in_stack_00000018;
        *(long **)(lVar13 + 0x20) = in_stack_00000010;
        *(long **)(lVar13 + 0x38) = in_stack_00000028;
        *(long **)(lVar13 + 0x30) = in_stack_00000020;
        thunk_FUN_03afed3c(lVar1 + (long)(int)uVar12 * 0x28,0);
      }
    }
    else {
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = (long *)0x0;
      in_stack_00000028 = (long *)0x0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)(puVar3 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar6);
      }
      puVar10 = (undefined4 *)thunk_FUN_03ac7604(plVar6);
      uVar2 = *puVar10;
      in_stack_00000010 = plVar5;
      thunk_FUN_03afed3c(&stack0x00000010,plVar5);
      in_stack_00000028 = (long *)CONCAT44(in_stack_00000028._4_4_,uVar2);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
      in_stack_00000020 = (long *)0x0;
      thunk_FUN_03afed3c(unaff_x23 + 0x10,0);
      in_stack_00000030 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar13 = unaff_x19 + (long)(int)uVar12 * 0x28;
      *(undefined8 *)(lVar13 + 0x40) = 0;
      *(ulong *)(lVar13 + 0x28) = in_stack_00000018;
      *(long **)(lVar13 + 0x20) = in_stack_00000010;
      *(long **)(lVar13 + 0x38) = in_stack_00000028;
      *(long **)(lVar13 + 0x30) = in_stack_00000020;
      thunk_FUN_03afed3c(lVar1 + (long)(int)uVar12 * 0x28,0);
    }
    uVar12 = uVar12 + 1;
  } while( true );
}


