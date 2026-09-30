/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameSize
ENTRY_POINT: 05774bd8
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameSize(void)

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
  long unaff_x20;
  undefined8 uVar14;
  uint uVar15;
  long *in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *plStack00000000000000d0;
  ulong uStack00000000000000d8;
  long *plStack00000000000000e0;
  long *plStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  
  uStack00000000000000f0 = 0;
  uStack00000000000000d8 = 0;
  plStack00000000000000d0 = (long *)0x0;
  plStack00000000000000e8 = (long *)0x0;
  plStack00000000000000e0 = (long *)0x0;
                    /* try { // try from 05774bfc to 05874bff has its CatchHandler @ 05774c28 */
  if ((unaff_x20 == 0) || (iVar6 = FUN_04c742fc(), iVar6 == 0)) {
    return 0;
  }
                    /* try { // try from 05774c00 to 05874c0b has its CatchHandler @ 05774ad8 */
  uVar7 = FUN_04c742fc();
                    /* try { // try from 05774c0c to 05874c13 has its CatchHandler @ 05774c20 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05774b64 with catch @ 05774c14
                       try { // try from 05774c14 to 05874c3f has its CatchHandler @ 05774ad8 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05774bb4 with catch @ 05774c18
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05774b8c with catch @ 05774c1c
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05774c0c with catch @ 05774c20
                        */
  lVar8 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d5a0e8,uVar7);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05774b68 with catch @ 05774c24
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05774b2c with catch @ 05774c28
                       catch(type#1 @ 069384f8) { ... } // from try @ 05774bfc with catch @ 05774c28
                        */
                    /* try { // try from 05774c40 to 05874c43 has its CatchHandler @ 05774c54 */
  FUN_04c74a5c(&stack0x000000a0);
  puVar3 = PTR_DAT_06d59c90;
  puVar2 = PTR_DAT_06d04130;
  puVar1 = PTR_DAT_06d01eb0;
                    /* try { // try from 05774c44 to 05874c6f has its CatchHandler @ 05774ad8 */
                    /* catch() { ... } // from try @ 05774c40 with catch @ 05774c54 */
  uVar15 = 0;
  uStack00000000000000d8 = in_stack_000000a8;
  plStack00000000000000d0 = in_stack_000000a0;
  plStack00000000000000e8 = in_stack_000000b8;
  plStack00000000000000e0 = in_stack_000000b0;
  uStack00000000000000f0 = in_stack_000000c0;
  do {
    uVar9 = FUN_04e98e80(&stack0x000000d0,*(undefined8 *)puVar3);
    plVar5 = plStack00000000000000e8;
    plVar4 = plStack00000000000000e0;
    if ((uVar9 & 1) == 0) {
      FUN_04e98fa0(&stack0x000000d0,*(undefined8 *)PTR_DAT_06d59c88);
      return lVar8;
    }
    if (plStack00000000000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar10 = thunk_FUN_02ebbee0(plStack00000000000000e8,0);
    uVar14 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar14 = FUN_056109c0(uVar14,0);
    uVar9 = FUN_05619d34(uVar10,uVar14,0);
    if ((uVar9 & 1) == 0) {
      uVar10 = thunk_FUN_02ebbee0(plVar5,0);
      uVar14 = *(undefined8 *)PTR_DAT_06d02548;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar14 = FUN_056109c0(uVar14,0);
      uVar9 = FUN_05619d34(uVar10,uVar14,0);
      if ((uVar9 & 1) == 0) {
        uVar10 = thunk_FUN_02ebbee0(plVar5,0);
        uVar14 = *(undefined8 *)PTR_DAT_06d040f8;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar14 = FUN_056109c0(uVar14,0);
        uVar9 = FUN_05619d34(uVar10,uVar14,0);
        if ((uVar9 & 1) == 0) {
          thunk_FUN_02f239f0(PTR_DAT_06d021d0);
          uVar10 = thunk_FUN_02ef1808();
          uVar14 = thunk_FUN_02f239f0(PTR_DAT_06d5a0f8);
          FUN_05639edc(uVar10,uVar14,0);
          uVar14 = thunk_FUN_02f239f0(PTR_DAT_06d5a100);
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar10,uVar14);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_06d04108 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar5);
        }
        puVar12 = (undefined8 *)thunk_FUN_02ef195c(plVar5);
        uVar10 = *puVar12;
        in_stack_000000a0 = plVar4;
        thunk_FUN_02f411dc(&stack0x000000a0,plVar4);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar10;
        thunk_FUN_02f411dc(&stack0x000000b0,0);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
        *(long **)(lVar13 + 0x20) = in_stack_000000a0;
        *(long **)(lVar13 + 0x38) = in_stack_000000b8;
        *(long **)(lVar13 + 0x30) = in_stack_000000b0;
        thunk_FUN_02f411dc(lVar13 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar5 != *(long *)PTR_DAT_06d02350) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar5);
        }
        in_stack_000000a0 = plVar4;
        thunk_FUN_02f411dc(&stack0x000000a0,plVar4);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar5;
        thunk_FUN_02f411dc(&stack0x000000b0,plVar5);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        in_stack_000000c0 = 0;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
        *(long **)(lVar13 + 0x20) = in_stack_000000a0;
        *(long **)(lVar13 + 0x38) = in_stack_000000b8;
        *(long **)(lVar13 + 0x30) = in_stack_000000b0;
        thunk_FUN_02f411dc(lVar13 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = (long *)0x0;
      in_stack_000000b8 = (long *)0x0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar5);
      }
      puVar11 = (undefined4 *)thunk_FUN_02ef195c(plVar5);
      uVar7 = *puVar11;
      in_stack_000000a0 = plVar4;
      thunk_FUN_02f411dc(&stack0x000000a0,plVar4);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = (long *)CONCAT44(in_stack_000000b8._4_4_,uVar7);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_02f411dc(&stack0x000000b0,0);
      in_stack_000000c0 = 0;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
      *(undefined8 *)(lVar13 + 0x40) = 0;
      *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
      *(long **)(lVar13 + 0x20) = in_stack_000000a0;
      *(long **)(lVar13 + 0x38) = in_stack_000000b8;
      *(long **)(lVar13 + 0x30) = in_stack_000000b0;
      thunk_FUN_02f411dc(lVar13 + 0x20,0);
    }
    uVar15 = uVar15 + 1;
  } while( true );
}


