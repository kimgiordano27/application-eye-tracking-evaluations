/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_SetTiledMultiResLevel
ENTRY_POINT: 0740e64c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_21_0__ovrp_SetTiledMultiResLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  uint uVar15;
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
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e699d0);
  FUN_03c8f898(PTR_DAT_08e875d8);
  FUN_03c8f898(PTR_DAT_08e875e0);
  FUN_03c8f898(PTR_DAT_08e810f0);
  FUN_03c8f898(PTR_DAT_08e69d78);
  FUN_03c8f898(PTR_DAT_08e695f0);
  FUN_03c8f898(PTR_DAT_08eb6580);
  *(undefined1 *)(unaff_x19 + 0xa6c) = 1;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000e0 = (long *)0x0;
  if ((unaff_x20 == 0) || (iVar6 = FUN_06a4e050(), iVar6 == 0)) {
    return 0;
  }
  uVar7 = FUN_06a4e050();
  lVar8 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08eb6580,uVar7);
  FUN_06a4e7b0(&stack0x000000a0);
  puVar3 = PTR_DAT_08e90840;
  puVar2 = PTR_DAT_08e80c78;
  puVar1 = PTR_DAT_08e695f0;
  uVar15 = 0;
  in_stack_000000d8 = in_stack_000000a8;
  in_stack_000000d0 = in_stack_000000a0;
  in_stack_000000e8 = in_stack_000000b8;
  in_stack_000000e0 = in_stack_000000b0;
  in_stack_000000f0 = in_stack_000000c0;
  do {
    uVar9 = FUN_04aa6440(&stack0x000000d0,*(undefined8 *)puVar3);
    plVar5 = in_stack_000000e8;
    plVar4 = in_stack_000000e0;
    if ((uVar9 & 1) == 0) {
      FUN_04aa6560(&stack0x000000d0,*(undefined8 *)PTR_DAT_08e90838);
      return lVar8;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar10 = thunk_FUN_03d12a58(in_stack_000000e8,0);
    uVar14 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar14 = FUN_0710fcf0(uVar14,0);
    uVar9 = FUN_07119344(uVar10,uVar14,0);
    if ((uVar9 & 1) == 0) {
      uVar10 = thunk_FUN_03d12a58(plVar5,0);
      uVar14 = *(undefined8 *)PTR_DAT_08e810f0;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar14 = FUN_0710fcf0(uVar14,0);
      uVar9 = FUN_07119344(uVar10,uVar14,0);
      if ((uVar9 & 1) == 0) {
        uVar10 = thunk_FUN_03d12a58(plVar5,0);
        uVar14 = *(undefined8 *)PTR_DAT_08e80e40;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar14 = FUN_0710fcf0(uVar14,0);
        uVar9 = FUN_07119344(uVar10,uVar14,0);
        if ((uVar9 & 1) == 0) {
          thunk_FUN_03ce5214(PTR_DAT_08e695a0);
          uVar10 = thunk_FUN_03cf5234();
          uVar14 = thunk_FUN_03ce5214(PTR_DAT_08eb6590);
          FUN_071396dc(uVar10,uVar14,0);
          uVar14 = thunk_FUN_03ce5214(PTR_DAT_08eb6598);
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar10,uVar14);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_08e698e8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(plVar5);
        }
        puVar12 = (undefined8 *)thunk_FUN_03cf5388(plVar5);
        uVar10 = *puVar12;
        in_stack_000000a0 = plVar4;
        thunk_FUN_03d233cc(&stack0x000000a0,plVar4);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar10;
        thunk_FUN_03d233cc(&stack0x000000b0,0);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
        *(long **)(lVar13 + 0x20) = in_stack_000000a0;
        *(long **)(lVar13 + 0x38) = in_stack_000000b8;
        *(long **)(lVar13 + 0x30) = in_stack_000000b0;
        thunk_FUN_03d233cc(lVar13 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar5 != *(long *)PTR_DAT_08e69d78) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(plVar5);
        }
        in_stack_000000a0 = plVar4;
        thunk_FUN_03d233cc(&stack0x000000a0,plVar4);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar5;
        thunk_FUN_03d233cc(&stack0x000000b0,plVar5);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        in_stack_000000c0 = 0;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
        *(long **)(lVar13 + 0x20) = in_stack_000000a0;
        *(long **)(lVar13 + 0x38) = in_stack_000000b8;
        *(long **)(lVar13 + 0x30) = in_stack_000000b0;
        thunk_FUN_03d233cc(lVar13 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = (long *)0x0;
      in_stack_000000b8 = (long *)0x0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_08e699d0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(plVar5);
      }
      puVar11 = (undefined4 *)thunk_FUN_03cf5388(plVar5);
      uVar7 = *puVar11;
      in_stack_000000a0 = plVar4;
      thunk_FUN_03d233cc(&stack0x000000a0,plVar4);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = (long *)CONCAT44(in_stack_000000b8._4_4_,uVar7);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_03d233cc(&stack0x000000b0,0);
      in_stack_000000c0 = 0;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
      *(undefined8 *)(lVar13 + 0x40) = 0;
      *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
      *(long **)(lVar13 + 0x20) = in_stack_000000a0;
      *(long **)(lVar13 + 0x38) = in_stack_000000b8;
      *(long **)(lVar13 + 0x30) = in_stack_000000b0;
      thunk_FUN_03d233cc(lVar13 + 0x20,0);
    }
    uVar15 = uVar15 + 1;
  } while( true );
}


