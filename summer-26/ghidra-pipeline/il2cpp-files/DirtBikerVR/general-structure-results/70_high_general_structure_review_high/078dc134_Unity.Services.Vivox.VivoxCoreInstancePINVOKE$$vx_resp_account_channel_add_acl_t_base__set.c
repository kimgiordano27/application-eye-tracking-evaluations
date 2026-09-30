/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_channel_add_acl_t_base__set
ENTRY_POINT: 078dc134
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_16
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_channel_add_acl_t_base__set
               (void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(Oculus_Platform_Request<Purchase>_TypeInfo);
  FUN_03a8a718(Oculus_Platform_Request<PurchaseList>_TypeInfo);
  FUN_03a8a718(Oculus_Platform_Request<PushNotificationResult>_TypeInfo);
  FUN_03a8a718(Oculus_Platform_Request<RejoinDialogResult>_TypeInfo);
                    /* try { // try from 078dc168 to 079dc1bf has its CatchHandler @ 078dc168
                       catch() { ... } // from try @ 078dc168 with catch @ 078dc168
                       catch() { ... } // from try @ 078dc24c with catch @ 078dc168
                       catch() { ... } // from try @ 078dc278 with catch @ 078dc168
                       catch() { ... } // from try @ 078dc320 with catch @ 078dc168
                       catch() { ... } // from try @ 078dc364 with catch @ 078dc168
                       catch() { ... } // from try @ 078dc3a0 with catch @ 078dc168
                       catch() { ... } // from try @ 078dc408 with catch @ 078dc168 */
  *(undefined1 *)(unaff_x20 + 0xa85) = 1;
  puVar2 = System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>_TypeInfo;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078d988c(lVar10);
    uVar4 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 10),0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar11 = thunk_FUN_03ac74bc();
      uVar5 = thunk_FUN_03af1434(Oculus_Platform_Request<SdkAccountList>_TypeInfo);
      uVar6 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar11,uVar5,uVar6,0);
      uVar5 = thunk_FUN_03af1434(Oculus_Platform_Request<SendInvitesResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar11,uVar5);
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 10);
    if (*(int *)(*(long *)PTR_DAT_08486798 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_07c43cf4(0);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<Party>_TypeInfo);
    FUN_078dc560(uVar6,uVar11,uVar5);
    plVar12 = *(long **)(lVar10 + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_084963c0) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_078dc264;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)PTR_DAT_084963c0,4);
LAB_078dc264:
    plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
    uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_Request<OrgScopedID>_TypeInfo);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Oculus_Platform_Request<PlatformInitialize>_TypeInfo)
        {
          lVar8 = lVar8 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_078dc2e0;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    lVar8 = FUN_03ac43c4(plVar12,*(long *)Oculus_Platform_Request<PlatformInitialize>_TypeInfo,0);
LAB_078dc2e0:
    FUN_0496d698(uVar11,plVar12,*(undefined8 *)(lVar8 + 8),0);
    lVar10 = FUN_0481b0a4(lVar10,uVar11,uVar6,
                          *(undefined8 *)Oculus_Platform_Request<RejoinDialogResult>_TypeInfo);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar10,*(undefined8 *)Oculus_Platform_Request<PushNotificationResult>_TypeInfo
                     );
    uVar4 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)Oculus_Platform_Request<PurchaseList>_TypeInfo);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff73e0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  lVar10 = FUN_0587c704(&stack0x00000018,*(undefined8 *)Oculus_Platform_Request<Purchase>_TypeInfo);
  puVar3 = Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo;
  if (lVar10 != 0) {
    lVar8 = *(long *)puVar2;
    uVar11 = *(undefined8 *)(lVar10 + 0x20);
    iVar1 = *(int *)(lVar8 + 0xe4);
    *unaff_x19 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar8);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar11,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


