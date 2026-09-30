/*
FUNCTION_NAME: I2.Loc.LocalizeDropdown$$.ctor
ENTRY_POINT: 0201099c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_7;attempted_eye_tracking_permission_or_feature_enable
*/


void I2_Loc_LocalizeDropdown___ctor(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *puVar10;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xa98));
  FUN_01c5d288(
              VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
              );
  FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo);
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
  *(undefined1 *)(unaff_x21 + 0xf3d) = 1;
  *(long *)(unaff_x19 + 0x88) = unaff_x20;
  if ((unaff_x20 == 0) || (plVar6 = *(long **)(unaff_x19 + 0x98), plVar6 == (long *)0x0)) {
LAB_02010bac:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  (**(code **)(*plVar6 + 0x558))
            (plVar6,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(*plVar6 + 0x560));
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02010bac;
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x38);
  plVar6 = *(long **)(unaff_x19 + 0xa0);
  uVar7 = FUN_021940e0(uVar11,0);
  puVar3 = PTR_DAT_04239378;
  if (plVar6 == (long *)0x0) goto LAB_02010bac;
  (**(code **)(*plVar6 + 0x558))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x560));
  lVar9 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x1e0), lVar9 == 0)) goto LAB_02010bac;
  uVar1 = *(uint *)(lVar9 + 0x18);
  if (0 < (int)uVar1) {
    uVar13 = 0;
    do {
      if (uVar1 <= uVar13) goto LAB_020111ec;
      lVar14 = *(long *)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_02010bac;
      uVar8 = thunk_FUN_03152714(*(undefined8 *)(lVar14 + 0x18),uVar11,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_02010bac;
        FUN_03df8cc0(*(long *)(unaff_x19 + 0x78),*(undefined8 *)(lVar14 + 0x10),0);
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_02010bac;
        FUN_03d45e2c(*(long *)(unaff_x19 + 0x78),1,0);
        break;
      }
      uVar1 = *(uint *)(lVar9 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar1);
  }
  puVar5 = System_Func<Socket_AwaitableSocketAsyncEventArgs>_TypeInfo;
  puVar4 = PTR_DAT_042393a8;
  puVar3 = PTR_DAT_04230aa8;
  if ((*(long *)(unaff_x20 + 0x10) == 0) || (lVar9 = *(long *)(unaff_x19 + 0x80), lVar9 == 0))
  goto LAB_02010bac;
  lVar12 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x18);
  lVar14 = 4;
  while( true ) {
    uVar8 = lVar14 - 4;
    if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar8) break;
    if (lVar12 != 0) {
      if (*(uint *)(lVar9 + 0x18) <= uVar8) {
LAB_020111ec:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      lVar9 = *(long *)(lVar9 + lVar14 * 8);
      if (lVar9 == 0) goto LAB_02010bac;
      iVar2 = *(int *)(lVar12 + 0x18);
      lVar9 = FUN_03d468e8(lVar9,0);
      if (lVar9 == 0) goto LAB_02010bac;
      if ((long)uVar8 < (long)iVar2) {
        FUN_03d499ec(lVar9,1,0);
        lVar9 = *(long *)(unaff_x19 + 0x80);
        if (lVar9 == 0) goto LAB_02010bac;
        if ((*(uint *)(lVar9 + 0x18) <= uVar8) || (*(uint *)(lVar12 + 0x18) <= uVar8))
        goto LAB_020111ec;
        lVar9 = *(long *)(lVar9 + lVar14 * 8);
        if (lVar9 == 0) goto LAB_02010bac;
        FUN_01fe6e50(lVar9,*(undefined8 *)(lVar12 + lVar14 * 8),0);
      }
      else {
        FUN_03d499ec(lVar9,0,0);
      }
    }
    lVar9 = *(long *)(unaff_x19 + 0x80);
    lVar14 = lVar14 + 1;
    if (lVar9 == 0) goto LAB_02010bac;
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02010bac;
  iVar2 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x28);
  puVar10 = (undefined8 *)(unaff_x19 + 0xa8);
  plVar6 = (long *)*puVar10;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar7 = FUN_0210eb50(*(undefined8 *)puVar5,1,0,1,0,0,0,1);
  uVar7 = FUN_03146988(uVar7,*(undefined8 *)puVar3,0);
  if (plVar6 == (long *)0x0) goto LAB_02010bac;
  (**(code **)(*plVar6 + 0x558))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x560));
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02010bac;
  if (*(char *)(*(long *)(unaff_x20 + 0x10) + 0x21) == '\0') {
    if (iVar2 != 0) {
      switch(iVar2) {
      case 1:
        plVar6 = (long *)*puVar10;
        if (plVar6 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar4);
            puVar10 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
          }
          break;
        }
        goto LAB_02010bac;
      case 2:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
          ;
        }
        break;
      case 3:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
          ;
        }
        break;
      case 4:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
        }
        break;
      case 5:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
        }
        break;
      case 6:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
          ;
        }
        break;
      case 7:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
          ;
        }
        break;
      case 8:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
        }
        break;
      case 9:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
        }
        break;
      case 10:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
          ;
        }
        break;
      case 0xb:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
          ;
        }
        break;
      case 0xc:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
        }
        break;
      case 0xd:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
          ;
        }
        break;
      case 0xe:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
          ;
        }
        break;
      case 0xf:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
          ;
        }
        break;
      case 0x10:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
          ;
        }
        break;
      default:
        return;
      case 0x13:
        plVar6 = (long *)*puVar10;
        if (plVar6 == (long *)0x0) goto LAB_02010bac;
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
          ;
        }
      }
      goto LAB_02010d84;
    }
  }
  else if (iVar2 != 0) {
    if (iVar2 == 2) {
      plVar6 = (long *)*puVar10;
      if (plVar6 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
        puVar10 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
          puVar10 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
        }
        goto LAB_02010d84;
      }
      goto LAB_02010bac;
    }
    if (iVar2 != 1) {
      return;
    }
    plVar6 = (long *)*puVar10;
    if (plVar6 == (long *)0x0) goto LAB_02010bac;
    uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
    puVar10 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar4);
      puVar10 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo
      ;
    }
    goto LAB_02010d84;
  }
  plVar6 = (long *)*puVar10;
  if (plVar6 == (long *)0x0) goto LAB_02010bac;
  uVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
  puVar10 = (undefined8 *)System_Func<Socket_CachedEventArgs>_TypeInfo;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar4);
    puVar10 = (undefined8 *)System_Func<Socket_CachedEventArgs>_TypeInfo;
  }
LAB_02010d84:
  uVar11 = FUN_0210eb50(*puVar10,1,0,1,0,0,0,1);
  uVar7 = FUN_03146988(uVar7,uVar11,0);
                    /* WARNING: Could not recover jumptable at 0x02010de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x558))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x560));
  return;
}


