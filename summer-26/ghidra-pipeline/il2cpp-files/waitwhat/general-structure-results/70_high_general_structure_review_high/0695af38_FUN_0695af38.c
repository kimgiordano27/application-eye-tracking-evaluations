/*
FUNCTION_NAME: FUN_0695af38
ENTRY_POINT: 0695af38
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_4;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0695af38(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  
  uVar4 = *unaff_x25;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x23;
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar4);
                    /* try { // try from 0695af4c to 06a5af5b has its CatchHandler @ 0695af8c */
  FUN_042e4268(lVar5,*unaff_x20);
  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x19);
                    /* try { // try from 0695af5c to 06a5af7f has its CatchHandler @ 0695ae28 */
  FUN_06938f70(lVar6,0);
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo;
    *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
    *(undefined8 *)(lVar6 + 0x18) = uVar4;
    if (lVar5 != 0) {
                    /* try { // try from 0695af80 to 06a5af83 has its CatchHandler @ 0695af98 */
                    /* try { // try from 0695af84 to 06a5af87 has its CatchHandler @ 0695af94 */
                    /* try { // try from 0695af88 to 06a5af8b has its CatchHandler @ 0695af90 */
      lVar7 = *(long *)(lVar5 + 0x10);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0695af4c with catch @ 0695af8c
                       try { // try from 0695af8c to 06a5afb7 has its CatchHandler @ 0695ae28 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0695af88 with catch @ 0695af90
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0695af84 with catch @ 0695af94
                        */
      lVar8 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0695af80 with catch @ 0695af98
                        */
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0695aefc with catch @ 0695af9c
                        */
      if (lVar7 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
        }
        else {
          FUN_042e4a64(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        iVar1 = *(int *)(unaff_x21 + 0x1c);
        lVar6 = *(long *)(unaff_x21 + 0x10);
        *(long *)(unaff_x22 + 0x28) = lVar5;
        *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
        if (lVar6 != 0) {
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
            *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
          }
          else {
            FUN_042e4a64();
          }
          lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*unaff_x29);
          FUN_06938f78(lVar5,0);
          if (lVar5 != 0) {
            uVar4 = *(undefined8 *)
                     UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo;
            *(undefined8 *)(lVar5 + 0x10) =
                 *(undefined8 *)
                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo;
            puVar3 = PTR_DAT_070c25e8;
            *(undefined8 *)(lVar5 + 0x20) = uVar4;
            *(undefined4 *)(lVar5 + 0x18) = 3;
            lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)puVar3);
            FUN_042e4268(lVar6,*unaff_x26);
            puVar3 = PTR_DAT_070c2cb8;
            if (lVar6 != 0) {
              lVar7 = *(long *)(lVar6 + 0x10);
              uVar4 = *(undefined8 *)
                       System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar4;
                }
                else {
                  FUN_042e4a64(lVar6,uVar4,
                               *(undefined8 *)
                                (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
                }
                uVar4 = *unaff_x25;
                *(long *)(lVar5 + 0x30) = lVar6;
                lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (uVar4);
                FUN_042e4268(lVar6,*unaff_x20);
                lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*unaff_x19);
                FUN_06938f70(lVar7,0);
                if (lVar7 != 0) {
                  uVar4 = *(undefined8 *)
                           Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                  ;
                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                  *(undefined8 *)(lVar7 + 0x18) = uVar4;
                  if (lVar6 != 0) {
                    lVar8 = *(long *)(lVar6 + 0x10);
                    lVar9 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar2 = *(uint *)(lVar6 + 0x18);
                      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                        *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
                      }
                      else {
                        FUN_042e4a64(lVar6,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar1 = *(int *)(unaff_x21 + 0x1c);
                      lVar7 = *(long *)(unaff_x21 + 0x10);
                      *(long *)(lVar5 + 0x28) = lVar6;
                      *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                      if (lVar7 != 0) {
                        uVar2 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                          *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                        }
                        else {
                          FUN_042e4a64();
                        }
                        lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*unaff_x29);
                        FUN_06938f78(lVar5,0);
                        if (lVar5 != 0) {
                          uVar4 = *(undefined8 *)
                                   UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                          ;
                          *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)PTR_DAT_071048a0;
                          puVar3 = PTR_DAT_070c25e8;
                          *(undefined8 *)(lVar5 + 0x20) = uVar4;
                          *(undefined4 *)(lVar5 + 0x18) = 3;
                          lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                            (*(undefined8 *)puVar3);
                          FUN_042e4268(lVar6,*unaff_x26);
                          puVar3 = PTR_DAT_070c2cb8;
                          if (lVar6 != 0) {
                            lVar7 = *(long *)(lVar6 + 0x10);
                            uVar4 = *(undefined8 *)
                                     System_Collections_Generic_List<NetSyncSession>_TypeInfo;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar2 = *(uint *)(lVar6 + 0x18);
                              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar4;
                              }
                              else {
                                FUN_042e4a64(lVar6,uVar4,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) +
                                              0x70));
                              }
                              uVar4 = *unaff_x25;
                              *(long *)(lVar5 + 0x30) = lVar6;
                              lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (uVar4);
                              FUN_042e4268(lVar6,*unaff_x20);
                              lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (*unaff_x19);
                              FUN_06938f70(lVar7,0);
                              if (lVar7 != 0) {
                                uVar4 = *(undefined8 *)
                                         UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                ;
                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                if (lVar6 != 0) {
                                  lVar8 = *(long *)(lVar6 + 0x10);
                                  lVar9 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
                                    }
                                    else {
                                      FUN_042e4a64(lVar6,lVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    iVar1 = *(int *)(unaff_x21 + 0x1c);
                                    lVar7 = *(long *)(unaff_x21 + 0x10);
                                    *(long *)(lVar5 + 0x28) = lVar6;
                                    *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                    if (lVar7 != 0) {
                                      uVar2 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                        *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                                      }
                                      else {
                                        FUN_042e4a64();
                                      }
                                      lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                        (*unaff_x29);
                                      FUN_06938f78(lVar5,0);
                                      if (lVar5 != 0) {
                                        uVar4 = *(undefined8 *)
                                                 UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar5 + 0x10) =
                                             *(undefined8 *)
                                              UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                        ;
                                        puVar3 = PTR_DAT_070c25e8;
                                        *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                        *(undefined4 *)(lVar5 + 0x18) = 4;
                                        lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                          (*(undefined8 *)puVar3);
                                        FUN_042e4268(lVar6,*unaff_x26);
                                        puVar3 = PTR_DAT_070c2cb8;
                                        if (lVar6 != 0) {
                                          lVar7 = *(long *)(lVar6 + 0x10);
                                          uVar4 = *(undefined8 *)
                                                   UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar2 = *(uint *)(lVar6 + 0x18);
                                            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) =
                                                   uVar4;
                                            }
                                            else {
                                              FUN_042e4a64(lVar6,uVar4,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(*(long *)puVar3 +
                                                                                0x20) + 0xc0) + 0x70
                                                            ));
                                            }
                                            uVar4 = *unaff_x25;
                                            *(long *)(lVar5 + 0x30) = lVar6;
                                            lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar4);
                                            FUN_042e4268(lVar6,*unaff_x20);
                                            lVar7 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                            FUN_06938f70(lVar7,0);
                                            if (lVar7 != 0) {
                                              uVar4 = *(undefined8 *)
                                                                                                              
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                              *(undefined8 *)(lVar7 + 0x18) = uVar4;
                                              if (lVar6 != 0) {
                                                lVar8 = *(long *)(lVar6 + 0x10);
                                                lVar9 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar2 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                    *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) =
                                                         lVar7;
                                                  }
                                                  else {
                                                    FUN_042e4a64(lVar6,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20)
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


