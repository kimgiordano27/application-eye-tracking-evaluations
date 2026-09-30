/*
FUNCTION_NAME: FUN_01fffa98
ENTRY_POINT: 01fffa98
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_14;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_01fffa98(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  code *pcVar17;
  uint uVar18;
  long lVar19;
  
  puVar4 = PTR_DAT_04237a90;
  if ((DAT_0452eec2 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042393a8);
    FUN_01c5d288(PTR_DAT_04237a90);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo
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
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadLeaderboardsResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestCameraAccessResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_04230f30);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
                );
                    /* try { // try from 01fffbb4 to 020ffbbb has its CatchHandler @ 01fffd00 */
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo);
                    /* try { // try from 01fffbc0 to 020ffbc7 has its CatchHandler @ 01fffcf4 */
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
                );
                    /* try { // try from 01fffbd4 to 020ffbd7 has its CatchHandler @ 01fffcf0 */
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo);
    DAT_0452eec2 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar9 = FUN_03562cf4(0);
  lVar10 = FUN_01f69098(uVar9,0);
  puVar8 = VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
  puVar7 = VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestCameraAccessResult>_TypeInfo;
  puVar6 = VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadLeaderboardsResult>_TypeInfo;
  puVar5 = VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo;
  puVar4 = PTR_DAT_042393a8;
  if (lVar10 != 0) {
    uVar2 = *(uint *)(lVar10 + 0x18);
                    /* try { // try from 01fffc30 to 020ffc37 has its CatchHandler @ 01fffce0 */
    if (0 < (int)uVar2) {
      uVar18 = 0;
      plVar1 = (long *)(param_1 + 0x28);
      do {
        lVar15 = *plVar1;
        if (lVar15 == 0) goto LAB_02000b80;
        if ((*(uint *)(lVar15 + 0x18) <= uVar18) || (uVar2 <= uVar18)) {
LAB_02000b84:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        lVar19 = (long)(int)uVar18;
        lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_02000b80;
        piVar16 = (int *)(lVar10 + lVar19 * 4 + 0x20);
        *(int *)(lVar15 + 0x48) = *piVar16;
        iVar3 = *piVar16;
        if (*(int *)(lVar15 + 0x4c) == 8) {
          plVar11 = *(long **)(lVar15 + 0x40);
          if (iVar3 == 2) {
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)puVar8,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 == 0) goto LAB_02000b80;
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
              lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
              if (lVar15 == 0) goto LAB_02000b80;
              plVar11 = *(long **)(lVar15 + 0x40);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar9 = *(undefined8 *)puVar8;
LAB_02000af8:
              uVar9 = FUN_0210eb50(uVar9,1,0,1,0,0,0,1,0);
              uVar9 = FUN_03152fb8(*(undefined8 *)puVar6,uVar9,*(undefined8 *)puVar7,0);
              if (plVar11 == (long *)0x0) goto LAB_02000b80;
              pcVar17 = *(code **)(*plVar11 + 0x558);
              uVar12 = *(undefined8 *)(*plVar11 + 0x560);
LAB_02000b4c:
              (*pcVar17)(plVar11,uVar9,uVar12);
            }
          }
          else {
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            if (iVar3 != 1) {
LAB_02000a28:
              uVar12 = *(undefined8 *)(*plVar11 + 0x560);
              uVar9 = *(undefined8 *)PTR_DAT_04230f30;
              pcVar17 = *(code **)(*plVar11 + 0x558);
              goto LAB_02000b4c;
            }
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)puVar5,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar9 = *(undefined8 *)puVar5;
                  goto LAB_02000af8;
                }
              }
              goto LAB_02000b80;
            }
          }
        }
        else {
          switch(iVar3) {
          case 1:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo
                    ;
                  }
LAB_02000af4:
                  uVar9 = *puVar14;
                  goto LAB_02000af8;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 2:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 3:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 4:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 5:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 6:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 7:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 8:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 9:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 10:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 0xb:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 0xc:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 0xd:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 0xe:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 0xf:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 0x10:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          default:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            if (iVar3 != 0x12) goto LAB_02000a28;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
            break;
          case 0x13:
            plVar11 = *(long **)(lVar15 + 0x40);
            if (plVar11 == (long *)0x0) goto LAB_02000b80;
            uVar9 = (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar12 = FUN_0210eb50(*(undefined8 *)
                                   VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
                                  ,1,0,1,0,0,0,1,0);
            uVar13 = FUN_031529f8(uVar9,uVar12,0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *plVar1;
              if (lVar15 != 0) {
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_02000b84;
                lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
                if (lVar15 != 0) {
                  plVar11 = *(long **)(lVar15 + 0x40);
                  puVar14 = (undefined8 *)
                            VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    puVar14 = (undefined8 *)
                              VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
                    ;
                  }
                  goto LAB_02000af4;
                }
              }
              goto LAB_02000b80;
            }
          }
        }
        uVar2 = *(uint *)(lVar10 + 0x18);
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)uVar2);
    }
    return;
  }
LAB_02000b80:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


