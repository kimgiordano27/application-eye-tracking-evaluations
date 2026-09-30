/*
FUNCTION_NAME: System.Data.Common.DateTimeStorage$$ConvertValue
ENTRY_POINT: 03632fd4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_19;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


void System_Data_Common_DateTimeStorage__ConvertValue(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack0000000000000060;
  int iStack0000000000000068;
  uint uStack000000000000006c;
  
                    /* try { // try from 03632fd8 to 03732fdb has its CatchHandler @ 0363317c */
  *(undefined1 *)(unaff_x21 + 0x1f8) = 1;
                    /* try { // try from 03632fe0 to 03732fe3 has its CatchHandler @ 03633178 */
  uStack0000000000000060 = 0;
  iStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  plVar5 = (long *)thunk_FUN_01c496e0(*unaff_x20);
                    /* try { // try from 03632fe8 to 03732feb has its CatchHandler @ 03633174 */
                    /* try { // try from 03632ff0 to 03732ff3 has its CatchHandler @ 03633170 */
  FUN_03160a50(plVar5,0);
                    /* try { // try from 03632ff8 to 03732ffb has its CatchHandler @ 03633148 */
  if (*(long *)(unaff_x19 + 0x10) != 0) {
                    /* try { // try from 03633000 to 03733003 has its CatchHandler @ 0363313c */
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x50);
                    /* try { // try from 03633008 to 0373300b has its CatchHandler @ 03633134 */
    lVar6 = *(long *)
             Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MediaServicesRequestCameraAccessResult>__
    ;
                    /* try { // try from 03633010 to 03733013 has its CatchHandler @ 03633130 */
    if (lVar11 != 0) {
      lVar6 = lVar11;
    }
                    /* try { // try from 03633018 to 0373301b has its CatchHandler @ 03633128 */
                    /* try { // try from 03633038 to 0373303b has its CatchHandler @ 03633120 */
                    /* try { // try from 03633040 to 03733043 has its CatchHandler @ 036330f8 */
    if (((plVar5 != (long *)0x0) &&
        (lVar11 = FUN_0315ab48(plVar5,*(undefined8 *)
                                       Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesGetDeliveredNotificationsResult>__
                               ,0), lVar11 != 0)) &&
       (lVar6 = FUN_0315ab48(lVar11,lVar6,0),
       puVar1 = 
       Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MessageComposerResult>__
       , puVar2 = PTR_DAT_042349c8, lVar6 != 0)) {
                    /* try { // try from 03633044 to 03733057 has its CatchHandler @ 036329dc */
                    /* try { // try from 03633058 to 03733067 has its CatchHandler @ 036330f4 */
      FUN_0316271c(lVar6,*(undefined8 *)
                          Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MediaServicesSaveImageToGalleryResult>__
                   ,0);
                    /* try { // try from 03633068 to 0373307b has its CatchHandler @ 036329dc */
      FUN_0316271c(plVar5,*(undefined8 *)puVar2,0);
                    /* try { // try from 0363307c to 0373308b has its CatchHandler @ 036330c8 */
      lVar6 = FUN_0315ab48(plVar5,*(undefined8 *)puVar1,0);
      if (((*(long *)(unaff_x19 + 0x10) != 0) && (lVar6 != 0)) &&
         (lVar6 = FUN_03162bfc(lVar6,*(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x58),0),
         puVar1 = 
         Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesGetScheduledNotificationsResult>__
         , lVar6 != 0)) {
                    /* try { // try from 036330ac to 037330af has its CatchHandler @ 03633120 */
        FUN_031626fc(lVar6,0);
                    /* try { // try from 036330b4 to 037330b7 has its CatchHandler @ 036330bc */
                    /* catch() { ... } // from try @ 036330b4 with catch @ 036330bc */
                    /* catch() { ... } // from try @ 03632ec8 with catch @ 036330c0 */
        lVar6 = FUN_0315ab48(plVar5,*(undefined8 *)puVar1,0);
                    /* catch() { ... } // from try @ 03632eb4 with catch @ 036330c4 */
                    /* catch() { ... } // from try @ 0363307c with catch @ 036330c8 */
                    /* catch() { ... } // from try @ 03632ea0 with catch @ 036330cc */
                    /* catch() { ... } // from try @ 03632e70 with catch @ 036330d0 */
                    /* catch() { ... } // from try @ 03632e40 with catch @ 036330d4 */
                    /* try { // try from 036330dc to 0373310f has its CatchHandler @ 0363350c */
        if (((*(long *)(unaff_x19 + 0x10) != 0) && (lVar6 != 0)) &&
           (lVar6 = FUN_03162bfc(lVar6,*(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x10),0),
           puVar1 = 
           Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesRegisterForPushNotificationsResult>__
           , lVar6 != 0)) {
                    /* catch() { ... } // from try @ 03632bc8 with catch @ 036330ec */
          FUN_031626fc(lVar6,0);
                    /* catch() { ... } // from try @ 03632bb4 with catch @ 036330f0 */
                    /* catch() { ... } // from try @ 03633058 with catch @ 036330f4 */
                    /* catch() { ... } // from try @ 03633040 with catch @ 036330f8 */
                    /* catch() { ... } // from try @ 03632b80 with catch @ 036330fc */
          lVar6 = FUN_0315ab48(plVar5,*(undefined8 *)puVar1,0);
                    /* catch() { ... } // from try @ 03632bdc with catch @ 03633100 */
                    /* catch() { ... } // from try @ 03632b4c with catch @ 03633104 */
                    /* try { // try from 03633110 to 037331a7 has its CatchHandler @ 036329dc */
          if (((*(long *)(unaff_x19 + 0x10) != 0) && (lVar6 != 0)) &&
             (lVar6 = FUN_03162bfc(lVar6,*(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x14),0),
             lVar6 != 0)) {
                    /* catch() { ... } // from try @ 03633038 with catch @ 03633120
                       catch() { ... } // from try @ 036330ac with catch @ 03633120 */
            FUN_031626fc(lVar6,0);
            FUN_031626fc(plVar5,0);
            if (*(long *)(unaff_x19 + 0x10) != 0) {
              lVar11 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x18);
              lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                          Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<LeaderboardLoadScoresResult>__
                                        );
              FUN_03618188();
              if (lVar6 != 0) {
                lVar6 = FUN_03618234(lVar6,0,0);
                puVar4 = 
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<NotificationServicesRequestPermissionResult>__
                ;
                puVar3 = 
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MediaServicesRequestGalleryAccessResult>__
                ;
                puVar1 = PTR_DAT_042305b0;
                uStack000000000000006c = 0;
                if (lVar11 != 0) {
                  if (0 < (int)*(undefined8 *)(lVar11 + 0x18)) {
                    do {
                      FUN_036333c8();
                      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_036333c0;
                      uVar7 = FUN_028a9910(*(long *)(unaff_x19 + 0x18),uStack000000000000006c,
                                           &stack0x00000068,
                                           *(undefined8 *)
                                            System_Runtime_Serialization_Formatters_Binary_NameInfo_TypeInfo
                                          );
                      if (((uVar7 & 1) != 0) && (0 < iStack0000000000000068)) {
                        iVar12 = 0;
                        do {
                          lVar8 = FUN_0315ab48(plVar5,*(undefined8 *)(unaff_x19 + 0x30),0);
                          if (lVar8 == 0) goto LAB_036333c0;
                          FUN_0316271c(lVar8,*(undefined8 *)puVar3,0);
                          lVar8 = FUN_0315ab48(plVar5,*(undefined8 *)(unaff_x19 + 0x30),0);
                          if (lVar8 == 0) goto LAB_036333c0;
                          FUN_0316271c(lVar8,*(undefined8 *)puVar2,0);
                          FUN_03632e7c();
                          iVar12 = iVar12 + 1;
                        } while (iVar12 < iStack0000000000000068);
                      }
                      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_036333c0;
                      uVar7 = FUN_028b2214(*(long *)(unaff_x19 + 0x20),uStack000000000000006c,
                                           &stack0x00000060,
                                           *(undefined8 *)
                                            Method_VoxelBusters_CoreLibrary_CallbackDispatcher_InvokeOnMainThread<MailComposerResult>__
                                          );
                      if ((uVar7 & 1) != 0) {
                        lVar8 = FUN_0315ab48(plVar5,*(undefined8 *)(unaff_x19 + 0x30),0);
                        if (lVar8 == 0) goto LAB_036333c0;
                        FUN_0316271c(lVar8,uStack0000000000000060,0);
                        lVar8 = FUN_0315ab48(plVar5,*(undefined8 *)(unaff_x19 + 0x30),0);
                        if (lVar8 == 0) goto LAB_036333c0;
                        FUN_0316271c(lVar8,*(undefined8 *)puVar2,0);
                        FUN_03632e7c();
                      }
                      if (lVar6 == 0) goto LAB_036333c0;
                      if (*(uint *)(lVar6 + 0x18) <= uStack000000000000006c) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4ac();
                      }
                      uVar13 = *(undefined8 *)
                                (lVar6 + (long)(int)uStack000000000000006c * 0x20 + 0x30);
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                      }
                      uVar9 = FUN_03295500(0);
                      uVar14 = *(undefined8 *)(unaff_x19 + 0x30);
                      lVar8 = FUN_032cf308(&stack0x0000006c,0);
                      if (lVar8 == 0) goto LAB_036333c0;
                      uVar10 = FUN_03154448(lVar8,4,0x30,0);
                      lVar8 = FUN_03163cd4(plVar5,uVar9,*(undefined8 *)puVar4,uVar14,uVar10,uVar13,0
                                          );
                      if (lVar8 == 0) goto LAB_036333c0;
                      FUN_031626fc(lVar8,0);
                      uStack000000000000006c = uStack000000000000006c + 1;
                    } while ((int)uStack000000000000006c < (int)*(undefined8 *)(lVar11 + 0x18));
                  }
                  puVar2 = PTR_DAT_042316f8;
                  FUN_036333c8();
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


