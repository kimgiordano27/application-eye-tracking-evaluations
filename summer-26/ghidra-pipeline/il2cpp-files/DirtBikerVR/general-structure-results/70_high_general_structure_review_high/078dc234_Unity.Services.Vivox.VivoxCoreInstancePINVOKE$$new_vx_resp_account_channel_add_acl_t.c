/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_account_channel_add_acl_t
ENTRY_POINT: 078dc234
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_account_channel_add_acl_t(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  puVar3 = (undefined8 *)FUN_03ac43c4();
  plVar4 = (long *)(*(code *)*puVar3)();
                    /* try { // try from 078dc270 to 079dc273 has its CatchHandler @ 078dc36c */
                    /* try { // try from 078dc274 to 079dc277 has its CatchHandler @ 078dc28c */
                    /* catch() { ... } // from try @ 078dc218 with catch @ 078dc278
                       try { // try from 078dc278 to 079dc2ab has its CatchHandler @ 078dc168 */
                    /* catch() { ... } // from try @ 078dc204 with catch @ 078dc27c */
                    /* catch() { ... } // from try @ 078dc1e4 with catch @ 078dc280 */
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<OrgScopedID>_TypeInfo);
                    /* catch() { ... } // from try @ 078dc1d8 with catch @ 078dc284 */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* catch() { ... } // from try @ 078dc1c0 with catch @ 078dc288 */
                    /* catch() { ... } // from try @ 078dc1c8 with catch @ 078dc28c
                       catch() { ... } // from try @ 078dc274 with catch @ 078dc28c */
  lVar6 = *plVar4;
                    /* catch() { ... } // from try @ 078dc240 with catch @ 078dc290 */
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Oculus_Platform_Request<PlatformInitialize>_TypeInfo) {
        lVar6 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
        goto LAB_078dc2e0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar6 = FUN_03ac43c4(plVar4,*(long *)Oculus_Platform_Request<PlatformInitialize>_TypeInfo,0);
LAB_078dc2e0:
  FUN_0496d698(uVar5,plVar4,*(undefined8 *)(lVar6 + 8),0);
  lVar6 = FUN_0481b0a4();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar6,*(undefined8 *)Oculus_Platform_Request<PushNotificationResult>_TypeInfo);
  uVar8 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)Oculus_Platform_Request<PurchaseList>_TypeInfo);
  if ((uVar8 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff73e0(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar6 = FUN_0587c704(&stack0x00000018,*(undefined8 *)Oculus_Platform_Request<Purchase>_TypeInfo)
    ;
    puVar2 = Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *unaff_x24;
    uVar5 = *(undefined8 *)(lVar6 + 0x20);
    iVar1 = *(int *)(lVar7 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar7);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
  }
  return;
}


