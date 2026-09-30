/*
FUNCTION_NAME: UnityEngine.ConfigurableJoint$$set_targetVelocity
ENTRY_POINT: 0695ad78
PROGRAM: waitwhat-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_5;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_6
*/


void UnityEngine_ConfigurableJoint__set_targetVelocity(void)

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
  
  FUN_042e4a64();
  uVar4 = *unaff_x25;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x23;
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar4);
  FUN_042e4268(lVar5,*unaff_x20);
  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x19);
                    /* try { // try from 0695ad9c to 06a5adab has its CatchHandler @ 0695add4 */
  FUN_06938f70(lVar6,0);
  if (lVar6 != 0) {
                    /* try { // try from 0695adac to 06a5adcf has its CatchHandler @ 0695ac80 */
    uVar4 = *(undefined8 *)
             System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_<>c__DisplayClass0_0_TypeInfo
    ;
    *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
    *(undefined8 *)(lVar6 + 0x18) = uVar4;
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
                    /* try { // try from 0695add0 to 06a5add3 has its CatchHandler @ 0695add8 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0695ad9c with catch @ 0695add4
                       try { // try from 0695add4 to 06a5adf3 has its CatchHandler @ 0695ac80 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0695add0 with catch @ 0695add8
                        */
      lVar8 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 0695adf4 to 06a5adf7 has its CatchHandler @ 0695ae10 */
                    /* try { // try from 0695adf8 to 06a5ae13 has its CatchHandler @ 0695ac80 */
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
            uVar4 = *(undefined8 *)UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
            *(undefined8 *)(lVar5 + 0x10) =
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
            ;
            puVar3 = PTR_DAT_070c25e8;
            *(undefined8 *)(lVar5 + 0x20) = uVar4;
            *(undefined4 *)(lVar5 + 0x18) = 0;
            lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)puVar3);
            FUN_042e4268(lVar6,*unaff_x26);
            puVar3 = PTR_DAT_070c2cb8;
            if (lVar6 != 0) {
              lVar7 = *(long *)(lVar6 + 0x10);
              uVar4 = *(undefined8 *)OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo;
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
                           System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo;
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
                                   UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                          ;
                          *(undefined8 *)(lVar5 + 0x10) =
                               *(undefined8 *)
                                UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                          ;
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
                                     System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                            ;
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
                                                 UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar5 + 0x10) =
                                             *(undefined8 *)PTR_DAT_071048a0;
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
                                                                                                      
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                          ;
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
                                                                                                              
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
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
                                                    lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
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
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar6,*unaff_x26);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar4
                                                      ;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
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
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
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


