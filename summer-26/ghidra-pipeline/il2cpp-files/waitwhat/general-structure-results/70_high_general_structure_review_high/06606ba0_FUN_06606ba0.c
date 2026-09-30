/*
FUNCTION_NAME: FUN_06606ba0
ENTRY_POINT: 06606ba0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06606ba0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = Oculus_Platform_Models_AchievementProgress_TypeInfo;
  uStack_90 = param_7;
  uStack_88 = param_8;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_3;
  uStack_68 = param_4;
  if ((bRam000000000755797c & 1) == 0) {
    FUN_03188a78(Sentry_CompilerServices_BuildProperties_TypeInfo);
    FUN_03188a78(UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2968);
    FUN_03188a78(PTR_DAT_070c24a8);
    FUN_03188a78(PTR_DAT_070c24e0);
    FUN_03188a78(Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequest_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2958);
    FUN_03188a78(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsSecret_TypeInfo);
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsSrp6Client_TypeInfo
                );
    FUN_03188a78(Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo);
    FUN_03188a78(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcX25519_TypeInfo);
    FUN_03188a78(Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_TypeInfo);
    FUN_03188a78(Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_Event_TypeInfo);
    FUN_03188a78(
                Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_UpdateEvent_TypeInfo
                );
    FUN_03188a78(Unity_Burst_BurstCompileAttribute_TypeInfo);
    FUN_03188a78(Unity_Burst_BurstCompiler_TypeInfo);
    FUN_03188a78(Oculus_Platform_Models_AchievementProgress_TypeInfo);
    bRam000000000755797c = 1;
  }
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_0755790a == '\0') {
    FUN_03188a78(Oculus_Platform_Models_AchievementProgress_TypeInfo);
    DAT_0755790a = '\x01';
  }
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar6 = *(long *)puVar4;
  }
  puVar4 = PTR_DAT_070f2958;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar10 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      do {
        uVar5 = FUN_04281f90(param_2,iVar10,*(undefined8 *)PTR_DAT_070c24e0);
        lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)Sentry_CompilerServices_BuildProperties_TypeInfo);
        FUN_06601230();
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_06607248;
        lVar8 = FUN_0518a338(*(long *)(param_1 + 0x68),uVar5,*(undefined8 *)PTR_DAT_070f2968);
        if (lVar8 == 0) goto LAB_06607248;
        iVar1 = *(int *)(lVar8 + 0x2c);
        iVar2 = *(int *)(lVar8 + 0x30);
        auVar14 = FUN_04601814(&uStack_70,iVar11,iVar2,
                               *(undefined8 *)
                                Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequest_TypeInfo
                              );
        auVar15 = FUN_0454bbfc(&uStack_80,iVar13,*(int *)(param_1 + 300) * iVar1,
                               *(undefined8 *)puVar4);
        iVar3 = *(int *)(param_1 + 300);
        if (*(char *)(param_1 + 0x1ea) != '\0') {
          uStack_b0 = 0;
          uStack_a8 = 0;
          FUN_046009f4(&uStack_b0,auVar14._0_8_,auVar14._8_8_,4,
                       *(undefined8 *)
                        Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_TypeInfo)
          ;
          auVar14._8_8_ = uStack_a8;
          auVar14._0_8_ = uStack_b0;
        }
        if (lVar7 == 0) goto LAB_06607248;
        *(undefined1 (*) [16])(lVar7 + 0x48) = auVar14;
        if (*(char *)(param_1 + 0x1ea) != '\0') {
          uStack_b0 = 0;
          uStack_a8 = 0;
          FUN_0454ae24(&uStack_b0,auVar15._0_8_,auVar15._8_8_,4,
                       *(undefined8 *)Unity_Burst_BurstCompileAttribute_TypeInfo);
          auVar15._8_8_ = uStack_a8;
          auVar15._0_8_ = uStack_b0;
        }
        *(undefined1 (*) [16])(lVar7 + 0x10) = auVar15;
        iVar13 = iVar13 + iVar3 * iVar1;
        if (0 < *(int *)(param_1 + 0xf0)) {
          if (lVar6 == 0) goto LAB_06607248;
          uVar9 = FUN_065e7094(lVar6,0);
          if ((uVar9 & 1) != 0) {
            auVar14 = FUN_0454bbfc(&uStack_80,iVar13,*(int *)(param_1 + 0x130) * iVar1,
                                   *(undefined8 *)puVar4);
            auStack_a0 = auVar14;
            auVar16 = FUN_036d5fc4(auStack_a0,1,
                                   *(undefined8 *)
                                    Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo);
            if (*(char *)(param_1 + 0x1ea) != '\0') {
              uStack_b0 = 0;
              uStack_a8 = 0;
              FUN_045c5344(&uStack_b0,auVar16._0_8_,auVar16._8_8_,4,
                           *(undefined8 *)
                            Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_Event_TypeInfo
                          );
              auVar16._8_8_ = uStack_a8;
              auVar16._0_8_ = uStack_b0;
            }
            *(undefined1 (*) [16])(lVar7 + 0x20) = auVar16;
          }
          iVar13 = iVar13 + *(int *)(param_1 + 0x130) * iVar1;
          if (0 < *(int *)(param_1 + 0xf4)) {
            uVar9 = FUN_065e7094(lVar6,0);
            if (((uVar9 & 1) != 0) && (uVar9 = FUN_065e7118(lVar6,0), (uVar9 & 1) != 0)) {
              auVar17 = FUN_0454bbfc(&uStack_80,iVar13,*(int *)(param_1 + 0x134) * iVar1,
                                     *(undefined8 *)puVar4);
              if (*(char *)(param_1 + 0x1ea) != '\0') {
                uStack_b0 = 0;
                uStack_a8 = 0;
                FUN_0454ae24(&uStack_b0,auVar17._0_8_,auVar17._8_8_,4,
                             *(undefined8 *)Unity_Burst_BurstCompileAttribute_TypeInfo);
                auVar17._8_8_ = uStack_a8;
                auVar17._0_8_ = uStack_b0;
              }
              *(undefined1 (*) [16])(lVar7 + 0x30) = auVar17;
            }
            iVar13 = iVar13 + *(int *)(param_1 + 0x134) * iVar1;
          }
        }
        if ((param_8 & 0xffffffff) != 0) {
          auVar14 = FUN_0454bbfc(&uStack_90,iVar12,*(int *)(param_1 + 0x13c) * iVar1,
                                 *(undefined8 *)puVar4);
          auStack_a0 = auVar14;
          auVar18 = FUN_036d6080(auStack_a0,1,
                                 *(undefined8 *)
                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcX25519_TypeInfo
                                );
          iVar3 = *(int *)(param_1 + 0x13c);
          if (*(char *)(param_1 + 0x1ea) != '\0') {
            uStack_b0 = 0;
            uStack_a8 = 0;
            FUN_045cb920(&uStack_b0,auVar18._0_8_,auVar18._8_8_,4,
                         *(undefined8 *)Unity_Burst_BurstCompiler_TypeInfo);
            auVar18._8_8_ = uStack_a8;
            auVar18._0_8_ = uStack_b0;
          }
          *(undefined1 (*) [16])(lVar7 + 0x58) = auVar18;
          iVar12 = iVar12 + iVar3 * iVar1;
          auVar14 = FUN_0454bbfc(&uStack_90,iVar12,*(int *)(param_1 + 0x140) * iVar1,
                                 *(undefined8 *)puVar4);
          auStack_a0 = auVar14;
          auVar19 = FUN_036d5f64(auStack_a0,1,
                                 *(undefined8 *)
                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsSrp6Client_TypeInfo
                                );
          iVar3 = *(int *)(param_1 + 0x140);
          if (*(char *)(param_1 + 0x1ea) != '\0') {
            uStack_b0 = 0;
            uStack_a8 = 0;
            FUN_045bd95c(&uStack_b0,auVar19._0_8_,auVar19._8_8_,4,
                         *(undefined8 *)
                          Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_UpdateEvent_TypeInfo
                        );
            auVar19._8_8_ = uStack_a8;
            auVar19._0_8_ = uStack_b0;
          }
          *(undefined1 (*) [16])(lVar7 + 0x88) = auVar19;
          iVar12 = iVar12 + iVar3 * iVar1;
          auVar14 = FUN_0454bbfc(&uStack_90,iVar12,*(int *)(param_1 + 0x144) * iVar1,
                                 *(undefined8 *)puVar4);
          auStack_a0 = auVar14;
          auVar20 = FUN_036d5f64(auStack_a0,1,
                                 *(undefined8 *)
                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsSrp6Client_TypeInfo
                                );
          iVar3 = *(int *)(param_1 + 0x144);
          if (*(char *)(param_1 + 0x1ea) != '\0') {
            uStack_b0 = 0;
            uStack_a8 = 0;
            FUN_045bd95c(&uStack_b0,auVar20._0_8_,auVar20._8_8_,4,
                         *(undefined8 *)
                          Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_UpdateEvent_TypeInfo
                        );
            auVar20._8_8_ = uStack_a8;
            auVar20._0_8_ = uStack_b0;
          }
          *(undefined1 (*) [16])(lVar7 + 0x68) = auVar20;
          iVar12 = iVar12 + iVar3 * iVar1;
          if (*(int *)(param_1 + 0x148) != 0) {
            auVar14 = FUN_0454bbfc(&uStack_90,iVar12,*(int *)(param_1 + 0x148) * iVar1,
                                   *(undefined8 *)puVar4);
            auStack_a0 = auVar14;
            auVar21 = FUN_036d5f14(auStack_a0,1,
                                   *(undefined8 *)
                                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcTlsSecret_TypeInfo
                                  );
            iVar3 = *(int *)(param_1 + 0x148);
            if (*(char *)(param_1 + 0x1ea) != '\0') {
              uStack_b0 = 0;
              uStack_a8 = 0;
              FUN_0454ae24(&uStack_b0,auVar21._0_8_,auVar21._8_8_,4,
                           *(undefined8 *)Unity_Burst_BurstCompileAttribute_TypeInfo);
              auVar21._8_8_ = uStack_a8;
              auVar21._0_8_ = uStack_b0;
            }
            iVar12 = iVar12 + iVar3 * iVar1;
            *(undefined1 (*) [16])(lVar7 + 0x98) = auVar21;
          }
          if (*(int *)(param_1 + 0x14c) != 0) {
            auVar14 = FUN_0454bbfc(&uStack_90,iVar12,*(int *)(param_1 + 0x14c) * iVar1,
                                   *(undefined8 *)puVar4);
            auStack_a0 = auVar14;
            auVar22 = FUN_036d6080(auStack_a0,1,
                                   *(undefined8 *)
                                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_Crypto_Impl_BC_BcX25519_TypeInfo
                                  );
            iVar3 = *(int *)(param_1 + 0x14c);
            if (*(char *)(param_1 + 0x1ea) != '\0') {
              uStack_b0 = 0;
              uStack_a8 = 0;
              FUN_045cb920(&uStack_b0,auVar22._0_8_,auVar22._8_8_,4,
                           *(undefined8 *)Unity_Burst_BurstCompiler_TypeInfo);
              auVar22._8_8_ = uStack_a8;
              auVar22._0_8_ = uStack_b0;
            }
            iVar12 = iVar12 + iVar3 * iVar1;
            *(undefined1 (*) [16])(lVar7 + 0x78) = auVar22;
          }
        }
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_06607248;
        FUN_0518a3d8(*(long *)(param_1 + 0x70),uVar5,lVar7,
                     *(undefined8 *)
                      UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_TypeInfo);
        iVar10 = iVar10 + 1;
        iVar11 = iVar2 + iVar11;
      } while (iVar10 < *(int *)(param_2 + 0x18));
    }
    return;
  }
LAB_06607248:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


