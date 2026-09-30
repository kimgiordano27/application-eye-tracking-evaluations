/*
FUNCTION_NAME: UnityEngine.Rendering.AsyncGPUReadbackRequest$$GetLayerDataSize
ENTRY_POINT: 07bbc1a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 119
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_10;strong_foveation_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_10
*/


void UnityEngine_Rendering_AsyncGPUReadbackRequest__GetLayerDataSize
               (long param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint3 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 uVar10;
  byte bVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  int *piVar27;
  long lVar28;
  long unaff_x25;
  int iVar29;
  undefined8 uVar30;
  double dVar31;
  float fVar32;
  undefined1 auVar33 [16];
  long in_stack_00000010;
  undefined8 in_stack_00000028;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  double in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 *in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  double in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  ulong in_stack_000000e0;
  undefined8 in_stack_000000e8;
  double in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  double in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  ulong in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  ulong in_stack_00000180;
  undefined8 in_stack_00000188;
  double in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  ulong in_stack_000001c0;
  undefined8 in_stack_000001c8;
  double in_stack_000001d0;
  undefined8 in_stack_000001d8;
  ulong in_stack_000001e0;
  undefined1 uStack00000000000001f0;
  int iVar35;
  undefined7 uVar34;
  undefined8 in_stack_000001f8;
  double in_stack_00000200;
  double dVar36;
  undefined8 in_stack_00000208;
  ulong in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  long in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000268;
  
  *(undefined4 *)(unaff_x25 + 0x34) = param_2;
  puVar7 = UnityEditor_Analytics_MetalPatchShaderComputeBufferAnalytic_TypeInfo;
  puVar6 = Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo;
  puVar5 = Oculus_Platform_MessageWithUserProof_TypeInfo;
  puVar4 = Oculus_Platform_MessageWithSdkAccountList_TypeInfo;
  if (param_1 != 0) {
                    /* try { // try from 07bbc1dc to 07cbc203 has its CatchHandler @ 07bbc354 */
    bVar11 = FUN_07fcbd90(param_1,0);
    uVar22 = *(undefined8 *)puVar7;
    *(byte *)(unaff_x25 + 0x30) = bVar11 & 1;
    lVar13 = thunk_FUN_03ac74bc(uVar22);
    FUN_0585fb14(lVar13,*(undefined8 *)puVar6);
    iVar12 = FUN_046be0f4();
    lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_04de7d48(lVar14,*(undefined8 *)puVar4);
    puVar6 = System_Linq_Expressions_MethodCallExpression_TypeInfo;
    puVar5 = PTR_DAT_08492e78;
    puVar4 = PTR_DAT_08486760;
    if (0 < iVar12) {
      iVar29 = 0;
      do {
        auVar33 = FUN_046bdf24();
        _in_stack_000001b0 = auVar33;
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar22 = FUN_07cb7ff4(&stack0x000001b0,0);
        uVar30 = *(undefined8 *)puVar6;
        if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)(puVar4 + 0xe0));
        }
        uVar30 = FUN_0675ff58(uVar30,0);
        uVar15 = FUN_06769d78(uVar22,uVar30,0);
        uVar30 = in_stack_000001b8;
        uVar22 = in_stack_000001b0;
        if ((uVar15 & 1) == 0) {
          if (*(int *)(*(long *)Unity_Services_Friends_Models_Member_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          auVar33 = FUN_05766360(uVar22,uVar30,
                                 *(undefined8 *)Oculus_Platform_MessageWithUserReportID_TypeInfo);
          _in_stack_000001a0 = auVar33;
          lVar16 = FUN_0576624c(&stack0x000001a0,
                                *(undefined8 *)Unity_Profiling_Memory_MemoryProfiler_TypeInfo);
          if (lVar16 != 0) {
            if (lVar14 == 0) goto LAB_07bbce04;
            lVar23 = *(long *)(lVar14 + 0x10);
            lVar25 = *(long *)Oculus_Platform_MessageWithParty_TypeInfo;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_07bbce04;
            uVar20 = *(uint *)(lVar14 + 0x18);
            if (uVar20 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar20 + 1;
              *(long *)(lVar23 + (long)(int)uVar20 * 8 + 0x20) = lVar16;
              thunk_FUN_03afed3c();
            }
            else {
              FUN_04de85b0(lVar14,lVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        iVar29 = iVar29 + 1;
      } while (iVar12 != iVar29);
    }
    uVar22 = thunk_FUN_03ac74bc(*(undefined8 *)System_Runtime_Remoting_Messaging_MethodCall_TypeInfo
                               );
    FUN_0679343c(uVar22,0);
    puVar24 = (undefined8 *)
              Unity_Services_Friends_Internal_Generated_Apis_Messaging_MessagingApiClient_TypeInfo;
    puVar5 = Oculus_Platform_MessageWithSystemVoipState_TypeInfo;
    puVar4 = Oculus_Platform_MessageWithPartyID_TypeInfo;
    if (lVar14 != 0) {
      FUN_04de9fa4(lVar14,uVar22,
                   *(undefined8 *)Oculus_Platform_MessageWithPartyUpdateNotification_TypeInfo);
      FUN_04de90b8(&stack0x000001f0,lVar14,*(undefined8 *)puVar4);
      puVar26 = (undefined8 *)((ulong)&stack0x000001f0 | 1);
      in_stack_00000098 = &stack0x00000180;
      in_stack_00000090 = 0;
      in_stack_00000180 = _uStack00000000000001f0;
      in_stack_00000188 = in_stack_000001f8;
      in_stack_00000190 = in_stack_00000200;
      while( true ) {
        uVar15 = _uStack00000000000001f0;
        uVar17 = FUN_061c1964(&stack0x00000180,
                              *(undefined8 *)Oculus_Platform_MessageWithNetSyncConnection_TypeInfo);
        dVar9 = in_stack_00000190;
        if ((uVar17 & 1) == 0) break;
        if (lVar13 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_07bbd1cc;
        }
        uVar10 = uStack00000000000001f0;
        if (*(int *)(lVar13 + 0x18) == 0) {
          in_stack_00000118 = 0;
          in_stack_00000110 = 0;
          uStack0000000000000128 = 0;
          uStack000000000000012c = 0;
          in_stack_00000120 = 0.0;
          uStack0000000000000138 = 0;
          uStack000000000000013c = 0;
          uStack0000000000000130 = 0;
          uStack0000000000000134 = 0;
          in_stack_00000148 = 0;
          in_stack_00000140 = 0;
          in_stack_00000108 = 0;
          in_stack_00000100 = 0;
          if (in_stack_00000190 != 0.0) goto LAB_07bbc554;
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_07bbd1cc;
        }
        if (in_stack_00000190 == 0.0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_07bbd1cc;
        }
        dVar31 = *(double *)((long)in_stack_00000190 + 0x10);
        FUN_05860108(&stack0x000001f0,lVar13,
                     *(undefined8 *)
                      Unity_Services_Friends_Internal_Generated_Messaging_MessagingApiBaseRequest_TypeInfo
                    );
        if (in_stack_00000200 < dVar31) {
LAB_07bbc554:
          in_stack_00000148 = 0;
          in_stack_00000140 = 0;
          uStack000000000000013c = 0;
          uStack0000000000000138 = 0;
          uStack0000000000000134 = 0;
          uStack0000000000000130 = 0;
          uStack000000000000012c = 0;
          uStack0000000000000128 = 0;
          in_stack_00000120 = 0.0;
          in_stack_00000118 = 0;
          in_stack_00000110 = 0;
          in_stack_00000108 = 0;
          in_stack_00000100 = 0;
          uVar30 = *(undefined8 *)((long)dVar9 + 0x10);
          uVar21 = *(undefined4 *)((long)dVar9 + 0x24);
          uVar3 = *(uint3 *)((long)dVar9 + 0x20);
          uVar20 = *(uint *)((long)dVar9 + 0x34);
          fVar32 = *(float *)((long)dVar9 + 0x38);
          uVar22 = *(undefined8 *)((long)dVar9 + 0x34);
          if (*(long *)((long)dVar9 + 0x40) == 0) {
            uStack0000000000000128 = 0;
          }
          else {
            uStack0000000000000128 = FUN_07bbd1dc();
            uVar20 = *(uint *)((long)dVar9 + 0x34);
            fVar32 = *(float *)((long)dVar9 + 0x38);
          }
          in_stack_00000120 = (double)uVar20 * (double)fVar32;
          in_stack_00000100 = CONCAT44(uVar21,(uint)uVar3);
          in_stack_00000110 = 0;
          uStack0000000000000134 = 0;
          uStack0000000000000138 = 0;
          uStack000000000000012c = 0;
          uStack0000000000000130 = 0;
          uStack000000000000013c = 0;
          in_stack_00000108 = uVar30;
          in_stack_00000118 = uVar22;
          thunk_FUN_03afed3c(&stack0x00000130,0);
          uVar22 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_MessageWithUserList_TypeInfo);
          FUN_05017d20(uVar22,*(undefined8 *)Oculus_Platform_MessageWithPurchaseList_TypeInfo);
          in_stack_00000140 = uVar22;
          thunk_FUN_03afed3c(&stack0x00000140,uVar22);
          uVar22 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       Oculus_Platform_MessageWithUserAccountAgeCategory_TypeInfo);
          FUN_050154d8(uVar22,*(undefined8 *)
                               Oculus_Platform_MessageWithPushNotificationResult_TypeInfo);
          in_stack_00000148 = uVar22;
          thunk_FUN_03afed3c(&stack0x00000148,uVar22);
          memcpy(&stack0x000001f0,&stack0x00000100,0x50);
          FUN_058602dc(lVar13,&stack0x000001f0,
                       *(undefined8 *)Normal_Realtime_Serialization_MetaModel_TypeInfo);
        }
        else {
          cVar1 = *(char *)((long)dVar9 + 0x20);
          FUN_05860108(&stack0x000001f0,lVar13,
                       *(undefined8 *)
                        Unity_Services_Friends_Internal_Generated_Messaging_MessagingApiBaseRequest_TypeInfo
                      );
          if ((cVar1 != '\0') == ((_uStack00000000000001f0 & 1) == 0)) goto LAB_07bbc554;
          if (*(char *)((long)dVar9 + 0x20) == '\0') {
            if (*(char *)((long)dVar9 + 0x21) == '\0') {
              FUN_05860108(&stack0x000001f0,lVar13,
                           *(undefined8 *)
                            Unity_Services_Friends_Internal_Generated_Messaging_MessagingApiBaseRequest_TypeInfo
                          );
              if ((_uStack00000000000001f0 & 0x10000) == 0) goto LAB_07bbc4b8;
            }
            goto LAB_07bbc554;
          }
LAB_07bbc4b8:
          iVar12 = *(int *)((long)dVar9 + 0x24);
          FUN_05860108(&stack0x000001f0,lVar13,
                       *(undefined8 *)
                        Unity_Services_Friends_Internal_Generated_Messaging_MessagingApiBaseRequest_TypeInfo
                      );
          iVar35 = (int)(_uStack00000000000001f0 >> 0x20);
          if ((iVar12 != iVar35) || (*(int *)((long)dVar9 + 0x34) != 0)) goto LAB_07bbc554;
        }
        FUN_05860158(&stack0x000001f0,lVar13,*puVar24);
        uVar22 = *puVar26;
        uVar30 = *(undefined8 *)((long)puVar26 + 7);
        dVar31 = *(double *)((long)dVar9 + 0x18);
        in_stack_00000150 = in_stack_00000208;
        in_stack_00000158 = in_stack_00000210;
        in_stack_00000160 = in_stack_00000218;
        in_stack_00000168 = in_stack_00000220;
        in_stack_00000170 = in_stack_00000228;
        if (*(int *)(*(long *)Oculus_Platform_MessageWithLeaderboardList_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar18 = FUN_07bbbda8(dVar9,in_stack_00000028);
        lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_MessageWithUserList_TypeInfo);
        FUN_05017e5c(lVar14,uVar18,*(undefined8 *)Oculus_Platform_MessageWithPurchase_TypeInfo);
        if ((uVar15 & 1) == 0) {
          lVar16 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       Oculus_Platform_MessageWithUserCapabilityList_TypeInfo);
          FUN_04cb5be4(lVar16,*(undefined8 *)Oculus_Platform_MessageWithRejoinDialogResult_TypeInfo)
          ;
          if (lVar14 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07bbd1cc;
          }
          _uStack00000000000001f0 = uVar15;
          if (0 < *(int *)(lVar14 + 0x18)) {
            iVar12 = 0;
            uVar15 = in_stack_00000210;
            do {
              FUN_050182b8(&stack0x00000040,lVar14,iVar12,
                           *(undefined8 *)Oculus_Platform_MessageWithUser_TypeInfo);
              uVar8 = in_stack_00000058;
              dVar36 = in_stack_00000050;
              uVar18 = in_stack_00000048;
              uVar17 = in_stack_00000040;
              in_stack_00000060 = 0;
              in_stack_00000048 = 0;
              in_stack_00000040 = 0;
              in_stack_00000058 = 0;
              in_stack_00000050 = 0.0;
              FUN_05b7a01c(&stack0x00000040,&stack0x000001f0,iVar12,
                           *(undefined8 *)System_Linq_Expressions_MethodBinaryExpression_TypeInfo);
              in_stack_00000210 = in_stack_00000060;
              in_stack_00000208 = in_stack_00000058;
              in_stack_00000200 = in_stack_00000050;
              in_stack_000001f8 = in_stack_00000048;
              _uStack00000000000001f0 = in_stack_00000040;
              puVar4 = Oculus_Platform_MessageWithOrgScopedID_TypeInfo;
              if (lVar16 == 0) {
LAB_07bbce54:
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07bbd1cc;
              }
              lVar23 = *(long *)(lVar16 + 0x10);
              in_stack_000001e0 = in_stack_00000060;
              in_stack_000001c8 = in_stack_00000048;
              in_stack_000001c0 = in_stack_00000040;
              in_stack_000001d8 = in_stack_00000058;
              in_stack_000001d0 = in_stack_00000050;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_07bbce54;
              uVar20 = *(uint *)(lVar16 + 0x18);
              if (uVar20 < *(uint *)(lVar23 + 0x18)) {
                lVar23 = lVar23 + (long)(int)uVar20 * 0x28;
                *(uint *)(lVar16 + 0x18) = uVar20 + 1;
                *(undefined8 *)(lVar23 + 0x28) = in_stack_00000048;
                *(ulong *)(lVar23 + 0x20) = in_stack_00000040;
                *(undefined8 *)(lVar23 + 0x38) = in_stack_00000058;
                *(double *)(lVar23 + 0x30) = in_stack_00000050;
                *(ulong *)(lVar23 + 0x40) = in_stack_00000060;
                thunk_FUN_03afed3c(lVar23 + 0x28,0);
                _uStack00000000000001f0 = uVar17;
                in_stack_000001f8 = uVar18;
                in_stack_00000200 = dVar36;
                in_stack_00000208 = uVar8;
                in_stack_00000210 = uVar15;
              }
              else {
                FUN_04cb650c(lVar16,&stack0x000001f0,
                             *(undefined8 *)
                              (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
              }
              iVar12 = iVar12 + 1;
              uVar15 = in_stack_00000210;
            } while (iVar12 < *(int *)(lVar14 + 0x18));
          }
          lVar14 = *(long *)System_Reflection_MethodBase_TypeInfo;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar14 = *(long *)System_Reflection_MethodBase_TypeInfo;
          }
          puVar24 = *(undefined8 **)(lVar14 + 0xb8);
          lVar23 = puVar24[1];
          if (lVar23 == 0) {
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              puVar24 = *(undefined8 **)(*(long *)System_Reflection_MethodBase_TypeInfo + 0xb8);
            }
            uVar18 = *puVar24;
            lVar23 = thunk_FUN_03ac74bc(*(undefined8 *)
                                         Oculus_Platform_MessageWithLivestreamingStatus_TypeInfo);
            FUN_05d115f8(lVar23,uVar18,*(undefined8 *)System_MethodAccessException_TypeInfo,0);
            plVar19 = (long *)(*(long *)(*(long *)System_Reflection_MethodBase_TypeInfo + 0xb8) + 8)
            ;
            *plVar19 = lVar23;
            thunk_FUN_03afed3c(plVar19,lVar23);
          }
          if (lVar16 == 0) goto LAB_07bbcfc4;
          FUN_04cb8348(lVar16,lVar23,
                       *(undefined8 *)Oculus_Platform_MessageWithPartyUnderCurrentParty_TypeInfo);
          lVar14 = FUN_03a8a804(*(undefined8 *)
                                 Oculus_Platform_MessageWithLivestreamingStartResult_TypeInfo,
                                *(undefined4 *)((long)dVar9 + 0x30));
          lVar23 = thunk_FUN_03ac74bc(*(undefined8 *)Oculus_Platform_MessageWithUserList_TypeInfo);
          FUN_05017d20(lVar23,*(undefined8 *)Oculus_Platform_MessageWithPurchaseList_TypeInfo);
          if (0 < *(int *)(lVar16 + 0x18)) {
            iVar12 = 0;
            uVar18 = in_stack_000001f8;
            do {
              FUN_04cb617c(&stack0x000001f0,lVar16,iVar12,*(undefined8 *)puVar5);
              in_stack_000000e0 = _uStack00000000000001f0;
              in_stack_000000e8 = uVar18;
              in_stack_000000f0 = in_stack_00000200;
              FUN_04cb617c(&stack0x000001f0,lVar16,iVar12,*(undefined8 *)puVar5);
              dVar36 = in_stack_000000f0;
              in_stack_000001f8 = in_stack_000000e8;
              uVar15 = in_stack_000000e0;
              iVar29 = (int)in_stack_00000210;
              if ((long)(ulong)(uint)(*(int *)((long)dVar9 + 0x30) << 1) <= (long)iVar29) {
                if (lVar23 != 0) {
                  lVar25 = *(long *)(lVar23 + 0x10);
                  lVar28 = *(long *)
                            Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo;
                  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
                  if (lVar25 != 0) {
                    uVar20 = *(uint *)(lVar23 + 0x18);
                    if (uVar20 < *(uint *)(lVar25 + 0x18)) {
                      lVar25 = lVar25 + (long)(int)uVar20 * 0x20;
                      *(uint *)(lVar23 + 0x18) = uVar20 + 1;
                      *(undefined8 *)(lVar25 + 0x28) = in_stack_000000e8;
                      *(ulong *)(lVar25 + 0x20) = in_stack_000000e0;
                      *(double *)(lVar25 + 0x30) = in_stack_000000f0;
                      *(int *)(lVar25 + 0x38) = (int)in_stack_00000208;
                      *(int *)(lVar25 + 0x3c) = (int)((ulong)in_stack_00000208 >> 0x20);
                      thunk_FUN_03afed3c(lVar25 + 0x28,0);
                      in_stack_000001f8 = uVar18;
                      dVar36 = in_stack_00000200;
                    }
                    else {
                      FUN_05018614(lVar23,&stack0x000001f0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
                      _uStack00000000000001f0 = uVar15;
                    }
                    goto LAB_07bbcb3c;
                  }
                }
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07bbd1cc;
              }
              if (in_stack_00000230 == 0) {
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07bbd1cc;
              }
              if (iVar29 < 0) {
                iVar29 = iVar29 + 1;
              }
              if (in_stack_00000238 == 0) {
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07bbd1cc;
              }
              uVar20 = iVar29 >> 1;
              iVar29 = *(int *)(in_stack_00000238 + 0x18);
              if ((in_stack_00000210 & 1) == 0) {
                if (lVar14 == 0) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_07bbd1cc;
                }
                if (*(uint *)(lVar14 + 0x18) <= uVar20) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c8();
                  }
                  goto LAB_07bbd1cc;
                }
                piVar27 = (int *)(lVar14 + 0x20 + (long)(int)uVar20 * 8);
                uVar21 = 1;
              }
              else {
                if (lVar14 == 0) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_07bbd1cc;
                }
                if (*(uint *)(lVar14 + 0x18) <= uVar20) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c8();
                  }
                  goto LAB_07bbd1cc;
                }
                piVar27 = (int *)(lVar14 + 0x20 + (long)(int)uVar20 * 8 + 4);
                uVar21 = 2;
              }
              *piVar27 = iVar12 + *(int *)(in_stack_00000230 + 0x18);
              if (lVar23 == 0) {
LAB_07bbce74:
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_07bbd1cc;
              }
              lVar25 = *(long *)(lVar23 + 0x10);
              lVar28 = *(long *)Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo;
              *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
              if (lVar25 == 0) goto LAB_07bbce74;
              uVar2 = *(uint *)(lVar23 + 0x18);
              iVar29 = iVar29 + uVar20;
              if (uVar2 < *(uint *)(lVar25 + 0x18)) {
                lVar25 = lVar25 + (long)(int)uVar2 * 0x20;
                *(uint *)(lVar23 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar25 + 0x28) = in_stack_000000e8;
                *(ulong *)(lVar25 + 0x20) = in_stack_000000e0;
                *(double *)(lVar25 + 0x30) = in_stack_000000f0;
                *(int *)(lVar25 + 0x38) = iVar29;
                *(undefined4 *)(lVar25 + 0x3c) = uVar21;
                thunk_FUN_03afed3c(lVar25 + 0x28,0);
                in_stack_000001f8 = uVar18;
                dVar36 = in_stack_00000200;
              }
              else {
                in_stack_00000208 = CONCAT44(uVar21,iVar29);
                FUN_05018614(lVar23,&stack0x000001f0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
                _uStack00000000000001f0 = uVar15;
              }
LAB_07bbcb3c:
              iVar12 = iVar12 + 1;
              uVar18 = in_stack_000001f8;
              in_stack_00000200 = dVar36;
            } while (iVar12 < *(int *)(lVar16 + 0x18));
          }
          if (in_stack_00000238 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07bbd1cc;
          }
          FUN_05015f70(in_stack_00000238,lVar14,
                       *(undefined8 *)
                        Oculus_Platform_MessageWithNetSyncSessionsChangedNotification_TypeInfo);
          if (in_stack_00000230 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07bbd1cc;
          }
          FUN_05018854(in_stack_00000230,lVar23,
                       *(undefined8 *)
                        Oculus_Platform_MessageWithNetSyncSetSessionPropertyResult_TypeInfo);
        }
        else {
          lVar16 = *(long *)System_Reflection_MethodBase_TypeInfo;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar16 = *(long *)System_Reflection_MethodBase_TypeInfo;
          }
          puVar24 = *(undefined8 **)(lVar16 + 0xb8);
          lVar23 = puVar24[2];
          if (lVar23 == 0) {
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              puVar24 = *(undefined8 **)(*(long *)System_Reflection_MethodBase_TypeInfo + 0xb8);
            }
            uVar18 = *puVar24;
            lVar23 = thunk_FUN_03ac74bc(*(undefined8 *)
                                         Oculus_Platform_MessageWithLivestreamingVideoStats_TypeInfo
                                       );
            FUN_05d3ee14(lVar23,uVar18,
                         *(undefined8 *)
                          UnityEngine_Rendering_HighDefinition_MeteringModeParameter_TypeInfo,0);
            plVar19 = (long *)(*(long *)(*(long *)System_Reflection_MethodBase_TypeInfo + 0xb8) +
                              0x10);
            *plVar19 = lVar23;
            thunk_FUN_03afed3c(plVar19,lVar23);
          }
          if (lVar14 == 0) {
LAB_07bbcfc4:
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07bbd1cc;
          }
          FUN_0501a2f4(lVar14,lVar23,*(undefined8 *)Oculus_Platform_MessageWithPidList_TypeInfo);
          if (in_stack_00000230 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_07bbd1cc;
          }
          FUN_05018854(in_stack_00000230,lVar14,
                       *(undefined8 *)
                        Oculus_Platform_MessageWithNetSyncSetSessionPropertyResult_TypeInfo);
          _uStack00000000000001f0 = uVar15;
        }
        in_stack_00000228 = in_stack_00000170;
        in_stack_00000220 = in_stack_00000168;
        in_stack_00000218 = in_stack_00000160;
        in_stack_00000210 = in_stack_00000158;
        in_stack_00000208 = in_stack_00000150;
        uVar34 = (undefined7)(_uStack00000000000001f0 >> 8);
        _uStack00000000000001f0 = CONCAT71(uVar34,uVar10);
        *puVar26 = CONCAT17((char)uVar30,(int7)uVar22);
        *(undefined8 *)((long)puVar26 + 7) = uVar30;
        puVar24 = (undefined8 *)
                  Unity_Services_Friends_Internal_Generated_Apis_Messaging_MessagingApiClient_TypeInfo
        ;
        FUN_058602dc(lVar13,&stack0x000001f0,
                     *(undefined8 *)Normal_Realtime_Serialization_MetaModel_TypeInfo);
        in_stack_00000200 = dVar31;
      }
      FUN_061c1960(&stack0x00000180,
                   *(undefined8 *)Oculus_Platform_MessageWithMicrophoneAvailabilityState_TypeInfo);
      if (lVar13 != 0) {
        lVar14 = FUN_03a8a804(*(undefined8 *)
                               Oculus_Platform_MessageWithLivestreamingApplicationStatus_TypeInfo,
                              *(undefined4 *)(lVar13 + 0x18));
        plVar19 = (long *)(unaff_x25 + 0x38);
        *plVar19 = lVar14;
        thunk_FUN_03afed3c(plVar19,lVar14);
        lVar14 = *plVar19;
        if (lVar14 != 0) {
          lVar16 = 0;
          uVar15 = 0;
          while( true ) {
            if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar15) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                return;
              }
              goto LAB_07bbd1cc;
            }
            FUN_05860158(&stack0x00000040,lVar13,*puVar24);
            lVar25 = in_stack_00000088;
            lVar23 = in_stack_00000080;
            lVar14 = *plVar19;
            in_stack_000000a8 = in_stack_00000048;
            in_stack_000000a0 = in_stack_00000040;
            in_stack_000000b8 = in_stack_00000058;
            in_stack_000000b0 = in_stack_00000050;
            in_stack_000000c8 = in_stack_00000068;
            in_stack_000000c0 = in_stack_00000060;
            in_stack_000000d8 = in_stack_00000078;
            in_stack_000000d0 = in_stack_00000070;
            if (lVar14 == 0) break;
            if (*(uint *)(lVar14 + 0x18) <= uVar15) {
LAB_07bbcf04:
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              goto LAB_07bbd1cc;
            }
            lVar14 = lVar14 + lVar16;
            *(undefined8 *)(lVar14 + 0x28) = in_stack_00000048;
            *(ulong *)(lVar14 + 0x20) = in_stack_00000040;
            *(undefined8 *)(lVar14 + 0x38) = in_stack_00000058;
            *(double *)(lVar14 + 0x30) = in_stack_00000050;
            *(undefined8 *)(lVar14 + 0x48) = in_stack_00000068;
            *(ulong *)(lVar14 + 0x40) = in_stack_00000060;
            *(undefined8 *)(lVar14 + 0x58) = in_stack_00000078;
            *(undefined8 *)(lVar14 + 0x50) = in_stack_00000070;
            thunk_FUN_03afed3c(lVar14 + 0x50,0);
            lVar14 = *plVar19;
            if ((lVar14 == 0) || (lVar25 == 0)) break;
            uVar22 = FUN_05017818(lVar25,*(undefined8 *)
                                          Oculus_Platform_MessageWithProductList_TypeInfo);
            if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_07bbcf04;
            *(undefined8 *)(lVar14 + lVar16 + 0x58) = uVar22;
            thunk_FUN_03afed3c();
            lVar14 = *plVar19;
            if ((lVar14 == 0) || (lVar23 == 0)) break;
            uVar22 = FUN_0501a38c(lVar23,*(undefined8 *)
                                          Oculus_Platform_MessageWithPlatformInitialize_TypeInfo);
            if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_07bbcf04;
            lVar14 = lVar14 + lVar16;
            lVar16 = lVar16 + 0x40;
            uVar15 = uVar15 + 1;
            *(undefined8 *)(lVar14 + 0x50) = uVar22;
            thunk_FUN_03afed3c();
            lVar14 = *plVar19;
            if (lVar14 == 0) break;
          }
        }
      }
    }
  }
LAB_07bbce04:
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000268) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_07bbd1cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


