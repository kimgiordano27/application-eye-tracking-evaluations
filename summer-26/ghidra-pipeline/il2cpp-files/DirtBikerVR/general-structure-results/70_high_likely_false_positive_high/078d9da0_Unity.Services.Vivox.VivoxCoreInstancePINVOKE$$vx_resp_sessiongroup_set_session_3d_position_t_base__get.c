/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_set_session_3d_position_t_base__get
ENTRY_POINT: 078d9da0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_set_session_3d_position_t_base__get
               (undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  uVar3 = FUN_0587c6c4(&stack0x00000018,*param_1);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff6d08(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar4 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)Unity_Services_Vivox_ReadWriteQueue<AccountId>_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = FUN_078da064(*(undefined8 *)(lVar4 + 0x20));
    puVar2 = System_Collections_Generic_List<PointerInputModule_ButtonState>_TypeInfo;
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
  }
  return;
}


