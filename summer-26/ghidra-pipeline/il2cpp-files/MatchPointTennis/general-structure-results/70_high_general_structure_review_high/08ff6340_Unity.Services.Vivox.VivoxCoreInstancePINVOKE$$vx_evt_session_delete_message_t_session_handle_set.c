/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_session_handle_set
ENTRY_POINT: 08ff6340
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_session_handle_set
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_0768d01c();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e3c();
  }
  uVar3 = FUN_0984b768();
  lVar4 = FUN_078a7764(uVar3,*unaff_x28,0);
  puVar2 = PTR_DAT_09f21060;
  if (unaff_x20 != 0) {
    FUN_05bae95c(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar5 = FUN_0768d020(&stack0x00000020,*unaff_x26), (uVar5 & 1) != 0) {
      uVar3 = FUN_0984b768(in_stack_00000030,0);
      lVar4 = FUN_078b4f58(lVar4,uVar3,*(undefined8 *)puVar2,0);
    }
    FUN_0768d01c(&stack0x00000020,*unaff_x25);
    if ((lVar4 != 0) && (uVar3 = FUN_078b6bdc(lVar4,*(int *)(lVar4 + 0x10) + -1,0), unaff_x19 != 0))
    {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


