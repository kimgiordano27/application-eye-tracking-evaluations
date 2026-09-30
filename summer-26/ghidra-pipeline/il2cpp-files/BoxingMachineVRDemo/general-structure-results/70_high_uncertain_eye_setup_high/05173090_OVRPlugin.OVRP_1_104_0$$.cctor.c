/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$.cctor
ENTRY_POINT: 05173090
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


void OVRPlugin_OVRP_1_104_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x21;
  undefined8 unaff_x22;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    if (param_1 != *(long *)(param_3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(unaff_x21);
    }
    puVar5 = (undefined4 *)thunk_FUN_02d9d688(unaff_x21);
    uVar1 = *puVar5;
    in_stack_000000a0 = unaff_x22;
    thunk_FUN_02dd37b4(&stack0x000000a0,unaff_x22);
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
    lVar7 = unaff_x19 + (int)unaff_w24 * unaff_x28;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(ulong *)(lVar7 + 0x28) = in_stack_000000a8;
    *(undefined8 *)(lVar7 + 0x20) = in_stack_000000a0;
    *(ulong *)(lVar7 + 0x38) = in_stack_000000b8;
    *(long **)(lVar7 + 0x30) = in_stack_000000b0;
    thunk_FUN_02dd37b4(lVar7 + 0x20,0);
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
      uVar3 = thunk_FUN_02d709fc(in_stack_000000e8,0);
      lVar7 = *(long *)(unaff_x26 + 0x48);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_05015c2c(lVar7 + 0x20,0);
      uVar2 = FUN_0501ed54(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) break;
      uVar3 = thunk_FUN_02d709fc(unaff_x21,0);
      lVar7 = *(long *)(unaff_x26 + 0x90);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_05015c2c(lVar7 + 0x20,0);
      uVar2 = FUN_0501ed54(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = thunk_FUN_02d709fc(unaff_x21,0);
        lVar7 = *(long *)(unaff_x26 + 0x80);
        if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_05015c2c(lVar7 + 0x20,0);
        uVar2 = FUN_0501ed54(uVar3,uVar4,0);
        if ((uVar2 & 1) == 0) {
          thunk_FUN_02dc61f4(PTR_DAT_067608d0);
          uVar3 = thunk_FUN_02d9d534();
          uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06782aa8);
          FUN_0503de34(uVar3,uVar4,0);
          uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06782ab0);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar3,uVar4);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(unaff_x21);
        }
        puVar6 = (undefined8 *)thunk_FUN_02d9d688(unaff_x21);
        uVar3 = *puVar6;
        in_stack_000000a0 = unaff_x22;
        thunk_FUN_02dd37b4(&stack0x000000a0,unaff_x22);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar3;
        thunk_FUN_02dd37b4();
        in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar7 = unaff_x19 + (int)unaff_w24 * unaff_x28;
        *(undefined8 *)(lVar7 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar7 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar7 + 0x38) = in_stack_000000b8;
        *(long **)(lVar7 + 0x30) = in_stack_000000b0;
        thunk_FUN_02dd37b4(lVar7 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*unaff_x21 != *(long *)(unaff_x26 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(unaff_x21);
        }
        in_stack_000000a0 = unaff_x22;
        thunk_FUN_02dd37b4(&stack0x000000a0,unaff_x22);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = unaff_x21;
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
        lVar7 = unaff_x19 + (int)unaff_w24 * unaff_x28;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(ulong *)(lVar7 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar7 + 0x38) = in_stack_000000b8;
        *(long **)(lVar7 + 0x30) = in_stack_000000b0;
        thunk_FUN_02dd37b4(lVar7 + 0x20,0);
      }
    }
    in_stack_000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = (long *)0x0;
    param_3 = *(long *)(unaff_x26 + 0x48);
    param_1 = *(long *)(*unaff_x21 + 0x40);
  } while( true );
}


