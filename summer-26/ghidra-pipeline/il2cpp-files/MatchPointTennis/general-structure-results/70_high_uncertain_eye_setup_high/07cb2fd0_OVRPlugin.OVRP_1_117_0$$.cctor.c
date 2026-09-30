/*
FUNCTION_NAME: OVRPlugin.OVRP_1_117_0$$.cctor
ENTRY_POINT: 07cb2fd0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_117_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long unaff_x19;
  long unaff_x20;
  uint uVar13;
  long lVar14;
  long *in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_000000d0;
  ulong in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f4cba0);
  FUN_04447ba8(PTR_DAT_09f4cba8);
  FUN_04447ba8(PTR_DAT_09f4cbb0);
  FUN_04447ba8(PTR_DAT_09f51430);
  *(undefined1 *)(unaff_x19 + 0xb04) = 1;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000e0 = (long *)0x0;
  if ((unaff_x20 == 0) || (iVar5 = FUN_0744265c(), iVar5 == 0)) {
    return 0;
  }
  uVar6 = FUN_0744265c();
  lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f51430,uVar6);
  FUN_07442dbc(&stack0x000000a0);
  puVar2 = PTR_DAT_09f4cb98;
  puVar1 = PTR_DAT_09f1e5b8;
  uVar13 = 0;
  in_stack_000000d8 = in_stack_000000a8;
  in_stack_000000d0 = in_stack_000000a0;
  in_stack_000000e8 = in_stack_000000b8;
  in_stack_000000e0 = in_stack_000000b0;
  in_stack_000000f0 = in_stack_000000c0;
  do {
    uVar8 = FUN_052607f8(&stack0x000000d0,*(undefined8 *)puVar2);
    plVar4 = in_stack_000000e8;
    plVar3 = in_stack_000000e0;
    if ((uVar8 & 1) == 0) {
      FUN_05260918(&stack0x000000d0,*(undefined8 *)PTR_DAT_09f4cb90);
      return lVar7;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar9 = thunk_FUN_04457f54(in_stack_000000e8,0);
    lVar14 = *(long *)(puVar1 + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar10 = FUN_07a4ce38(lVar14 + 0x20,0);
    uVar8 = FUN_07a5629c(uVar9,uVar10,0);
    if ((uVar8 & 1) == 0) {
      uVar9 = thunk_FUN_04457f54(plVar4,0);
      lVar14 = *(long *)(puVar1 + 0x90);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar10 = FUN_07a4ce38(lVar14 + 0x20,0);
      uVar8 = FUN_07a5629c(uVar9,uVar10,0);
      if ((uVar8 & 1) == 0) {
        uVar9 = thunk_FUN_04457f54(plVar4,0);
        lVar14 = *(long *)(puVar1 + 0x80);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar10 = FUN_07a4ce38(lVar14 + 0x20,0);
        uVar8 = FUN_07a5629c(uVar9,uVar10,0);
        if ((uVar8 & 1) == 0) {
          thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
          uVar9 = thunk_FUN_0448520c();
          uVar10 = thunk_FUN_044adef4(PTR_DAT_09f51440);
          FUN_07a757d0(uVar9,uVar10,0);
          uVar10 = thunk_FUN_044adef4(PTR_DAT_09f51448);
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar9,uVar10);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(puVar1 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar4);
        }
        puVar12 = (undefined8 *)thunk_FUN_04485360(plVar4);
        uVar9 = *puVar12;
        in_stack_000000a0 = plVar3;
        thunk_FUN_044bb4b4(&stack0x000000a0,plVar3);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar9;
        thunk_FUN_044bb4b4(&stack0x000000b0,0);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
        *(long **)(lVar14 + 0x20) = in_stack_000000a0;
        *(long **)(lVar14 + 0x38) = in_stack_000000b8;
        *(long **)(lVar14 + 0x30) = in_stack_000000b0;
        thunk_FUN_044bb4b4(lVar14 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar4 != *(long *)(puVar1 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar4);
        }
        in_stack_000000a0 = plVar3;
        thunk_FUN_044bb4b4(&stack0x000000a0,plVar3);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar4;
        thunk_FUN_044bb4b4(&stack0x000000b0,plVar4);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        in_stack_000000c0 = 0;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = 0;
        *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
        *(long **)(lVar14 + 0x20) = in_stack_000000a0;
        *(long **)(lVar14 + 0x38) = in_stack_000000b8;
        *(long **)(lVar14 + 0x30) = in_stack_000000b0;
        thunk_FUN_044bb4b4(lVar14 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = (long *)0x0;
      in_stack_000000b8 = (long *)0x0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(puVar1 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(plVar4);
      }
      puVar11 = (undefined4 *)thunk_FUN_04485360(plVar4);
      uVar6 = *puVar11;
      in_stack_000000a0 = plVar3;
      thunk_FUN_044bb4b4(&stack0x000000a0,plVar3);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = (long *)CONCAT44(in_stack_000000b8._4_4_,uVar6);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_044bb4b4(&stack0x000000b0,0);
      in_stack_000000c0 = 0;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
      *(undefined8 *)(lVar14 + 0x40) = 0;
      *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
      *(long **)(lVar14 + 0x20) = in_stack_000000a0;
      *(long **)(lVar14 + 0x38) = in_stack_000000b8;
      *(long **)(lVar14 + 0x30) = in_stack_000000b0;
      thunk_FUN_044bb4b4(lVar14 + 0x20,0);
    }
    uVar13 = uVar13 + 1;
  } while( true );
}


