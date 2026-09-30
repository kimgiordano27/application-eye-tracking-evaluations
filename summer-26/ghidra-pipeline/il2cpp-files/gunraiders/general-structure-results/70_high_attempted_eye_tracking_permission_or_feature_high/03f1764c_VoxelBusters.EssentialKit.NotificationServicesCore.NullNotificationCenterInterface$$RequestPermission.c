/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesCore.NullNotificationCenterInterface$$RequestPermission
ENTRY_POINT: 03f1764c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void VoxelBusters_EssentialKit_NotificationServicesCore_NullNotificationCenterInterface__RequestPermission
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x21;
  
  FUN_01c5d288(PTR_DAT_04234b08);
  FUN_01c5d288(StringLiteral_12908);
  FUN_01c5d288(StringLiteral_12892);
  FUN_01c5d288(UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x28b) = 1;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    uVar2 = FUN_02d51464();
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x40);
      if (lVar3 == 0) goto LAB_03f1773c;
      if (*(int *)(lVar3 + 0x18) == 0) {
        if (*(int *)(*(long *)StringLiteral_12892 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_02f71868(lVar3,*(undefined8 *)StringLiteral_12908);
        puVar1 = UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo;
        lVar3 = *(long *)UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar3 = *(long *)puVar1;
        }
        *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
      }
      if (*(long **)(unaff_x19 + 0x3a0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f1772c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(unaff_x19 + 0x3a0) + 0x338))();
        return;
      }
    }
    return;
  }
LAB_03f1773c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


