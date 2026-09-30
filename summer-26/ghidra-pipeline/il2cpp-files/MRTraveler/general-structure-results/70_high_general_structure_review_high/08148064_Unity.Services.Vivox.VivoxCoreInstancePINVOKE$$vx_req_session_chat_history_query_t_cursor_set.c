/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_cursor_set
ENTRY_POINT: 08148064
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_cursor_set
               (undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined4 unaff_w23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_051c0230(param_1,unaff_w23);
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x22;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x21 + 0x18));
  lVar2 = *unaff_x20;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_0814404c(&stack0x00000008,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
  FUN_0814408c(&stack0x00000008);
  if (*unaff_x20 != 0) {
    lVar2 = FUN_081471d4();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000028 = FUN_071787d8(lVar2,0);
    uVar1 = FUN_0701d1d0(&stack0x00000028,0);
    if ((uVar1 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_045259b0(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      FUN_0701d29c(&stack0x00000028,0);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_08147334();
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 10) = 0;
      thunk_FUN_03d233cc(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0701e078(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


