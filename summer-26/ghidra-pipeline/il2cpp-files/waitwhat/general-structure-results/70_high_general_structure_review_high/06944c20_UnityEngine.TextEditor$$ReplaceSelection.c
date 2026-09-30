/*
FUNCTION_NAME: UnityEngine.TextEditor$$ReplaceSelection
ENTRY_POINT: 06944c20
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void UnityEngine_TextEditor__ReplaceSelection(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  uVar7 = **(undefined8 **)(param_1 + 0x4b8);
  *(undefined8 *)(unaff_x23 + 0x10) =
       *(undefined8 *)UnityEngine_UIElements_FontDefinition_PropertyBag_FontProperty_TypeInfo;
  *(undefined8 *)(unaff_x23 + 0x18) = uVar7;
  puVar5 = System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
  if (unaff_x22 != 0) {
    lVar8 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = unaff_x23;
      }
      else {
        FUN_042e4a64();
      }
      *(long *)(unaff_x21 + 0x28) = unaff_x22;
      if (unaff_x20 != 0) {
        lVar8 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar2 = *(uint *)(unaff_x20 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
            *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = unaff_x21;
          }
          else {
            FUN_042e4a64();
          }
          lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
          FUN_05971910(lVar8,0);
          puVar4 = PTR_DAT_07137b40;
          puVar3 = PTR_DAT_070f4598;
          if (lVar8 != 0) {
            uVar7 = *unaff_x24;
            *(undefined4 *)(lVar8 + 0x18) = 0;
            uVar10 = *(undefined8 *)puVar4;
            *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)puVar3;
            *(undefined8 *)(lVar8 + 0x20) = uVar10;
            lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (uVar7);
            FUN_042e4268(lVar6,*unaff_x29);
            if (lVar6 != 0) {
              lVar9 = *(long *)(lVar6 + 0x10);
              uVar7 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
              lVar11 = *unaff_x25;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
                }
                else {
                  FUN_042e4a64(lVar6,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                puVar3 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                *(long *)(lVar8 + 0x30) = lVar6;
                lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*(undefined8 *)puVar3);
                FUN_042e4268(lVar6,*unaff_x28);
                lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*(undefined8 *)
                                    System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
                FUN_05971910(lVar9,0);
                if (lVar9 != 0) {
                  uVar7 = *(undefined8 *)
                           UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass13_0_TypeInfo
                  ;
                  *(undefined8 *)(lVar9 + 0x10) =
                       *(undefined8 *)
                        UnityEngine_UIElements_FontDefinition_PropertyBag_FontProperty_TypeInfo;
                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                  if (lVar6 != 0) {
                    lVar11 = *(long *)(lVar6 + 0x10);
                    lVar12 = *(long *)puVar5;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar2 = *(uint *)(lVar6 + 0x18);
                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                        *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                      }
                      else {
                        FUN_042e4a64(lVar6,lVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar1 = *(int *)(unaff_x20 + 0x1c);
                      lVar9 = *(long *)(unaff_x20 + 0x10);
                      *(long *)(lVar8 + 0x28) = lVar6;
                      *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                      if (lVar9 != 0) {
                        uVar2 = *(uint *)(unaff_x20 + 0x18);
                        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                          *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                        }
                        else {
                          FUN_042e4a64();
                        }
                        lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*(undefined8 *)
                                            System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
                        FUN_05971910(lVar8,0);
                        if (lVar8 != 0) {
                          uVar7 = *unaff_x24;
                          uVar10 = *(undefined8 *)
                                    UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                          ;
                          *(undefined8 *)(lVar8 + 0x10) =
                               *(undefined8 *)
                                UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                          ;
                          *(undefined8 *)(lVar8 + 0x20) = uVar10;
                          *(undefined4 *)(lVar8 + 0x18) = 3;
                          lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                            (uVar7);
                          FUN_042e4268(lVar6,*unaff_x29);
                          if (lVar6 != 0) {
                            lVar9 = *(long *)(lVar6 + 0x10);
                            uVar7 = *(undefined8 *)
                                     System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                            ;
                            lVar11 = *unaff_x25;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar2 = *(uint *)(lVar6 + 0x18);
                              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
                              }
                              else {
                                FUN_042e4a64(lVar6,uVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                              }
                              puVar3 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                              *(long *)(lVar8 + 0x30) = lVar6;
                              lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (*(undefined8 *)puVar3);
                              FUN_042e4268(lVar6,*unaff_x28);
                              lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (*(undefined8 *)
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                );
                              FUN_05971910(lVar9,0);
                              if (lVar9 != 0) {
                                uVar7 = *(undefined8 *)
                                         Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                ;
                                *(undefined8 *)(lVar9 + 0x10) =
                                     *(undefined8 *)
                                      UnityEngine_UIElements_FontDefinition_PropertyBag_FontProperty_TypeInfo
                                ;
                                *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                if (lVar6 != 0) {
                                  lVar11 = *(long *)(lVar6 + 0x10);
                                  lVar12 = *(long *)puVar5;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar11 != 0) {
                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                      *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                                    }
                                    else {
                                      FUN_042e4a64(lVar6,lVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    iVar1 = *(int *)(unaff_x20 + 0x1c);
                                    lVar9 = *(long *)(unaff_x20 + 0x10);
                                    *(long *)(lVar8 + 0x28) = lVar6;
                                    *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                                    if (lVar9 != 0) {
                                      uVar2 = *(uint *)(unaff_x20 + 0x18);
                                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                        *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                                      }
                                      else {
                                        FUN_042e4a64();
                                      }
                                      lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                        (*(undefined8 *)
                                                                                                                    
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                      FUN_05971910(lVar8,0);
                                      if (lVar8 != 0) {
                                        uVar7 = *unaff_x24;
                                        uVar10 = *(undefined8 *)
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar8 + 0x10) =
                                             *(undefined8 *)PTR_DAT_071048a0;
                                        *(undefined8 *)(lVar8 + 0x20) = uVar10;
                                        *(undefined4 *)(lVar8 + 0x18) = 3;
                                        lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                          (uVar7);
                                        FUN_042e4268(lVar6,*unaff_x29);
                                        if (lVar6 != 0) {
                                          lVar9 = *(long *)(lVar6 + 0x10);
                                          uVar7 = *(undefined8 *)
                                                                                                      
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                          ;
                                          lVar11 = *unaff_x25;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar2 = *(uint *)(lVar6 + 0x18);
                                            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) =
                                                   uVar7;
                                            }
                                            else {
                                              FUN_042e4a64(lVar6,uVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            puVar3 = 
                                            System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                            *(long *)(lVar8 + 0x30) = lVar6;
                                            lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                            FUN_042e4268(lVar6,*unaff_x28);
                                            lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                            FUN_05971910(lVar9,0);
                                            if (lVar9 != 0) {
                                              uVar7 = *(undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar9 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_UIElements_FontDefinition_PropertyBag_FontProperty_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                              if (lVar6 != 0) {
                                                lVar11 = *(long *)(lVar6 + 0x10);
                                                lVar12 = *(long *)puVar5;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar11 != 0) {
                                                  uVar2 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                    *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20)
                                                         = lVar9;
                                                  }
                                                  else {
                                                    FUN_042e4a64(lVar6,lVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x20 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x20 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_05971910(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *unaff_x24;
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar8 + 0x18) = 4;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x29);
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  lVar11 = *unaff_x25;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar6,*unaff_x28);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_05971910(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_FontDefinition_PropertyBag_FontProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar5;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x20 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x20 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


