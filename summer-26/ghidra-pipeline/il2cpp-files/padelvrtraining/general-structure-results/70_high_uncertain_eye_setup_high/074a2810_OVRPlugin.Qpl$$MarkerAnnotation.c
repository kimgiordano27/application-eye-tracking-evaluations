/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 074a2810
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerAnnotation(void)

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
    uVar3 = FUN_06e6c258(&stack0x000000d0,*unaff_x26);
    plVar2 = in_stack_000000e8;
    uVar7 = in_stack_000000e0;
    if ((uVar3 & 1) == 0) {
      FUN_06e6c378(&stack0x000000d0,*(undefined8 *)PTR_DAT_0921a558);
      return;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar4 = thunk_FUN_03d9f2a8(in_stack_000000e8,0);
    uVar9 = *unaff_x27;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar9 = FUN_07186ef4(uVar9,0);
    uVar3 = FUN_07190474(uVar4,uVar9,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = thunk_FUN_03d9f2a8(plVar2,0);
      uVar9 = *(undefined8 *)PTR_StringLiteral_50861_091adf38;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar9 = FUN_07186ef4(uVar9,0);
      uVar3 = FUN_07190474(uVar4,uVar9,0);
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_03d9f2a8(plVar2,0);
        uVar9 = *(undefined8 *)PTR_StringLiteral_49906_091adf20;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar9 = FUN_07186ef4(uVar9,0);
        uVar3 = FUN_07190474(uVar4,uVar9,0);
        if ((uVar3 & 1) == 0) {
          thunk_FUN_03d1e194(PTR_DAT_091a4f90);
          uVar7 = thunk_FUN_03d2ef40();
          uVar4 = thunk_FUN_03d1e194(PTR_DAT_09223e08);
          FUN_071b07cc(uVar7,uVar4,0);
          uVar4 = thunk_FUN_03d1e194(PTR_DAT_09223e10);
                    /* WARNING: Subroutine does not return */
          FUN_03d2d414(uVar7,uVar4);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_091adc00 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d8e4(plVar2);
        }
        puVar6 = (undefined8 *)thunk_FUN_03d2f094(plVar2);
        uVar4 = *puVar6;
        in_stack_000000a0 = uVar7;
        thunk_FUN_03d1023c(&stack0x000000a0,uVar7);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar4;
        thunk_FUN_03d1023c();
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar8 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
        *(long **)(lVar8 + 0x30) = in_stack_000000b0;
        thunk_FUN_03d1023c(lVar8 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar2 != *(long *)PTR_DAT_091a13f8) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d8e4(plVar2);
        }
        in_stack_000000a0 = uVar7;
        thunk_FUN_03d1023c(&stack0x000000a0,uVar7);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar2;
        thunk_FUN_03d1023c();
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        in_stack_000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
        *(long **)(lVar8 + 0x30) = in_stack_000000b0;
        thunk_FUN_03d1023c(lVar8 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_091a0d08 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(plVar2);
      }
      puVar5 = (undefined4 *)thunk_FUN_03d2f094(plVar2);
      uVar1 = *puVar5;
      in_stack_000000a0 = uVar7;
      thunk_FUN_03d1023c(&stack0x000000a0,uVar7);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_03d1023c();
      in_stack_000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar8 = unaff_x19 + (int)unaff_w25 * unaff_x29;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
      *(long **)(lVar8 + 0x30) = in_stack_000000b0;
      thunk_FUN_03d1023c(lVar8 + 0x20,0);
    }
    unaff_w25 = unaff_w25 + 1;
  } while( true );
}


