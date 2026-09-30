/*
FUNCTION_NAME: FUN_03632eec
ENTRY_POINT: 03632eec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_20;telemetry_or_network_hits_6;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03632eec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  int local_68;
  uint local_64;
  
  puVar2 = PTR_DAT_04230940;
                    /* try { // try from 03632f00 to 03732f0b has its CatchHandler @ 03633158 */
                    /* try { // try from 03632f10 to 03732f1f has its CatchHandler @ 03633154 */
  if ((DAT_045381f8 & 1) == 0) {
                    /* try { // try from 03632f20 to 03732f2f has its CatchHandler @ 03633150 */
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<LeaderboardLoadScoresResult>__
                );
                    /* try { // try from 03632f3c to 03732f4b has its CatchHandler @ 03633140 */
    FUN_01c5d288(System_Runtime_Serialization_Formatters_Binary_NameInfo_TypeInfo);
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MailComposerResult>__
                );
    FUN_01c5d288(PTR_DAT_04230940);
    FUN_01c5d288(PTR_DAT_042349c8);
                    /* try { // try from 03632f68 to 03732f83 has its CatchHandler @ 0363314c */
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MediaServicesRequestCameraAccessResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MediaServicesRequestGalleryAccessResult>__
                );
                    /* try { // try from 03632f88 to 03732fbb has its CatchHandler @ 03633194 */
    FUN_01c5d288(PTR_DAT_042316f8);
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MediaServicesSaveImageToGalleryResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MessageComposerResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesGetDeliveredNotificationsResult>__
                );
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesGetScheduledNotificationsResult>__
                );
                    /* try { // try from 03632fc0 to 03732fc3 has its CatchHandler @ 0363318c */
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesRegisterForPushNotificationsResult>__
                );
                    /* try { // try from 03632fc8 to 03732fcb has its CatchHandler @ 03633188 */
                    /* try { // try from 03632fd0 to 03732fd3 has its CatchHandler @ 03633180 */
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesRequestPermissionResult>__
                );
    DAT_045381f8 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  plVar5 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_03160a50(plVar5,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    lVar6 = *(long *)
             Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MediaServicesRequestCameraAccessResult>__
    ;
    if (lVar10 != 0) {
      lVar6 = lVar10;
    }
    if (((plVar5 != (long *)0x0) &&
        (lVar10 = FUN_0315ab48(plVar5,*(undefined8 *)
                                       Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesGetDeliveredNotificationsResult>__
                               ,0), lVar10 != 0)) &&
       (lVar6 = FUN_0315ab48(lVar10,lVar6,0),
       puVar1 = 
       Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MessageComposerResult>__
       , puVar2 = PTR_DAT_042349c8, lVar6 != 0)) {
      FUN_0316271c(lVar6,*(undefined8 *)
                          Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MediaServicesSaveImageToGalleryResult>__
                   ,0);
      FUN_0316271c(plVar5,*(undefined8 *)puVar2,0);
      lVar6 = FUN_0315ab48(plVar5,*(undefined8 *)puVar1,0);
      if (((*(long *)(param_1 + 0x10) != 0) && (lVar6 != 0)) &&
         (lVar6 = FUN_03162bfc(lVar6,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x58),0),
         puVar1 = 
         Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesGetScheduledNotificationsResult>__
         , lVar6 != 0)) {
        FUN_031626fc(lVar6,0);
        lVar6 = FUN_0315ab48(plVar5,*(undefined8 *)puVar1,0);
        if (((*(long *)(param_1 + 0x10) != 0) && (lVar6 != 0)) &&
           (lVar6 = FUN_03162bfc(lVar6,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10),0),
           puVar1 = 
           Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesRegisterForPushNotificationsResult>__
           , lVar6 != 0)) {
          FUN_031626fc(lVar6,0);
          lVar6 = FUN_0315ab48(plVar5,*(undefined8 *)puVar1,0);
          if (((*(long *)(param_1 + 0x10) != 0) && (lVar6 != 0)) &&
             (lVar6 = FUN_03162bfc(lVar6,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14),0),
             lVar6 != 0)) {
            FUN_031626fc(lVar6,0);
            FUN_031626fc(plVar5,0);
            lVar6 = *(long *)(param_1 + 0x10);
            if (lVar6 != 0) {
              local_80 = *(undefined8 *)(lVar6 + 0x30);
              uStack_98 = *(undefined8 *)(lVar6 + 0x18);
              local_a0 = *(undefined8 *)(lVar6 + 0x10);
              uStack_88 = *(undefined8 *)(lVar6 + 0x28);
              uStack_90 = *(undefined8 *)(lVar6 + 0x20);
              lVar10 = *(long *)(lVar6 + 0x18);
              lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                          Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<LeaderboardLoadScoresResult>__
                                        );
              uStack_c8 = uStack_98;
              local_d0 = local_a0;
              uStack_b8 = uStack_88;
              uStack_c0 = uStack_90;
              local_b0 = local_80;
              FUN_03618188(lVar6,&local_d0,0);
              if (lVar6 != 0) {
                lVar6 = FUN_03618234(lVar6,0,0);
                puVar4 = 
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesRequestPermissionResult>__
                ;
                puVar3 = 
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MediaServicesRequestGalleryAccessResult>__
                ;
                puVar1 = PTR_DAT_042305b0;
                local_64 = 0;
                if (lVar10 != 0) {
                  uVar11 = *(ulong *)(lVar10 + 0x18);
                  if (0 < (int)uVar11) {
                    do {
                      FUN_036333c8(param_1,plVar5,local_64);
                      if (*(long *)(param_1 + 0x18) == 0) goto LAB_036333c0;
                      uVar11 = FUN_028a9910(*(long *)(param_1 + 0x18),local_64,&local_68,
                                            *(undefined8 *)
                                             System_Runtime_Serialization_Formatters_Binary_NameInfo_TypeInfo
                                           );
                      if (((uVar11 & 1) != 0) && (0 < local_68)) {
                        iVar12 = 0;
                        do {
                          lVar7 = FUN_0315ab48(plVar5,*(undefined8 *)(param_1 + 0x30),0);
                          if (lVar7 == 0) goto LAB_036333c0;
                          FUN_0316271c(lVar7,*(undefined8 *)puVar3,0);
                          lVar7 = FUN_0315ab48(plVar5,*(undefined8 *)(param_1 + 0x30),0);
                          if (lVar7 == 0) goto LAB_036333c0;
                          FUN_0316271c(lVar7,*(undefined8 *)puVar2,0);
                          FUN_03632e7c(param_1);
                          iVar12 = iVar12 + 1;
                        } while (iVar12 < local_68);
                      }
                      if (*(long *)(param_1 + 0x20) == 0) goto LAB_036333c0;
                      uVar11 = FUN_028b2214(*(long *)(param_1 + 0x20),local_64,&local_70,
                                            *(undefined8 *)
                                             Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MailComposerResult>__
                                           );
                      if ((uVar11 & 1) != 0) {
                        lVar7 = FUN_0315ab48(plVar5,*(undefined8 *)(param_1 + 0x30),0);
                        if (lVar7 == 0) goto LAB_036333c0;
                        FUN_0316271c(lVar7,local_70,0);
                        lVar7 = FUN_0315ab48(plVar5,*(undefined8 *)(param_1 + 0x30),0);
                        if (lVar7 == 0) goto LAB_036333c0;
                        FUN_0316271c(lVar7,*(undefined8 *)puVar2,0);
                        FUN_03632e7c(param_1);
                      }
                      if (lVar6 == 0) goto LAB_036333c0;
                      if (*(uint *)(lVar6 + 0x18) <= local_64) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4ac();
                      }
                      uVar13 = *(undefined8 *)(lVar6 + (long)(int)local_64 * 0x20 + 0x30);
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                      }
                      uVar8 = FUN_03295500(0);
                      uVar14 = *(undefined8 *)(param_1 + 0x30);
                      lVar7 = FUN_032cf308(&local_64,0);
                      if (lVar7 == 0) goto LAB_036333c0;
                      uVar9 = FUN_03154448(lVar7,4,0x30,0);
                      lVar7 = FUN_03163cd4(plVar5,uVar8,*(undefined8 *)puVar4,uVar14,uVar9,uVar13,0)
                      ;
                      if (lVar7 == 0) goto LAB_036333c0;
                      FUN_031626fc(lVar7,0);
                      local_64 = local_64 + 1;
                      uVar11 = *(ulong *)(lVar10 + 0x18);
                    } while ((int)local_64 < (int)uVar11);
                  }
                  puVar2 = PTR_DAT_042316f8;
                  FUN_036333c8(param_1,plVar5,uVar11 & 0xffffffff);
                  FUN_0316271c(plVar5,*(undefined8 *)puVar2,0);
                  (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_036333c0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


