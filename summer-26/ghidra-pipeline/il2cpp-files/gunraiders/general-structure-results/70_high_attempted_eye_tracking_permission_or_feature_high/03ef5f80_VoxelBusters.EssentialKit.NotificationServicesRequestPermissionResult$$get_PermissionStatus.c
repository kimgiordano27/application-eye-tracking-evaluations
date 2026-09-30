/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesRequestPermissionResult$$get_PermissionStatus
ENTRY_POINT: 03ef5f80
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult__get_PermissionStatus
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_01c273e8(*(undefined8 *)(param_1 + 0x858));
  uVar1 = FUN_03152fb8();
  thunk_FUN_01c273e8(PTR_DAT_04231770);
  uVar2 = thunk_FUN_01c496e0();
  uVar3 = thunk_FUN_01c273e8(System_Func<Scale,_Scale,_bool>_TypeInfo);
  FUN_0323fce4(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_01c273e8(StringLiteral_12727);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar1);
}


