/*
FUNCTION_NAME: UnityEngine.ConfigurableJoint$$set_targetVelocity_Injected
ENTRY_POINT: 0695ae08
PROGRAM: waitwhat-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_file_logging_hits_4;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_ConfigurableJoint__set_targetVelocity_Injected(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
                    /* catch() { ... } // from try @ 0695adf4 with catch @ 0695ae10 */
                    /* try { // try from 0695ae14 to 06a5ae1b has its CatchHandler @ 0695ae24 */
                    /* try { // try from 0695ae1c to 06a5ae27 has its CatchHandler @ 0695ac80 */
  FUN_042e4a64();
  iVar1 = *(int *)(unaff_x21 + 0x1c);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0695ae14 with catch @ 0695ae24
                        */
  lVar5 = *(long *)(unaff_x21 + 0x10);
                    /* try { // try from 0695ae28 to 06a5aefb has its CatchHandler @ 0695ae28
                       catch() { ... } // from try @ 0695ae28 with catch @ 0695ae28
                       catch() { ... } // from try @ 0695af5c with catch @ 0695ae28
                       catch() { ... } // from try @ 0695af8c with catch @ 0695ae28
                       catch() { ... } // from try @ 0695afbc with catch @ 0695ae28
                       catch() { ... } // from try @ 0695afe0 with catch @ 0695ae28 */
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x23;
  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
  if (lVar5 != 0) {
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
    }
    else {
      FUN_042e4a64();
    }
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x29)
    ;
    FUN_06938f78(lVar5,0);
    if (lVar5 != 0) {
      uVar8 = *(undefined8 *)UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
      *(undefined8 *)(lVar5 + 0x10) =
           *(undefined8 *)
            System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
      ;
      puVar3 = PTR_DAT_070c25e8;
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      *(undefined4 *)(lVar5 + 0x18) = 0;
      lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar3);
      FUN_042e4268(lVar4,*unaff_x26);
      puVar3 = PTR_DAT_070c2cb8;
      if (lVar4 != 0) {
        lVar6 = *(long *)(lVar4 + 0x10);
        uVar8 = *(undefined8 *)OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar2 = *(uint *)(lVar4 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_042e4a64(lVar4,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70)
                        );
          }
          uVar8 = *unaff_x25;
          *(long *)(lVar5 + 0x30) = lVar4;
          lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (uVar8);
          FUN_042e4268(lVar4,*unaff_x20);
          lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*unaff_x19);
          FUN_06938f70(lVar6,0);
          if (lVar6 != 0) {
            uVar8 = *(undefined8 *)
                     System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo;
            *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
            *(undefined8 *)(lVar6 + 0x18) = uVar8;
            if (lVar4 != 0) {
              lVar7 = *(long *)(lVar4 + 0x10);
              lVar9 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar2 = *(uint *)(lVar4 + 0x18);
                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                  *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
                }
                else {
                  FUN_042e4a64(lVar4,lVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                iVar1 = *(int *)(unaff_x21 + 0x1c);
                lVar6 = *(long *)(unaff_x21 + 0x10);
                *(long *)(lVar5 + 0x28) = lVar4;
                *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                if (lVar6 != 0) {
                  uVar2 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                    *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                  }
                  else {
                    FUN_042e4a64();
                  }
                  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*unaff_x29);
                  FUN_06938f78(lVar5,0);
                  if (lVar5 != 0) {
                    uVar8 = *(undefined8 *)
                             UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo;
                    *(undefined8 *)(lVar5 + 0x10) =
                         *(undefined8 *)
                          UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                    ;
                    puVar3 = PTR_DAT_070c25e8;
                    *(undefined8 *)(lVar5 + 0x20) = uVar8;
                    *(undefined4 *)(lVar5 + 0x18) = 3;
                    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                      (*(undefined8 *)puVar3);
                    FUN_042e4268(lVar4,*unaff_x26);
                    puVar3 = PTR_DAT_070c2cb8;
                    if (lVar4 != 0) {
                      lVar6 = *(long *)(lVar4 + 0x10);
                      uVar8 = *(undefined8 *)
                               System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo;
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar6 != 0) {
                        uVar2 = *(uint *)(lVar4 + 0x18);
                        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                          *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                        }
                        else {
                          FUN_042e4a64(lVar4,uVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        uVar8 = *unaff_x25;
                        *(long *)(lVar5 + 0x30) = lVar4;
                        lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (uVar8);
                        FUN_042e4268(lVar4,*unaff_x20);
                        lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*unaff_x19);
                        FUN_06938f70(lVar6,0);
                        if (lVar6 != 0) {
                          uVar8 = *(undefined8 *)
                                   Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                          ;
                          *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                          *(undefined8 *)(lVar6 + 0x18) = uVar8;
                          if (lVar4 != 0) {
                            lVar7 = *(long *)(lVar4 + 0x10);
                            lVar9 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar2 = *(uint *)(lVar4 + 0x18);
                              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
                              }
                              else {
                                FUN_042e4a64(lVar4,lVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              iVar1 = *(int *)(unaff_x21 + 0x1c);
                              lVar6 = *(long *)(unaff_x21 + 0x10);
                              *(long *)(lVar5 + 0x28) = lVar4;
                              *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                              if (lVar6 != 0) {
                                uVar2 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                  *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                                }
                                else {
                                  FUN_042e4a64();
                                }
                                lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                  (*unaff_x29);
                                FUN_06938f78(lVar5,0);
                                if (lVar5 != 0) {
                                  uVar8 = *(undefined8 *)
                                           UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                  ;
                                  *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)PTR_DAT_071048a0;
                                  puVar3 = PTR_DAT_070c25e8;
                                  *(undefined8 *)(lVar5 + 0x20) = uVar8;
                                  *(undefined4 *)(lVar5 + 0x18) = 3;
                                  lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                    (*(undefined8 *)puVar3);
                                  FUN_042e4268(lVar4,*unaff_x26);
                                  puVar3 = PTR_DAT_070c2cb8;
                                  if (lVar4 != 0) {
                                    lVar6 = *(long *)(lVar4 + 0x10);
                                    uVar8 = *(undefined8 *)
                                             System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                    ;
                                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    if (lVar6 != 0) {
                                      uVar2 = *(uint *)(lVar4 + 0x18);
                                      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                        *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                        ;
                                      }
                                      else {
                                        FUN_042e4a64(lVar4,uVar8,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(*(long *)puVar3 + 0x20) +
                                                                0xc0) + 0x70));
                                      }
                                      uVar8 = *unaff_x25;
                                      *(long *)(lVar5 + 0x30) = lVar4;
                                      lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                        (uVar8);
                                      FUN_042e4268(lVar4,*unaff_x20);
                                      lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                        (*unaff_x19);
                                      FUN_06938f70(lVar6,0);
                                      if (lVar6 != 0) {
                                        uVar8 = *(undefined8 *)
                                                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                        *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                        if (lVar4 != 0) {
                                          lVar7 = *(long *)(lVar4 + 0x10);
                                          lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar2 = *(uint *)(lVar4 + 0x18);
                                            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar6
                                              ;
                                            }
                                            else {
                                              FUN_042e4a64(lVar4,lVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            iVar1 = *(int *)(unaff_x21 + 0x1c);
                                            lVar6 = *(long *)(unaff_x21 + 0x10);
                                            *(long *)(lVar5 + 0x28) = lVar4;
                                            *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                            if (lVar6 != 0) {
                                              uVar2 = *(uint *)(unaff_x21 + 0x18);
                                              if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) =
                                                     lVar5;
                                              }
                                              else {
                                                FUN_042e4a64();
                                              }
                                              lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                              FUN_06938f78(lVar5,0);
                                              if (lVar5 != 0) {
                                                uVar8 = *(undefined8 *)
                                                                                                                  
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                ;
                                                *(undefined8 *)(lVar5 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                ;
                                                puVar3 = PTR_DAT_070c25e8;
                                                *(undefined8 *)(lVar5 + 0x20) = uVar8;
                                                *(undefined4 *)(lVar5 + 0x18) = 4;
                                                lVar4 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                FUN_042e4268(lVar4,*unaff_x26);
                                                puVar3 = PTR_DAT_070c2cb8;
                                                if (lVar4 != 0) {
                                                  lVar6 = *(long *)(lVar4 + 0x10);
                                                  uVar8 = *(undefined8 *)
                                                                                                                      
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar4,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x25;
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_042e4268(lVar4,*unaff_x20);
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar6 + 0x18) = uVar8;
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar4,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar5;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


