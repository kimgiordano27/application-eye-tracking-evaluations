/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$MoveToEndOfPreviousWord
ENTRY_POINT: 069429a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_file_logging_hits_12;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_16
*/


void UnityEngine_TextSelectingUtilities__MoveToEndOfPreviousWord(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int in_w10;
  undefined8 in_x11;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x26;
  long unaff_x28;
  
  *(int *)(unaff_x20 + 0x1c) = in_w10 + 1;
  *(undefined8 *)(unaff_x21 + 0x18) = in_x11;
  puVar7 = System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo;
  puVar2 = System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo;
  puVar6 = System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(long *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
    }
    else {
      FUN_042e4a64();
    }
    uVar10 = *(undefined8 *)puVar7;
    *(long *)(unaff_x28 + 0x20) = unaff_x20;
    lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
    FUN_042e4268(lVar11,*(undefined8 *)puVar2);
    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar6);
    FUN_05971910(lVar12,0);
    puVar7 = PTR_DAT_0711dfd0;
    puVar2 = PTR_DAT_070c25c8;
    if (lVar12 != 0) {
      uVar15 = *(undefined8 *)PTR_DAT_0711dfd0;
      uVar10 = *(undefined8 *)PTR_DAT_070c25e8;
      *(undefined8 *)(lVar12 + 0x10) =
           *(undefined8 *)
            System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
      ;
      *(undefined8 *)(lVar12 + 0x20) = uVar15;
      *(undefined4 *)(lVar12 + 0x18) = 1;
      lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar10);
      FUN_042e4268(lVar13,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_070c2cb8;
      if (lVar13 != 0) {
        lVar14 = *(long *)(lVar13 + 0x10);
        uVar10 = *(undefined8 *)puVar7;
        lVar16 = *(long *)PTR_DAT_070c2cb8;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        puVar9 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
        puVar8 = System_Xml_XmlBaseReader_XmlElementNode_TypeInfo;
        puVar7 = System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          }
          else {
            FUN_042e4a64(lVar13,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = *(undefined8 *)puVar9;
          *(long *)(lVar12 + 0x30) = lVar13;
          lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (uVar10);
          FUN_042e4268(lVar13,*(undefined8 *)puVar8);
          lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar7);
          FUN_05971910(lVar14,0);
          puVar3 = UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_Input_TypeInfo;
          if (lVar14 != 0) {
            uVar10 = *(undefined8 *)
                      UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_Input_TypeInfo;
            *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
            *(undefined8 *)(lVar14 + 0x18) = uVar10;
            if (lVar13 != 0) {
              lVar16 = *(long *)(lVar13 + 0x10);
              lVar17 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar16 != 0) {
                uVar1 = *(uint *)(lVar13 + 0x18);
                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                  *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = lVar14;
                }
                else {
                  FUN_042e4a64(lVar13,lVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar12 + 0x28) = lVar13;
                if (lVar11 != 0) {
                  lVar13 = *(long *)(lVar11 + 0x10);
                  lVar14 = *(long *)System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar1 = *(uint *)(lVar11 + 0x18);
                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar12;
                    }
                    else {
                      FUN_042e4a64(lVar11,lVar12,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                       (*(undefined8 *)puVar6);
                    FUN_05971910(lVar12,0);
                    if (lVar12 != 0) {
                      uVar10 = *(undefined8 *)
                                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_TypeInfo
                      ;
                      *(undefined8 *)(lVar12 + 0x10) =
                           *(undefined8 *)
                            System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
                      ;
                      puVar4 = PTR_DAT_070c25e8;
                      *(undefined8 *)(lVar12 + 0x20) = uVar10;
                      *(undefined4 *)(lVar12 + 0x18) = 0;
                      lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                         (*(undefined8 *)puVar4);
                      FUN_042e4268(lVar13,*(undefined8 *)PTR_DAT_070c25c8);
                      if (lVar13 != 0) {
                        lVar14 = *(long *)(lVar13 + 0x10);
                        uVar10 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo;
                        lVar16 = *(long *)puVar2;
                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                        if (lVar14 != 0) {
                          uVar1 = *(uint *)(lVar13 + 0x18);
                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                          }
                          else {
                            FUN_042e4a64(lVar13,uVar10,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                          }
                          uVar10 = *(undefined8 *)puVar9;
                          *(long *)(lVar12 + 0x30) = lVar13;
                          lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                             (uVar10);
                          FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                          lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                             (*(undefined8 *)puVar7);
                          FUN_05971910(lVar14,0);
                          if (lVar14 != 0) {
                            uVar10 = *(undefined8 *)puVar3;
                            *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                            *(undefined8 *)(lVar14 + 0x18) = uVar10;
                            if (lVar13 != 0) {
                              lVar16 = *(long *)(lVar13 + 0x10);
                              lVar17 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                              puVar3 = PTR_DAT_070c25c8;
                              if (lVar16 != 0) {
                                uVar1 = *(uint *)(lVar13 + 0x18);
                                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                  *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = lVar14;
                                }
                                else {
                                  FUN_042e4a64(lVar13,lVar14,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                *(long *)(lVar12 + 0x28) = lVar13;
                                lVar13 = *(long *)(lVar11 + 0x10);
                                lVar14 = *(long *)System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                if (lVar13 != 0) {
                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                    *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar12;
                                  }
                                  else {
                                    FUN_042e4a64(lVar11,lVar12,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                     (*(undefined8 *)puVar6);
                                  FUN_05971910(lVar12,0);
                                  if (lVar12 != 0) {
                                    uVar10 = *(undefined8 *)PTR_DAT_07137b40;
                                    *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)PTR_DAT_070f4598
                                    ;
                                    puVar4 = PTR_DAT_070c25e8;
                                    *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (*(undefined8 *)puVar4);
                                    FUN_042e4268(lVar13,*(undefined8 *)puVar3);
                                    if (lVar13 != 0) {
                                      lVar14 = *(long *)(lVar13 + 0x10);
                                      uVar10 = *(undefined8 *)
                                                OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
                                      lVar16 = *(long *)puVar2;
                                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                      if (lVar14 != 0) {
                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar10;
                                        }
                                        else {
                                          FUN_042e4a64(lVar13,uVar10,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        uVar10 = *(undefined8 *)puVar9;
                                        *(long *)(lVar12 + 0x30) = lVar13;
                                        lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                           (uVar10);
                                        FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                                        lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                           (*(undefined8 *)puVar7);
                                        FUN_05971910(lVar14,0);
                                        if (lVar14 != 0) {
                                          uVar10 = *(undefined8 *)
                                                                                                        
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass13_0_TypeInfo
                                          ;
                                          *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                          *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                          if (lVar13 != 0) {
                                            lVar16 = *(long *)(lVar13 + 0x10);
                                            lVar17 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                            if (lVar16 != 0) {
                                              uVar1 = *(uint *)(lVar13 + 0x18);
                                              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                     lVar14;
                                              }
                                              else {
                                                FUN_042e4a64(lVar13,lVar14,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar17 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar12 + 0x28) = lVar13;
                                              lVar13 = *(long *)(lVar11 + 0x10);
                                              lVar14 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                              if (lVar13 != 0) {
                                                uVar1 = *(uint *)(lVar11 + 0x18);
                                                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                  *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                       lVar12;
                                                }
                                                else {
                                                  FUN_042e4a64(lVar11,lVar12,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar14 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                FUN_05971910(lVar12,0);
                                                if (lVar12 != 0) {
                                                  uVar10 = *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_IEnumerator<Expression>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_EasingFunction_PropertyBag_ModeProperty_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar10);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  FUN_05971910(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_DebugUI_RuntimeDebugShadersMessageBox_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar12,0);
                                                  puVar4 = PTR_DAT_0711dfd8;
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)PTR_DAT_0711dfd8;
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                                                  ;
                                                  puVar5 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)puVar4;
                                                    lVar16 = *(long *)puVar2;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar10;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar13,uVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar10);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  FUN_05971910(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass7_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar10);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  FUN_05971910(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionConverter_OptionPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionCollection_WrappedPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 2;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar10);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  FUN_05971910(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar10);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  FUN_05971910(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_DebugUI_RenderingLayerField_<>c__DisplayClass5_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_NoInput_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar10);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  FUN_05971910(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar10);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  FUN_05971910(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar10);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  FUN_05971910(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  puVar6 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 4;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar10);
                                                  FUN_042e4268(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar7);
                                                  uVar10 = FUN_05971910(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar15;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      uVar10 = FUN_042e4a64(lVar13,lVar14,
                                                                            *(undefined8 *)
                                                                             (*(long *)(*(long *)(
                                                  lVar17 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      uVar10 = FUN_042e4a64(lVar11,lVar12,
                                                                            *(undefined8 *)
                                                                             (*(long *)(*(long *)(
                                                  lVar14 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x28 + 0x28) = lVar11;
                                                  FUN_06938d58(uVar10,unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


