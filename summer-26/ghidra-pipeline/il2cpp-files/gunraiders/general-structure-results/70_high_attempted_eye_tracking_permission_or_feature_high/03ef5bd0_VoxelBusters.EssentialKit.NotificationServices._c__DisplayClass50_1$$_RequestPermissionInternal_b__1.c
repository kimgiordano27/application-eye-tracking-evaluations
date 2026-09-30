/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServices.<>c__DisplayClass50_1$$<RequestPermissionInternal>b__1
ENTRY_POINT: 03ef5bd0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void VoxelBusters_EssentialKit_NotificationServices_<>c__DisplayClass50_1__<RequestPermissionInternal>b__1
               (void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0422f9e8;
  lVar2 = FUN_030d41a8();
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_03d4f3bc(uVar4);
  if ((uVar3 & 1) != 0) {
    lVar2 = FUN_030d41c4();
    *(undefined8 *)(lVar2 + 0x40) = unaff_x20;
    if (unaff_x19 != 0) {
      FUN_03f0ab18();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  return;
}


