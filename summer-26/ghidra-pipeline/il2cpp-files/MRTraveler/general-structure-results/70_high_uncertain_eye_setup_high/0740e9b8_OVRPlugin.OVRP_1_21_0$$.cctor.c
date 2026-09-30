/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$.cctor
ENTRY_POINT: 0740e9b8
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


void OVRPlugin_OVRP_1_21_0___cctor(void)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  uint unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    if (!(bool)in_ZR) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc(unaff_x21);
    }
    puVar4 = (undefined8 *)thunk_FUN_03cf5388(unaff_x21);
    uVar7 = *puVar4;
                    /* try { // try from 0740e9cc to 0750e9d3 has its CatchHandler @ 0740eb24 */
    in_stack_000000a0 = unaff_x22;
    thunk_FUN_03d233cc(&stack0x000000a0,unaff_x22);
    in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
    in_stack_000000b0 = (long *)0x0;
    in_stack_000000c0 = uVar7;
                    /* try { // try from 0740e9e8 to 0750ea1f has its CatchHandler @ 0740eb60 */
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
    lVar5 = unaff_x19 + (int)unaff_w25 * unaff_x29;
    *(undefined8 *)(lVar5 + 0x40) = in_stack_000000c0;
    *(ulong *)(lVar5 + 0x28) = in_stack_000000a8;
    *(undefined8 *)(lVar5 + 0x20) = in_stack_000000a0;
    *(ulong *)(lVar5 + 0x38) = in_stack_000000b8;
    *(long **)(lVar5 + 0x30) = in_stack_000000b0;
    thunk_FUN_03d233cc(lVar5 + 0x20,0);
    while( true ) {
      while( true ) {
        unaff_w25 = unaff_w25 + 1;
        uVar2 = FUN_04aa6440(&stack0x000000d0,*unaff_x26);
        unaff_x21 = in_stack_000000e8;
        unaff_x22 = in_stack_000000e0;
        if ((uVar2 & 1) == 0) {
          FUN_04aa6560(&stack0x000000d0,*(undefined8 *)PTR_DAT_08e90838);
          return;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar7 = thunk_FUN_03d12a58(in_stack_000000e8,0);
        uVar6 = *unaff_x27;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar6 = FUN_0710fcf0(uVar6,0);
        uVar2 = FUN_07119344(uVar7,uVar6,0);
        if ((uVar2 & 1) == 0) break;
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)PTR_DAT_08e699d0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(unaff_x21);
        }
        puVar3 = (undefined4 *)thunk_FUN_03cf5388(unaff_x21);
        uVar1 = *puVar3;
        in_stack_000000a0 = unaff_x22;
        thunk_FUN_03d233cc(&stack0x000000a0,unaff_x22);
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
        lVar5 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar5 + 0x40) = 0;
        *(ulong *)(lVar5 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar5 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar5 + 0x38) = in_stack_000000b8;
        *(long **)(lVar5 + 0x30) = in_stack_000000b0;
        thunk_FUN_03d233cc(lVar5 + 0x20,0);
      }
      uVar7 = thunk_FUN_03d12a58(unaff_x21,0);
      uVar6 = *(undefined8 *)PTR_DAT_08e810f0;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar6 = FUN_0710fcf0(uVar6,0);
      uVar2 = FUN_07119344(uVar7,uVar6,0);
      if ((uVar2 & 1) == 0) break;
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*unaff_x21 != *(long *)PTR_DAT_08e69d78) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(unaff_x21);
      }
      in_stack_000000a0 = unaff_x22;
      thunk_FUN_03d233cc(&stack0x000000a0,unaff_x22);
      in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
      in_stack_000000b0 = unaff_x21;
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
      lVar5 = unaff_x19 + (int)unaff_w25 * unaff_x29;
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(ulong *)(lVar5 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar5 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar5 + 0x38) = in_stack_000000b8;
      *(long **)(lVar5 + 0x30) = in_stack_000000b0;
      thunk_FUN_03d233cc(lVar5 + 0x20,0);
    }
    uVar7 = thunk_FUN_03d12a58(unaff_x21,0);
    uVar6 = *(undefined8 *)PTR_DAT_08e80e40;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar6 = FUN_0710fcf0(uVar6,0);
    uVar2 = FUN_07119344(uVar7,uVar6,0);
    if ((uVar2 & 1) == 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e695a0);
      uVar7 = thunk_FUN_03cf5234();
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08eb6590);
      FUN_071396dc(uVar7,uVar6,0);
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08eb6598);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar7,uVar6);
    }
    in_stack_000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = (long *)0x0;
    in_ZR = *(long *)(*unaff_x21 + 0x40) == *(long *)(*(long *)PTR_DAT_08e698e8 + 0x40);
  } while( true );
}


