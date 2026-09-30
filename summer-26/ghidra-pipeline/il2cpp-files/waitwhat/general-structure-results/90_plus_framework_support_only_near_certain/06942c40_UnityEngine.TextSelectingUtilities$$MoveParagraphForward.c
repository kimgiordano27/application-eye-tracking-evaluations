/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$MoveParagraphForward
ENTRY_POINT: 06942c40
PROGRAM: waitwhat-libil2cpp.so
SCORE: 192
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;strong_file_logging_hits_11;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_13
*/


void UnityEngine_TextSelectingUtilities__MoveParagraphForward(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 in_x9;
  long lVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  *(undefined8 *)(unaff_x21 + 0x10) = param_1;
  puVar2 = PTR_DAT_070c25e8;
  *(undefined8 *)(unaff_x21 + 0x20) = in_x9;
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_042e4268(lVar5,*(undefined8 *)PTR_DAT_070c25c8);
  if (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + 0x10);
    uVar6 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo;
    lVar9 = *unaff_x19;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
      }
      else {
        FUN_042e4a64(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = *unaff_x25;
      *(long *)(unaff_x21 + 0x30) = lVar5;
      lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
      FUN_042e4268(lVar5,*unaff_x29);
      lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*unaff_x24);
      FUN_05971910(lVar7,0);
      if (lVar7 != 0) {
        uVar6 = *unaff_x28;
        *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
        *(undefined8 *)(lVar7 + 0x18) = uVar6;
        if (lVar5 != 0) {
          lVar9 = *(long *)(lVar5 + 0x10);
          lVar10 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          puVar2 = PTR_DAT_070c25c8;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
            }
            else {
              FUN_042e4a64(lVar5,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x21 + 0x28) = lVar5;
            lVar5 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
              }
              else {
                FUN_042e4a64();
              }
              lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*unaff_x27);
              FUN_05971910(lVar5,0);
              if (lVar5 != 0) {
                uVar6 = *(undefined8 *)PTR_DAT_07137b40;
                *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)PTR_DAT_070f4598;
                puVar3 = PTR_DAT_070c25e8;
                *(undefined8 *)(lVar5 + 0x20) = uVar6;
                *(undefined4 *)(lVar5 + 0x18) = 0;
                lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*(undefined8 *)puVar3);
                FUN_042e4268(lVar7,*(undefined8 *)puVar2);
                if (lVar7 != 0) {
                  lVar9 = *(long *)(lVar7 + 0x10);
                  uVar6 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
                  lVar10 = *unaff_x19;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar9 != 0) {
                    uVar1 = *(uint *)(lVar7 + 0x18);
                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                    }
                    else {
                      FUN_042e4a64(lVar7,uVar6,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar6 = *unaff_x25;
                    *(long *)(lVar5 + 0x30) = lVar7;
                    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                      (uVar6);
                    FUN_042e4268(lVar7,*unaff_x29);
                    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                      (*unaff_x24);
                    FUN_05971910(lVar9,0);
                    if (lVar9 != 0) {
                      uVar6 = *(undefined8 *)
                               UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass13_0_TypeInfo
                      ;
                      *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                      *(undefined8 *)(lVar9 + 0x18) = uVar6;
                      if (lVar7 != 0) {
                        lVar10 = *(long *)(lVar7 + 0x10);
                        lVar11 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        if (lVar10 != 0) {
                          uVar1 = *(uint *)(lVar7 + 0x18);
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                            *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar9;
                          }
                          else {
                            FUN_042e4a64(lVar7,lVar9,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar5 + 0x28) = lVar7;
                          lVar7 = *(long *)(unaff_x20 + 0x10);
                          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                          if (lVar7 != 0) {
                            uVar1 = *(uint *)(unaff_x20 + 0x18);
                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                              *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
                            }
                            else {
                              FUN_042e4a64();
                            }
                            lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                              (*unaff_x27);
                            FUN_05971910(lVar5,0);
                            if (lVar5 != 0) {
                              uVar6 = *(undefined8 *)
                                       UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo;
                              *(undefined8 *)(lVar5 + 0x10) =
                                   *(undefined8 *)
                                    System_Collections_Generic_IEnumerator<Expression>_TypeInfo;
                              puVar3 = PTR_DAT_070c25e8;
                              *(undefined8 *)(lVar5 + 0x20) = uVar6;
                              *(undefined4 *)(lVar5 + 0x18) = 0;
                              lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (*(undefined8 *)puVar3);
                              FUN_042e4268(lVar7,*(undefined8 *)puVar2);
                              if (lVar7 != 0) {
                                lVar9 = *(long *)(lVar7 + 0x10);
                                uVar6 = *(undefined8 *)
                                         UnityEngine_UIElements_EasingFunction_PropertyBag_ModeProperty_TypeInfo
                                ;
                                lVar10 = *unaff_x19;
                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                if (lVar9 != 0) {
                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                  }
                                  else {
                                    FUN_042e4a64(lVar7,uVar6,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  uVar6 = *unaff_x25;
                                  *(long *)(lVar5 + 0x30) = lVar7;
                                  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                    (uVar6);
                                  FUN_042e4268(lVar7,*unaff_x29);
                                  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                    (*unaff_x24);
                                  FUN_05971910(lVar9,0);
                                  if (lVar9 != 0) {
                                    uVar6 = *(undefined8 *)
                                             UnityEngine_Rendering_DebugUI_RuntimeDebugShadersMessageBox_<>c_TypeInfo
                                    ;
                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                    *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                    if (lVar7 != 0) {
                                      lVar10 = *(long *)(lVar7 + 0x10);
                                      lVar11 = *(long *)
                                                System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                      if (lVar10 != 0) {
                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                          *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar9;
                                        }
                                        else {
                                          FUN_042e4a64(lVar7,lVar9,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar5 + 0x28) = lVar7;
                                        lVar7 = *(long *)(unaff_x20 + 0x10);
                                        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                        if (lVar7 != 0) {
                                          uVar1 = *(uint *)(unaff_x20 + 0x18);
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                            *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
                                          }
                                          else {
                                            FUN_042e4a64();
                                          }
                                          lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                          FUN_05971910(lVar5,0);
                                          puVar3 = PTR_DAT_0711dfd8;
                                          if (lVar5 != 0) {
                                            uVar6 = *(undefined8 *)PTR_DAT_0711dfd8;
                                            *(undefined8 *)(lVar5 + 0x10) =
                                                 *(undefined8 *)
                                                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                                            ;
                                            puVar4 = PTR_DAT_070c25e8;
                                            *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                            *(undefined4 *)(lVar5 + 0x18) = 1;
                                            lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                            FUN_042e4268(lVar7,*(undefined8 *)puVar2);
                                            if (lVar7 != 0) {
                                              lVar9 = *(long *)(lVar7 + 0x10);
                                              uVar6 = *(undefined8 *)puVar3;
                                              lVar10 = *unaff_x19;
                                              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                              if (lVar9 != 0) {
                                                uVar1 = *(uint *)(lVar7 + 0x18);
                                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                                }
                                                else {
                                                  FUN_042e4a64(lVar7,uVar6,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar10 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                uVar6 = *unaff_x25;
                                                *(long *)(lVar5 + 0x30) = lVar7;
                                                lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                FUN_042e4268(lVar7,*unaff_x29);
                                                lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                FUN_05971910(lVar9,0);
                                                if (lVar9 != 0) {
                                                  uVar6 = *(undefined8 *)
                                                                                                                      
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass7_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar7,*(undefined8 *)puVar2);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar6 = *unaff_x25;
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar7,*unaff_x29);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionConverter_OptionPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionCollection_WrappedPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  *(undefined4 *)(lVar5 + 0x18) = 2;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar7,*(undefined8 *)puVar2);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar6 = *unaff_x25;
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar7,*unaff_x29);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar7,*(undefined8 *)puVar2);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar6 = *unaff_x25;
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar7,*unaff_x29);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_DebugUI_RenderingLayerField_<>c__DisplayClass5_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_NoInput_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar7,*(undefined8 *)puVar2);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar6 = *unaff_x25;
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar7,*unaff_x29);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  *(undefined4 *)(lVar5 + 0x18) = 3;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar7,*(undefined8 *)puVar2);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar6 = *unaff_x25;
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar7,*unaff_x29);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  *(undefined4 *)(lVar5 + 0x18) = 3;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar7,*(undefined8 *)puVar2);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar6 = *unaff_x25;
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar7,*unaff_x29);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  *(undefined4 *)(lVar5 + 0x18) = 4;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar7,*(undefined8 *)puVar2);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar6 = *unaff_x25;
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar7,*unaff_x29);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  uVar6 = FUN_05971910(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      uVar6 = FUN_042e4a64(lVar7,lVar9,
                                                                           *(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  lVar11 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      uVar6 = FUN_042e4a64();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x20;
                                                    FUN_06938d58(uVar6,in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


