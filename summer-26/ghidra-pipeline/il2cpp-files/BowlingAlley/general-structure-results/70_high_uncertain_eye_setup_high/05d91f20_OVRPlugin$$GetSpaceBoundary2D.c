/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 05d91f20
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(void)

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
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  long *in_stack_00000080;
  ulong in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
    *(undefined8 *)(lVar8 + 0x40) = in_stack_00000090;
    *(ulong *)(lVar8 + 0x28) = in_stack_00000078;
    *(undefined8 *)(lVar8 + 0x20) = in_stack_00000070;
    *(ulong *)(lVar8 + 0x38) = in_stack_00000088;
    *(long **)(lVar8 + 0x30) = in_stack_00000080;
    thunk_FUN_0333a630(lVar8 + 0x20,0);
    while( true ) {
      unaff_w25 = unaff_w25 + 1;
      uVar3 = FUN_05391a64(&stack0x000000d0,*unaff_x26);
      plVar2 = in_stack_000000e8;
      uVar7 = in_stack_000000e0;
      if ((uVar3 & 1) == 0) {
        FUN_05391b84(&stack0x000000d0,*(undefined8 *)PTR_DAT_07289810);
        return;
      }
      if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar4 = thunk_FUN_032f70fc(in_stack_000000e8,0);
      uVar9 = *unaff_x27;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar9 = FUN_059324dc(uVar9,0);
      uVar3 = FUN_0593b434(uVar4,uVar9,0);
      if ((uVar3 & 1) != 0) break;
      uVar4 = thunk_FUN_032f70fc(plVar2,0);
      uVar9 = *(undefined8 *)PTR_DAT_072813d0;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar9 = FUN_059324dc(uVar9,0);
      uVar3 = FUN_0593b434(uVar4,uVar9,0);
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_032f70fc(plVar2,0);
        uVar9 = *(undefined8 *)PTR_DAT_072804d8;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar9 = FUN_059324dc(uVar9,0);
        uVar3 = FUN_0593b434(uVar4,uVar9,0);
        if ((uVar3 & 1) == 0) {
          thunk_FUN_032e1da0(PTR_DAT_0727b240);
          uVar7 = thunk_FUN_032a56a0();
          uVar4 = thunk_FUN_032e1da0(PTR_DAT_072b1b40);
          FUN_0595ad48(uVar7,uVar4,0);
          uVar4 = thunk_FUN_032e1da0(PTR_DAT_072b1b48);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar7,uVar4);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_0727e390 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar2);
        }
        puVar6 = (undefined8 *)thunk_FUN_032a57f4(plVar2);
        uVar4 = *puVar6;
        in_stack_000000a0 = uVar7;
        thunk_FUN_0333a630(&stack0x000000a0,uVar7);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar4;
        thunk_FUN_0333a630();
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar8 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
        *(long **)(lVar8 + 0x30) = in_stack_000000b0;
        thunk_FUN_0333a630(lVar8 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar2 != *(long *)PTR_DAT_072794f8) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar2);
        }
        in_stack_000000a0 = uVar7;
        thunk_FUN_0333a630(&stack0x000000a0,uVar7);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar2;
        thunk_FUN_0333a630();
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        in_stack_000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
        *(long **)(lVar8 + 0x30) = in_stack_000000b0;
        thunk_FUN_0333a630(lVar8 + 0x20,0);
      }
    }
    in_stack_000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = (long *)0x0;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_07279558 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar2);
    }
    puVar5 = (undefined4 *)thunk_FUN_032a57f4(plVar2);
    uVar1 = *puVar5;
    in_stack_000000a0 = uVar7;
    thunk_FUN_0333a630(&stack0x000000a0,uVar7);
    in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
    in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
    in_stack_000000b0 = (long *)0x0;
    thunk_FUN_0333a630();
    in_stack_000000c0 = 0;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    in_stack_00000078 = in_stack_000000a8;
    in_stack_00000070 = in_stack_000000a0;
    in_stack_00000088 = in_stack_000000b8;
    in_stack_00000080 = in_stack_000000b0;
    in_stack_00000090 = 0;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
  } while( true );
}


