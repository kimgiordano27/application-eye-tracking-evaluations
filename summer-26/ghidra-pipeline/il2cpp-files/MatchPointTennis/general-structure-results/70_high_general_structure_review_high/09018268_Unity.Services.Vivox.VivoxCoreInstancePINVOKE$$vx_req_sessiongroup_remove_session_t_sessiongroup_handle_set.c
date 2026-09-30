/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_remove_session_t_sessiongroup_handle_set
ENTRY_POINT: 09018268
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_remove_session_t_sessiongroup_handle_set
               (long *param_1)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
  if (unaff_x20 != 0) {
    FUN_0744298c();
    plVar1 = *(long **)(unaff_x19 + 0x18);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
      if (unaff_x20 == 0) goto LAB_090183d0;
      FUN_0744298c();
    }
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x19 + 0x20);
    FUN_07a3b850((long)&stack0x00000008 + 4,0);
    if (unaff_x20 != 0) {
      FUN_0744298c();
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x19 + 0x24);
      FUN_07a3b850((long)&stack0x00000008 + 4,0);
      FUN_0744298c();
      plVar1 = *(long **)(unaff_x19 + 0x28);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
        FUN_0744298c();
      }
      plVar1 = *(long **)(unaff_x19 + 0x30);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
        FUN_0744298c();
      }
      plVar1 = *(long **)(unaff_x19 + 0x38);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
        FUN_0744298c();
      }
      return;
    }
  }
LAB_090183d0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


