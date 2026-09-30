/*
FUNCTION_NAME: I2.Loc.LocalizationManager$$UpdateSources
ENTRY_POINT: 02010be8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable
*/


void I2_Loc_LocalizationManager__UpdateSources(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long *plVar4;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w25;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
  uVar1 = FUN_0210eb50();
  FUN_03146988(uVar1,*unaff_x23,0);
  if (unaff_x21 != (long *)0x0) {
    (**(code **)(*unaff_x21 + 0x558))();
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02010bac;
    if (*(char *)(*(long *)(unaff_x20 + 0x10) + 0x21) == '\0') {
      if (unaff_w25 != 0) {
        switch(unaff_w25) {
        case 1:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
            }
            goto LAB_02010d84;
          }
          break;
        case 2:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 3:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 4:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
            }
            goto LAB_02010d84;
          }
          break;
        case 5:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 6:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 7:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 8:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
            }
            goto LAB_02010d84;
          }
          break;
        case 9:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
            }
            goto LAB_02010d84;
          }
          break;
        case 10:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 0xb:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 0xc:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 0xd:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 0xe:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 0xf:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        case 0x10:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
          break;
        default:
          return;
        case 0x13:
          plVar4 = (long *)*unaff_x19;
          if (plVar4 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
            puVar3 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
            ;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x22);
              puVar3 = (undefined8 *)
                       VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
              ;
            }
            goto LAB_02010d84;
          }
        }
        goto LAB_02010bac;
      }
    }
    else if (unaff_w25 != 0) {
      if (unaff_w25 == 2) {
        plVar4 = (long *)*unaff_x19;
        if (plVar4 != (long *)0x0) {
          uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
          puVar3 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x22);
            puVar3 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo
            ;
          }
          goto LAB_02010d84;
        }
        goto LAB_02010bac;
      }
      if (unaff_w25 != 1) {
        return;
      }
      plVar4 = (long *)*unaff_x19;
      if (plVar4 == (long *)0x0) goto LAB_02010bac;
      uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
      puVar3 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo
      ;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
        puVar3 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo
        ;
      }
      goto LAB_02010d84;
    }
    plVar4 = (long *)*unaff_x19;
    if (plVar4 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar4 + 0x548))(plVar4,*(undefined8 *)(*plVar4 + 0x550));
      puVar3 = (undefined8 *)System_Func<Socket_CachedEventArgs>_TypeInfo;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
        puVar3 = (undefined8 *)System_Func<Socket_CachedEventArgs>_TypeInfo;
      }
LAB_02010d84:
      uStack0000000000000000 = 0;
      uVar2 = FUN_0210eb50(*puVar3,1,0,1,0,0,0,1);
      uVar1 = FUN_03146988(uVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x02010de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x560));
      return;
    }
  }
LAB_02010bac:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


