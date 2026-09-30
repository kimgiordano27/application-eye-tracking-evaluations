/*
FUNCTION_NAME: FUN_06948068
ENTRY_POINT: 06948068
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void FUN_06948068(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  puVar2 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x22;
  lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_042e4268(lVar4,*(undefined8 *)System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x27);
  FUN_05971910(lVar5,0);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_<>c_TypeInfo;
    *(undefined8 *)(lVar5 + 0x10) = *unaff_x25;
    *(undefined8 *)(lVar5 + 0x18) = uVar6;
    if (lVar4 != 0) {
      lVar7 = *(long *)(lVar4 + 0x10);
      lVar8 = *unaff_x29;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
        }
        else {
          FUN_042e4a64(lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(unaff_x21 + 0x28) = lVar4;
        lVar4 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
          }
          else {
            FUN_042e4a64();
          }
          lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*unaff_x24);
          FUN_05971910(lVar4,0);
          if (lVar4 != 0) {
            uVar6 = *unaff_x26;
            uVar9 = *(undefined8 *)
                     UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo;
            *(undefined8 *)(lVar4 + 0x10) =
                 *(undefined8 *)
                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo;
            *(undefined8 *)(lVar4 + 0x20) = uVar9;
            *(undefined4 *)(lVar4 + 0x18) = 3;
            lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (uVar6);
            FUN_042e4268(lVar5,*unaff_x19);
            if (lVar5 != 0) {
              lVar7 = *(long *)(lVar5 + 0x10);
              uVar6 = *(undefined8 *)
                       System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo;
              lVar8 = *unaff_x28;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                }
                else {
                  FUN_042e4a64(lVar5,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                puVar2 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                *(long *)(lVar4 + 0x30) = lVar5;
                lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*(undefined8 *)puVar2);
                FUN_042e4268(lVar5,*(undefined8 *)System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*unaff_x27);
                FUN_05971910(lVar7,0);
                if (lVar7 != 0) {
                  uVar6 = *(undefined8 *)
                           Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                  ;
                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                  if (lVar5 != 0) {
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar10 = *unaff_x29;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                      }
                      else {
                        FUN_042e4a64(lVar5,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar4 + 0x28) = lVar5;
                      lVar5 = *(long *)(unaff_x20 + 0x10);
                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                      if (lVar5 != 0) {
                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                          *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
                        }
                        else {
                          FUN_042e4a64();
                        }
                        lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*unaff_x24);
                        FUN_05971910(lVar4,0);
                        if (lVar4 != 0) {
                          uVar6 = *unaff_x26;
                          uVar9 = *(undefined8 *)
                                   UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                          ;
                          *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_071048a0;
                          *(undefined8 *)(lVar4 + 0x20) = uVar9;
                          *(undefined4 *)(lVar4 + 0x18) = 3;
                          lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                            (uVar6);
                          FUN_042e4268(lVar5,*unaff_x19);
                          if (lVar5 != 0) {
                            lVar7 = *(long *)(lVar5 + 0x10);
                            uVar6 = *(undefined8 *)
                                     System_Collections_Generic_List<NetSyncSession>_TypeInfo;
                            lVar8 = *unaff_x28;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                              }
                              else {
                                FUN_042e4a64(lVar5,uVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              puVar2 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                              *(long *)(lVar4 + 0x30) = lVar5;
                              lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (*(undefined8 *)puVar2);
                              FUN_042e4268(lVar5,*(undefined8 *)
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                              lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (*unaff_x27);
                              FUN_05971910(lVar7,0);
                              if (lVar7 != 0) {
                                uVar6 = *(undefined8 *)
                                         UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                ;
                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                if (lVar5 != 0) {
                                  lVar8 = *(long *)(lVar5 + 0x10);
                                  lVar10 = *unaff_x29;
                                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                                    }
                                    else {
                                      FUN_042e4a64(lVar5,lVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar4 + 0x28) = lVar5;
                                    lVar5 = *(long *)(unaff_x20 + 0x10);
                                    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                    if (lVar5 != 0) {
                                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                                      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
                                      }
                                      else {
                                        FUN_042e4a64();
                                      }
                                      lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                        (*unaff_x24);
                                      FUN_05971910(lVar4,0);
                                      if (lVar4 != 0) {
                                        uVar6 = *unaff_x26;
                                        uVar9 = *(undefined8 *)
                                                 UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar4 + 0x10) =
                                             *(undefined8 *)
                                              UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                        *(undefined4 *)(lVar4 + 0x18) = 4;
                                        lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                          (uVar6);
                                        FUN_042e4268(lVar5,*unaff_x19);
                                        if (lVar5 != 0) {
                                          lVar7 = *(long *)(lVar5 + 0x10);
                                          uVar6 = *(undefined8 *)
                                                   UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                          lVar8 = *unaff_x28;
                                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar6;
                                            }
                                            else {
                                              FUN_042e4a64(lVar5,uVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            puVar2 = 
                                            System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                            *(long *)(lVar4 + 0x30) = lVar5;
                                            lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                            FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                            lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                            FUN_05971910(lVar7,0);
                                            if (lVar7 != 0) {
                                              uVar6 = *(undefined8 *)
                                                                                                              
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                              *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                              if (lVar5 != 0) {
                                                lVar8 = *(long *)(lVar5 + 0x10);
                                                lVar10 = *unaff_x29;
                                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                         lVar7;
                                                  }
                                                  else {
                                                    FUN_042e4a64(lVar5,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar4;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar4 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar4,0);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *unaff_x26;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleLengthProperty_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar5,*unaff_x19);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_Length_PropertyBag_UnitProperty_TypeInfo
                                                  ;
                                                  lVar8 = *unaff_x28;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Fusion_NetworkSpawnOp_Awaiter_<>c__DisplayClass5_1_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar4;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar4 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar4,0);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *unaff_x26;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVRHandTest_BoolMonitor_BoolGenerator_TypeInfo;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Specialized_ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar5,*unaff_x19);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                             OVRAnchor_Telemetry_Key_TypeInfo;
                                                    lVar8 = *unaff_x28;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Oculus_Interaction_InteractorControllerDecorator_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar4;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar4 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar4,0);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *unaff_x26;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c__DisplayClass43_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVRControllerTest_BoolMonitor_BoolGenerator_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar5,*unaff_x19);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Fusion_NetworkBehaviour_ChangeDetector_OnChangedPrevCallbackWrapper_TypeInfo
                                                  ;
                                                  lVar8 = *unaff_x28;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Newtonsoft_Json_Linq_JProperty_JPropertyList_<GetEnumerator>d__1_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar4;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar4 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar4,0);
                                                  puVar3 = OVRAnchor_Tracker_AsyncLock_TypeInfo;
                                                  puVar2 = 
                                                  UnityEngine_InputSystem_InputControlScheme_MatchResult_Enumerator_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    uVar6 = *unaff_x26;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar5,*unaff_x19);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty_<>c_TypeInfo
                                                  ;
                                                  lVar8 = *unaff_x28;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  FUN_05971910(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar4;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar4 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar4,0);
                                                  puVar3 = 
                                                  Fusion_NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration_<>O_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_<>c__DisplayClass32_0_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    uVar6 = *unaff_x26;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar6);
                                                  FUN_042e4268(lVar5,*unaff_x19);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Fusion_Photon_Realtime_MonoBehaviourEmpty_<>c__DisplayClass6_0_<<StartCoroutineAndDestroy>g__Routine_0>d_TypeInfo
                                                  ;
                                                  lVar8 = *unaff_x28;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x27);
                                                  uVar6 = FUN_05971910(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputForUI_KeyEvent_ButtonsState_<GetAllPressed>d__8_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar9;
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        uVar6 = FUN_042e4a64(lVar5,lVar7,
                                                                             *(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar4;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


