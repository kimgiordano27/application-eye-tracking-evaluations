/*
FUNCTION_NAME: FUN_0693c19c
ENTRY_POINT: 0693c19c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_file_logging_hits_3;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0693c19c(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  puVar3 = System_Xml_XmlBaseReader_QuotaNameTable_TypeInfo;
  if ((DAT_07559a71 & 1) == 0) {
    FUN_03188a78(System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_QuotaNameTable_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2cb8);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlDeclarationNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
    FUN_03188a78(PTR_DAT_070c25c8);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo);
    FUN_03188a78(PTR_DAT_070c25e8);
    FUN_03188a78(UnityEngine_UIElements_Background_PropertyBag_SpriteProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo);
    FUN_03188a78(PTR_DAT_071048a0);
    FUN_03188a78(UnityEngine_UIElements_Background_PropertyBag_VectorImageProperty_TypeInfo);
    FUN_03188a78(UnityEngine_Awaitable_DoubleBufferedAwaitableList_<>c__DisplayClass4_0_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundPosition_PropertyBag_KeywordProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_XProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_03188a78(System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundSize_PropertyBag_SizeTypeProperty_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<NetSyncSession>_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundSize_PropertyBag_YProperty_TypeInfo);
    FUN_03188a78(Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_TypeInfo);
    FUN_03188a78(PTR_DAT_070c20c8);
    FUN_03188a78(System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo);
    FUN_03188a78(System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo);
    FUN_03188a78(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                );
    FUN_03188a78(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_PostfixBurstDelegate_TypeInfo
                );
    DAT_07559a71 = 1;
  }
  lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_05971910(lVar10,0);
  puVar5 = System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo;
  puVar4 = System_Xml_XmlBaseReader_XmlDeclarationNode_TypeInfo;
  puVar3 = PTR_DAT_070c20c8;
  if (lVar10 != 0) {
    uVar15 = *(undefined8 *)
              UnityEngine_Awaitable_DoubleBufferedAwaitableList_<>c__DisplayClass4_0_TypeInfo;
    uVar19 = *(undefined8 *)
              Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_PostfixBurstDelegate_TypeInfo
    ;
    *(undefined8 *)(lVar10 + 0x10) =
         *(undefined8 *)UnityEngine_UIElements_BackgroundSize_PropertyBag_YProperty_TypeInfo;
    *(undefined8 *)(lVar10 + 0x18) = uVar15;
    puVar6 = System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo;
    uVar13 = *(undefined8 *)puVar3;
    uVar15 = *(undefined8 *)puVar5;
    *(undefined8 *)(lVar10 + 0x30) = uVar19;
    *(undefined8 *)(lVar10 + 0x38) = uVar13;
    *(undefined8 *)(lVar10 + 0x40) = uVar13;
    lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar15);
    FUN_042e4268(lVar11,*(undefined8 *)puVar4);
    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar6);
    FUN_05971910(lVar12,0);
    puVar3 = System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo;
    if (lVar12 != 0) {
      *(undefined4 *)(lVar12 + 0x10) = 0x16c;
      *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)puVar3;
      puVar3 = System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo;
      if (lVar11 != 0) {
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar12;
          }
          else {
            FUN_042e4a64(lVar11,lVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar6);
          FUN_05971910(lVar12,0);
          puVar4 = System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo;
          if (lVar12 != 0) {
            iVar1 = *(int *)(lVar11 + 0x1c);
            *(undefined4 *)(lVar12 + 0x10) = 0x26c;
            lVar16 = *(long *)puVar3;
            uVar15 = *(undefined8 *)puVar4;
            lVar14 = *(long *)(lVar11 + 0x10);
            *(int *)(lVar11 + 0x1c) = iVar1 + 1;
            *(undefined8 *)(lVar12 + 0x18) = uVar15;
            puVar5 = System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo;
            puVar4 = System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo;
            puVar3 = System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo;
            if (lVar14 != 0) {
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar12;
              }
              else {
                FUN_042e4a64(lVar11,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar15 = *(undefined8 *)puVar5;
              *(long *)(lVar10 + 0x20) = lVar11;
              lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (uVar15);
              FUN_042e4268(lVar11,*(undefined8 *)puVar4);
              lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*(undefined8 *)puVar3);
              FUN_05971910(lVar12,0);
              puVar4 = PTR_DAT_070c25e8;
              puVar3 = PTR_DAT_070c25c8;
              if (lVar12 != 0) {
                uVar13 = *(undefined8 *)
                          UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo;
                uVar15 = *(undefined8 *)PTR_DAT_070c25e8;
                *(undefined8 *)(lVar12 + 0x10) =
                     *(undefined8 *)
                      UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo;
                *(undefined8 *)(lVar12 + 0x20) = uVar13;
                *(undefined4 *)(lVar12 + 0x18) = 3;
                lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (uVar15);
                FUN_042e4268(lVar14,*(undefined8 *)puVar3);
                puVar5 = PTR_DAT_070c2cb8;
                if (lVar14 != 0) {
                  lVar16 = *(long *)(lVar14 + 0x10);
                  uVar15 = *(undefined8 *)
                            System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo;
                  lVar17 = *(long *)PTR_DAT_070c2cb8;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  puVar9 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                  puVar8 = System_Xml_XmlBaseReader_XmlElementNode_TypeInfo;
                  puVar6 = System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo;
                  if (lVar16 != 0) {
                    uVar2 = *(uint *)(lVar14 + 0x18);
                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar15;
                    }
                    else {
                      FUN_042e4a64(lVar14,uVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar15 = *(undefined8 *)puVar9;
                    *(long *)(lVar12 + 0x30) = lVar14;
                    lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                       (uVar15);
                    FUN_042e4268(lVar14,*(undefined8 *)puVar8);
                    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                       (*(undefined8 *)puVar6);
                    FUN_05971910(lVar16,0);
                    if (lVar16 != 0) {
                      uVar15 = *(undefined8 *)
                                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                      ;
                      *(undefined8 *)(lVar16 + 0x10) =
                           *(undefined8 *)
                            Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_PostfixBurstDelegate_TypeInfo
                      ;
                      *(undefined8 *)(lVar16 + 0x18) = uVar15;
                      if (lVar14 != 0) {
                        lVar17 = *(long *)(lVar14 + 0x10);
                        lVar18 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (lVar17 != 0) {
                          uVar2 = *(uint *)(lVar14 + 0x18);
                          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                            *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                            *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = lVar16;
                          }
                          else {
                            FUN_042e4a64(lVar14,lVar16,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar12 + 0x28) = lVar14;
                          *(undefined1 *)(lVar12 + 0x38) = 1;
                          if (lVar11 != 0) {
                            lVar14 = *(long *)(lVar11 + 0x10);
                            lVar16 = *(long *)System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar2 = *(uint *)(lVar11 + 0x18);
                              if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar12;
                              }
                              else {
                                FUN_042e4a64(lVar11,lVar12,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (*(undefined8 *)
                                                                                                      
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                 );
                              FUN_05971910(lVar12,0);
                              if (lVar12 != 0) {
                                uVar15 = *(undefined8 *)puVar4;
                                uVar13 = *(undefined8 *)
                                          UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                ;
                                *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)PTR_DAT_071048a0;
                                *(undefined8 *)(lVar12 + 0x20) = uVar13;
                                *(undefined4 *)(lVar12 + 0x18) = 3;
                                lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                   (uVar15);
                                FUN_042e4268(lVar14,*(undefined8 *)puVar3);
                                if (lVar14 != 0) {
                                  lVar16 = *(long *)(lVar14 + 0x10);
                                  uVar15 = *(undefined8 *)
                                            System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                  ;
                                  lVar17 = *(long *)puVar5;
                                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                  puVar4 = 
                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_PostfixBurstDelegate_TypeInfo
                                  ;
                                  puVar3 = System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo;
                                  if (lVar16 != 0) {
                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                      *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar15
                                      ;
                                    }
                                    else {
                                      FUN_042e4a64(lVar14,uVar15,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    uVar15 = *(undefined8 *)puVar9;
                                    *(long *)(lVar12 + 0x30) = lVar14;
                                    lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (uVar15);
                                    FUN_042e4268(lVar14,*(undefined8 *)puVar8);
                                    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (*(undefined8 *)puVar6);
                                    FUN_05971910(lVar16,0);
                                    puVar5 = System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                    if (lVar16 != 0) {
                                      uVar15 = *(undefined8 *)
                                                UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar4;
                                      *(undefined8 *)(lVar16 + 0x18) = uVar15;
                                      if (lVar14 != 0) {
                                        lVar17 = *(long *)(lVar14 + 0x10);
                                        lVar18 = *(long *)puVar5;
                                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                        if (lVar17 != 0) {
                                          uVar2 = *(uint *)(lVar14 + 0x18);
                                          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = lVar16
                                            ;
                                          }
                                          else {
                                            FUN_042e4a64(lVar14,lVar16,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar12 + 0x28) = lVar14;
                                          iVar1 = *(int *)(lVar11 + 0x1c);
                                          *(undefined1 *)(lVar12 + 0x38) = 1;
                                          puVar7 = System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                          lVar14 = *(long *)(lVar11 + 0x10);
                                          *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                          if (lVar14 != 0) {
                                            uVar2 = *(uint *)(lVar11 + 0x18);
                                            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                   lVar12;
                                            }
                                            else {
                                              FUN_042e4a64(lVar11,lVar12,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(*(long *)puVar7 +
                                                                                0x20) + 0xc0) + 0x70
                                                            ));
                                            }
                                            lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                            FUN_05971910(lVar12,0);
                                            if (lVar12 != 0) {
                                              uVar15 = *(undefined8 *)puVar9;
                                              uVar13 = *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_SizeTypeProperty_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar12 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_UIElements_Background_PropertyBag_VectorImageProperty_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar12 + 0x20) = uVar13;
                                              *(undefined4 *)(lVar12 + 0x18) = 3;
                                              lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar15);
                                              FUN_042e4268(lVar14,*(undefined8 *)puVar8);
                                              lVar16 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                              FUN_05971910(lVar16,0);
                                              if (lVar16 != 0) {
                                                uVar15 = *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_KeywordProperty_TypeInfo
                                                ;
                                                *(undefined8 *)(lVar16 + 0x10) =
                                                     *(undefined8 *)puVar4;
                                                *(undefined8 *)(lVar16 + 0x18) = uVar15;
                                                if (lVar14 != 0) {
                                                  lVar17 = *(long *)(lVar14 + 0x10);
                                                  lVar18 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar16;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                                  puVar7 = 
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar7 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_05971910(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar15 = *(undefined8 *)puVar9;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_Background_PropertyBag_SpriteProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar13;
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar15);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar8);
                                                  lVar16 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  uVar15 = FUN_05971910(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar4;
                                                  *(undefined8 *)(lVar16 + 0x18) = uVar13;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar18 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar17 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar16;
                                                      }
                                                      else {
                                                        uVar15 = FUN_042e4a64(lVar14,lVar16,
                                                                              *(undefined8 *)
                                                                               (*(long *)(*(long *)(
                                                  lVar18 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      uVar15 = FUN_042e4a64(lVar11,lVar12,
                                                                            *(undefined8 *)
                                                                             (*(long *)(*(long *)(*(
                                                  long *)puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  FUN_06938d58(uVar15,lVar10);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


