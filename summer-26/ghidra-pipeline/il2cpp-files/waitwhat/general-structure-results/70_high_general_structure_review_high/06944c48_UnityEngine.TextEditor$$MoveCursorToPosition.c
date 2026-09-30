/*
FUNCTION_NAME: UnityEngine.TextEditor$$MoveCursorToPosition
ENTRY_POINT: 06944c48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_TextEditor__MoveCursorToPosition(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  lVar7 = *(long *)(unaff_x22 + 0x10);
  *(int *)(unaff_x22 + 0x1c) = in_w10 + 1;
  if (lVar7 != 0) {
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = unaff_x23;
    }
    else {
      FUN_042e4a64();
    }
    *(long *)(unaff_x21 + 0x28) = unaff_x22;
    if (unaff_x20 != 0) {
      lVar7 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar2 = *(uint *)(unaff_x20 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
          *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = unaff_x21;
        }
        else {
          FUN_042e4a64();
        }
        lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
        FUN_05971910(lVar7,0);
        puVar4 = PTR_DAT_07137b40;
        puVar3 = PTR_DAT_070f4598;
        if (lVar7 != 0) {
          uVar5 = *unaff_x24;
          *(undefined4 *)(lVar7 + 0x18) = 0;
          uVar9 = *(undefined8 *)puVar4;
          *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)puVar3;
          *(undefined8 *)(lVar7 + 0x20) = uVar9;
          lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (uVar5);
          FUN_042e4268(lVar6,*unaff_x29);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + 0x10);
            uVar5 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
            lVar10 = *unaff_x25;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
              }
              else {
                FUN_042e4a64(lVar6,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              puVar3 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
              *(long *)(lVar7 + 0x30) = lVar6;
              lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)puVar3);
              FUN_042e4268(lVar6,*unaff_x28);
              lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo)
              ;
              FUN_05971910(lVar8,0);
              if (lVar8 != 0) {
                uVar5 = *(undefined8 *)
                         UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass13_0_TypeInfo
                ;
                *(undefined8 *)(lVar8 + 0x10) =
                     *(undefined8 *)
                      UnityEngine_UIElements_FontDefinition_PropertyBag_FontProperty_TypeInfo;
                *(undefined8 *)(lVar8 + 0x18) = uVar5;
                if (lVar6 != 0) {
                  lVar10 = *(long *)(lVar6 + 0x10);
                  lVar11 = *unaff_x26;
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar2 = *(uint *)(lVar6 + 0x18);
                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                    }
                    else {
                      FUN_042e4a64(lVar6,lVar8,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar1 = *(int *)(unaff_x20 + 0x1c);
                    lVar8 = *(long *)(unaff_x20 + 0x10);
                    *(long *)(lVar7 + 0x28) = lVar6;
                    *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                    if (lVar8 != 0) {
                      uVar2 = *(uint *)(unaff_x20 + 0x18);
                      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                        *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
                      }
                      else {
                        FUN_042e4a64();
                      }
                      lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                        (*(undefined8 *)
                                          System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
                      FUN_05971910(lVar7,0);
                      if (lVar7 != 0) {
                        uVar5 = *unaff_x24;
                        uVar9 = *(undefined8 *)
                                 UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                        ;
                        *(undefined8 *)(lVar7 + 0x10) =
                             *(undefined8 *)
                              UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                        ;
                        *(undefined8 *)(lVar7 + 0x20) = uVar9;
                        *(undefined4 *)(lVar7 + 0x18) = 3;
                        lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (uVar5);
                        FUN_042e4268(lVar6,*unaff_x29);
                        if (lVar6 != 0) {
                          lVar8 = *(long *)(lVar6 + 0x10);
                          uVar5 = *(undefined8 *)
                                   System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                          ;
                          lVar10 = *unaff_x25;
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          if (lVar8 != 0) {
                            uVar2 = *(uint *)(lVar6 + 0x18);
                            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                              *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
                            }
                            else {
                              FUN_042e4a64(lVar6,uVar5,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                            }
                            puVar3 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                            *(long *)(lVar7 + 0x30) = lVar6;
                            lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                              (*(undefined8 *)puVar3);
                            FUN_042e4268(lVar6,*unaff_x28);
                            lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                              (*(undefined8 *)
                                                System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo)
                            ;
                            FUN_05971910(lVar8,0);
                            if (lVar8 != 0) {
                              uVar5 = *(undefined8 *)
                                       Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                              ;
                              *(undefined8 *)(lVar8 + 0x10) =
                                   *(undefined8 *)
                                    UnityEngine_UIElements_FontDefinition_PropertyBag_FontProperty_TypeInfo
                              ;
                              *(undefined8 *)(lVar8 + 0x18) = uVar5;
                              if (lVar6 != 0) {
                                lVar10 = *(long *)(lVar6 + 0x10);
                                lVar11 = *unaff_x26;
                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                if (lVar10 != 0) {
                                  uVar2 = *(uint *)(lVar6 + 0x18);
                                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                    *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                                  }
                                  else {
                                    FUN_042e4a64(lVar6,lVar8,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  iVar1 = *(int *)(unaff_x20 + 0x1c);
                                  lVar8 = *(long *)(unaff_x20 + 0x10);
                                  *(long *)(lVar7 + 0x28) = lVar6;
                                  *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                                  if (lVar8 != 0) {
                                    uVar2 = *(uint *)(unaff_x20 + 0x18);
                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
                                    }
                                    else {
                                      FUN_042e4a64();
                                    }
                                    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                      (*(undefined8 *)
                                                                                                                
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                    FUN_05971910(lVar7,0);
                                    if (lVar7 != 0) {
                                      uVar5 = *unaff_x24;
                                      uVar9 = *(undefined8 *)
                                               UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar7 + 0x10) =
                                           *(undefined8 *)PTR_DAT_071048a0;
                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                      *(undefined4 *)(lVar7 + 0x18) = 3;
                                      lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                        (uVar5);
                                      FUN_042e4268(lVar6,*unaff_x29);
                                      if (lVar6 != 0) {
                                        lVar8 = *(long *)(lVar6 + 0x10);
                                        uVar5 = *(undefined8 *)
                                                 System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                        ;
                                        lVar10 = *unaff_x25;
                                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar2 = *(uint *)(lVar6 + 0x18);
                                          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                            *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) =
                                                 uVar5;
                                          }
                                          else {
                                            FUN_042e4a64(lVar6,uVar5,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          puVar3 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                          *(long *)(lVar7 + 0x30) = lVar6;
                                          lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                          FUN_042e4268(lVar6,*unaff_x28);
                                          lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                          FUN_05971910(lVar8,0);
                                          if (lVar8 != 0) {
                                            uVar5 = *(undefined8 *)
                                                                                                          
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                            ;
                                            *(undefined8 *)(lVar8 + 0x10) =
                                                 *(undefined8 *)
                                                  UnityEngine_UIElements_FontDefinition_PropertyBag_FontProperty_TypeInfo
                                            ;
                                            *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                            if (lVar6 != 0) {
                                              lVar10 = *(long *)(lVar6 + 0x10);
                                              lVar11 = *unaff_x26;
                                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                              if (lVar10 != 0) {
                                                uVar2 = *(uint *)(lVar6 + 0x18);
                                                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                  *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                       lVar8;
                                                }
                                                else {
                                                  FUN_042e4a64(lVar6,lVar8,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar11 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                iVar1 = *(int *)(unaff_x20 + 0x1c);
                                                lVar8 = *(long *)(unaff_x20 + 0x10);
                                                *(long *)(lVar7 + 0x28) = lVar6;
                                                *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                                                if (lVar8 != 0) {
                                                  uVar2 = *(uint *)(unaff_x20 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                                    *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) =
                                                         lVar7;
                                                  }
                                                  else {
                                                    FUN_042e4a64();
                                                  }
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_05971910(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar5 = *unaff_x24;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar7 + 0x18) = 4;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar5);
                                                  FUN_042e4268(lVar6,*unaff_x29);
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  lVar10 = *unaff_x25;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar5
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar7 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar6,*unaff_x28);
                                                  lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_05971910(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_FontDefinition_PropertyBag_FontProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x20 + 0x1c);
                                                  lVar8 = *(long *)(unaff_x20 + 0x10);
                                                  *(long *)(lVar7 + 0x28) = lVar6;
                                                  *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                                    FUN_06938d58();
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


