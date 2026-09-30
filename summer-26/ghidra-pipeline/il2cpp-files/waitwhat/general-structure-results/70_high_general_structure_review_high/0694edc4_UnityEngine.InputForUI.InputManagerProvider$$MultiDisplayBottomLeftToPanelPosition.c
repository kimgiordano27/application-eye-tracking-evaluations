/*
FUNCTION_NAME: UnityEngine.InputForUI.InputManagerProvider$$MultiDisplayBottomLeftToPanelPosition
ENTRY_POINT: 0694edc4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_InputForUI_InputManagerProvider__MultiDisplayBottomLeftToPanelPosition(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x23;
  lVar6 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
    }
    else {
      FUN_042e4a64();
    }
    lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x25)
    ;
    FUN_06938f78(lVar6,0);
    if (lVar6 != 0) {
      uVar4 = *unaff_x27;
      uVar8 = *(undefined8 *)UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo;
      *(undefined8 *)(lVar6 + 0x10) =
           *(undefined8 *)
            UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo;
      *(undefined8 *)(lVar6 + 0x20) = uVar8;
      *(undefined4 *)(lVar6 + 0x18) = 3;
      lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar4);
      FUN_042e4268(lVar5,*unaff_x20);
      if (lVar5 != 0) {
        lVar7 = *(long *)(lVar5 + 0x10);
        uVar4 = *(undefined8 *)System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo;
        lVar9 = *unaff_x29;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          }
          else {
            FUN_042e4a64(lVar5,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          puVar2 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
          *(long *)(lVar6 + 0x30) = lVar5;
          lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)puVar2);
          FUN_042e4268(lVar5,*(undefined8 *)System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
          lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*unaff_x28);
          FUN_06938f70(lVar7,0);
          if (lVar7 != 0) {
            uVar4 = *(undefined8 *)
                     Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
            ;
            *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
            *(undefined8 *)(lVar7 + 0x18) = uVar4;
            if (lVar5 != 0) {
              lVar9 = *(long *)(lVar5 + 0x10);
              lVar10 = *unaff_x19;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
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
                *(long *)(lVar6 + 0x28) = lVar5;
                lVar5 = *(long *)(unaff_x21 + 0x10);
                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                if (lVar5 != 0) {
                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                  }
                  else {
                    FUN_042e4a64();
                  }
                  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*unaff_x25);
                  FUN_06938f78(lVar6,0);
                  if (lVar6 != 0) {
                    uVar4 = *unaff_x27;
                    uVar8 = *(undefined8 *)
                             UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo;
                    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_071048a0;
                    *(undefined8 *)(lVar6 + 0x20) = uVar8;
                    *(undefined4 *)(lVar6 + 0x18) = 3;
                    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                      (uVar4);
                    FUN_042e4268(lVar5,*unaff_x20);
                    if (lVar5 != 0) {
                      lVar7 = *(long *)(lVar5 + 0x10);
                      uVar4 = *(undefined8 *)
                               System_Collections_Generic_List<NetSyncSession>_TypeInfo;
                      lVar9 = *unaff_x29;
                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                        }
                        else {
                          FUN_042e4a64(lVar5,uVar4,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                        puVar2 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                        *(long *)(lVar6 + 0x30) = lVar5;
                        lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*(undefined8 *)puVar2);
                        FUN_042e4268(lVar5,*(undefined8 *)
                                            System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                        lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*unaff_x28);
                        FUN_06938f70(lVar7,0);
                        if (lVar7 != 0) {
                          uVar4 = *(undefined8 *)
                                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                          ;
                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                          *(undefined8 *)(lVar7 + 0x18) = uVar4;
                          if (lVar5 != 0) {
                            lVar9 = *(long *)(lVar5 + 0x10);
                            lVar10 = *unaff_x19;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                              }
                              else {
                                FUN_042e4a64(lVar5,lVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar6 + 0x28) = lVar5;
                              lVar5 = *(long *)(unaff_x21 + 0x10);
                              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                              if (lVar5 != 0) {
                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                  *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                                }
                                else {
                                  FUN_042e4a64();
                                }
                                lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                  (*unaff_x25);
                                FUN_06938f78(lVar6,0);
                                if (lVar6 != 0) {
                                  uVar4 = *unaff_x27;
                                  uVar8 = *(undefined8 *)
                                           UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                  ;
                                  *(undefined8 *)(lVar6 + 0x10) =
                                       *(undefined8 *)
                                        UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                  ;
                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                    (uVar4);
                                  FUN_042e4268(lVar5,*unaff_x20);
                                  if (lVar5 != 0) {
                                    lVar7 = *(long *)(lVar5 + 0x10);
                                    uVar4 = *(undefined8 *)
                                             UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                    lVar9 = *unaff_x29;
                                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                    if (lVar7 != 0) {
                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                        ;
                                      }
                                      else {
                                        FUN_042e4a64(lVar5,uVar4,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      puVar2 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                      *(long *)(lVar6 + 0x30) = lVar5;
                                      lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                        (*(undefined8 *)puVar2);
                                      FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                    
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                      lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                        (*unaff_x28);
                                      FUN_06938f70(lVar7,0);
                                      if (lVar7 != 0) {
                                        uVar4 = *(undefined8 *)
                                                 UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                        *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                        if (lVar5 != 0) {
                                          lVar9 = *(long *)(lVar5 + 0x10);
                                          lVar10 = *unaff_x19;
                                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                              *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7
                                              ;
                                            }
                                            else {
                                              FUN_042e4a64(lVar5,lVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar6 + 0x28) = lVar5;
                                            lVar5 = *(long *)(unaff_x21 + 0x10);
                                            *(int *)(unaff_x21 + 0x1c) =
                                                 *(int *)(unaff_x21 + 0x1c) + 1;
                                            if (lVar5 != 0) {
                                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                                              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) =
                                                     lVar6;
                                              }
                                              else {
                                                FUN_042e4a64();
                                              }
                                              lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x25);
                                              FUN_06938f78(lVar6,0);
                                              if (lVar6 != 0) {
                                                uVar4 = *unaff_x27;
                                                uVar8 = *(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_EqualityComparer_TypeInfo
                                                ;
                                                *(undefined8 *)(lVar6 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Fusion_Sockets_Stun_StunServers_StunServer_Pv4AddrEqualityComparer_TypeInfo
                                                ;
                                                *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                *(undefined4 *)(lVar6 + 0x18) = 1;
                                                lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar4);
                                                FUN_042e4268(lVar5,*unaff_x20);
                                                if (lVar5 != 0) {
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  uVar4 = *(undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_TextShadow_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x28);
                                                  FUN_06938f70(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_TimeValue_PropertyBag_ValueProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x25);
                                                  FUN_06938f78(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar4 = *unaff_x27;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_TransformOrigin_PropertyBag_ZProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_TextShadow_PropertyBag_ColorProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar4);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_TransformOrigin_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x28);
                                                  FUN_06938f70(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_StylePropertyName_PropertyBag_IdProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x25);
                                                  FUN_06938f78(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar4 = *unaff_x27;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  OVRHandTest_BoolMonitor_BoolGenerator_TypeInfo;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Specialized_ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar4);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                             OVRAnchor_Telemetry_Key_TypeInfo;
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar4;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,uVar4,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x28);
                                                  FUN_06938f70(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Fusion_Async_TaskManager_<>c__DisplayClass7_0_<<Run>b__0>d_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x25);
                                                  FUN_06938f78(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar4 = *unaff_x27;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c__DisplayClass43_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  OVRControllerTest_BoolMonitor_BoolGenerator_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar4);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Fusion_NetworkBehaviour_ChangeDetector_OnChangedPrevCallbackWrapper_TypeInfo
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x28);
                                                  FUN_06938f70(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_Translate_PropertyBag_ZProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x25);
                                                  FUN_06938f78(lVar6,0);
                                                  puVar3 = OVRAnchor_Tracker_AsyncLock_TypeInfo;
                                                  puVar2 = 
                                                  UnityEngine_InputSystem_InputControlScheme_MatchResult_Enumerator_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    uVar4 = *unaff_x27;
                                                    *(undefined4 *)(lVar6 + 0x18) = 0;
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar4);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleFontDefinitionProperty_<>c_TypeInfo
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x28);
                                                  FUN_06938f70(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x25);
                                                  FUN_06938f78(lVar6,0);
                                                  puVar3 = 
                                                  Fusion_NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration_<>O_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_<>c__DisplayClass32_0_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    uVar4 = *unaff_x27;
                                                    *(undefined4 *)(lVar6 + 0x18) = 0;
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar4);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Fusion_Photon_Realtime_MonoBehaviourEmpty_<>c__DisplayClass6_0_<<StartCoroutineAndDestroy>g__Routine_0>d_TypeInfo
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x28);
                                                  FUN_06938f70(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Fusion_Async_TaskManager_<>c__DisplayClass6_0_<<Service>b__0>d_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x25);
                                                  FUN_06938f78(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar4 = *unaff_x27;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_TimeValue_PropertyBag_UnitProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Fusion_Async_TaskManager_<>c__DisplayClass8_0_<<ContinueWhenAll>b__0>d_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar4);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_XR_Interaction_Toolkit_SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_0000176E_BurstDirectCall_TypeInfo
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x28);
                                                  FUN_06938f70(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_TextShadow_PropertyBag_BlurRadiusProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x25);
                                                  FUN_06938f78(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar4 = *unaff_x27;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_StylePropertyName_PropertyBag_NameProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_0000176E_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar4);
                                                  FUN_042e4268(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  System_IO_Stream_SynchronousAsyncResult_<>c_TypeInfo
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x28);
                                                  FUN_06938f70(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_TransformOrigin_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x21;
                                                    FUN_06938d58(in_stack_00000000,in_stack_00000008
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


