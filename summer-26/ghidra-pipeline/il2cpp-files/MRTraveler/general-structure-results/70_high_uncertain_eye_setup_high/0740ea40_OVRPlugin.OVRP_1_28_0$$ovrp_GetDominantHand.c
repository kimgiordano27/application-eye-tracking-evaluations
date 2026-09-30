/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_GetDominantHand
ENTRY_POINT: 0740ea40
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


void OVRPlugin_OVRP_1_28_0__ovrp_GetDominantHand(void)

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
  
  while( true ) {
    while( true ) {
      while( true ) {
        unaff_w25 = unaff_w25 + 1;
        uVar3 = FUN_04aa6440(&stack0x000000d0,*unaff_x26);
        plVar2 = in_stack_000000e8;
        uVar7 = in_stack_000000e0;
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 0740ea60 to 0750ea67 has its CatchHandler @ 0740eb38 */
          FUN_04aa6560(&stack0x000000d0,*(undefined8 *)PTR_DAT_08e90838);
                    /* try { // try from 0740ea70 to 0750ea77 has its CatchHandler @ 0740eb10 */
                    /* try { // try from 0740ea84 to 0750ea8b has its CatchHandler @ 0740eb34 */
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
      if ((uVar3 & 1) == 0) break;
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
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
      *(long **)(lVar8 + 0x30) = in_stack_000000b0;
      thunk_FUN_03d233cc(lVar8 + 0x20,0);
    }
    uVar4 = thunk_FUN_03d12a58(plVar2,0);
    uVar9 = *(undefined8 *)PTR_DAT_08e80e40;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar9 = FUN_0710fcf0(uVar9,0);
    uVar3 = FUN_07119344(uVar4,uVar9,0);
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 0740eac8 to 0750eacb has its CatchHandler @ 0740eb2c */
      thunk_FUN_03ce5214(PTR_DAT_08e695a0);
                    /* try { // try from 0740eacc to 0750eacf has its CatchHandler @ 0740eb28 */
      uVar7 = thunk_FUN_03cf5234();
                    /* try { // try from 0740ead0 to 0750ead3 has its CatchHandler @ 0740eb54 */
                    /* try { // try from 0740ead4 to 0750ead7 has its CatchHandler @ 0740eb40 */
                    /* try { // try from 0740ead8 to 0750eadb has its CatchHandler @ 0740eb20 */
                    /* try { // try from 0740eadc to 0750eadf has its CatchHandler @ 0740eb60 */
      uVar4 = thunk_FUN_03ce5214(PTR_DAT_08eb6590);
                    /* try { // try from 0740eae0 to 0750eae3 has its CatchHandler @ 0740eb50 */
                    /* try { // try from 0740eae4 to 0750eaeb has its CatchHandler @ 0740eb60 */
                    /* try { // try from 0740eaec to 0750eaef has its CatchHandler @ 0740eb1c */
      FUN_071396dc(uVar7,uVar4,0);
                    /* try { // try from 0740eaf0 to 0750eaf3 has its CatchHandler @ 0740eb38 */
                    /* try { // try from 0740eaf4 to 0750eaf7 has its CatchHandler @ 0740eb14 */
                    /* try { // try from 0740eaf8 to 0750eafb has its CatchHandler @ 0740eb34 */
      uVar4 = thunk_FUN_03ce5214(PTR_DAT_08eb6598);
                    /* try { // try from 0740eafc to 0750eb07 has its CatchHandler @ 0740eb60 */
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar7,uVar4);
    }
    in_stack_000000c0 = 0;
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
    if (unaff_x19 == 0) break;
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
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


