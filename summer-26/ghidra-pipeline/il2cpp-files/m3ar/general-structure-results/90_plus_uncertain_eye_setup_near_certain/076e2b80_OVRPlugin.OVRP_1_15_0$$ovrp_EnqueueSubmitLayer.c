/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 076e2b80
PROGRAM: m3ar-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(undefined1 param_1 [16],undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 in_w8;
  undefined8 uVar5;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  *(long *)(unaff_x20 + 0x28) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x20) = param_1._0_8_;
  *(undefined4 *)(unaff_x20 + 0x38) = in_w8;
  *(undefined8 *)(unaff_x20 + 0x30) = in_x9;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  FUN_0852b218(0x3f800000,param_2,0);
  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) != 0) {
    *(undefined4 *)(unaff_x20 + 0x54) = uStack0000000000000078;
    puVar1 = PTR_DAT_08f680c8;
    *(undefined8 *)(unaff_x20 + 0x4c) = uStack0000000000000070;
    *(undefined8 *)(unaff_x20 + 0x44) = uStack0000000000000068;
    *(undefined8 *)(unaff_x20 + 0x3c) = uStack0000000000000060;
    uVar3 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
    FUN_0852c0f0();
    *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
    uVar3 = FUN_0852bfb8(0,0x3f800000,0x3f800000,0);
    uVar5 = *unaff_x22;
    *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
    lVar4 = FUN_040316d0(uVar5,2);
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    FUN_0852b218(0xc2b40000,0xc2b40000,&stack0x00000040,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined4 *)(lVar4 + 0x38) = in_stack_00000058;
      *(undefined8 *)(lVar4 + 0x28) = in_stack_00000048;
      *(undefined8 *)(lVar4 + 0x20) = in_stack_00000040;
      *(undefined8 *)(lVar4 + 0x30) = in_stack_00000050;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      FUN_0852b218(0x42b40000,0x42b40000,&stack0x00000020,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined4 *)(lVar4 + 0x54) = in_stack_00000038;
        *(undefined8 *)(lVar4 + 0x4c) = in_stack_00000030;
        *(undefined8 *)(lVar4 + 0x44) = in_stack_00000028;
        *(undefined8 *)(lVar4 + 0x3c) = in_stack_00000020;
        puVar2 = PTR_DAT_08f70528;
        uVar3 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
        FUN_0852c0f0(uVar3,lVar4,0);
        lVar4 = *(long *)puVar2;
        *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
        *(undefined8 *)(unaff_x19 + 0x48) = 0x1e40133333;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_08596c00(&stack0x00000000 + 4,0);
        *(ulong *)(unaff_x19 + 0x58) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000000._4_8_;
        *(undefined8 *)(unaff_x19 + 100) = in_stack_00000018;
        *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        thunk_FUN_085843b0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


