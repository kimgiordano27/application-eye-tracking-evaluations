/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$.cctor
ENTRY_POINT: 051732a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0___cctor
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined4 unaff_w27;
  long unaff_x28;
  long *plVar9;
  ulong uVar10;
  undefined8 uStack0000000000000010;
  ulong uStack0000000000000018;
  long *plStack0000000000000020;
  ulong uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  uVar7 = param_2._0_8_;
  uVar2 = param_2._8_8_;
  plVar9 = param_3._0_8_;
  uVar10 = param_3._8_8_;
  do {
    uStack0000000000000010 = uVar7;
    uStack0000000000000018 = uVar2;
    plStack0000000000000020 = plVar9;
    uStack0000000000000028 = uVar10;
    uStack0000000000000030 = param_1;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    lVar8 = unaff_x19 + (int)unaff_w24 * unaff_x28;
    *(undefined8 *)(lVar8 + 0x40) = param_1;
    *(ulong *)(lVar8 + 0x28) = uVar2;
    *(undefined8 *)(lVar8 + 0x20) = uVar7;
    *(ulong *)(lVar8 + 0x38) = uVar10;
    *(long **)(lVar8 + 0x30) = plVar9;
    thunk_FUN_02dd37b4(lVar8 + 0x20,0);
    while( true ) {
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        uVar2 = FUN_04b3a824(&stack0x000000d0,*unaff_x25);
        plVar9 = in_stack_000000e8;
        uVar7 = in_stack_000000e0;
        if ((uVar2 & 1) == 0) {
          FUN_04b3a944(&stack0x000000d0,*(undefined8 *)PTR_DAT_06782618);
          return;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar3 = thunk_FUN_02d709fc(in_stack_000000e8,0);
        lVar8 = *(long *)(unaff_x26 + 0x48);
        if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_05015c2c(lVar8 + 0x20,0);
        uVar2 = FUN_0501ed54(uVar3,uVar4,0);
        if ((uVar2 & 1) == 0) break;
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar9);
        }
        puVar5 = (undefined4 *)thunk_FUN_02d9d688(plVar9);
        uVar1 = *puVar5;
        in_stack_000000a0 = uVar7;
        thunk_FUN_02dd37b4(&stack0x000000a0,uVar7);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,unaff_w27);
        in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
        in_stack_000000b0 = (long *)0x0;
        thunk_FUN_02dd37b4();
        in_stack_000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar8 = unaff_x19 + (int)unaff_w24 * unaff_x28;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
        *(long **)(lVar8 + 0x30) = in_stack_000000b0;
        thunk_FUN_02dd37b4(lVar8 + 0x20,0);
      }
      uVar3 = thunk_FUN_02d709fc(plVar9,0);
      lVar8 = *(long *)(unaff_x26 + 0x90);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_05015c2c(lVar8 + 0x20,0);
      uVar2 = FUN_0501ed54(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) break;
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*plVar9 != *(long *)(unaff_x26 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar9);
      }
      in_stack_000000a0 = uVar7;
      thunk_FUN_02dd37b4(&stack0x000000a0,uVar7);
      in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
      in_stack_000000b0 = plVar9;
      thunk_FUN_02dd37b4();
      in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
      in_stack_000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar8 = unaff_x19 + (int)unaff_w24 * unaff_x28;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(ulong *)(lVar8 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar8 + 0x38) = in_stack_000000b8;
      *(long **)(lVar8 + 0x30) = in_stack_000000b0;
      thunk_FUN_02dd37b4(lVar8 + 0x20,0);
    }
    uVar3 = thunk_FUN_02d709fc(plVar9,0);
    lVar8 = *(long *)(unaff_x26 + 0x80);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_05015c2c(lVar8 + 0x20,0);
    uVar2 = FUN_0501ed54(uVar3,uVar4,0);
    if ((uVar2 & 1) == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_067608d0);
      uVar7 = thunk_FUN_02d9d534();
      uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06782aa8);
      FUN_0503de34(uVar7,uVar3,0);
      uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06782ab0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar7,uVar3);
    }
    in_stack_000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = (long *)0x0;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar9);
    }
    puVar6 = (undefined8 *)thunk_FUN_02d9d688(plVar9);
    uVar3 = *puVar6;
    in_stack_000000a0 = uVar7;
    thunk_FUN_02dd37b4(&stack0x000000a0,uVar7);
    in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
    in_stack_000000b0 = (long *)0x0;
    in_stack_000000c0 = uVar3;
    thunk_FUN_02dd37b4();
    in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
    param_1 = in_stack_000000c0;
    uVar7 = in_stack_000000a0;
    uVar2 = in_stack_000000a8;
    plVar9 = in_stack_000000b0;
    uVar10 = in_stack_000000b8;
  } while (unaff_x19 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


