/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_added_t_sessiongroup_handle_set
ENTRY_POINT: 0811e71c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_sessiongroup_handle_set
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uStack0000000000000010 = param_3._0_8_;
  uStack0000000000000020 = param_1._0_8_;
  uStack0000000000000008 = unaff_x19[1];
  uStack0000000000000000 = *unaff_x19;
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar4 = *(long *)PTR_DAT_08f02848;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        lVar3 = lVar3 + (long)(int)uVar1 * 0x30;
        *(long *)(lVar3 + 0x38) = param_3._8_8_;
        *(undefined8 *)(lVar3 + 0x30) = uStack0000000000000010;
        *(long *)(lVar3 + 0x48) = param_1._8_8_;
        *(undefined8 *)(lVar3 + 0x40) = uStack0000000000000020;
        *(undefined8 *)(lVar3 + 0x28) = uStack0000000000000008;
        *(undefined8 *)(lVar3 + 0x20) = uStack0000000000000000;
        thunk_FUN_03d233cc(lVar3 + 0x20,0);
      }
      else {
        in_stack_00000060 = uStack0000000000000000;
        in_stack_00000068 = uStack0000000000000008;
        in_stack_00000070 = uStack0000000000000010;
        in_stack_00000080 = uStack0000000000000020;
        FUN_0519db14(lVar2,&stack0x00000060,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


