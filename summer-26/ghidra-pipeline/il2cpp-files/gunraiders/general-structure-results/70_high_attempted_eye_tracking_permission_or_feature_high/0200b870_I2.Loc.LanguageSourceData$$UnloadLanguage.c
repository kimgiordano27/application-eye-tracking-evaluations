/*
FUNCTION_NAME: I2.Loc.LanguageSourceData$$UnloadLanguage
ENTRY_POINT: 0200b870
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;telemetry_or_network_hits_8;attempted_eye_tracking_permission_or_feature_enable
*/


void I2_Loc_LanguageSourceData__UnloadLanguage(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  FUN_01c5d288(
              VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
              );
  FUN_01c5d288(PTR_DAT_04230f30);
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
  FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xf18) = 1;
  if ((unaff_x20 & 1) != 0) {
    iVar1 = *(int *)(unaff_x19 + 0x238);
    if (iVar1 == 2) {
      *(undefined4 *)(unaff_x19 + 0x234) = 2;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
      }
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 != 0) {
          return;
        }
        goto switchD_0200b960_caseD_0;
      }
      *(undefined4 *)(unaff_x19 + 0x234) = 1;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo
        ;
      }
    }
    goto LAB_0200b9e8;
  }
  if (*(int *)(unaff_x19 + 0x1e8) == 0x2000) {
switchD_0200b960_caseD_0:
    plVar2 = *(long **)(unaff_x19 + 0x250);
    *(undefined4 *)(unaff_x19 + 0x234) = 0;
    if (plVar2 == (long *)0x0) {
LAB_0200bd68:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar4 = *plVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x558);
    uVar3 = *(undefined8 *)PTR_DAT_04230f30;
  }
  else {
    switch(*(undefined4 *)(unaff_x19 + 0x238)) {
    case 0:
      goto switchD_0200b960_caseD_0;
    case 1:
      *(undefined4 *)(unaff_x19 + 0x234) = 0x12;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
        ;
      }
      break;
    case 2:
      *(undefined4 *)(unaff_x19 + 0x234) = 1;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
      }
      break;
    case 3:
      *(undefined4 *)(unaff_x19 + 0x234) = 2;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
        ;
      }
      break;
    case 4:
      *(undefined4 *)(unaff_x19 + 0x234) = 3;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
        ;
      }
      break;
    case 5:
      *(undefined4 *)(unaff_x19 + 0x234) = 4;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
      }
      break;
    case 6:
      *(undefined4 *)(unaff_x19 + 0x234) = 5;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
      }
      break;
    case 7:
      *(undefined4 *)(unaff_x19 + 0x234) = 6;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
        ;
      }
      break;
    case 8:
      *(undefined4 *)(unaff_x19 + 0x234) = 7;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
        ;
      }
      break;
    case 9:
      *(undefined4 *)(unaff_x19 + 0x234) = 8;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
      }
      break;
    case 10:
      *(undefined4 *)(unaff_x19 + 0x234) = 9;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
      }
      break;
    case 0xb:
      *(undefined4 *)(unaff_x19 + 0x234) = 10;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
        ;
      }
      break;
    case 0xc:
      *(undefined4 *)(unaff_x19 + 0x234) = 0xb;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
        ;
      }
      break;
    case 0xd:
      *(undefined4 *)(unaff_x19 + 0x234) = 0xc;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
      }
      break;
    case 0xe:
      *(undefined4 *)(unaff_x19 + 0x234) = 0xd;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
        ;
      }
      break;
    case 0xf:
      *(undefined4 *)(unaff_x19 + 0x234) = 0xe;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
        ;
      }
      break;
    case 0x10:
      *(undefined4 *)(unaff_x19 + 0x234) = 0x13;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
        ;
      }
      break;
    case 0x11:
      *(undefined4 *)(unaff_x19 + 0x234) = 0xf;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
        ;
      }
      break;
    case 0x12:
      *(undefined4 *)(unaff_x19 + 0x234) = 0x10;
      plVar2 = *(long **)(unaff_x19 + 0x250);
      puVar5 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_042393a8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar5 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
        ;
      }
      break;
    default:
      return;
    }
LAB_0200b9e8:
    uVar3 = FUN_0210eb50(*puVar5,1,0,1,0,0,0,1);
    if (plVar2 == (long *)0x0) goto LAB_0200bd68;
    lVar4 = *plVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x558);
  }
                    /* WARNING: Could not recover jumptable at 0x0200ba34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,uVar3,*(undefined8 *)(lVar4 + 0x560));
  return;
}


