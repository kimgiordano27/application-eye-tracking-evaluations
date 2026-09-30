/*
FUNCTION_NAME: UnityEngine.Collider$$get_bounds
ENTRY_POINT: 06958f24
PROGRAM: waitwhat-libil2cpp.so
SCORE: 161
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_8;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_21;telemetry_or_network_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_21
*/


void UnityEngine_Collider__get_bounds(undefined8 *param_1)

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
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *in_x9;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *in_x10;
  undefined8 *in_x11;
  long in_x12;
  undefined8 uVar20;
  long unaff_x19;
  undefined8 *puVar21;
  long unaff_x20;
  undefined8 *puVar22;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  
  puVar22 = *(undefined8 **)(unaff_x20 + 0xf68);
  puVar21 = *(undefined8 **)(unaff_x19 + 0xf40);
  uVar15 = *in_x9;
  uVar20 = *unaff_x28;
  uVar11 = **(undefined8 **)(in_x12 + 0xf78);
  *(undefined8 *)(unaff_x26 + 0x10) = *param_1;
  *(undefined8 *)(unaff_x26 + 0x18) = uVar15;
  uVar15 = *in_x10;
  uVar16 = *in_x11;
  *(undefined8 *)(unaff_x26 + 0x30) = uVar20;
  *(undefined8 *)(unaff_x26 + 0x38) = uVar15;
  *(undefined8 *)(unaff_x26 + 0x40) = uVar16;
  lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_042e4268(lVar12,*puVar22);
  lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar21);
  FUN_06938f80(lVar13,0);
  puVar8 = System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo;
  if (lVar13 != 0) {
    *(undefined4 *)(lVar13 + 0x10) = 0x164;
    *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)puVar8;
    puVar8 = System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo;
    if (lVar12 != 0) {
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar17 = *(long *)System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
        }
        else {
          FUN_042e4a64(lVar12,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*puVar21);
        FUN_06938f80(lVar13,0);
        puVar3 = System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo;
        if (lVar13 != 0) {
          iVar1 = *(int *)(lVar12 + 0x1c);
          *(undefined4 *)(lVar13 + 0x10) = 0x264;
          lVar17 = *(long *)puVar8;
          uVar11 = *(undefined8 *)puVar3;
          lVar14 = *(long *)(lVar12 + 0x10);
          *(int *)(lVar12 + 0x1c) = iVar1 + 1;
          *(undefined8 *)(lVar13 + 0x18) = uVar11;
          puVar6 = System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo;
          puVar3 = System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo;
          puVar8 = System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
            }
            else {
              FUN_042e4a64(lVar12,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = *(undefined8 *)puVar6;
            *(long *)(unaff_x26 + 0x20) = lVar12;
            lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (uVar11);
            FUN_042e4268(lVar12,*(undefined8 *)puVar3);
            lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)puVar8);
            FUN_06938f78(lVar13,0);
            puVar6 = PTR_DAT_070c25e8;
            puVar3 = PTR_DAT_070c25c8;
            if (lVar13 != 0) {
              uVar15 = *(undefined8 *)PTR_DAT_0713d6a0;
              uVar16 = *(undefined8 *)PTR_DAT_07129f00;
              *(undefined4 *)(lVar13 + 0x18) = 0;
              uVar11 = *(undefined8 *)puVar6;
              *(undefined8 *)(lVar13 + 0x10) = uVar15;
              *(undefined8 *)(lVar13 + 0x20) = uVar16;
              lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (uVar11);
              FUN_042e4268(lVar14,*(undefined8 *)puVar3);
              if (lVar14 != 0) {
                lVar17 = *(long *)(lVar14 + 0x10);
                uVar11 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
                lVar18 = *(long *)PTR_DAT_070c2cb8;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                puVar10 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                puVar6 = System_Xml_XmlBaseReader_XmlElementNode_TypeInfo;
                puVar3 = System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo;
                if (lVar17 != 0) {
                  uVar2 = *(uint *)(lVar14 + 0x18);
                  if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                  }
                  else {
                    FUN_042e4a64(lVar14,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar11 = *(undefined8 *)puVar10;
                  *(long *)(lVar13 + 0x30) = lVar14;
                  lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (uVar11);
                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                  lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)puVar3);
                  FUN_06938f70(lVar17,0);
                  if (lVar17 != 0) {
                    uVar11 = *(undefined8 *)
                              UnityEngine_Rendering_DebugUI_RuntimeDebugShadersMessageBox_<>c_TypeInfo
                    ;
                    *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                    *(undefined8 *)(lVar17 + 0x18) = uVar11;
                    if (lVar14 != 0) {
                      lVar18 = *(long *)(lVar14 + 0x10);
                      lVar19 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      puVar4 = PTR_DAT_070c25c8;
                      if (lVar18 != 0) {
                        uVar2 = *(uint *)(lVar14 + 0x18);
                        if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                          *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = lVar17;
                        }
                        else {
                          FUN_042e4a64(lVar14,lVar17,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar13 + 0x28) = lVar14;
                        puVar9 = System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                        if (lVar12 != 0) {
                          lVar14 = *(long *)(lVar12 + 0x10);
                          lVar17 = *(long *)System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar14 != 0) {
                            uVar2 = *(uint *)(lVar12 + 0x18);
                            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                              *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
                            }
                            else {
                              FUN_042e4a64(lVar12,lVar13,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                               (*(undefined8 *)puVar8);
                            FUN_06938f78(lVar13,0);
                            if (lVar13 != 0) {
                              uVar11 = *(undefined8 *)
                                        UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted_000001F4_BurstDirectCall_TypeInfo
                              ;
                              *(undefined8 *)(lVar13 + 0x10) =
                                   *(undefined8 *)
                                    System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_<>c__DisplayClass2_0_TypeInfo
                              ;
                              puVar5 = PTR_DAT_070c25e8;
                              *(undefined8 *)(lVar13 + 0x20) = uVar11;
                              *(undefined4 *)(lVar13 + 0x18) = 0;
                              lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (*(undefined8 *)puVar5);
                              FUN_042e4268(lVar14,*(undefined8 *)puVar4);
                              puVar5 = PTR_DAT_070c2cb8;
                              if (lVar14 != 0) {
                                lVar17 = *(long *)(lVar14 + 0x10);
                                uVar11 = *(undefined8 *)
                                          System_Xml_XmlBaseWriter_NamespaceManager_Namespace_TypeInfo
                                ;
                                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                if (lVar17 != 0) {
                                  uVar2 = *(uint *)(lVar14 + 0x18);
                                  if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                    *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                    *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                                  }
                                  else {
                                    FUN_042e4a64(lVar14,uVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)puVar5 + 0x20) +
                                                            0xc0) + 0x70));
                                  }
                                  uVar11 = *(undefined8 *)puVar10;
                                  *(long *)(lVar13 + 0x30) = lVar14;
                                  lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                     (uVar11);
                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                  lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                     (*(undefined8 *)puVar3);
                                  FUN_06938f70(lVar17,0);
                                  if (lVar17 != 0) {
                                    uVar11 = *(undefined8 *)
                                              UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_000001E6_BurstDirectCall_TypeInfo
                                    ;
                                    *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                    *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                    if (lVar14 != 0) {
                                      lVar18 = *(long *)(lVar14 + 0x10);
                                      lVar19 = *(long *)
                                                System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                      if (lVar18 != 0) {
                                        uVar2 = *(uint *)(lVar14 + 0x18);
                                        if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                          *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = lVar17;
                                        }
                                        else {
                                          FUN_042e4a64(lVar14,lVar17,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        iVar1 = *(int *)(lVar12 + 0x1c);
                                        lVar17 = *(long *)(lVar12 + 0x10);
                                        lVar18 = *(long *)puVar9;
                                        *(long *)(lVar13 + 0x28) = lVar14;
                                        *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                        if (lVar17 != 0) {
                                          uVar2 = *(uint *)(lVar12 + 0x18);
                                          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = lVar13
                                            ;
                                          }
                                          else {
                                            FUN_042e4a64(lVar12,lVar13,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                          FUN_06938f78(lVar13,0);
                                          if (lVar13 != 0) {
                                            uVar11 = *(undefined8 *)
                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_TypeInfo
                                            ;
                                            *(undefined8 *)(lVar13 + 0x10) =
                                                 *(undefined8 *)
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                            ;
                                            puVar5 = PTR_DAT_070c25e8;
                                            *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                            *(undefined4 *)(lVar13 + 0x18) = 0;
                                            lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                            FUN_042e4268(lVar14,*(undefined8 *)puVar4);
                                            puVar5 = PTR_DAT_070c2cb8;
                                            if (lVar14 != 0) {
                                              lVar17 = *(long *)(lVar14 + 0x10);
                                              uVar11 = *(undefined8 *)
                                                                                                                
                                                  OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay_TypeInfo
                                              ;
                                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                              if (lVar17 != 0) {
                                                uVar2 = *(uint *)(lVar14 + 0x18);
                                                if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                                                }
                                                else {
                                                  FUN_042e4a64(lVar14,uVar11,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(*(long *)puVar5
                                                                                    + 0x20) + 0xc0)
                                                                + 0x70));
                                                }
                                                uVar11 = *(undefined8 *)puVar10;
                                                *(long *)(lVar13 + 0x30) = lVar14;
                                                lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                FUN_06938f70(lVar17,0);
                                                if (lVar17 != 0) {
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass6_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TypeInfo
                                                  ;
                                                  puVar5 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar4);
                                                  puVar5 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__SetDashboardOverlaySceneProcess_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Fusion_NetworkBehaviour_ChangeDetector_OnChangedCallbackWrapper_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
                                                  ;
                                                  puVar5 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar4);
                                                  puVar5 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__ReleaseNativeOverlayHandle_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Fusion_NetworkSceneAsyncOp_Awaiter_<>c__DisplayClass5_1_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_TypeInfo
                                                  ;
                                                  puVar5 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar4);
                                                  puVar5 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__GetTransformForOverlayCoordinates_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Fusion_NetworkSceneAsyncOp_Awaiter_<>c__DisplayClass5_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  puVar5 = PTR_DAT_0711dfd0;
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_0711dfd0;
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                                                  ;
                                                  puVar7 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 1;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    lVar18 = *(long *)PTR_DAT_070c2cb8;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar11;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar14,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  puVar4 = 
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
                                                  ;
                                                  puVar5 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_042e4268(lVar14,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  puVar5 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                    *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                    puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    puVar5 = PTR_DAT_070c25c8;
                                                    if (lVar18 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar18 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar17;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar14,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_000001F5_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted_000001F4_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 1;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_000001F5_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  puVar4 = PTR_DAT_0711dfd8;
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_0711dfd8;
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                                                  ;
                                                  puVar7 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 1;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    lVar18 = *(long *)PTR_DAT_070c2cb8;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar11;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar14,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseWriter_NamespaceManager_XmlAttribute_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionConverter_OptionPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_0711ac20;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 2;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass19_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass16_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass17_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_LightCookieManager_LightCookieMapping_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_InputControlScheme_MatchResult_Match_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionCollection_WrappedPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 2;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_000001E7_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_000001E6_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 1;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_NamespaceManager_XmlAttribute_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_<>c__DisplayClass0_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 3;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 3;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  puVar8 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 4;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar5);
                                                  puVar8 = PTR_DAT_070c2cb8;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar8 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar14,*(undefined8 *)puVar6);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x26 + 0x28) = lVar12;
                                                  FUN_06938d58(unaff_x27,unaff_x26,0);
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


