/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_media_connect_t_base__get
ENTRY_POINT: 078da598
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_media_connect_t_base__get(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *unaff_x19;
  undefined8 uVar5;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  lVar3 = FUN_0481b1a8();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 078da5b0 to 079da5d7 has its CatchHandler @ 078da748 */
  in_stack_00000018 =
       FUN_058b71ec(lVar3,*(undefined8 *)Normal_Realtime_ReliableProperty<string>_TypeInfo);
  uVar4 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)Normal_Realtime_ReliableProperty<float>_TypeInfo);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff6f50(unaff_x19 + 2,&stack0x00000018);
  }
  else {
                    /* try { // try from 078da5e8 to 079da5f7 has its CatchHandler @ 078da718 */
    lVar3 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)Normal_Realtime_ReliableProperty<RealtimeRefData>_TypeInfo);
    puVar2 = PTR_DAT_084ada30;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* try { // try from 078da5f8 to 079da603 has its CatchHandler @ 078da740 */
    uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x10);
                    /* try { // try from 078da608 to 079da613 has its CatchHandler @ 078da728 */
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
  }
  return;
}


