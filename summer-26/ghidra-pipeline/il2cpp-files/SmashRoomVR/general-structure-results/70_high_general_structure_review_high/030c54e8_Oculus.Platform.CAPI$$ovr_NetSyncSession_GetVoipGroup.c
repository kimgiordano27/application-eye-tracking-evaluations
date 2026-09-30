/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSyncSession_GetVoipGroup
ENTRY_POINT: 030c54e8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


bool Oculus_Platform_CAPI__ovr_NetSyncSession_GetVoipGroup
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined1 auVar11 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  code *pcStack_30;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(param_1);
  }
  uVar4 = FUN_02fdf2a4(unaff_w21,0);
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
    iVar1 = *(int *)(unaff_x20 + 0x3c);
    FUN_01852fbc(uVar10);
    uVar3 = FUN_02ee1ff0(uVar10,iVar1 + 1,0);
    FUN_01853f74(*unaff_x22);
    param_4 = 0;
    uVar4 = FUN_02fdf2d4(unaff_w19,uVar3,0);
    uVar4 = FUN_030c4864(uVar4,uVar4 & 0xffffffff);
  }
  auVar11 = FUN_030c4864(uVar4,unaff_w19 & 0xffff);
  puVar9 = 
  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
  ;
  lVar5 = auVar11._0_8_;
  pcStack_30 = FUN_030c5558;
  uVar4 = auVar11._8_8_ & 0xffffffff;
  if ((DAT_03ff19e8 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    DAT_03ff19e8 = 1;
  }
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_02fdf194(uVar4,0);
  puVar2 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  if ((uVar6 & 1) == 0) {
    uStack_34 = 0xd800;
    uVar10 = thunk_FUN_01ad9084(
                               Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                               );
    uVar10 = thunk_FUN_01afa70c(uVar10,&uStack_34);
    uStack_38 = 0xdbff;
    uVar7 = thunk_FUN_01ad9084(puVar2);
    uVar7 = thunk_FUN_01afa70c(uVar7,&uStack_38);
    uVar8 = thunk_FUN_01ad9084(StringLiteral_7518);
    uVar10 = FUN_02ec9b7c(uVar8,uVar10,uVar7,0);
    thunk_FUN_01ad9084(StringLiteral_2200);
    uVar7 = thunk_FUN_01afaadc();
    puVar9 = StringLiteral_13169;
  }
  else {
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_02fdf2a4(param_4 & 0xffffffff,0);
    puVar2 = 
    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(lVar5 + 0x38) < 1) {
        if (*(long *)(lVar5 + 0x30) != 0) {
          iVar1 = *(int *)(*(long *)(lVar5 + 0x30) + 0x10);
          *(int *)(lVar5 + 0x38) = iVar1;
          *(undefined4 *)(lVar5 + 0x3c) = 0xffffffff;
          return iVar1 != 0;
        }
      }
      else {
        FUN_01853f74(*(undefined8 *)puVar9);
        uVar4 = FUN_02fdf2d4(uVar4,param_4 & 0xffffffff,0);
        FUN_030c4864(uVar4,uVar4 & 0xffffffff);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uStack_34 = 0xdc00;
    uVar10 = thunk_FUN_01ad9084(
                               Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                               );
    uVar10 = thunk_FUN_01afa70c(uVar10,&uStack_34);
    uStack_38 = 0xdfff;
    uVar7 = thunk_FUN_01ad9084(puVar2);
    uVar7 = thunk_FUN_01afa70c(uVar7,&uStack_38);
    uVar8 = thunk_FUN_01ad9084(StringLiteral_7518);
    uVar10 = FUN_02ec9b7c(uVar8,uVar10,uVar7,0);
    thunk_FUN_01ad9084(StringLiteral_2200);
    uVar7 = thunk_FUN_01afaadc();
    puVar9 = StringLiteral_13170;
  }
  uVar8 = thunk_FUN_01ad9084(puVar9);
  FUN_02fd4a78(uVar7,uVar8,uVar10,0);
  uVar10 = thunk_FUN_01ad9084(StringLiteral_13187);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar7,uVar10);
}


