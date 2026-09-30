/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$MoveWordLeft
ENTRY_POINT: 06942a64
PROGRAM: waitwhat-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_file_logging_hits_12;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_16
*/


void UnityEngine_TextSelectingUtilities__MoveWordLeft(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 in_x9;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *in_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  
  uVar9 = *in_x10;
  *(undefined8 *)(unaff_x21 + 0x10) = param_1;
  *(undefined8 *)(unaff_x21 + 0x20) = in_x9;
  *(undefined4 *)(unaff_x21 + 0x18) = 1;
  lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar9);
  FUN_042e4268(lVar10,*unaff_x19);
  puVar5 = PTR_DAT_070c2cb8;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 0x10);
    uVar9 = *unaff_x23;
    lVar13 = *(long *)PTR_DAT_070c2cb8;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    puVar8 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
    puVar7 = System_Xml_XmlBaseReader_XmlElementNode_TypeInfo;
    puVar6 = System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
      }
      else {
        FUN_042e4a64(lVar10,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar9 = *(undefined8 *)puVar8;
      *(long *)(unaff_x21 + 0x30) = lVar10;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar9);
      FUN_042e4268(lVar10,*(undefined8 *)puVar7);
      lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar6);
      FUN_05971910(lVar11,0);
      puVar2 = UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_Input_TypeInfo;
      if (lVar11 != 0) {
        uVar9 = *(undefined8 *)
                 UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_Input_TypeInfo;
        *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
        *(undefined8 *)(lVar11 + 0x18) = uVar9;
        if (lVar10 != 0) {
          lVar13 = *(long *)(lVar10 + 0x10);
          lVar14 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar11;
            }
            else {
              FUN_042e4a64(lVar10,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x21 + 0x28) = lVar10;
            if (unaff_x20 != 0) {
              lVar10 = *(long *)(unaff_x20 + 0x10);
              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar1 = *(uint *)(unaff_x20 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                  *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                }
                else {
                  FUN_042e4a64();
                }
                lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*unaff_x27);
                FUN_05971910(lVar10,0);
                if (lVar10 != 0) {
                  uVar9 = *(undefined8 *)
                           UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_TypeInfo
                  ;
                  *(undefined8 *)(lVar10 + 0x10) =
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
                  ;
                  puVar3 = PTR_DAT_070c25e8;
                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                  *(undefined4 *)(lVar10 + 0x18) = 0;
                  lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)puVar3);
                  FUN_042e4268(lVar11,*(undefined8 *)PTR_DAT_070c25c8);
                  if (lVar11 != 0) {
                    lVar13 = *(long *)(lVar11 + 0x10);
                    uVar9 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo;
                    lVar14 = *(long *)puVar5;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar13 != 0) {
                      uVar1 = *(uint *)(lVar11 + 0x18);
                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                      }
                      else {
                        FUN_042e4a64(lVar11,uVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar9 = *(undefined8 *)puVar8;
                      *(long *)(lVar10 + 0x30) = lVar11;
                      lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                         (uVar9);
                      FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                      lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                         (*(undefined8 *)puVar6);
                      FUN_05971910(lVar13,0);
                      if (lVar13 != 0) {
                        uVar9 = *(undefined8 *)puVar2;
                        *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                        *(undefined8 *)(lVar13 + 0x18) = uVar9;
                        if (lVar11 != 0) {
                          lVar14 = *(long *)(lVar11 + 0x10);
                          lVar15 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          puVar2 = PTR_DAT_070c25c8;
                          if (lVar14 != 0) {
                            uVar1 = *(uint *)(lVar11 + 0x18);
                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                              *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = lVar13;
                            }
                            else {
                              FUN_042e4a64(lVar11,lVar13,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar10 + 0x28) = lVar11;
                            lVar11 = *(long *)(unaff_x20 + 0x10);
                            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                            if (lVar11 != 0) {
                              uVar1 = *(uint *)(unaff_x20 + 0x18);
                              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = lVar10;
                              }
                              else {
                                FUN_042e4a64();
                              }
                              lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (*unaff_x27);
                              FUN_05971910(lVar10,0);
                              if (lVar10 != 0) {
                                uVar9 = *(undefined8 *)PTR_DAT_07137b40;
                                *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)PTR_DAT_070f4598;
                                puVar3 = PTR_DAT_070c25e8;
                                *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                *(undefined4 *)(lVar10 + 0x18) = 0;
                                lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                   (*(undefined8 *)puVar3);
                                FUN_042e4268(lVar11,*(undefined8 *)puVar2);
                                if (lVar11 != 0) {
                                  lVar13 = *(long *)(lVar11 + 0x10);
                                  uVar9 = *(undefined8 *)
                                           OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
                                  lVar14 = *(long *)puVar5;
                                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                  if (lVar13 != 0) {
                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                                    }
                                    else {
                                      FUN_042e4a64(lVar11,uVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    uVar9 = *(undefined8 *)puVar8;
                                    *(long *)(lVar10 + 0x30) = lVar11;
                                    lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (uVar9);
                                    FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (*(undefined8 *)puVar6);
                                    FUN_05971910(lVar13,0);
                                    if (lVar13 != 0) {
                                      uVar9 = *(undefined8 *)
                                               UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass13_0_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                      *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                      if (lVar11 != 0) {
                                        lVar14 = *(long *)(lVar11 + 0x10);
                                        lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                        if (lVar14 != 0) {
                                          uVar1 = *(uint *)(lVar11 + 0x18);
                                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                            *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = lVar13
                                            ;
                                          }
                                          else {
                                            FUN_042e4a64(lVar11,lVar13,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar10 + 0x28) = lVar11;
                                          lVar11 = *(long *)(unaff_x20 + 0x10);
                                          *(int *)(unaff_x20 + 0x1c) =
                                               *(int *)(unaff_x20 + 0x1c) + 1;
                                          if (lVar11 != 0) {
                                            uVar1 = *(uint *)(unaff_x20 + 0x18);
                                            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                              *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                   lVar10;
                                            }
                                            else {
                                              FUN_042e4a64();
                                            }
                                            lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                            FUN_05971910(lVar10,0);
                                            if (lVar10 != 0) {
                                              uVar9 = *(undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar10 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  System_Collections_Generic_IEnumerator<Expression>_TypeInfo
                                              ;
                                              puVar3 = PTR_DAT_070c25e8;
                                              *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                              *(undefined4 *)(lVar10 + 0x18) = 0;
                                              lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                              FUN_042e4268(lVar11,*(undefined8 *)puVar2);
                                              if (lVar11 != 0) {
                                                lVar13 = *(long *)(lVar11 + 0x10);
                                                uVar9 = *(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_EasingFunction_PropertyBag_ModeProperty_TypeInfo
                                                ;
                                                lVar14 = *(long *)puVar5;
                                                *(int *)(lVar11 + 0x1c) =
                                                     *(int *)(lVar11 + 0x1c) + 1;
                                                if (lVar13 != 0) {
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                                                  }
                                                  else {
                                                    FUN_042e4a64(lVar11,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_DebugUI_RuntimeDebugShadersMessageBox_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar10,0);
                                                  puVar3 = PTR_DAT_0711dfd8;
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)PTR_DAT_0711dfd8;
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)puVar3;
                                                    lVar14 = *(long *)puVar5;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar11,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass7_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo;
                                                  lVar14 = *(long *)puVar5;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionConverter_OptionPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionCollection_WrappedPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 2;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo;
                                                  lVar14 = *(long *)puVar5;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)puVar5;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_DebugUI_RenderingLayerField_<>c__DisplayClass5_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_NoInput_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)puVar5;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 3;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)puVar5;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 3;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)puVar5;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_05971910(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar2);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  lVar14 = *(long *)puVar5;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  uVar9 = FUN_05971910(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar12;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      uVar9 = FUN_042e4a64(lVar11,lVar13,
                                                                           *(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  lVar15 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  lVar11 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      uVar9 = FUN_042e4a64();
                                                    }
                                                    *(long *)(unaff_x28 + 0x28) = unaff_x20;
                                                    FUN_06938d58(uVar9,unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


