/*
FUNCTION_NAME: FUN_07bbbe78
ENTRY_POINT: 07bbbe78
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 146
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering;frame_behavior
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_13;strong_foveation_hits_3;frame_or_lifecycle_behavior;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_13
*/


void FUN_07bbbe78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint3 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  int *piVar26;
  long lVar27;
  long *plVar28;
  int iVar29;
  undefined8 uVar30;
  double dVar31;
  float fVar32;
  undefined1 auVar33 [16];
  ulong local_2a0;
  undefined8 uStack_298;
  double dStack_290;
  undefined8 uStack_288;
  ulong local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long local_260;
  long lStack_258;
  undefined8 local_250;
  ulong *puStack_248;
  ulong local_240;
  undefined8 uStack_238;
  double dStack_230;
  undefined8 uStack_228;
  ulong local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong local_200;
  undefined8 uStack_1f8;
  double local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  double local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulong local_160;
  undefined8 uStack_158;
  double local_150;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  ulong local_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined7 local_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long local_78;
  
                    /* try { // try from 07bbbe78 to 07cbbe87 has its CatchHandler @ 07bbbe88 */
                    /* catch() { ... } // from try @ 07bbbdec with catch @ 07bbbe88
                       catch() { ... } // from try @ 07bbbe78 with catch @ 07bbbe88 */
                    /* try { // try from 07bbbe8c to 07cbbe8f has its CatchHandler @ 07bbbe98 */
                    /* try { // try from 07bbbe90 to 07cbbe9b has its CatchHandler @ 07bbba30 */
                    /* catch() { ... } // from try @ 07bbbe8c with catch @ 07bbbe98 */
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((DAT_0899298b & 1) == 0) {
    FUN_03a8a718(Oculus_Platform_MessageWithLivestreamingApplicationStatus_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithLivestreamingStartResult_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithLivestreamingStatus_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithLivestreamingVideoStats_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithMicrophoneAvailabilityState_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithNetSyncConnection_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithNetSyncSessionList_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithNetSyncSessionsChangedNotification_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithNetSyncSetSessionPropertyResult_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithOrgScopedID_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithParty_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithPartyID_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithPartyUnderCurrentParty_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithPartyUpdateNotification_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithPidList_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithPlatformInitialize_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithProductList_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithPurchase_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithPurchaseList_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithPushNotificationResult_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithRejoinDialogResult_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithSdkAccountList_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithSendInvitesResult_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithShareMediaResult_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithString_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithSystemVoipState_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithUser_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithUserAccountAgeCategory_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithUserCapabilityList_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithUserList_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithUserProof_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848d310);
    FUN_03a8a718(PTR_DAT_0848d320);
    FUN_03a8a718(PTR_DAT_08492e78);
    FUN_03a8a718(Unity_Profiling_Memory_MemoryProfiler_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithUserReportID_TypeInfo);
    FUN_03a8a718(Unity_Services_Friends_Models_Member_TypeInfo);
    FUN_03a8a718(
                Unity_Services_Friends_Internal_Generated_Messaging_MessagingApiBaseRequest_TypeInfo
                );
    FUN_03a8a718(
                Unity_Services_Friends_Internal_Generated_Apis_Messaging_MessagingApiClient_TypeInfo
                );
    FUN_03a8a718(Normal_Realtime_Serialization_MetaModel_TypeInfo);
    FUN_03a8a718(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
    FUN_03a8a718(Meta_XR_MetaXRFoveationFeature_TypeInfo);
    FUN_03a8a718(UnityEditor_Analytics_MetalPatchShaderComputeBufferAnalytic_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_MeteringModeParameter_TypeInfo);
    FUN_03a8a718(System_MethodAccessException_TypeInfo);
    FUN_03a8a718(System_Reflection_MethodBase_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_MethodBinaryExpression_TypeInfo);
    FUN_03a8a718(System_Runtime_Remoting_Messaging_MethodCall_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_MethodCallExpression_TypeInfo);
    FUN_03a8a718(Oculus_Platform_MessageWithLeaderboardList_TypeInfo);
    DAT_0899298b = 1;
  }
  local_130._0_8_ = 0;
  local_130._8_8_ = 0;
  plVar28 = (long *)(param_1 + 0x28);
  *plVar28 = param_4;
  local_140._0_8_ = 0;
  local_140._8_8_ = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0.0;
  local_88 = 0;
  uStack_81 = 0;
  uStack_80 = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  local_1b0 = 0;
  uStack_1ac = 0;
  local_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  local_170 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  uStack_1b4 = 0;
  local_1c0 = 0.0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0.0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  dStack_230 = 0.0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  thunk_FUN_03afed3c(plVar28);
  if (*plVar28 != 0) {
    uVar14 = FUN_07fcbc18(*plVar28,0);
    *(undefined4 *)(param_1 + 0x34) = uVar14;
    puVar9 = UnityEditor_Analytics_MetalPatchShaderComputeBufferAnalytic_TypeInfo;
    puVar8 = Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo;
    puVar7 = Oculus_Platform_MessageWithUserProof_TypeInfo;
    puVar6 = Oculus_Platform_MessageWithSdkAccountList_TypeInfo;
    puVar5 = PTR_DAT_0848d310;
    if (*(long *)(param_1 + 0x28) != 0) {
      bVar13 = FUN_07fcbd90(*(long *)(param_1 + 0x28),0);
      uVar21 = *(undefined8 *)puVar9;
      *(byte *)(param_1 + 0x30) = bVar13 & 1;
      lVar16 = thunk_FUN_03ac74bc(uVar21);
      FUN_0585fb14(lVar16,*(undefined8 *)puVar8);
      iVar15 = FUN_046be0f4(param_2,param_3,*(undefined8 *)puVar5);
      lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)puVar7);
      FUN_04de7d48(lVar17,*(undefined8 *)puVar6);
      puVar8 = System_Linq_Expressions_MethodCallExpression_TypeInfo;
      puVar7 = PTR_DAT_08492e78;
      puVar6 = PTR_DAT_0848d320;
      puVar5 = PTR_DAT_08486760;
      if (0 < iVar15) {
        iVar29 = 0;
        do {
          auVar33 = FUN_046bdf24(param_2,param_3,iVar29,*(undefined8 *)puVar6);
          local_130 = auVar33;
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar21 = FUN_07cb7ff4(local_130,0);
          uVar30 = *(undefined8 *)puVar8;
          if (*(int *)(*(long *)(puVar5 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)(puVar5 + 0xe0));
          }
          uVar30 = FUN_0675ff58(uVar30,0);
          uVar18 = FUN_06769d78(uVar21,uVar30,0);
          uVar30 = local_130._8_8_;
          uVar21 = local_130._0_8_;
          if ((uVar18 & 1) == 0) {
            if (*(int *)(*(long *)Unity_Services_Friends_Models_Member_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            auVar33 = FUN_05766360(uVar21,uVar30,
                                   *(undefined8 *)Oculus_Platform_MessageWithUserReportID_TypeInfo);
            local_140 = auVar33;
            lVar19 = FUN_0576624c(local_140,
                                  *(undefined8 *)Unity_Profiling_Memory_MemoryProfiler_TypeInfo);
            if (lVar19 != 0) {
              if (lVar17 == 0) goto LAB_07bbce04;
              lVar22 = *(long *)(lVar17 + 0x10);
              lVar24 = *(long *)Oculus_Platform_MessageWithParty_TypeInfo;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_07bbce04;
              uVar20 = *(uint *)(lVar17 + 0x18);
              if (uVar20 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar20 + 1;
                *(long *)(lVar22 + (long)(int)uVar20 * 8 + 0x20) = lVar19;
                thunk_FUN_03afed3c();
              }
              else {
                FUN_04de85b0(lVar17,lVar19,
                             *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          iVar29 = iVar29 + 1;
        } while (iVar15 != iVar29);
      }
      uVar21 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Runtime_Remoting_Messaging_MethodCall_TypeInfo);
      FUN_0679343c(uVar21,0);
      puVar23 = (undefined8 *)
                Unity_Services_Friends_Internal_Generated_Apis_Messaging_MessagingApiClient_TypeInfo
      ;
      puVar6 = Oculus_Platform_MessageWithSystemVoipState_TypeInfo;
      puVar5 = Oculus_Platform_MessageWithPartyID_TypeInfo;
      if (lVar17 != 0) {
        FUN_04de9fa4(lVar17,uVar21,
                     *(undefined8 *)Oculus_Platform_MessageWithPartyUpdateNotification_TypeInfo);
        FUN_04de90b8(&local_f0,lVar17,*(undefined8 *)puVar5);
        puVar25 = (undefined8 *)((ulong)&local_f0 | 1);
        local_150 = local_e0;
        puStack_248 = &local_160;
        uStack_158 = uStack_e8;
        local_160 = local_f0;
        local_250 = 0;
        while( true ) {
          uVar18 = FUN_061c1964(&local_160,
                                *(undefined8 *)Oculus_Platform_MessageWithNetSyncConnection_TypeInfo
                               );
          dVar10 = local_150;
          if ((uVar18 & 1) == 0) break;
          if (lVar16 == 0) {
            if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07bbd1cc;
          }
          if (*(int *)(lVar16 + 0x18) == 0) {
            uStack_98 = 0;
            local_a0 = 0;
            local_90 = 0;
            uStack_1c8 = 0;
            local_1d0 = 0;
            local_1b8 = 0;
            uStack_1b4 = 0;
            local_1c0 = 0.0;
            uStack_1a8 = 0;
            uStack_1a4 = 0;
            local_1b0 = 0;
            uStack_1ac = 0;
            local_198 = 0;
            local_1a0 = 0;
            uStack_1d8 = 0;
            local_1e0 = 0;
            if (local_150 != 0.0) goto LAB_07bbc554;
            if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07bbd1cc;
          }
          if (local_150 == 0.0) {
            if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07bbd1cc;
          }
          dVar31 = *(double *)((long)local_150 + 0x10);
          FUN_05860108(&local_f0,lVar16,
                       *(undefined8 *)
                        Unity_Services_Friends_Internal_Generated_Messaging_MessagingApiBaseRequest_TypeInfo
                      );
          if (local_e0 < dVar31) {
LAB_07bbc554:
            local_90 = 0;
            uStack_98 = 0;
            local_a0 = 0;
            local_198 = 0;
            local_1a0 = 0;
            uStack_1a4 = 0;
            uStack_1a8 = 0;
            uStack_1ac = 0;
            local_1b0 = 0;
            uStack_1b4 = 0;
            local_1b8 = 0;
            local_1c0 = 0.0;
            uStack_1c8 = 0;
            local_1d0 = 0;
            uStack_1d8 = 0;
            local_1e0 = 0;
            uVar30 = *(undefined8 *)((long)dVar10 + 0x10);
            uVar14 = *(undefined4 *)((long)dVar10 + 0x24);
            uVar4 = *(uint3 *)((long)dVar10 + 0x20);
            uVar20 = *(uint *)((long)dVar10 + 0x34);
            fVar32 = *(float *)((long)dVar10 + 0x38);
            uVar21 = *(undefined8 *)((long)dVar10 + 0x34);
            if (*(long *)((long)dVar10 + 0x40) == 0) {
              local_1b8 = 0;
            }
            else {
              local_1b8 = FUN_07bbd1dc();
              uVar20 = *(uint *)((long)dVar10 + 0x34);
              fVar32 = *(float *)((long)dVar10 + 0x38);
            }
            local_1c0 = (double)uVar20 * (double)fVar32;
            local_1e0 = CONCAT44(uVar14,(uint)uVar4);
            local_1d0 = 0;
            uStack_1ac = (undefined4)uStack_98;
            uStack_1a8 = (undefined4)((ulong)uStack_98 >> 0x20);
            uStack_1b4 = (undefined4)local_a0;
            local_1b0 = (undefined4)((ulong)local_a0 >> 0x20);
            uStack_1a4 = local_90;
            uStack_1d8 = uVar30;
            uStack_1c8 = uVar21;
            thunk_FUN_03afed3c(&local_1b0,0);
            uVar21 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_MessageWithUserList_TypeInfo)
            ;
            FUN_05017d20(uVar21,*(undefined8 *)Oculus_Platform_MessageWithPurchaseList_TypeInfo);
            local_1a0 = uVar21;
            thunk_FUN_03afed3c(&local_1a0,uVar21);
            uVar21 = thunk_FUN_03ac74bc(*(undefined8 *)
                                         Oculus_Platform_MessageWithUserAccountAgeCategory_TypeInfo)
            ;
            FUN_050154d8(uVar21,*(undefined8 *)
                                 Oculus_Platform_MessageWithPushNotificationResult_TypeInfo);
            local_198 = uVar21;
            thunk_FUN_03afed3c(&local_198,uVar21);
            memcpy(&local_f0,&local_1e0,0x50);
            FUN_058602dc(lVar16,&local_f0,
                         *(undefined8 *)Normal_Realtime_Serialization_MetaModel_TypeInfo);
          }
          else {
            cVar1 = *(char *)((long)dVar10 + 0x20);
            FUN_05860108(&local_f0,lVar16,
                         *(undefined8 *)
                          Unity_Services_Friends_Internal_Generated_Messaging_MessagingApiBaseRequest_TypeInfo
                        );
            if ((cVar1 != '\0') == ((local_f0 & 1) == 0)) goto LAB_07bbc554;
            if (*(char *)((long)dVar10 + 0x20) == '\0') {
              if (*(char *)((long)dVar10 + 0x21) == '\0') {
                FUN_05860108(&local_f0,lVar16,
                             *(undefined8 *)
                              Unity_Services_Friends_Internal_Generated_Messaging_MessagingApiBaseRequest_TypeInfo
                            );
                if ((local_f0 & 0x10000) == 0) goto LAB_07bbc4b8;
              }
              goto LAB_07bbc554;
            }
LAB_07bbc4b8:
            iVar15 = *(int *)((long)dVar10 + 0x24);
            FUN_05860108(&local_f0,lVar16,
                         *(undefined8 *)
                          Unity_Services_Friends_Internal_Generated_Messaging_MessagingApiBaseRequest_TypeInfo
                        );
            if ((iVar15 != local_f0._4_4_) || (*(int *)((long)dVar10 + 0x34) != 0))
            goto LAB_07bbc554;
          }
          FUN_05860158(&local_f0,lVar16,*puVar23);
          uVar18 = local_f0;
          local_88 = (undefined7)*puVar25;
          uStack_81 = (undefined1)*(undefined8 *)((long)puVar25 + 7);
          uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar25 + 7) >> 8);
          dVar31 = *(double *)((long)dVar10 + 0x18);
          uStack_188 = uStack_d0;
          local_190 = local_d8;
          uStack_178 = uStack_c0;
          uStack_180 = local_c8;
          uVar11 = (undefined1)local_f0;
          local_170 = local_b8;
          if (*(int *)(*(long *)Oculus_Platform_MessageWithLeaderboardList_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar21 = FUN_07bbbda8(dVar10,param_4);
          lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_MessageWithUserList_TypeInfo);
          FUN_05017e5c(lVar17,uVar21,*(undefined8 *)Oculus_Platform_MessageWithPurchase_TypeInfo);
          if ((uVar18 & 1) == 0) {
            lVar19 = thunk_FUN_03ac74bc(*(undefined8 *)
                                         Oculus_Platform_MessageWithUserCapabilityList_TypeInfo);
            FUN_04cb5be4(lVar19,*(undefined8 *)
                                 Oculus_Platform_MessageWithRejoinDialogResult_TypeInfo);
            if (lVar17 == 0) {
              if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07bbd1cc;
            }
            if (0 < *(int *)(lVar17 + 0x18)) {
              iVar15 = 0;
              do {
                FUN_050182b8(&local_2a0,lVar17,iVar15,
                             *(undefined8 *)Oculus_Platform_MessageWithUser_TypeInfo);
                local_280 = 0;
                uStack_e8 = uStack_298;
                local_f0 = local_2a0;
                local_d8 = uStack_288;
                local_e0 = dStack_290;
                uStack_298 = 0;
                local_2a0 = 0;
                uStack_288 = 0;
                dStack_290 = 0.0;
                FUN_05b7a01c(&local_2a0,&local_f0,iVar15,
                             *(undefined8 *)System_Linq_Expressions_MethodBinaryExpression_TypeInfo)
                ;
                puVar5 = Oculus_Platform_MessageWithOrgScopedID_TypeInfo;
                if (lVar19 == 0) {
LAB_07bbce54:
                  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_07bbd1cc;
                }
                lVar22 = *(long *)(lVar19 + 0x10);
                local_100 = local_280;
                uStack_118 = uStack_298;
                local_120 = local_2a0;
                uStack_108 = uStack_288;
                dStack_110 = dStack_290;
                *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                if (lVar22 == 0) goto LAB_07bbce54;
                uVar20 = *(uint *)(lVar19 + 0x18);
                if (uVar20 < *(uint *)(lVar22 + 0x18)) {
                  lVar22 = lVar22 + (long)(int)uVar20 * 0x28;
                  *(uint *)(lVar19 + 0x18) = uVar20 + 1;
                  *(undefined8 *)(lVar22 + 0x28) = uStack_298;
                  *(ulong *)(lVar22 + 0x20) = local_2a0;
                  *(undefined8 *)(lVar22 + 0x38) = uStack_288;
                  *(double *)(lVar22 + 0x30) = dStack_290;
                  *(ulong *)(lVar22 + 0x40) = local_280;
                  thunk_FUN_03afed3c(lVar22 + 0x28,0);
                }
                else {
                  uStack_e8 = uStack_298;
                  local_f0 = local_2a0;
                  local_d8 = uStack_288;
                  local_e0 = dStack_290;
                  uStack_d0 = local_280;
                  FUN_04cb650c(lVar19,&local_f0,
                               *(undefined8 *)
                                (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < *(int *)(lVar17 + 0x18));
            }
            lVar17 = *(long *)System_Reflection_MethodBase_TypeInfo;
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar17 = *(long *)System_Reflection_MethodBase_TypeInfo;
            }
            puVar23 = *(undefined8 **)(lVar17 + 0xb8);
            lVar22 = puVar23[1];
            if (lVar22 == 0) {
              if (*(int *)(lVar17 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                puVar23 = *(undefined8 **)(*(long *)System_Reflection_MethodBase_TypeInfo + 0xb8);
              }
              uVar21 = *puVar23;
              lVar22 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           Oculus_Platform_MessageWithLivestreamingStatus_TypeInfo);
              FUN_05d115f8(lVar22,uVar21,*(undefined8 *)System_MethodAccessException_TypeInfo,0);
              plVar28 = (long *)(*(long *)(*(long *)System_Reflection_MethodBase_TypeInfo + 0xb8) +
                                8);
              *plVar28 = lVar22;
              thunk_FUN_03afed3c(plVar28,lVar22);
            }
            if (lVar19 == 0) goto LAB_07bbcfc4;
            FUN_04cb8348(lVar19,lVar22,
                         *(undefined8 *)Oculus_Platform_MessageWithPartyUnderCurrentParty_TypeInfo);
            lVar17 = FUN_03a8a804(*(undefined8 *)
                                   Oculus_Platform_MessageWithLivestreamingStartResult_TypeInfo,
                                  *(undefined4 *)((long)dVar10 + 0x30));
            lVar22 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_MessageWithUserList_TypeInfo)
            ;
            FUN_05017d20(lVar22,*(undefined8 *)Oculus_Platform_MessageWithPurchaseList_TypeInfo);
            if (0 < *(int *)(lVar19 + 0x18)) {
              iVar15 = 0;
              do {
                FUN_04cb617c(&local_f0,lVar19,iVar15,*(undefined8 *)puVar6);
                uVar21 = local_d8;
                uVar14 = (undefined4)local_d8;
                uVar12 = local_d8._4_4_;
                uStack_1f8 = uStack_e8;
                local_200 = local_f0;
                local_1f0 = local_e0;
                FUN_04cb617c(&local_f0,lVar19,iVar15,*(undefined8 *)puVar6);
                if ((long)(ulong)(uint)(*(int *)((long)dVar10 + 0x30) << 1) <= (long)(int)uStack_d0)
                {
                  if (lVar22 != 0) {
                    lVar24 = *(long *)(lVar22 + 0x10);
                    lVar27 = *(long *)
                              Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo;
                    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                    if (lVar24 != 0) {
                      uVar20 = *(uint *)(lVar22 + 0x18);
                      if (uVar20 < *(uint *)(lVar24 + 0x18)) {
                        lVar24 = lVar24 + (long)(int)uVar20 * 0x20;
                        *(uint *)(lVar22 + 0x18) = uVar20 + 1;
                        *(undefined8 *)(lVar24 + 0x28) = uStack_1f8;
                        *(ulong *)(lVar24 + 0x20) = local_200;
                        *(double *)(lVar24 + 0x30) = local_1f0;
                        *(undefined4 *)(lVar24 + 0x38) = uVar14;
                        *(undefined4 *)(lVar24 + 0x3c) = uVar12;
                        thunk_FUN_03afed3c(lVar24 + 0x28,0);
                      }
                      else {
                        uStack_e8 = uStack_1f8;
                        local_f0 = local_200;
                        local_e0 = local_1f0;
                        local_d8 = uVar21;
                        FUN_05018614(lVar22,&local_f0,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_07bbcb3c;
                    }
                  }
                  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_07bbd1cc;
                }
                if (local_b0 == 0) {
                  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_07bbd1cc;
                }
                iVar29 = (int)uStack_d0;
                if ((int)uStack_d0 < 0) {
                  iVar29 = (int)uStack_d0 + 1;
                }
                if (local_a8 == 0) {
                  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_07bbd1cc;
                }
                uVar20 = iVar29 >> 1;
                iVar29 = *(int *)(local_a8 + 0x18);
                if ((uStack_d0 & 1) == 0) {
                  if (lVar17 == 0) {
                    if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    goto LAB_07bbd1cc;
                  }
                  if (*(uint *)(lVar17 + 0x18) <= uVar20) {
                    if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c8();
                    }
                    goto LAB_07bbd1cc;
                  }
                  piVar26 = (int *)(lVar17 + 0x20 + (long)(int)uVar20 * 8);
                  uVar14 = 1;
                }
                else {
                  if (lVar17 == 0) {
                    if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    goto LAB_07bbd1cc;
                  }
                  if (*(uint *)(lVar17 + 0x18) <= uVar20) {
                    if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c8();
                    }
                    goto LAB_07bbd1cc;
                  }
                  piVar26 = (int *)(lVar17 + 0x20 + (long)(int)uVar20 * 8 + 4);
                  uVar14 = 2;
                }
                *piVar26 = iVar15 + *(int *)(local_b0 + 0x18);
                if (lVar22 == 0) {
LAB_07bbce74:
                  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_07bbd1cc;
                }
                lVar24 = *(long *)(lVar22 + 0x10);
                lVar27 = *(long *)
                          Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo;
                *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                if (lVar24 == 0) goto LAB_07bbce74;
                uVar2 = *(uint *)(lVar22 + 0x18);
                iVar29 = iVar29 + uVar20;
                if (uVar2 < *(uint *)(lVar24 + 0x18)) {
                  lVar24 = lVar24 + (long)(int)uVar2 * 0x20;
                  *(uint *)(lVar22 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar24 + 0x28) = uStack_1f8;
                  *(ulong *)(lVar24 + 0x20) = local_200;
                  *(double *)(lVar24 + 0x30) = local_1f0;
                  *(int *)(lVar24 + 0x38) = iVar29;
                  *(undefined4 *)(lVar24 + 0x3c) = uVar14;
                  thunk_FUN_03afed3c(lVar24 + 0x28,0);
                }
                else {
                  uStack_e8 = uStack_1f8;
                  local_f0 = local_200;
                  local_e0 = local_1f0;
                  local_d8 = CONCAT44(uVar14,iVar29);
                  FUN_05018614(lVar22,&local_f0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                }
LAB_07bbcb3c:
                iVar15 = iVar15 + 1;
              } while (iVar15 < *(int *)(lVar19 + 0x18));
            }
            if (local_a8 == 0) {
              if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07bbd1cc;
            }
            FUN_05015f70(local_a8,lVar17,
                         *(undefined8 *)
                          Oculus_Platform_MessageWithNetSyncSessionsChangedNotification_TypeInfo);
            if (local_b0 == 0) {
              if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07bbd1cc;
            }
            FUN_05018854(local_b0,lVar22,
                         *(undefined8 *)
                          Oculus_Platform_MessageWithNetSyncSetSessionPropertyResult_TypeInfo);
          }
          else {
            lVar19 = *(long *)System_Reflection_MethodBase_TypeInfo;
            if (*(int *)(lVar19 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar19 = *(long *)System_Reflection_MethodBase_TypeInfo;
            }
            puVar23 = *(undefined8 **)(lVar19 + 0xb8);
            lVar22 = puVar23[2];
            if (lVar22 == 0) {
              if (*(int *)(lVar19 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                puVar23 = *(undefined8 **)(*(long *)System_Reflection_MethodBase_TypeInfo + 0xb8);
              }
              uVar21 = *puVar23;
              lVar22 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           Oculus_Platform_MessageWithLivestreamingVideoStats_TypeInfo
                                         );
              FUN_05d3ee14(lVar22,uVar21,
                           *(undefined8 *)
                            UnityEngine_Rendering_HighDefinition_MeteringModeParameter_TypeInfo,0);
              plVar28 = (long *)(*(long *)(*(long *)System_Reflection_MethodBase_TypeInfo + 0xb8) +
                                0x10);
              *plVar28 = lVar22;
              thunk_FUN_03afed3c(plVar28,lVar22);
            }
            if (lVar17 == 0) {
LAB_07bbcfc4:
              if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07bbd1cc;
            }
            FUN_0501a2f4(lVar17,lVar22,*(undefined8 *)Oculus_Platform_MessageWithPidList_TypeInfo);
            if (local_b0 == 0) {
              if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_07bbd1cc;
            }
            FUN_05018854(local_b0,lVar17,
                         *(undefined8 *)
                          Oculus_Platform_MessageWithNetSyncSetSessionPropertyResult_TypeInfo);
          }
          uStack_d0 = uStack_188;
          local_d8 = local_190;
          uStack_c0 = uStack_178;
          local_c8 = uStack_180;
          local_b8 = local_170;
          local_f0 = CONCAT71(local_f0._1_7_,uVar11);
          *puVar25 = CONCAT17(uStack_81,local_88);
          *(ulong *)((long)puVar25 + 7) = CONCAT71(uStack_80,uStack_81);
          puVar23 = (undefined8 *)
                    Unity_Services_Friends_Internal_Generated_Apis_Messaging_MessagingApiClient_TypeInfo
          ;
          local_e0 = dVar31;
          FUN_058602dc(lVar16,&local_f0,
                       *(undefined8 *)Normal_Realtime_Serialization_MetaModel_TypeInfo);
        }
        FUN_061c1960(&local_160,
                     *(undefined8 *)Oculus_Platform_MessageWithMicrophoneAvailabilityState_TypeInfo)
        ;
        if (lVar16 != 0) {
          lVar17 = FUN_03a8a804(*(undefined8 *)
                                 Oculus_Platform_MessageWithLivestreamingApplicationStatus_TypeInfo,
                                *(undefined4 *)(lVar16 + 0x18));
          plVar28 = (long *)(param_1 + 0x38);
          *plVar28 = lVar17;
          thunk_FUN_03afed3c(plVar28,lVar17);
          lVar17 = *plVar28;
          if (lVar17 != 0) {
            lVar19 = 0;
            uVar18 = 0;
            while( true ) {
              if ((long)*(int *)(lVar17 + 0x18) <= (long)uVar18) {
                if (*(long *)(lVar3 + 0x28) == local_78) {
                  return;
                }
                goto LAB_07bbd1cc;
              }
              FUN_05860158(&local_2a0,lVar16,*puVar23);
              lVar24 = lStack_258;
              lVar22 = local_260;
              lVar17 = *plVar28;
              uStack_238 = uStack_298;
              local_240 = local_2a0;
              uStack_228 = uStack_288;
              dStack_230 = dStack_290;
              uStack_218 = uStack_278;
              local_220 = local_280;
              uStack_208 = uStack_268;
              uStack_210 = uStack_270;
              if (lVar17 == 0) break;
              if (*(uint *)(lVar17 + 0x18) <= uVar18) {
LAB_07bbcf04:
                if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c8();
                }
                goto LAB_07bbd1cc;
              }
              lVar17 = lVar17 + lVar19;
              *(undefined8 *)(lVar17 + 0x28) = uStack_298;
              *(ulong *)(lVar17 + 0x20) = local_2a0;
              *(undefined8 *)(lVar17 + 0x38) = uStack_288;
              *(double *)(lVar17 + 0x30) = dStack_290;
              *(undefined8 *)(lVar17 + 0x48) = uStack_278;
              *(ulong *)(lVar17 + 0x40) = local_280;
              *(undefined8 *)(lVar17 + 0x58) = uStack_268;
              *(undefined8 *)(lVar17 + 0x50) = uStack_270;
              thunk_FUN_03afed3c(lVar17 + 0x50,0);
              lVar17 = *plVar28;
              if ((lVar17 == 0) || (lVar24 == 0)) break;
              uVar21 = FUN_05017818(lVar24,*(undefined8 *)
                                            Oculus_Platform_MessageWithProductList_TypeInfo);
              if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_07bbcf04;
              *(undefined8 *)(lVar17 + lVar19 + 0x58) = uVar21;
              thunk_FUN_03afed3c();
              lVar17 = *plVar28;
              if ((lVar17 == 0) || (lVar22 == 0)) break;
              uVar21 = FUN_0501a38c(lVar22,*(undefined8 *)
                                            Oculus_Platform_MessageWithPlatformInitialize_TypeInfo);
              if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_07bbcf04;
              lVar17 = lVar17 + lVar19;
              lVar19 = lVar19 + 0x40;
              uVar18 = uVar18 + 1;
              *(undefined8 *)(lVar17 + 0x50) = uVar21;
              thunk_FUN_03afed3c();
              lVar17 = *plVar28;
              if (lVar17 == 0) break;
            }
          }
        }
      }
    }
  }
LAB_07bbce04:
  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_07bbd1cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


