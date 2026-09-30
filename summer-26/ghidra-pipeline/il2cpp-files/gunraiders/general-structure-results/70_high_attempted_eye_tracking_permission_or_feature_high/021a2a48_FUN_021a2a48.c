/*
FUNCTION_NAME: FUN_021a2a48
ENTRY_POINT: 021a2a48
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_6;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_021a2a48(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_0452fe74 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04237a90);
    FUN_01c5d288(PTR_DAT_042393f0);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
                );
    DAT_0452fe74 = 1;
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
    break;
  case 2:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
    ;
    break;
  case 3:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo;
    break;
  case 4:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
    break;
  case 5:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
    break;
  case 6:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
    ;
    break;
  case 7:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
    ;
    break;
  case 8:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
    break;
  case 9:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
    break;
  case 10:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo;
    break;
  case 0xb:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
    ;
    break;
  case 0xc:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
    break;
  case 0xd:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
    ;
    break;
  case 0xe:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo;
    break;
  case 0xf:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
    ;
    break;
  case 0x10:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo;
    break;
  default:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    if (lVar3 != 0) {
LAB_021a2e24:
      FUN_01fb62ec(lVar3,0);
      return;
    }
    goto LAB_021a2e7c;
  case 0x12:
    if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_03562cf4(0);
    iVar2 = FUN_01f692f4(uVar4,0);
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    if (lVar3 == 0) goto LAB_021a2e7c;
    if (iVar2 != 0) goto LAB_021a2e24;
    uVar4 = *(undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
    ;
    goto LAB_021a2e58;
  case 0x13:
    lVar3 = **(long **)(*(long *)PTR_DAT_042393f0 + 0xb8);
    puVar1 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
    ;
  }
  if (lVar3 == 0) {
LAB_021a2e7c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar4 = *puVar1;
LAB_021a2e58:
  FUN_01fb9784(lVar3,uVar4,0);
  return;
}


