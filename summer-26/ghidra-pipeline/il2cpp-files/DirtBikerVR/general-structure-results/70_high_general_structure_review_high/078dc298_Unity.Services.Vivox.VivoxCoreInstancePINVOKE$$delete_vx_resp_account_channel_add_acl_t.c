/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_account_channel_add_acl_t
ENTRY_POINT: 078dc298
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_account_channel_add_acl_t
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *in_x10;
  undefined4 *unaff_x19;
  undefined8 uVar6;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    lVar3 = *(long *)(param_1 + 0xb0) + 8;
    do {
                    /* try { // try from 078dc2ac to 079dc2c3 has its CatchHandler @ 078dc358 */
      if (*(long *)(lVar3 + -8) == *in_x10) goto LAB_078dc2e0;
      uVar5 = uVar5 - 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar5 != 0);
  }
  FUN_03ac43c4();
LAB_078dc2e0:
                    /* try { // try from 078dc2e0 to 079dc2e3 has its CatchHandler @ 078dc354 */
                    /* try { // try from 078dc2f0 to 079dc31f has its CatchHandler @ 078dc368 */
  FUN_0496d698();
  lVar3 = FUN_0481b0a4();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar3,*(undefined8 *)Oculus_Platform_Request<PushNotificationResult>_TypeInfo);
  uVar5 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)Oculus_Platform_Request<PurchaseList>_TypeInfo);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff73e0(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar3 = FUN_0587c704(&stack0x00000018,*(undefined8 *)Oculus_Platform_Request<Purchase>_TypeInfo)
    ;
    puVar2 = Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *unaff_x24;
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
    iVar1 = *(int *)(lVar4 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar4);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
  }
  return;
}


