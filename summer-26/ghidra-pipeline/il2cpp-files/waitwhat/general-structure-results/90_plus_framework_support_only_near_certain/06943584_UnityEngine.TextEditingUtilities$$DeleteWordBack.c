/*
FUNCTION_NAME: UnityEngine.TextEditingUtilities$$DeleteWordBack
ENTRY_POINT: 06943584
PROGRAM: waitwhat-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_file_logging_hits_6;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_7
*/


void UnityEngine_TextEditingUtilities__DeleteWordBack(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  uVar3 = *unaff_x25;
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x22;
  lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_042e4268(lVar4,*unaff_x29);
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x24);
  FUN_05971910(lVar5,0);
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)
             UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo;
    *(undefined8 *)(lVar5 + 0x10) = *unaff_x28;
    *(undefined8 *)(lVar5 + 0x18) = uVar3;
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar8 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
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
                            (*unaff_x26);
          FUN_05971910(lVar4,0);
          if (lVar4 != 0) {
            uVar3 = *(undefined8 *)UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
            *(undefined8 *)(lVar4 + 0x10) =
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
            ;
            puVar2 = PTR_DAT_070c25e8;
            *(undefined8 *)(lVar4 + 0x20) = uVar3;
            *(undefined4 *)(lVar4 + 0x18) = 0;
            lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)puVar2);
            FUN_042e4268(lVar5,*unaff_x27);
            if (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x10);
              uVar3 = *(undefined8 *)OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo;
              lVar8 = *unaff_x19;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                }
                else {
                  FUN_042e4a64(lVar5,uVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                uVar3 = *unaff_x25;
                *(long *)(lVar4 + 0x30) = lVar5;
                lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (uVar3);
                FUN_042e4268(lVar5,*unaff_x29);
                lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*unaff_x24);
                FUN_05971910(lVar6,0);
                if (lVar6 != 0) {
                  uVar3 = *(undefined8 *)
                           System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo;
                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                  *(undefined8 *)(lVar6 + 0x18) = uVar3;
                  if (lVar5 != 0) {
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                      }
                      else {
                        FUN_042e4a64(lVar5,lVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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
                                          (*unaff_x26);
                        FUN_05971910(lVar4,0);
                        if (lVar4 != 0) {
                          uVar3 = *(undefined8 *)
                                   UnityEngine_Rendering_DebugUI_RenderingLayerField_<>c__DisplayClass5_0_TypeInfo
                          ;
                          *(undefined8 *)(lVar4 + 0x10) =
                               *(undefined8 *)
                                UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_NoInput_TypeInfo
                          ;
                          puVar2 = PTR_DAT_070c25e8;
                          *(undefined8 *)(lVar4 + 0x20) = uVar3;
                          *(undefined4 *)(lVar4 + 0x18) = 0;
                          lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                            (*(undefined8 *)puVar2);
                          FUN_042e4268(lVar5,*unaff_x27);
                          if (lVar5 != 0) {
                            lVar6 = *(long *)(lVar5 + 0x10);
                            uVar3 = *(undefined8 *)
                                     OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo;
                            lVar8 = *unaff_x19;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar6 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                              }
                              else {
                                FUN_042e4a64(lVar5,uVar3,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              uVar3 = *unaff_x25;
                              *(long *)(lVar4 + 0x30) = lVar5;
                              lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (uVar3);
                              FUN_042e4268(lVar5,*unaff_x29);
                              lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (*unaff_x24);
                              FUN_05971910(lVar6,0);
                              if (lVar6 != 0) {
                                uVar3 = *(undefined8 *)
                                         UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c__DisplayClass14_0_TypeInfo
                                ;
                                *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                *(undefined8 *)(lVar6 + 0x18) = uVar3;
                                if (lVar5 != 0) {
                                  lVar8 = *(long *)(lVar5 + 0x10);
                                  lVar9 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                                    }
                                    else {
                                      FUN_042e4a64(lVar5,lVar6,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
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
                                                        (*unaff_x26);
                                      FUN_05971910(lVar4,0);
                                      if (lVar4 != 0) {
                                        uVar3 = *(undefined8 *)
                                                 UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar4 + 0x10) =
                                             *(undefined8 *)
                                              UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                        ;
                                        puVar2 = PTR_DAT_070c25e8;
                                        *(undefined8 *)(lVar4 + 0x20) = uVar3;
                                        *(undefined4 *)(lVar4 + 0x18) = 3;
                                        lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                          (*(undefined8 *)puVar2);
                                        FUN_042e4268(lVar5,*unaff_x27);
                                        if (lVar5 != 0) {
                                          lVar6 = *(long *)(lVar5 + 0x10);
                                          uVar3 = *(undefined8 *)
                                                                                                      
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                          ;
                                          lVar8 = *unaff_x19;
                                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                          if (lVar6 != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar3;
                                            }
                                            else {
                                              FUN_042e4a64(lVar5,uVar3,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            uVar3 = *unaff_x25;
                                            *(long *)(lVar4 + 0x30) = lVar5;
                                            lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar3);
                                            FUN_042e4268(lVar5,*unaff_x29);
                                            lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                            FUN_05971910(lVar6,0);
                                            if (lVar6 != 0) {
                                              uVar3 = *(undefined8 *)
                                                                                                              
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                              *(undefined8 *)(lVar6 + 0x18) = uVar3;
                                              if (lVar5 != 0) {
                                                lVar8 = *(long *)(lVar5 + 0x10);
                                                lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                         lVar6;
                                                  }
                                                  else {
                                                    FUN_042e4a64(lVar5,lVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
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
                                                            (*unaff_x26);
                                                  FUN_05971910(lVar4,0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  puVar2 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar3;
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  lVar8 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar3);
                                                  FUN_042e4268(lVar5,*unaff_x29);
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  FUN_05971910(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar3;
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                            (*unaff_x26);
                                                  FUN_05971910(lVar4,0);
                                                  if (lVar4 != 0) {
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  puVar2 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar3;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar2);
                                                  FUN_042e4268(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  lVar8 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar5,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = *unaff_x25;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar3);
                                                  FUN_042e4268(lVar5,*unaff_x29);
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x24);
                                                  uVar3 = FUN_05971910(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar7;
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      uVar3 = FUN_042e4a64(lVar5,lVar6,
                                                                           *(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
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
                                                      uVar3 = FUN_042e4a64();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x20;
                                                    FUN_06938d58(uVar3,in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


