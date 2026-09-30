/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SendMicrogestureHint
ENTRY_POINT: 0517323c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_SendMicrogestureHint(undefined1 param_1 [16])

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x21;
  undefined8 unaff_x22;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined8 uVar7;
  undefined8 uStack00000000000000a0;
  ulong uStack00000000000000a8;
  long *plStack00000000000000b0;
  ulong uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  uStack00000000000000a8 = param_1._8_8_;
  uStack00000000000000a0 = param_1._0_8_;
  do {
    uStack00000000000000c0 = 0;
    plStack00000000000000b0 = (long *)uStack00000000000000a0;
    uStack00000000000000b8 = uStack00000000000000a8;
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(unaff_x21);
    }
    puVar5 = (undefined8 *)thunk_FUN_02d9d688(unaff_x21);
    uVar7 = *puVar5;
    uStack00000000000000a0 = unaff_x22;
    thunk_FUN_02dd37b4(&stack0x000000a0,unaff_x22);
    uStack00000000000000a8 = CONCAT44(uStack00000000000000a8._4_4_,2);
    plStack00000000000000b0 = (long *)0x0;
    uStack00000000000000c0 = uVar7;
    thunk_FUN_02dd37b4();
    uStack00000000000000b8 = uStack00000000000000b8 & 0xffffffff00000000;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    lVar6 = unaff_x19 + (int)unaff_w24 * unaff_x28;
    *(undefined8 *)(lVar6 + 0x40) = uStack00000000000000c0;
    *(ulong *)(lVar6 + 0x28) = uStack00000000000000a8;
    *(undefined8 *)(lVar6 + 0x20) = uStack00000000000000a0;
    *(ulong *)(lVar6 + 0x38) = uStack00000000000000b8;
    *(long **)(lVar6 + 0x30) = plStack00000000000000b0;
    thunk_FUN_02dd37b4(lVar6 + 0x20,0);
    while( true ) {
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        uVar2 = FUN_04b3a824(&stack0x000000d0,*unaff_x25);
        unaff_x21 = in_stack_000000e8;
        unaff_x22 = in_stack_000000e0;
        if ((uVar2 & 1) == 0) {
          FUN_04b3a944(&stack0x000000d0,*(undefined8 *)PTR_DAT_06782618);
          return;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar7 = thunk_FUN_02d709fc(in_stack_000000e8,0);
        lVar6 = *(long *)(unaff_x26 + 0x48);
        if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_05015c2c(lVar6 + 0x20,0);
        uVar2 = FUN_0501ed54(uVar7,uVar3,0);
        if ((uVar2 & 1) == 0) break;
        uStack00000000000000c0 = 0;
        uStack00000000000000a8 = 0;
        uStack00000000000000a0 = 0;
        uStack00000000000000b8 = 0;
        plStack00000000000000b0 = (long *)0x0;
        if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(unaff_x21);
        }
        puVar4 = (undefined4 *)thunk_FUN_02d9d688(unaff_x21);
        uVar1 = *puVar4;
        uStack00000000000000a0 = unaff_x22;
        thunk_FUN_02dd37b4(&stack0x000000a0,unaff_x22);
        uStack00000000000000a8 = CONCAT44(uStack00000000000000a8._4_4_,unaff_w27);
        uStack00000000000000b8 = CONCAT44(uStack00000000000000b8._4_4_,uVar1);
        plStack00000000000000b0 = (long *)0x0;
        thunk_FUN_02dd37b4();
        uStack00000000000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar6 = unaff_x19 + (int)unaff_w24 * unaff_x28;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *(ulong *)(lVar6 + 0x28) = uStack00000000000000a8;
        *(undefined8 *)(lVar6 + 0x20) = uStack00000000000000a0;
        *(ulong *)(lVar6 + 0x38) = uStack00000000000000b8;
        *(long **)(lVar6 + 0x30) = plStack00000000000000b0;
        thunk_FUN_02dd37b4(lVar6 + 0x20,0);
      }
      uVar7 = thunk_FUN_02d709fc(unaff_x21,0);
      lVar6 = *(long *)(unaff_x26 + 0x90);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar3 = FUN_05015c2c(lVar6 + 0x20,0);
      uVar2 = FUN_0501ed54(uVar7,uVar3,0);
      if ((uVar2 & 1) == 0) break;
      uStack00000000000000c0 = 0;
      uStack00000000000000a8 = 0;
      uStack00000000000000a0 = 0;
      uStack00000000000000b8 = 0;
      plStack00000000000000b0 = (long *)0x0;
      if (*unaff_x21 != *(long *)(unaff_x26 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(unaff_x21);
      }
      uStack00000000000000a0 = unaff_x22;
      thunk_FUN_02dd37b4(&stack0x000000a0,unaff_x22);
      uStack00000000000000a8 = uStack00000000000000a8 & 0xffffffff00000000;
      plStack00000000000000b0 = unaff_x21;
      thunk_FUN_02dd37b4();
      uStack00000000000000b8 = uStack00000000000000b8 & 0xffffffff00000000;
      uStack00000000000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar6 = unaff_x19 + (int)unaff_w24 * unaff_x28;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(ulong *)(lVar6 + 0x28) = uStack00000000000000a8;
      *(undefined8 *)(lVar6 + 0x20) = uStack00000000000000a0;
      *(ulong *)(lVar6 + 0x38) = uStack00000000000000b8;
      *(long **)(lVar6 + 0x30) = plStack00000000000000b0;
      thunk_FUN_02dd37b4(lVar6 + 0x20,0);
    }
    uVar7 = thunk_FUN_02d709fc(unaff_x21,0);
    lVar6 = *(long *)(unaff_x26 + 0x80);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_05015c2c(lVar6 + 0x20,0);
    uVar2 = FUN_0501ed54(uVar7,uVar3,0);
    if ((uVar2 & 1) == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_067608d0);
      uVar7 = thunk_FUN_02d9d534();
      uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06782aa8);
      FUN_0503de34(uVar7,uVar3,0);
      uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06782ab0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar7,uVar3);
    }
    uStack00000000000000a0 = 0;
    uStack00000000000000a8 = 0;
  } while( true );
}


