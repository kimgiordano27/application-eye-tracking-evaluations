/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_send_dtmf_t_session_handle_get
ENTRY_POINT: 0814a6c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_send_dtmf_t_session_handle_get
               (int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 in_stack_00000008;
  
  if ((DAT_09428ee8 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08f03ec8);
    FUN_03c8f898(PTR_DAT_08e78268);
    FUN_03c8f898(PTR_DAT_08e780e8);
    DAT_09428ee8 = 1;
  }
  puVar1 = PTR_DAT_08e780e8;
  in_stack_00000008 = 0;
  lVar6 = *(long *)(param_1 + 8);
  if (*param_1 == 0) {
    in_stack_00000008 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = FUN_08149060(lVar6,*(undefined8 *)(*(long *)(lVar6 + 0x58) + 0x20));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_071787d8(lVar3,0);
    uVar4 = FUN_0701d1d0(&stack0x00000008,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = in_stack_00000008;
      thunk_FUN_03d233cc(param_1 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_04187bb4(param_1 + 2,&stack0x00000008,param_1,*(undefined8 *)PTR_DAT_08f03ec8);
      return;
    }
  }
  FUN_0701d29c(&stack0x00000008,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(lVar6 + 0x20) != 0) {
    uVar5 = FUN_0813a1c0(*(long *)(lVar6 + 0x20),0);
    *param_1 = -2;
    puVar2 = PTR_DAT_08e78268;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(param_1 + 2,uVar5,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


