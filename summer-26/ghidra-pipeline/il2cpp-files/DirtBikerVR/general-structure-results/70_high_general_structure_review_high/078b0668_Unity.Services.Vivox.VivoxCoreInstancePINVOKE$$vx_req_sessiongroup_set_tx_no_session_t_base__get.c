/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_no_session_t_base__get
ENTRY_POINT: 078b0668
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_no_session_t_base__get
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  int *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x5f8));
  *(undefined1 *)(unaff_x20 + 0x910) = 1;
  lVar3 = *(long *)(unaff_x19 + 10);
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    lVar1 = FUN_078ae08c(lVar3);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = FUN_067c4bec(lVar1,0);
    uVar2 = FUN_0666e8e0(&stack0x00000018,0);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      FUN_04410d9c(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_0666e9a8(&stack0x00000018,0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x38) == 1) {
      FUN_078ad708(lVar3,1);
    }
    *unaff_x19 = -2;
    FUN_0666f0cc(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


