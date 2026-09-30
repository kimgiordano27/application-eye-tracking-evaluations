/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_81
ENTRY_POINT: 090db7ac
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_81(undefined8 param_1,undefined1 param_2 [16])

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x19;
  long unaff_x23;
  uint uVar12;
  long lVar13;
  undefined8 uStack0000000000000000;
  undefined1 *puStack0000000000000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  long *plStack0000000000000058;
  undefined8 uStack0000000000000060;
  
  puVar4 = PTR_DAT_0ac6f090;
  puVar3 = PTR_DAT_0ac09758;
  plStack0000000000000058 = param_2._8_8_;
  uStack0000000000000050 = param_2._0_8_;
  puStack0000000000000008 = (undefined1 *)&stack0x00000040;
  uVar12 = 0;
  lVar1 = unaff_x19 + 0x20;
  uStack0000000000000060 = in_stack_00000030;
  uStack0000000000000000 = 0;
  uStack0000000000000040 = param_1;
  do {
    uVar6 = FUN_060b6c80(&stack0x00000040,*(undefined8 *)puVar4);
    plVar5 = plStack0000000000000058;
    uVar11 = uStack0000000000000050;
    if ((uVar6 & 1) == 0) {
      FUN_060b6da0(&stack0x00000040,*(undefined8 *)PTR_DAT_0ac6f088);
      return;
    }
    if (plStack0000000000000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar7 = thunk_FUN_04956588(plStack0000000000000058,0);
    lVar13 = *(long *)(puVar3 + 0x48);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar8 = FUN_08d895f0(lVar13 + 0x20,0);
    uVar6 = FUN_08d93fbc(uVar7,uVar8,0);
    if ((uVar6 & 1) == 0) {
      uVar7 = thunk_FUN_04956588(plVar5,0);
      lVar13 = *(long *)(puVar3 + 0x90);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar8 = FUN_08d895f0(lVar13 + 0x20,0);
      uVar6 = FUN_08d93fbc(uVar7,uVar8,0);
      if ((uVar6 & 1) == 0) {
        uVar7 = thunk_FUN_04956588(plVar5,0);
        lVar13 = *(long *)(puVar3 + 0x80);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar8 = FUN_08d895f0(lVar13 + 0x20,0);
        uVar6 = FUN_08d93fbc(uVar7,uVar8,0);
        if ((uVar6 & 1) == 0) {
          thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
          uVar11 = thunk_FUN_04983f60();
          uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac79aa0);
          FUN_08db3e00(uVar11,uVar7,0);
          uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac79aa8);
                    /* WARNING: Subroutine does not return */
          FUN_04948050(uVar11,uVar7);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar3 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(plVar5);
        }
        puVar10 = (undefined8 *)thunk_FUN_049840a8(plVar5);
        uVar7 = *puVar10;
        in_stack_00000010 = uVar11;
        thunk_FUN_049ee3d8(&stack0x00000010,uVar11);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar7;
        thunk_FUN_049ee3d8(unaff_x23 + 0x10,0);
        in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        lVar13 = unaff_x19 + (long)(int)uVar12 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar13 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar13 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar13 + 0x38) = in_stack_00000028;
        *(long **)(lVar13 + 0x30) = in_stack_00000020;
        thunk_FUN_049ee3d8(lVar1 + (long)(int)uVar12 * 0x28,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar5 != *(long *)(puVar3 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(plVar5);
        }
        in_stack_00000010 = uVar11;
        thunk_FUN_049ee3d8(&stack0x00000010,uVar11);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar5;
        thunk_FUN_049ee3d8(unaff_x23 + 0x10,plVar5);
        in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
        in_stack_00000030 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        lVar13 = unaff_x19 + (long)(int)uVar12 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(ulong *)(lVar13 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar13 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar13 + 0x38) = in_stack_00000028;
        *(long **)(lVar13 + 0x30) = in_stack_00000020;
        thunk_FUN_049ee3d8(lVar1 + (long)(int)uVar12 * 0x28,0);
      }
    }
    else {
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar3 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar5);
      }
      puVar9 = (undefined4 *)thunk_FUN_049840a8(plVar5);
      uVar2 = *puVar9;
      in_stack_00000010 = uVar11;
      thunk_FUN_049ee3d8(&stack0x00000010,uVar11);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar2);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
      in_stack_00000020 = (long *)0x0;
      thunk_FUN_049ee3d8(unaff_x23 + 0x10,0);
      in_stack_00000030 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      lVar13 = unaff_x19 + (long)(int)uVar12 * 0x28;
      *(undefined8 *)(lVar13 + 0x40) = 0;
      *(ulong *)(lVar13 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar13 + 0x20) = in_stack_00000010;
      *(ulong *)(lVar13 + 0x38) = in_stack_00000028;
      *(long **)(lVar13 + 0x30) = in_stack_00000020;
      thunk_FUN_049ee3d8(lVar1 + (long)(int)uVar12 * 0x28,0);
    }
    uVar12 = uVar12 + 1;
  } while( true );
}


