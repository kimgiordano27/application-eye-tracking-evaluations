/*
FUNCTION_NAME: I2.Loc.LocalizationManager$$AutoLoadGlobalParamManagers
ENTRY_POINT: 02010a18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;telemetry_or_network_hits_6;attempted_eye_tracking_permission_or_feature_enable
*/


void I2_Loc_LocalizationManager__AutoLoadGlobalParamManagers(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
LAB_02010bac:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x38);
  plVar12 = *(long **)(unaff_x19 + 0xa0);
  uVar6 = FUN_021940e0(uVar10,0);
  puVar3 = PTR_DAT_04239378;
  if (plVar12 == (long *)0x0) goto LAB_02010bac;
  (**(code **)(*plVar12 + 0x558))(plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x560));
  lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x1e0), lVar8 == 0)) goto LAB_02010bac;
  uVar1 = *(uint *)(lVar8 + 0x18);
  if (0 < (int)uVar1) {
    uVar13 = 0;
    do {
      if (uVar1 <= uVar13) goto LAB_020111ec;
      lVar14 = *(long *)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_02010bac;
      uVar7 = thunk_FUN_03152714(*(undefined8 *)(lVar14 + 0x18),uVar10,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_02010bac;
        FUN_03df8cc0(*(long *)(unaff_x19 + 0x78),*(undefined8 *)(lVar14 + 0x10),0);
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_02010bac;
        FUN_03d45e2c(*(long *)(unaff_x19 + 0x78),1,0);
        break;
      }
      uVar1 = *(uint *)(lVar8 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar1);
  }
  puVar5 = System_Func<Socket_AwaitableSocketAsyncEventArgs>_TypeInfo;
  puVar4 = PTR_DAT_042393a8;
  puVar3 = PTR_DAT_04230aa8;
  if ((*(long *)(unaff_x20 + 0x10) == 0) || (lVar8 = *(long *)(unaff_x19 + 0x80), lVar8 == 0))
  goto LAB_02010bac;
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x18);
  lVar14 = 4;
  while( true ) {
    uVar7 = lVar14 - 4;
    if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar7) break;
    if (lVar11 != 0) {
      if (*(uint *)(lVar8 + 0x18) <= uVar7) {
LAB_020111ec:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      lVar8 = *(long *)(lVar8 + lVar14 * 8);
      if (lVar8 == 0) goto LAB_02010bac;
      iVar2 = *(int *)(lVar11 + 0x18);
      lVar8 = FUN_03d468e8(lVar8,0);
      if (lVar8 == 0) goto LAB_02010bac;
      if ((long)uVar7 < (long)iVar2) {
        FUN_03d499ec(lVar8,1,0);
        lVar8 = *(long *)(unaff_x19 + 0x80);
        if (lVar8 == 0) goto LAB_02010bac;
        if ((*(uint *)(lVar8 + 0x18) <= uVar7) || (*(uint *)(lVar11 + 0x18) <= uVar7))
        goto LAB_020111ec;
        lVar8 = *(long *)(lVar8 + lVar14 * 8);
        if (lVar8 == 0) goto LAB_02010bac;
        FUN_01fe6e50(lVar8,*(undefined8 *)(lVar11 + lVar14 * 8),0);
      }
      else {
        FUN_03d499ec(lVar8,0,0);
      }
    }
    lVar8 = *(long *)(unaff_x19 + 0x80);
    lVar14 = lVar14 + 1;
    if (lVar8 == 0) goto LAB_02010bac;
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02010bac;
  iVar2 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x28);
  puVar9 = (undefined8 *)(unaff_x19 + 0xa8);
  plVar12 = (long *)*puVar9;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar6 = FUN_0210eb50(*(undefined8 *)puVar5,1,0,1,0,0,0,1);
  uVar6 = FUN_03146988(uVar6,*(undefined8 *)puVar3,0);
  if (plVar12 == (long *)0x0) goto LAB_02010bac;
  (**(code **)(*plVar12 + 0x558))(plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x560));
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02010bac;
  if (*(char *)(*(long *)(unaff_x20 + 0x10) + 0x21) == '\0') {
    if (iVar2 != 0) {
      switch(iVar2) {
      case 1:
        plVar12 = (long *)*puVar9;
        if (plVar12 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar4);
            puVar9 = (undefined8 *)
                     VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
          }
          break;
        }
        goto LAB_02010bac;
      case 2:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
          ;
        }
        break;
      case 3:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
          ;
        }
        break;
      case 4:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
        }
        break;
      case 5:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
        }
        break;
      case 6:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
          ;
        }
        break;
      case 7:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
          ;
        }
        break;
      case 8:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
        }
        break;
      case 9:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo
          ;
        }
        break;
      case 10:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
          ;
        }
        break;
      case 0xb:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
          ;
        }
        break;
      case 0xc:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
        }
        break;
      case 0xd:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
          ;
        }
        break;
      case 0xe:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
          ;
        }
        break;
      case 0xf:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
          ;
        }
        break;
      case 0x10:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
          ;
        }
        break;
      default:
        return;
      case 0x13:
        plVar12 = (long *)*puVar9;
        if (plVar12 == (long *)0x0) goto LAB_02010bac;
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)
                 VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)
                   VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
          ;
        }
      }
      goto LAB_02010d84;
    }
  }
  else if (iVar2 != 0) {
    if (iVar2 == 2) {
      plVar12 = (long *)*puVar9;
      if (plVar12 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
        puVar9 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar9 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
        }
        goto LAB_02010d84;
      }
      goto LAB_02010bac;
    }
    if (iVar2 != 1) {
      return;
    }
    plVar12 = (long *)*puVar9;
    if (plVar12 == (long *)0x0) goto LAB_02010bac;
    uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
    puVar9 = (undefined8 *)
             VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar4);
      puVar9 = (undefined8 *)
               VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo
      ;
    }
    goto LAB_02010d84;
  }
  plVar12 = (long *)*puVar9;
  if (plVar12 == (long *)0x0) goto LAB_02010bac;
  uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
  puVar9 = (undefined8 *)System_Func<Socket_CachedEventArgs>_TypeInfo;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar4);
    puVar9 = (undefined8 *)System_Func<Socket_CachedEventArgs>_TypeInfo;
  }
LAB_02010d84:
  uVar10 = FUN_0210eb50(*puVar9,1,0,1,0,0,0,1);
  uVar6 = FUN_03146988(uVar6,uVar10,0);
                    /* WARNING: Could not recover jumptable at 0x02010de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar12 + 0x558))(plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x560));
  return;
}


