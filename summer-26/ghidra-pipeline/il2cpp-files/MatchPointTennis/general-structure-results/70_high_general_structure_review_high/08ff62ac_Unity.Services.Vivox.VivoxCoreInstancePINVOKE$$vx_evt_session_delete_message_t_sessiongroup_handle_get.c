/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_sessiongroup_handle_get
ENTRY_POINT: 08ff62ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_sessiongroup_handle_get
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w10;
  long unaff_x19;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000030;
  
  while( true ) {
    *(int *)(unaff_x19 + 0x1c) = in_w10;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44();
    }
    uVar2 = FUN_0768d020(&stack0x00000020,*unaff_x26);
    if ((uVar2 & 1) == 0) break;
    uVar3 = FUN_0984b768(in_stack_00000030,0);
    uVar4 = FUN_0984b768();
    param_3 = FUN_078b4f58(uVar4,*unaff_x28,uVar3,0);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    in_w10 = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  FUN_0768d01c(&stack0x00000020,*unaff_x25);
  return;
}


