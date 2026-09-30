/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_add_session_t_session_handle_get
ENTRY_POINT: 08162070
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_add_session_t_session_handle_get
               (void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  lVar2 = FUN_048bd7d8();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_stack_00000018 = FUN_05c0b91c(lVar2,*(undefined8 *)PTR_DAT_08f04a20);
  uVar3 = FUN_05ac7d38(&stack0x00000018,*(undefined8 *)PTR_DAT_08f04a18);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03d233cc(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0418307c(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar2 = FUN_05ac7d7c(&stack0x00000018,*(undefined8 *)PTR_DAT_08f04a10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0815da00();
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_08e7c2e8;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
  }
  return;
}


