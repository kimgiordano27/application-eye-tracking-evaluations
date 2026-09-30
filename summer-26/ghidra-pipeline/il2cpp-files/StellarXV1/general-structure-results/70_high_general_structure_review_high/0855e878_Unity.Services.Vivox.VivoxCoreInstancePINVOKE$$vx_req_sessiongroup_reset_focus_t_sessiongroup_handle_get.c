/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_reset_focus_t_sessiongroup_handle_get
ENTRY_POINT: 0855e878
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_reset_focus_t_sessiongroup_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 in_w8;
  long lVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x21;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  
  *(undefined1 *)(unaff_x21 + 0xa87) = in_w8;
  puVar2 = PTR_DAT_0932ea98;
  if (unaff_x20 != 0) {
    in_stack_00000118 = *(undefined8 *)(unaff_x20 + 0x30);
    in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_00000130 = *(undefined8 *)(unaff_x20 + 0x48);
    in_stack_00000128 = *(undefined8 *)(unaff_x20 + 0x40);
    in_stack_00000120 = *(undefined8 *)(unaff_x20 + 0x38);
    FUN_089ea1dc(&stack0x000000e8,2,0);
    in_stack_000000c8 = in_stack_00000118;
    in_stack_000000c0 = in_stack_00000110;
    in_stack_000000d8 = in_stack_00000128;
    in_stack_000000d0 = in_stack_00000120;
    in_stack_000000e0 = in_stack_00000130;
    in_stack_00000098 = in_stack_000000f0;
    in_stack_00000090 = in_stack_000000e8;
    in_stack_000000a8 = in_stack_00000100;
    in_stack_000000a0 = in_stack_000000f8;
    in_stack_000000b0 = in_stack_00000108;
    uVar4 = FUN_089ea6c4(&stack0x000000c0,&stack0x00000090,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(unaff_x20 + 0x58);
      if (lVar5 == 0) goto LAB_0855ea24;
      if (*(int *)(lVar5 + 0x10) == 0) {
        lVar5 = *(long *)puVar2;
        uVar3 = 0xfffffffe;
      }
      else {
        uVar3 = FUN_08990480(lVar5,0);
        lVar5 = *(long *)puVar2;
      }
    }
    else {
      lVar5 = *(long *)puVar2;
      uVar3 = 0xffffffff;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar5);
    }
    *unaff_x19 = uVar3;
    puVar1 = PTR_DAT_09285bb0;
    in_stack_00000068 = *(undefined8 *)(unaff_x20 + 0x30);
    in_stack_00000060 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_00000078 = *(undefined8 *)(unaff_x20 + 0x40);
    in_stack_00000070 = *(undefined8 *)(unaff_x20 + 0x38);
    in_stack_00000080 = *(undefined8 *)(unaff_x20 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar5 = *(long *)puVar1;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000080;
    *(undefined8 *)(unaff_x19 + 4) = in_stack_00000068;
    *(undefined8 *)(unaff_x19 + 2) = in_stack_00000060;
    *(undefined8 *)(unaff_x19 + 8) = in_stack_00000078;
    *(undefined8 *)(unaff_x19 + 6) = in_stack_00000070;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_089ca704(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_089ea230(&stack0x00000110,*unaff_x19,0);
      in_stack_00000038 = in_stack_00000118;
      in_stack_00000030 = in_stack_00000110;
      in_stack_00000048 = in_stack_00000128;
      in_stack_00000040 = in_stack_00000120;
      in_stack_00000050 = in_stack_00000130;
      uVar4 = FUN_089ea6f4(&stack0x00000030);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        *unaff_x19 = 0xfffffffe;
      }
    }
    return;
  }
LAB_0855ea24:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


