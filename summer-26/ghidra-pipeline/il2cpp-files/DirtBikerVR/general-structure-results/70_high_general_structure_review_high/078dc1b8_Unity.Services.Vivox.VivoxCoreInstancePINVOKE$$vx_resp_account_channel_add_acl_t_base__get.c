/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_channel_add_acl_t_base__get
ENTRY_POINT: 078dc1b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_channel_add_acl_t_base__get
               (void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int in_w8;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 078dc1c0 to 079dc1c7 has its CatchHandler @ 078dc288 */
  FUN_07c43cf4(0);
                    /* try { // try from 078dc1c8 to 079dc1d3 has its CatchHandler @ 078dc28c */
                    /* try { // try from 078dc1d8 to 079dc1df has its CatchHandler @ 078dc284 */
  thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<Party>_TypeInfo);
                    /* try { // try from 078dc1e4 to 079dc1ef has its CatchHandler @ 078dc280 */
  FUN_078dc560();
  plVar9 = *(long **)(unaff_x20 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 078dc204 to 079dc20b has its CatchHandler @ 078dc27c */
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* try { // try from 078dc218 to 079dc227 has its CatchHandler @ 078dc278 */
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084963c0) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_078dc264;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084963c0,4);
LAB_078dc264:
  plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<OrgScopedID>_TypeInfo);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)Oculus_Platform_Request<PlatformInitialize>_TypeInfo) {
        lVar5 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
        goto LAB_078dc2e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar5 = FUN_03ac43c4(plVar9,*(long *)Oculus_Platform_Request<PlatformInitialize>_TypeInfo,0);
LAB_078dc2e0:
  FUN_0496d698(uVar4,plVar9,*(undefined8 *)(lVar5 + 8),0);
  lVar5 = FUN_0481b0a4();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar5,*(undefined8 *)Oculus_Platform_Request<PushNotificationResult>_TypeInfo);
  uVar7 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)Oculus_Platform_Request<PurchaseList>_TypeInfo);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff73e0(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar5 = FUN_0587c704(&stack0x00000018,*(undefined8 *)Oculus_Platform_Request<Purchase>_TypeInfo)
    ;
    puVar2 = Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *unaff_x24;
    uVar4 = *(undefined8 *)(lVar5 + 0x20);
    iVar1 = *(int *)(lVar6 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar6);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
  }
  return;
}


