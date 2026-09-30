/*
FUNCTION_NAME: FUN_065f3b20
ENTRY_POINT: 065f3b20
PROGRAM: waitwhat-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


long FUN_065f3b20(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  float *pfVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  undefined8 uVar56;
  undefined1 auVar57 [12];
  undefined1 auVar58 [12];
  int local_264;
  int local_244;
  int local_22c;
  ulong local_198;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((DAT_075578eb & 1) == 0) {
    FUN_03188a78(Oisoi_Networking_OisoiCoreAPI_BaseAnalyticsManager_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BaseBoolField_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_BaseCommandBuffer_TypeInfo);
    FUN_03188a78(UnityEngine_EventSystems_BaseEventData_TypeInfo);
    FUN_03188a78(UnityEngine_Events_BaseInvokableCall_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BaseListView_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BaseListViewController_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BaseRuntimePanel_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_UIR_BaseShaderInfoStorage_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BaseTreeView_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BaseTreeViewController_TypeInfo);
    FUN_03188a78(System_Xml_Linq_BaseUriAnnotation_TypeInfo);
    FUN_03188a78(System_Xml_Schema_BaseValidator_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2528);
    FUN_03188a78(PTR_DAT_0710e800);
    FUN_03188a78(Unity_Services_Analytics_AnalyticsService_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_Interpreter_AddInstruction_TypeInfo);
    FUN_03188a78(PTR_DAT_070ce538);
    FUN_03188a78(PTR_DAT_070f93a8);
    FUN_03188a78(UnityEngine_UIElements_BaseVerticalCollectionView_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BaseVisualElementPanel_TypeInfo);
    FUN_03188a78(System_Net_BasicClient_TypeInfo);
    FUN_03188a78(Mono_Security_X509_Extensions_BasicConstraintsExtension_TypeInfo);
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_Gcm_BasicGcmExponentiator_TypeInfo
                );
    FUN_03188a78(UnityEngine_Rendering_BatchBufferTarget_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_BatchCullingViewType_TypeInfo);
    DAT_075578eb = 1;
  }
  if (param_2 == 0) goto LAB_065f48a4;
  lVar10 = *(long *)(param_2 + 0x150);
  if (lVar10 == 0) {
    uVar11 = FUN_065f48d4(param_1,param_2);
    puVar8 = UnityEngine_UIElements_BaseTreeViewController_TypeInfo;
    if ((uVar11 & 1) == 0) {
      lVar10 = *(long *)(param_2 + 0x18);
      if (lVar10 == 0) {
LAB_065f48a4:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if ((((*(long *)(lVar10 + 0x48) != 0) && (*(int *)(lVar10 + 0x50) != 0)) &&
          (*(long *)(lVar10 + 0x58) != 0)) && (*(char *)(param_2 + 0x44) != '\0')) {
        iVar2 = *(int *)(param_1 + 0x24);
        lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)UnityEngine_UIElements_BaseTreeViewController_TypeInfo);
        puVar7 = UnityEngine_UIElements_UIR_BaseShaderInfoStorage_TypeInfo;
        FUN_042e4268(lVar10,*(undefined8 *)UnityEngine_UIElements_UIR_BaseShaderInfoStorage_TypeInfo
                    );
        lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar8);
        FUN_042e4268(lVar12,*(undefined8 *)puVar7);
        lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)System_Xml_Linq_BaseUriAnnotation_TypeInfo);
        FUN_042e4268(lVar13,*(undefined8 *)UnityEngine_UIElements_BaseRuntimePanel_TypeInfo);
        puVar8 = PTR_DAT_070f93a8;
        if (*(long *)(param_2 + 0x20) != 0) {
          lVar25 = *(long *)(*(long *)(param_2 + 0x20) + 0x10);
          lVar14 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070f93a8,0x1ff);
          puVar7 = PTR_DAT_070ce538;
          lVar15 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070ce538,0x1ff);
          lVar16 = FUN_03188b1c(*(undefined8 *)puVar7,0x1ff);
          lVar17 = FUN_03188b1c(*(undefined8 *)puVar7,0x1ff);
          lVar18 = FUN_03188b1c(*(undefined8 *)puVar7,0x1ff);
          lVar26 = *(long *)(param_2 + 0x18);
          if (lVar26 != 0) {
            if (*(int *)(lVar26 + 0x70) < 1) {
              lVar19 = 0;
            }
            else {
              lVar19 = FUN_03188b1c(*(undefined8 *)puVar7,0x1ff);
              lVar26 = *(long *)(param_2 + 0x18);
              if (lVar26 == 0) goto LAB_065f48a4;
            }
            if (*(int *)(lVar26 + 0x80) < 1) {
              lVar26 = 0;
            }
            else {
              lVar26 = FUN_03188b1c(*(undefined8 *)puVar8,0x1ff);
            }
            puVar7 = System_Xml_Schema_BaseValidator_TypeInfo;
            lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)System_Xml_Schema_BaseValidator_TypeInfo);
            puVar8 = UnityEngine_UIElements_BaseListViewController_TypeInfo;
            FUN_042be5f0(lVar20,*(undefined8 *)
                                 UnityEngine_UIElements_BaseListViewController_TypeInfo);
            lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)puVar7);
            FUN_042be5f0(lVar21,*(undefined8 *)puVar8);
                    /* try { // try from 065f3e98 to 066f41f7 has its CatchHandler @ 065f3e98
                       catch() { ... } // from try @ 065f3e98 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f4384 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f43cc with catch @ 065f3e98
                       catch() { ... } // from try @ 065f4414 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f4a74 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f4b18 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f4c58 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f4e20 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f4f44 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f4f70 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f5228 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f52e8 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f5390 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f53f4 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f5498 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f5524 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f5598 with catch @ 065f3e98
                       catch() { ... } // from try @ 065f55f8 with catch @ 065f3e98 */
            lVar22 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)
                                 Oisoi_Networking_OisoiCoreAPI_BaseAnalyticsManager_TypeInfo);
            FUN_06602024(lVar22,0);
            puVar8 = System_Linq_Expressions_Interpreter_AddInstruction_TypeInfo;
            if (lVar22 != 0) {
              *(long *)(lVar22 + 0x20) = lVar13;
              lVar23 = *(long *)puVar8;
              *(long *)(lVar22 + 0x10) = lVar10;
              *(long *)(lVar22 + 0x18) = lVar12;
              if (*(int *)(lVar23 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar24 = FUN_065fca4c(0);
              auVar57 = FUN_065fe19c(uVar24,0);
              fVar6 = DAT_012e3b94;
              if ((*(long *)(param_1 + 0x148) != 0) && (*(long *)(param_2 + 0x10) != 0)) {
                uVar3 = *(uint *)(*(long *)(param_2 + 0x10) + 0x20);
                if (0x3f < (int)uVar3) {
                  fVar41 = *(float *)(*(long *)(param_1 + 0x148) + 0x28);
                  uVar11 = 0;
                  uVar39 = 0;
                  iVar33 = auVar57._0_4_;
                  iVar37 = auVar57._4_4_;
                  iVar5 = 0;
                  local_22c = 0;
                  local_244 = 0;
                  local_264 = 0;
                  do {
                    if (*(long *)(param_2 + 0x18) == 0) goto LAB_065f48a4;
                    iVar38 = *(int *)(*(long *)(*(long *)(param_2 + 0x18) + 0x48) + uVar11 * 0x10 +
                                     0xc);
                    if (*(int *)(*(long *)
                                  System_Linq_Expressions_Interpreter_AddInstruction_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_031e5338();
                    }
                    iVar9 = FUN_065fca44(0);
                    if (lVar25 == 0) goto LAB_065f48a4;
                    iVar34 = 0;
                    if (iVar9 != 0) {
                      iVar34 = (int)uVar11 / iVar9;
                    }
                    auVar58 = System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                                        (lVar25,iVar34,
                                         *(undefined8 *)UnityEngine_UIElements_BaseTreeView_TypeInfo
                                        );
                    fVar44 = (float)iVar38;
                    iVar38 = 0;
                    uVar30 = (ulong)(uint)(local_22c + iVar34 * (int)uVar24 +
                                          iVar33 * (local_244 + iVar37 * local_264));
                    iVar9 = iVar5;
                    do {
                      iVar34 = 0;
                      local_198 = uVar30;
                      iVar4 = iVar9;
                      do {
                        lVar23 = 0;
                        do {
                          if (*(long *)(param_2 + 0x18) == 0) goto LAB_065f48a4;
                          iVar40 = (int)lVar23;
                          iVar1 = (int)local_198 + iVar40;
                          puVar27 = (undefined8 *)
                                    (*(long *)(*(long *)(param_2 + 0x18) + 0x58) + (long)iVar1 * 0xc
                                    );
                          fVar47 = *(float *)(puVar27 + 1);
                          uVar54 = *puVar27;
                          uVar56 = *(undefined8 *)(param_1 + 0x28);
                          fVar48 = *(float *)(param_1 + 0x30);
                          if (DAT_07546bbe == '\0') {
                            FUN_03188a78(PTR_DAT_070ce558);
                            DAT_07546bbe = '\x01';
                          }
                          puVar28 = *(undefined4 **)(*(long *)PTR_DAT_070ce558 + 0xb8);
                          uVar49 = *puVar28;
                          uVar50 = puVar28[1];
                          uVar51 = puVar28[2];
                          uVar52 = puVar28[3];
                          if (DAT_075457b6 == '\0') {
                            FUN_03188a78(PTR_DAT_070c1a80);
                            DAT_075457b6 = '\x01';
                          }
                          fVar42 = (float)uVar54 - (float)uVar56;
                          fVar43 = (float)((ulong)uVar54 >> 0x20) - (float)((ulong)uVar56 >> 0x20);
                          fVar47 = fVar47 - fVar48;
                          FUN_069c1c74(&local_160,CONCAT44(fVar43,fVar42),fVar43,fVar47,uVar49,
                                       uVar50,uVar51,uVar52,0);
                          puVar8 = UnityEngine_EventSystems_BaseEventData_TypeInfo;
                          if (lVar20 == 0) goto LAB_065f48a4;
                          lVar29 = *(long *)(lVar20 + 0x10);
                          uStack_118 = uStack_158;
                          local_120 = local_160;
                          uStack_108 = uStack_148;
                          uStack_110 = uStack_150;
                          uStack_f8 = uStack_138;
                          local_100 = local_140;
                          uStack_e8 = uStack_128;
                          local_f0 = uStack_130;
                          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                          if (lVar29 == 0) goto LAB_065f48a4;
                          uVar36 = *(uint *)(lVar20 + 0x18);
                          if (uVar36 < *(uint *)(lVar29 + 0x18)) {
                            lVar29 = lVar29 + (long)(int)uVar36 * 0x40;
                            *(uint *)(lVar20 + 0x18) = uVar36 + 1;
                            *(undefined8 *)(lVar29 + 0x28) = uStack_158;
                            *(undefined8 *)(lVar29 + 0x20) = local_160;
                            *(undefined8 *)(lVar29 + 0x38) = uStack_148;
                            *(undefined8 *)(lVar29 + 0x30) = uStack_150;
                            *(undefined8 *)(lVar29 + 0x48) = uStack_138;
                            *(undefined8 *)(lVar29 + 0x40) = local_140;
                            *(undefined8 *)(lVar29 + 0x58) = uStack_128;
                            *(undefined8 *)(lVar29 + 0x50) = uStack_130;
                          }
                          else {
                            uStack_d8 = uStack_158;
                            local_e0 = local_160;
                            uStack_c8 = uStack_148;
                            uStack_d0 = uStack_150;
                            uStack_b8 = uStack_138;
                            local_c0 = local_140;
                            uStack_a8 = uStack_128;
                            uStack_b0 = uStack_130;
                            FUN_042bee90(lVar20,&local_e0,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) +
                                          0x70));
                          }
                          if ((*(long *)(param_2 + 0x18) == 0) || (lVar16 == 0)) goto LAB_065f48a4;
                          if (*(uint *)(lVar16 + 0x18) <= uVar39) {
LAB_065f48a8:
                    /* WARNING: Subroutine does not return */
                            FUN_03188ce0();
                          }
                          lVar31 = (long)iVar1;
                          lVar29 = (long)(int)uVar39;
                          *(undefined4 *)(lVar16 + lVar29 * 4 + 0x20) =
                               *(undefined4 *)
                                (*(long *)(*(long *)(param_2 + 0x18) + 0x88) + lVar31 * 4);
                          if (lVar17 == 0) goto LAB_065f48a4;
                          if (*(uint *)(lVar17 + 0x18) <= uVar39) goto LAB_065f48a8;
                          pfVar32 = (float *)(lVar17 + lVar29 * 4 + 0x20);
                          *pfVar32 = fVar41;
                          if (lVar14 == 0) goto LAB_065f48a4;
                          if (*(uint *)(lVar14 + 0x18) <= uVar39) goto LAB_065f48a8;
                          lVar35 = lVar14 + lVar29 * 0x10;
                          *(float *)(lVar35 + 0x20) = (float)(local_22c + auVar58._0_4_ + iVar40);
                          *(float *)(lVar35 + 0x24) = (float)(local_244 + auVar58._4_4_ + iVar34);
                          *(float *)(lVar35 + 0x28) = (float)(local_264 + auVar58._8_4_ + iVar38);
                          *(float *)(lVar35 + 0x2c) = fVar44;
                          if (lVar18 == 0) goto LAB_065f48a4;
                          if (*(uint *)(lVar18 + 0x18) <= uVar39) goto LAB_065f48a8;
                          *(float *)(lVar18 + lVar29 * 4 + 0x20) = fVar44 / (float)(iVar2 + -1);
                          lVar35 = *(long *)(param_2 + 0x18);
                          if (lVar35 == 0) goto LAB_065f48a4;
                          if (*(int *)(lVar35 + 0xa0) < 1) {
                            uVar36 = 0xffffffff;
                          }
                          else {
                            uVar36 = (uint)*(byte *)(*(long *)(lVar35 + 0x98) + lVar31);
                          }
                          if (lVar15 == 0) goto LAB_065f48a4;
                          if (*(uint *)(lVar15 + 0x18) <= uVar39) goto LAB_065f48a8;
                          *(uint *)(lVar15 + lVar29 * 4 + 0x20) = uVar36;
                          if (lVar19 != 0) {
                            if (*(uint *)(lVar19 + 0x18) <= uVar39) goto LAB_065f48a8;
                            fVar48 = *(float *)(*(long *)(lVar35 + 0x68) + lVar31 * 4);
                            *(float *)(lVar19 + lVar29 * 4 + 0x20) = fVar48;
                            if (*(uint *)(lVar17 + 0x18) <= uVar39) goto LAB_065f48a8;
                            fVar53 = fVar48 + -1.0;
                            if (fVar48 <= 1.0) {
                              fVar53 = fVar41;
                            }
                            *pfVar32 = fVar53;
                          }
                          if (lVar26 != 0) {
                            if (*(uint *)(lVar26 + 0x18) <= uVar39) goto LAB_065f48a8;
                            lVar29 = lVar26 + lVar29 * 0x10;
                            pfVar32 = (float *)(*(long *)(lVar35 + 0x78) + (long)iVar1 * 0xc);
                            fVar53 = *pfVar32;
                            fVar55 = pfVar32[1];
                            fVar48 = pfVar32[2];
                            *(undefined4 *)(lVar29 + 0x2c) = 0;
                            *(float *)(lVar29 + 0x28) = fVar48;
                            *(float *)(lVar29 + 0x20) = fVar53;
                            *(float *)(lVar29 + 0x24) = fVar55;
                            if (fVar6 <= fVar53 * fVar53 + fVar55 * fVar55 + fVar48 * fVar48) {
                              fVar45 = -fVar55;
                              fVar46 = -fVar48;
                              uVar50 = FUN_069c5558(-fVar53,fVar45,0);
                              if (DAT_07546bbc == '\0') {
                                FUN_03188a78(PTR_DAT_070c22f8);
                                DAT_07546bbc = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
                                thunk_FUN_031e5338();
                              }
                              FUN_069c1c74(&local_160,fVar42 + fVar53,fVar43 + fVar55,
                                           fVar47 + fVar48,uVar50,fVar45,fVar46,uVar49,0);
                              if (lVar21 == 0) goto LAB_065f48a4;
                              iVar1 = *(int *)(lVar21 + 0x1c);
                              lVar29 = *(long *)(lVar21 + 0x10);
                              uStack_118 = uStack_158;
                              local_120 = local_160;
                              uStack_108 = uStack_148;
                              uStack_110 = uStack_150;
                              uStack_f8 = uStack_138;
                              local_100 = local_140;
                              uStack_e8 = uStack_128;
                              local_f0 = uStack_130;
                            }
                            else {
                              if (DAT_07547007 == '\0') {
                                FUN_03188a78(PTR_DAT_070d2c80);
                                DAT_07547007 = '\x01';
                              }
                              if (lVar21 == 0) goto LAB_065f48a4;
                              iVar1 = *(int *)(lVar21 + 0x1c);
                              lVar29 = *(long *)(*(long *)PTR_DAT_070d2c80 + 0xb8);
                              uStack_118 = *(undefined8 *)(lVar29 + 0x48);
                              local_120 = *(undefined8 *)(lVar29 + 0x40);
                              uStack_108 = *(undefined8 *)(lVar29 + 0x58);
                              uStack_110 = *(undefined8 *)(lVar29 + 0x50);
                              uStack_f8 = *(undefined8 *)(lVar29 + 0x68);
                              local_100 = *(undefined8 *)(lVar29 + 0x60);
                              uStack_e8 = *(undefined8 *)(lVar29 + 0x78);
                              local_f0 = *(undefined8 *)(lVar29 + 0x70);
                              lVar29 = *(long *)(lVar21 + 0x10);
                            }
                            lVar31 = *(long *)UnityEngine_EventSystems_BaseEventData_TypeInfo;
                            *(int *)(lVar21 + 0x1c) = iVar1 + 1;
                            if (lVar29 == 0) goto LAB_065f48a4;
                            uVar36 = *(uint *)(lVar21 + 0x18);
                            if (uVar36 < *(uint *)(lVar29 + 0x18)) {
                              lVar29 = lVar29 + (long)(int)uVar36 * 0x40;
                              *(uint *)(lVar21 + 0x18) = uVar36 + 1;
                              *(undefined8 *)(lVar29 + 0x28) = uStack_118;
                              *(undefined8 *)(lVar29 + 0x20) = local_120;
                              *(undefined8 *)(lVar29 + 0x38) = uStack_108;
                              *(undefined8 *)(lVar29 + 0x30) = uStack_110;
                              *(undefined8 *)(lVar29 + 0x48) = uStack_f8;
                              *(undefined8 *)(lVar29 + 0x40) = local_100;
                              *(undefined8 *)(lVar29 + 0x58) = uStack_e8;
                              *(undefined8 *)(lVar29 + 0x50) = local_f0;
                            }
                            else {
                              uStack_d8 = uStack_118;
                              local_e0 = local_120;
                              uStack_c8 = uStack_108;
                              uStack_d0 = uStack_110;
                              uStack_b8 = uStack_f8;
                              local_c0 = local_100;
                              uStack_a8 = uStack_e8;
                              uStack_b0 = local_f0;
                              FUN_042bee90(lVar21,&local_e0,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
                            }
                          }
                          if (*(int *)(lVar20 + 0x18) < 0x1ff) {
                            if (*(long *)(param_2 + 0x10) == 0) goto LAB_065f48a4;
                            if (iVar4 + iVar40 == *(int *)(*(long *)(param_2 + 0x10) + 0x20) + -1)
                            goto LAB_065f4570;
                            uVar39 = uVar39 + 1;
                          }
                          else {
LAB_065f4570:
                            lVar29 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                               (*(undefined8 *)PTR_DAT_070c2528);
                            FUN_0699f8cc(lVar29,0);
                            if (lVar29 == 0) goto LAB_065f48a4;
                            FUN_0699fdc8(lVar29,*(undefined8 *)
                                                 UnityEngine_UIElements_BaseVisualElementPanel_TypeInfo
                                         ,lVar16,0);
                            FUN_0699fdc8(lVar29,*(undefined8 *)System_Net_BasicClient_TypeInfo,
                                         lVar15,0);
                            FUN_0699fdc8(lVar29,*(undefined8 *)
                                                 UnityEngine_UIElements_BaseVerticalCollectionView_TypeInfo
                                         ,lVar17,0);
                            FUN_0699fdc8(lVar29,*(undefined8 *)
                                                 UnityEngine_Rendering_BatchCullingViewType_TypeInfo
                                         ,lVar19,0);
                            FUN_0699fdc8(lVar29,*(undefined8 *)
                                                 Mono_Security_X509_Extensions_BasicConstraintsExtension_TypeInfo
                                         ,lVar18,0);
                            FUN_0699fe18(lVar29,*(undefined8 *)
                                                 Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_Gcm_BasicGcmExponentiator_TypeInfo
                                         ,lVar14,0);
                            if (lVar26 != 0) {
                              FUN_0699fe18(lVar29,*(undefined8 *)
                                                   UnityEngine_Rendering_BatchBufferTarget_TypeInfo,
                                           lVar26,0);
                            }
                            if (lVar13 == 0) goto LAB_065f48a4;
                            lVar31 = *(long *)(lVar13 + 0x10);
                            lVar35 = *(long *)UnityEngine_UIElements_BaseBoolField_TypeInfo;
                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                            if (lVar31 == 0) goto LAB_065f48a4;
                            uVar39 = *(uint *)(lVar13 + 0x18);
                            if (uVar39 < *(uint *)(lVar31 + 0x18)) {
                              *(uint *)(lVar13 + 0x18) = uVar39 + 1;
                              *(long *)(lVar31 + (long)(int)uVar39 * 8 + 0x20) = lVar29;
                            }
                            else {
                              FUN_042e4a64(lVar13,lVar29,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
                            }
                            puVar8 = UnityEngine_UIElements_BaseListView_TypeInfo;
                            uVar54 = FUN_042c0c1c(lVar20,*(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_BaseListView_TypeInfo);
                            if (lVar10 == 0) goto LAB_065f48a4;
                            lVar29 = *(long *)(lVar10 + 0x10);
                            lVar31 = *(long *)UnityEngine_Rendering_BaseCommandBuffer_TypeInfo;
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar29 == 0) goto LAB_065f48a4;
                            uVar39 = *(uint *)(lVar10 + 0x18);
                            if (uVar39 < *(uint *)(lVar29 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar39 + 1;
                              *(undefined8 *)(lVar29 + (long)(int)uVar39 * 8 + 0x20) = uVar54;
                            }
                            else {
                              FUN_042e4a64(lVar10,uVar54,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
                            }
                            *(undefined4 *)(lVar20 + 0x18) = 0;
                            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                            if ((lVar21 == 0) ||
                               (uVar54 = FUN_042c0c1c(lVar21,*(undefined8 *)puVar8), lVar12 == 0))
                            goto LAB_065f48a4;
                            lVar29 = *(long *)(lVar12 + 0x10);
                            lVar31 = *(long *)UnityEngine_Rendering_BaseCommandBuffer_TypeInfo;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            if (lVar29 == 0) goto LAB_065f48a4;
                            uVar39 = *(uint *)(lVar12 + 0x18);
                            if (uVar39 < *(uint *)(lVar29 + 0x18)) {
                              *(uint *)(lVar12 + 0x18) = uVar39 + 1;
                              *(undefined8 *)(lVar29 + (long)(int)uVar39 * 8 + 0x20) = uVar54;
                            }
                            else {
                              FUN_042e4a64(lVar12,uVar54,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
                            }
                            uVar39 = 0;
                            *(undefined4 *)(lVar21 + 0x18) = 0;
                            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                          }
                          lVar23 = lVar23 + 1;
                        } while (lVar23 != 4);
                        local_198 = local_198 + auVar57._0_8_;
                        iVar34 = iVar34 + 1;
                        iVar4 = iVar4 + 4;
                      } while (iVar34 != 4);
                      iVar38 = iVar38 + 1;
                      uVar30 = uVar30 + (uint)(iVar33 * iVar37);
                      iVar9 = iVar9 + 0x10;
                    } while (iVar38 != 4);
                    local_22c = local_22c + 4;
                    if (iVar33 <= local_22c) {
                      local_244 = local_244 + 4;
                      if (local_244 < iVar37) {
                        local_22c = 0;
                      }
                      else {
                        local_244 = 0;
                        local_22c = 0;
                        local_264 = local_264 + 4;
                        if (auVar57._8_4_ <= local_264) {
                          local_264 = 0;
                        }
                      }
                    }
                    uVar11 = uVar11 + 1;
                    iVar5 = iVar5 + 0x40;
                  } while (uVar11 != uVar3 >> 6);
                }
                *(long *)(param_2 + 0x150) = lVar22;
                return lVar22;
              }
            }
          }
        }
        goto LAB_065f48a4;
      }
    }
    lVar10 = 0;
  }
  return lVar10;
}


