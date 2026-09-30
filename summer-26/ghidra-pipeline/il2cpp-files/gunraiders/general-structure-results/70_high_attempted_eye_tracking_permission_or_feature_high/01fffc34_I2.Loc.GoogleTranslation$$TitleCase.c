/*
FUNCTION_NAME: I2.Loc.GoogleTranslation$$TitleCase
ENTRY_POINT: 01fffc34
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_10;attempted_eye_tracking_permission_or_feature_enable
*/


void I2_Loc_GoogleTranslation__TitleCase(void)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint in_w8;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  code *pcVar15;
  long unaff_x19;
  long unaff_x20;
  uint uVar16;
  long lVar17;
  
  puVar7 = VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
  puVar6 = VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestCameraAccessResult>_TypeInfo;
  puVar5 = VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadLeaderboardsResult>_TypeInfo;
  puVar4 = VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo;
  puVar3 = PTR_DAT_042393a8;
  uVar16 = 0;
  plVar1 = (long *)(unaff_x20 + 0x28);
                    /* try { // try from 01fffc68 to 020ffc6b has its CatchHandler @ 01fffcdc */
  do {
    lVar13 = *plVar1;
    if (lVar13 == 0) goto LAB_02000b80;
    if ((*(uint *)(lVar13 + 0x18) <= uVar16) || (in_w8 <= uVar16)) {
LAB_02000b84:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
                    /* try { // try from 01fffc88 to 020ffc8f has its CatchHandler @ 01fffcfc */
    lVar17 = (long)(int)uVar16;
                    /* try { // try from 01fffc90 to 020ffcc3 has its CatchHandler @ 01fff9c4 */
    lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_02000b80;
    piVar14 = (int *)(unaff_x19 + lVar17 * 4 + 0x20);
    *(int *)(lVar13 + 0x48) = *piVar14;
    iVar2 = *piVar14;
    if (*(int *)(lVar13 + 0x4c) == 8) {
      plVar8 = *(long **)(lVar13 + 0x40);
      if (iVar2 == 2) {
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
                    /* try { // try from 01fffcc4 to 020ffcc7 has its CatchHandler @ 01fffcf8 */
                    /* try { // try from 01fffcc8 to 020ffccb has its CatchHandler @ 01fffd00 */
                    /* try { // try from 01fffccc to 020ffccf has its CatchHandler @ 01fffcec */
                    /* try { // try from 01fffcd0 to 020ffcd3 has its CatchHandler @ 01fffce8 */
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
                    /* try { // try from 01fffcd4 to 020ffcd7 has its CatchHandler @ 01fffce4 */
                    /* try { // try from 01fffcd8 to 020ffcdb has its CatchHandler @ 01fffcfc */
                    /* catch() { ... } // from try @ 01fffc68 with catch @ 01fffcdc
                       try { // try from 01fffcdc to 020ffd17 has its CatchHandler @ 01fff9c4 */
                    /* catch() { ... } // from try @ 01fffc30 with catch @ 01fffce0 */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01fffcd4 with catch @ 01fffce4 */
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)puVar7,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = *(undefined8 *)puVar7;
LAB_02000af8:
          uVar9 = FUN_0210eb50(uVar9,1,0,1,0,0,0,1);
          uVar9 = FUN_03152fb8(*(undefined8 *)puVar5,uVar9,*(undefined8 *)puVar6,0);
          if (plVar8 == (long *)0x0) {
LAB_02000b80:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          pcVar15 = *(code **)(*plVar8 + 0x558);
          uVar10 = *(undefined8 *)(*plVar8 + 0x560);
LAB_02000b4c:
          (*pcVar15)(plVar8,uVar9,uVar10);
        }
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        if (iVar2 != 1) {
LAB_02000a28:
          uVar10 = *(undefined8 *)(*plVar8 + 0x560);
          uVar9 = *(undefined8 *)PTR_DAT_04230f30;
          pcVar15 = *(code **)(*plVar8 + 0x558);
          goto LAB_02000b4c;
        }
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)puVar4,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = *(undefined8 *)puVar4;
          goto LAB_02000af8;
        }
      }
    }
    else {
      switch(iVar2) {
      case 1:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
          }
LAB_02000af4:
          uVar9 = *puVar12;
          goto LAB_02000af8;
        }
        break;
      case 2:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 3:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 4:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
          }
          goto LAB_02000af4;
        }
        break;
      case 5:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 6:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 7:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 8:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
          }
          goto LAB_02000af4;
        }
        break;
      case 9:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo,1
                              ,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
          }
          goto LAB_02000af4;
        }
        break;
      case 10:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 0xb:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 0xc:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 0xd:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 0xe:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 0xf:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 0x10:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      default:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        if (iVar2 != 0x12) goto LAB_02000a28;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
        break;
      case 0x13:
        plVar8 = *(long **)(lVar13 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_02000b80;
        uVar9 = (**(code **)(*plVar8 + 0x548))(plVar8,*(undefined8 *)(*plVar8 + 0x550));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0210eb50(*(undefined8 *)
                               VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
                              ,1,0,1,0,0,0,1);
        uVar11 = FUN_031529f8(uVar9,uVar10,0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02000b80;
          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02000b84;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02000b80;
          plVar8 = *(long **)(lVar13 + 0x40);
          puVar12 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            puVar12 = (undefined8 *)
                      VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
            ;
          }
          goto LAB_02000af4;
        }
      }
    }
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    uVar16 = uVar16 + 1;
    if ((int)in_w8 <= (int)uVar16) {
      return;
    }
  } while( true );
}


