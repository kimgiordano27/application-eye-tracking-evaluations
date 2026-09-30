/*
FUNCTION_NAME: OVRPlugin.OVRP_1_118_0$$.cctor
ENTRY_POINT: 07cb3058
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_118_0___cctor(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
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
  
  FUN_07442dbc(&stack0x000000a0);
  puVar3 = PTR_DAT_09f4cb98;
  puVar2 = PTR_DAT_09f1e5b8;
  uVar11 = 0;
  in_stack_000000d8 = in_stack_000000a8;
  in_stack_000000d0 = in_stack_000000a0;
  in_stack_000000e8 = in_stack_000000b8;
  in_stack_000000e0 = in_stack_000000b0;
  in_stack_000000f0 = in_stack_000000c0;
  do {
    uVar6 = FUN_052607f8(&stack0x000000d0,*(undefined8 *)puVar3);
    plVar5 = in_stack_000000e8;
    plVar4 = in_stack_000000e0;
    if ((uVar6 & 1) == 0) {
      FUN_05260918(&stack0x000000d0,*(undefined8 *)PTR_DAT_09f4cb90);
      return param_1;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar7 = thunk_FUN_04457f54(in_stack_000000e8,0);
    lVar12 = *(long *)(puVar2 + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar8 = FUN_07a4ce38(lVar12 + 0x20,0);
    uVar6 = FUN_07a5629c(uVar7,uVar8,0);
    if ((uVar6 & 1) == 0) {
      uVar7 = thunk_FUN_04457f54(plVar5,0);
      lVar12 = *(long *)(puVar2 + 0x90);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar8 = FUN_07a4ce38(lVar12 + 0x20,0);
      uVar6 = FUN_07a5629c(uVar7,uVar8,0);
      if ((uVar6 & 1) == 0) {
        uVar7 = thunk_FUN_04457f54(plVar5,0);
        lVar12 = *(long *)(puVar2 + 0x80);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar8 = FUN_07a4ce38(lVar12 + 0x20,0);
        uVar6 = FUN_07a5629c(uVar7,uVar8,0);
        if ((uVar6 & 1) == 0) {
          thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
          uVar7 = thunk_FUN_0448520c();
          uVar8 = thunk_FUN_044adef4(PTR_DAT_09f51440);
          FUN_07a757d0(uVar7,uVar8,0);
          uVar8 = thunk_FUN_044adef4(PTR_DAT_09f51448);
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar7,uVar8);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar2 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar5);
        }
        puVar10 = (undefined8 *)thunk_FUN_04485360(plVar5);
        uVar7 = *puVar10;
        in_stack_000000a0 = plVar4;
        thunk_FUN_044bb4b4(&stack0x000000a0,plVar4);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar7;
        thunk_FUN_044bb4b4(&stack0x000000b0,0);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(param_1 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar12 = param_1 + (long)(int)uVar11 * 0x28;
        *(undefined8 *)(lVar12 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar12 + 0x28) = in_stack_000000a8;
        *(long **)(lVar12 + 0x20) = in_stack_000000a0;
        *(long **)(lVar12 + 0x38) = in_stack_000000b8;
        *(long **)(lVar12 + 0x30) = in_stack_000000b0;
        thunk_FUN_044bb4b4(lVar12 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar5 != *(long *)(puVar2 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar5);
        }
        in_stack_000000a0 = plVar4;
        thunk_FUN_044bb4b4(&stack0x000000a0,plVar4);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar5;
        thunk_FUN_044bb4b4(&stack0x000000b0,plVar5);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        in_stack_000000c0 = 0;
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(param_1 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar12 = param_1 + (long)(int)uVar11 * 0x28;
        *(undefined8 *)(lVar12 + 0x40) = 0;
        *(ulong *)(lVar12 + 0x28) = in_stack_000000a8;
        *(long **)(lVar12 + 0x20) = in_stack_000000a0;
        *(long **)(lVar12 + 0x38) = in_stack_000000b8;
        *(long **)(lVar12 + 0x30) = in_stack_000000b0;
        thunk_FUN_044bb4b4(lVar12 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = (long *)0x0;
      in_stack_000000b8 = (long *)0x0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar2 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(plVar5);
      }
      puVar9 = (undefined4 *)thunk_FUN_04485360(plVar5);
      uVar1 = *puVar9;
      in_stack_000000a0 = plVar4;
      thunk_FUN_044bb4b4(&stack0x000000a0,plVar4);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = (long *)CONCAT44(in_stack_000000b8._4_4_,uVar1);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_044bb4b4(&stack0x000000b0,0);
      in_stack_000000c0 = 0;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(uint *)(param_1 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar12 = param_1 + (long)(int)uVar11 * 0x28;
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(ulong *)(lVar12 + 0x28) = in_stack_000000a8;
      *(long **)(lVar12 + 0x20) = in_stack_000000a0;
      *(long **)(lVar12 + 0x38) = in_stack_000000b8;
      *(long **)(lVar12 + 0x30) = in_stack_000000b0;
      thunk_FUN_044bb4b4(lVar12 + 0x20,0);
    }
    uVar11 = uVar11 + 1;
  } while( true );
}


