/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetAppAsymmetricFov
ENTRY_POINT: 0740e93c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_GetAppAsymmetricFov(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 uVar9;
  uint unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    thunk_FUN_03d233cc(param_1,param_2);
    while( true ) {
      while( true ) {
        unaff_w25 = unaff_w25 + 1;
        uVar3 = FUN_04aa6440(&stack0x000000d0,*unaff_x26);
        plVar2 = in_stack_000000e8;
        uVar7 = in_stack_000000e0;
        if ((uVar3 & 1) == 0) {
          FUN_04aa6560(&stack0x000000d0,*(undefined8 *)PTR_DAT_08e90838);
          return;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar4 = thunk_FUN_03d12a58(in_stack_000000e8,0);
        uVar9 = *unaff_x27;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar9 = FUN_0710fcf0(uVar9,0);
        uVar3 = FUN_07119344(uVar4,uVar9,0);
        if ((uVar3 & 1) == 0) break;
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_08e699d0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(plVar2);
        }
        puVar5 = (undefined4 *)thunk_FUN_03cf5388(plVar2);
        uVar1 = *puVar5;
        in_stack_000000a0 = uVar7;
        thunk_FUN_03d233cc(&stack0x000000a0,uVar7);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
        in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
        in_stack_000000b0 = (long *)0x0;
        thunk_FUN_03d233cc();
        in_stack_000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
        *(long **)(lVar8 + 0x30) = in_stack_000000b0;
        thunk_FUN_03d233cc(lVar8 + 0x20,0);
      }
      uVar4 = thunk_FUN_03d12a58(plVar2,0);
      uVar9 = *(undefined8 *)PTR_DAT_08e810f0;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar9 = FUN_0710fcf0(uVar9,0);
      uVar3 = FUN_07119344(uVar4,uVar9,0);
      if ((uVar3 & 1) != 0) break;
      uVar4 = thunk_FUN_03d12a58(plVar2,0);
                    /* try { // try from 0740e95c to 0750e963 has its CatchHandler @ 0740eb58 */
      uVar9 = *(undefined8 *)PTR_DAT_08e80e40;
                    /* try { // try from 0740e968 to 0750e973 has its CatchHandler @ 0740eb4c */
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar9 = FUN_0710fcf0(uVar9,0);
                    /* try { // try from 0740e980 to 0750e997 has its CatchHandler @ 0740eb54 */
      uVar3 = FUN_07119344(uVar4,uVar9,0);
      if ((uVar3 & 1) == 0) {
        thunk_FUN_03ce5214(PTR_DAT_08e695a0);
        uVar7 = thunk_FUN_03cf5234();
        uVar4 = thunk_FUN_03ce5214(PTR_DAT_08eb6590);
        FUN_071396dc(uVar7,uVar4,0);
        uVar4 = thunk_FUN_03ce5214(PTR_DAT_08eb6598);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar7,uVar4);
      }
      in_stack_000000c0 = 0;
                    /* try { // try from 0740e998 to 0750e9ab has its CatchHandler @ 0740eb3c */
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_08e698e8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(plVar2);
      }
      puVar6 = (undefined8 *)thunk_FUN_03cf5388(plVar2);
      uVar4 = *puVar6;
      in_stack_000000a0 = uVar7;
      thunk_FUN_03d233cc(&stack0x000000a0,uVar7);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
      in_stack_000000b0 = (long *)0x0;
      in_stack_000000c0 = uVar4;
      thunk_FUN_03d233cc();
      in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
      *(undefined8 *)(lVar8 + 0x40) = in_stack_000000c0;
      *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
      *(long **)(lVar8 + 0x30) = in_stack_000000b0;
      thunk_FUN_03d233cc(lVar8 + 0x20,0);
    }
    in_stack_000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = (long *)0x0;
    if (*plVar2 != *(long *)PTR_DAT_08e69d78) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc(plVar2);
    }
    in_stack_000000a0 = uVar7;
    thunk_FUN_03d233cc(&stack0x000000a0,uVar7);
    in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
    in_stack_000000b0 = plVar2;
    thunk_FUN_03d233cc();
    in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
    in_stack_000000c0 = 0;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
    param_1 = lVar8 + 0x20;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
    *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
    *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
    *(long **)(lVar8 + 0x30) = in_stack_000000b0;
    param_2 = 0;
  } while( true );
}


