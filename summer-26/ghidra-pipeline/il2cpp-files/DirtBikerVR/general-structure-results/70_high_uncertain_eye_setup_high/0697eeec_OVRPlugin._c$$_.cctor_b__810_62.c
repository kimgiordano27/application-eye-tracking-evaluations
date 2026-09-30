/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_62
ENTRY_POINT: 0697eeec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_<>c__<_cctor>b__810_62(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long unaff_x20;
  uint uVar14;
  long lVar15;
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
  
  uStack0000000000000060 = 0;
  uStack0000000000000048 = 0;
  plStack0000000000000040 = (long *)0x0;
  plStack0000000000000058 = (long *)0x0;
  plStack0000000000000050 = (long *)0x0;
  if ((unaff_x20 == 0) || (iVar6 = FUN_05fa01f8(), iVar6 == 0)) {
    return 0;
  }
  uVar7 = FUN_05fa01f8();
  lVar8 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084b7728,uVar7);
  FUN_05fa0974(&stack0x00000010);
  puVar3 = PTR_DAT_084b1a68;
  puVar2 = PTR_DAT_08486760;
  uVar14 = 0;
  lVar1 = lVar8 + 0x20;
  uStack0000000000000048 = in_stack_00000018;
  plStack0000000000000040 = in_stack_00000010;
  plStack0000000000000058 = in_stack_00000028;
  plStack0000000000000050 = in_stack_00000020;
  uStack0000000000000060 = in_stack_00000030;
  do {
    uVar9 = FUN_06290cc0(&stack0x00000040,*(undefined8 *)puVar3);
    plVar5 = plStack0000000000000058;
    plVar4 = plStack0000000000000050;
    if ((uVar9 & 1) == 0) {
      FUN_06290de0(&stack0x00000040,*(undefined8 *)PTR_DAT_084b1a60);
      return lVar8;
    }
    if (plStack0000000000000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar10 = thunk_FUN_03a9a6e8(plStack0000000000000058,0);
    lVar15 = *(long *)(puVar2 + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar11 = FUN_0675ff58(lVar15 + 0x20,0);
    uVar9 = FUN_067690d8(uVar10,uVar11,0);
    if ((uVar9 & 1) == 0) {
      uVar10 = thunk_FUN_03a9a6e8(plVar5,0);
      lVar15 = *(long *)(puVar2 + 0x90);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar11 = FUN_0675ff58(lVar15 + 0x20,0);
      uVar9 = FUN_067690d8(uVar10,uVar11,0);
      if ((uVar9 & 1) == 0) {
        uVar10 = thunk_FUN_03a9a6e8(plVar5,0);
        lVar15 = *(long *)(puVar2 + 0x80);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar11 = FUN_0675ff58(lVar15 + 0x20,0);
        uVar9 = FUN_067690d8(uVar10,uVar11,0);
        if ((uVar9 & 1) == 0) {
          thunk_FUN_03af1434(PTR_DAT_08488858);
          uVar10 = thunk_FUN_03ac74bc();
          uVar11 = thunk_FUN_03af1434(PTR_DAT_084b7738);
          FUN_06788354(uVar10,uVar11,0);
          uVar11 = thunk_FUN_03af1434(PTR_DAT_084b7740);
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar10,uVar11);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar2 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar5);
        }
        puVar13 = (undefined8 *)thunk_FUN_03ac7604(plVar5);
        uVar10 = *puVar13;
        in_stack_00000010 = plVar4;
        thunk_FUN_03afed3c(&stack0x00000010,plVar4);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar10;
        thunk_FUN_03afed3c(&stack0x00000020,0);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar15 = lVar8 + (long)(int)uVar14 * 0x28;
        *(undefined8 *)(lVar15 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar15 + 0x28) = in_stack_00000018;
        *(long **)(lVar15 + 0x20) = in_stack_00000010;
        *(long **)(lVar15 + 0x38) = in_stack_00000028;
        *(long **)(lVar15 + 0x30) = in_stack_00000020;
        thunk_FUN_03afed3c(lVar1 + (long)(int)uVar14 * 0x28,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar5 != *(long *)(puVar2 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar5);
        }
        in_stack_00000010 = plVar4;
        thunk_FUN_03afed3c(&stack0x00000010,plVar4);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar5;
        thunk_FUN_03afed3c(&stack0x00000020,plVar5);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        in_stack_00000030 = 0;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar15 = lVar8 + (long)(int)uVar14 * 0x28;
        *(undefined8 *)(lVar15 + 0x40) = 0;
        *(ulong *)(lVar15 + 0x28) = in_stack_00000018;
        *(long **)(lVar15 + 0x20) = in_stack_00000010;
        *(long **)(lVar15 + 0x38) = in_stack_00000028;
        *(long **)(lVar15 + 0x30) = in_stack_00000020;
        thunk_FUN_03afed3c(lVar1 + (long)(int)uVar14 * 0x28,0);
      }
    }
    else {
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = (long *)0x0;
      in_stack_00000028 = (long *)0x0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar2 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar5);
      }
      puVar12 = (undefined4 *)thunk_FUN_03ac7604(plVar5);
      uVar7 = *puVar12;
      in_stack_00000010 = plVar4;
      thunk_FUN_03afed3c(&stack0x00000010,plVar4);
      in_stack_00000028 = (long *)CONCAT44(in_stack_00000028._4_4_,uVar7);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
      in_stack_00000020 = (long *)0x0;
      thunk_FUN_03afed3c(&stack0x00000020,0);
      in_stack_00000030 = 0;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar15 = lVar8 + (long)(int)uVar14 * 0x28;
      *(undefined8 *)(lVar15 + 0x40) = 0;
      *(ulong *)(lVar15 + 0x28) = in_stack_00000018;
      *(long **)(lVar15 + 0x20) = in_stack_00000010;
      *(long **)(lVar15 + 0x38) = in_stack_00000028;
      *(long **)(lVar15 + 0x30) = in_stack_00000020;
      thunk_FUN_03afed3c(lVar1 + (long)(int)uVar14 * 0x28,0);
    }
    uVar14 = uVar14 + 1;
  } while( true );
}


