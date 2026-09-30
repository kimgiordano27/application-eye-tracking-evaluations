/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_media_connect_t_base__set
ENTRY_POINT: 078da514
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_media_connect_t_base__set(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *unaff_x19;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  uVar3 = thunk_FUN_03ac74bc();
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar5 = (ulong)*(ushort *)(*unaff_x23 + 0x12e);
  if (uVar5 != 0) {
    lVar4 = *(long *)(*unaff_x23 + 0xb0) + 8;
    do {
      if (*(long *)(lVar4 + -8) ==
          *(long *)
           Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo)
      goto LAB_078da578;
                    /* try { // try from 078da54c to 079da573 has its CatchHandler @ 078da74c */
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 != 0);
  }
  FUN_03ac43c4();
LAB_078da578:
  FUN_0497096c(uVar3);
  lVar4 = FUN_0481b1a8();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar4,*(undefined8 *)Normal_Realtime_ReliableProperty<string>_TypeInfo);
  uVar5 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)Normal_Realtime_ReliableProperty<float>_TypeInfo);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff6f50(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar4 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)Normal_Realtime_ReliableProperty<RealtimeRefData>_TypeInfo);
    puVar2 = PTR_DAT_084ada30;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x10);
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
  }
  return;
}


