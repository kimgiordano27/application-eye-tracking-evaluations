/*
FUNCTION_NAME: OVRPlugin.OVRP_1_123_0$$.cctor
ENTRY_POINT: 07cb3300
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


void OVRPlugin_OVRP_1_123_0___cctor(undefined8 *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x19;
  undefined8 unaff_x22;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined8 unaff_d8;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    thunk_FUN_044bb4b4(param_1,unaff_x22);
    in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
    in_stack_000000b0 = (long *)0x0;
    in_stack_000000c0 = unaff_d8;
    thunk_FUN_044bb4b4();
    in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar8 = unaff_x19 + (int)unaff_w24 * unaff_x28;
    *(undefined8 *)(lVar8 + 0x40) = in_stack_000000c0;
    *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
    *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
    *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
    *(long **)(lVar8 + 0x30) = in_stack_000000b0;
    thunk_FUN_044bb4b4(lVar8 + 0x20,0);
    while( true ) {
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        uVar3 = FUN_052607f8(&stack0x000000d0,*unaff_x25);
        plVar2 = in_stack_000000e8;
        unaff_x22 = in_stack_000000e0;
        if ((uVar3 & 1) == 0) {
          FUN_05260918(&stack0x000000d0,*(undefined8 *)PTR_DAT_09f4cb90);
          return;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar4 = thunk_FUN_04457f54(in_stack_000000e8,0);
        lVar8 = *(long *)(unaff_x26 + 0x48);
        if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar5 = FUN_07a4ce38(lVar8 + 0x20,0);
        uVar3 = FUN_07a5629c(uVar4,uVar5,0);
        if ((uVar3 & 1) == 0) break;
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar2);
        }
        puVar6 = (undefined4 *)thunk_FUN_04485360(plVar2);
        uVar1 = *puVar6;
        in_stack_000000a0 = unaff_x22;
        thunk_FUN_044bb4b4(&stack0x000000a0,unaff_x22);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,unaff_w27);
        in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
        in_stack_000000b0 = (long *)0x0;
        thunk_FUN_044bb4b4();
        in_stack_000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar8 = unaff_x19 + (int)unaff_w24 * unaff_x28;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
        *(long **)(lVar8 + 0x30) = in_stack_000000b0;
        thunk_FUN_044bb4b4(lVar8 + 0x20,0);
      }
      uVar4 = thunk_FUN_04457f54(plVar2,0);
      lVar8 = *(long *)(unaff_x26 + 0x90);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar5 = FUN_07a4ce38(lVar8 + 0x20,0);
      uVar3 = FUN_07a5629c(uVar4,uVar5,0);
      if ((uVar3 & 1) == 0) break;
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*plVar2 != *(long *)(unaff_x26 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(plVar2);
      }
      in_stack_000000a0 = unaff_x22;
      thunk_FUN_044bb4b4(&stack0x000000a0,unaff_x22);
      in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
      in_stack_000000b0 = plVar2;
      thunk_FUN_044bb4b4();
      in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
      in_stack_000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar8 = unaff_x19 + (int)unaff_w24 * unaff_x28;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
      *(long **)(lVar8 + 0x30) = in_stack_000000b0;
      thunk_FUN_044bb4b4(lVar8 + 0x20,0);
    }
    uVar4 = thunk_FUN_04457f54(plVar2,0);
    lVar8 = *(long *)(unaff_x26 + 0x80);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar5 = FUN_07a4ce38(lVar8 + 0x20,0);
    uVar3 = FUN_07a5629c(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
      uVar4 = thunk_FUN_0448520c();
      uVar5 = thunk_FUN_044adef4(PTR_DAT_09f51440);
      FUN_07a757d0(uVar4,uVar5,0);
      uVar5 = thunk_FUN_044adef4(PTR_DAT_09f51448);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar4,uVar5);
    }
    in_stack_000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = (long *)0x0;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar2);
    }
    puVar7 = (undefined8 *)thunk_FUN_04485360(plVar2);
    unaff_d8 = *puVar7;
    in_stack_000000a0 = unaff_x22;
    param_1 = &stack0x000000a0;
  } while( true );
}


