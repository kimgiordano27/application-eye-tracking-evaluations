/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServices$$SendRequestPermissionResult
ENTRY_POINT: 03ef5270
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void VoxelBusters_EssentialKit_NotificationServices__SendRequestPermissionResult(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(StringLiteral_10663);
    FUN_01c5d288(StringLiteral_10651);
    *(undefined1 *)(unaff_x24 + 0x1de) = 1;
  }
  if (unaff_w22 == 0x70003) {
    lVar1 = FUN_030d5820(unaff_x23 + 0x28,*(undefined8 *)StringLiteral_10663);
    uVar2 = FUN_03e0ee00(*(undefined8 *)(lVar1 + 0x3c),*(undefined4 *)(lVar1 + 0x44));
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar1 = FUN_030d583c(unaff_x23 + 0x28,*(undefined8 *)StringLiteral_10651);
    *(undefined8 *)(lVar1 + 0x3c) = unaff_x21;
    *(undefined4 *)(lVar1 + 0x44) = unaff_w20;
  }
  else {
    if (unaff_w22 != 0x70002) {
      in_stack_00000008 = thunk_FUN_01c273e8(StringLiteral_11210);
      in_stack_00000010 = 0xffffffffffffffff;
      uVar3 = FUN_03307544(&stack0x00000008,0);
      uVar4 = thunk_FUN_01c273e8(StringLiteral_12712);
      uVar5 = thunk_FUN_01c273e8(StringLiteral_12706);
      uVar3 = FUN_03152fb8(uVar4,uVar3,uVar5,0);
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar4 = thunk_FUN_01c496e0();
      uVar5 = thunk_FUN_01c273e8(System_Func<Scale,_Scale,_bool>_TypeInfo);
      FUN_0323fce4(uVar4,uVar3,uVar5,0);
      uVar3 = thunk_FUN_01c273e8(StringLiteral_12713);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,uVar3);
    }
    lVar1 = FUN_030d5820(unaff_x23 + 0x28,*(undefined8 *)StringLiteral_10663);
    uVar2 = FUN_03e0ee00(*(undefined8 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x38));
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar1 = FUN_030d583c(unaff_x23 + 0x28,*(undefined8 *)StringLiteral_10651);
    *(undefined8 *)(lVar1 + 0x30) = unaff_x21;
    *(undefined4 *)(lVar1 + 0x38) = unaff_w20;
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_03f0ab18();
  return;
}


