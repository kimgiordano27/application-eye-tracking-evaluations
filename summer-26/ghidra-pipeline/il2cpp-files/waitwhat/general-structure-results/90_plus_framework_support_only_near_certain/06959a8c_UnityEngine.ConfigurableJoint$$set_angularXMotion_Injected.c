/*
FUNCTION_NAME: UnityEngine.ConfigurableJoint$$set_angularXMotion_Injected
ENTRY_POINT: 06959a8c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_15;telemetry_or_network_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_21
*/


void UnityEngine_ConfigurableJoint__set_angularXMotion_Injected(undefined8 *param_1)

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
  undefined8 in_x9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  uVar7 = *param_1;
  *(undefined8 *)(unaff_x24 + 0x10) = in_x9;
  *(undefined8 *)(unaff_x24 + 0x18) = uVar7;
  if (unaff_x23 != 0) {
    lVar8 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(unaff_x23 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
        *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = unaff_x24;
      }
      else {
        FUN_042e4a64();
      }
      iVar1 = *(int *)(unaff_x21 + 0x1c);
      lVar8 = *(long *)(unaff_x21 + 0x10);
      *(long *)(unaff_x22 + 0x28) = unaff_x23;
      *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
          *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
        }
        else {
          FUN_042e4a64();
        }
        lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*unaff_x29);
        FUN_06938f78(lVar8,0);
        puVar4 = PTR_DAT_0711dfd0;
        if (lVar8 != 0) {
          uVar7 = *(undefined8 *)PTR_DAT_0711dfd0;
          *(undefined8 *)(lVar8 + 0x10) =
               *(undefined8 *)
                System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
          ;
          puVar3 = PTR_DAT_070c25e8;
          *(undefined8 *)(lVar8 + 0x20) = uVar7;
          *(undefined4 *)(lVar8 + 0x18) = 1;
          lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)puVar3);
          FUN_042e4268(lVar6,*unaff_x26);
          if (lVar6 != 0) {
            lVar9 = *(long *)(lVar6 + 0x10);
            uVar7 = *(undefined8 *)puVar4;
            lVar10 = *(long *)PTR_DAT_070c2cb8;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
              }
              else {
                FUN_042e4a64(lVar6,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              uVar7 = *unaff_x25;
              *(long *)(lVar8 + 0x30) = lVar6;
              lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (uVar7);
              FUN_042e4268(lVar6,*unaff_x20);
              lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*unaff_x19);
              FUN_06938f70(lVar9,0);
              puVar4 = 
              UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
              ;
              if (lVar9 != 0) {
                uVar7 = *(undefined8 *)
                         UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                ;
                *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                *(undefined8 *)(lVar9 + 0x18) = uVar7;
                if (lVar6 != 0) {
                  lVar10 = *(long *)(lVar6 + 0x10);
                  lVar11 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar2 = *(uint *)(lVar6 + 0x18);
                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                    }
                    else {
                      FUN_042e4a64(lVar6,lVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar1 = *(int *)(unaff_x21 + 0x1c);
                    lVar9 = *(long *)(unaff_x21 + 0x10);
                    *(long *)(lVar8 + 0x28) = lVar6;
                    *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                    if (lVar9 != 0) {
                      uVar2 = *(uint *)(unaff_x21 + 0x18);
                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                        *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                      }
                      else {
                        FUN_042e4a64();
                      }
                      lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                        (*unaff_x29);
                      FUN_06938f78(lVar8,0);
                      if (lVar8 != 0) {
                        uVar7 = *(undefined8 *)
                                 UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_TypeInfo
                        ;
                        *(undefined8 *)(lVar8 + 0x10) =
                             *(undefined8 *)
                              System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
                        ;
                        puVar3 = PTR_DAT_070c25e8;
                        *(undefined8 *)(lVar8 + 0x20) = uVar7;
                        *(undefined4 *)(lVar8 + 0x18) = 0;
                        lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*(undefined8 *)puVar3);
                        FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8);
                        puVar3 = PTR_DAT_070c2cb8;
                        if (lVar6 != 0) {
                          lVar9 = *(long *)(lVar6 + 0x10);
                          uVar7 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo;
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
                                            (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) +
                                            0x70));
                            }
                            uVar7 = *unaff_x25;
                            *(long *)(lVar8 + 0x30) = lVar6;
                            lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                              (uVar7);
                            FUN_042e4268(lVar6,*unaff_x20);
                            lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                              (*unaff_x19);
                            FUN_06938f70(lVar9,0);
                            if (lVar9 != 0) {
                              uVar7 = *(undefined8 *)puVar4;
                              *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                              *(undefined8 *)(lVar9 + 0x18) = uVar7;
                              puVar4 = System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                              if (lVar6 != 0) {
                                lVar10 = *(long *)(lVar6 + 0x10);
                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                puVar3 = PTR_DAT_070c25c8;
                                if (lVar10 != 0) {
                                  uVar2 = *(uint *)(lVar6 + 0x18);
                                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                    *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                                  }
                                  else {
                                    FUN_042e4a64(lVar6,lVar9,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)puVar4 + 0x20) +
                                                            0xc0) + 0x70));
                                  }
                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                  *(long *)(lVar8 + 0x28) = lVar6;
                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                  if (lVar9 != 0) {
                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                                    }
                                    else {
                                      FUN_042e4a64();
                                    }
                                    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                      (*unaff_x29);
                                    FUN_06938f78(lVar8,0);
                                    if (lVar8 != 0) {
                                      uVar7 = *(undefined8 *)
                                               UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_000001F5_PostfixBurstDelegate_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar8 + 0x10) =
                                           *(undefined8 *)
                                            UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted_000001F4_PostfixBurstDelegate_TypeInfo
                                      ;
                                      puVar4 = PTR_DAT_070c25e8;
                                      *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                      *(undefined4 *)(lVar8 + 0x18) = 1;
                                      lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                        (*(undefined8 *)puVar4);
                                      FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                      puVar4 = PTR_DAT_070c2cb8;
                                      if (lVar6 != 0) {
                                        lVar9 = *(long *)(lVar6 + 0x10);
                                        uVar7 = *(undefined8 *)
                                                 UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_000001F5_BurstDirectCall_TypeInfo
                                        ;
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
                                                          (*(long *)(*(long *)(*(long *)puVar4 +
                                                                              0x20) + 0xc0) + 0x70))
                                            ;
                                          }
                                          uVar7 = *unaff_x25;
                                          *(long *)(lVar8 + 0x30) = lVar6;
                                          lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                          FUN_042e4268(lVar6,*unaff_x20);
                                          lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                          FUN_06938f70(lVar9,0);
                                          if (lVar9 != 0) {
                                            uVar7 = *(undefined8 *)
                                                                                                          
                                                  System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_<>c__DisplayClass1_0_TypeInfo
                                            ;
                                            *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                            *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                            if (lVar6 != 0) {
                                              lVar10 = *(long *)(lVar6 + 0x10);
                                              lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                              if (lVar10 != 0) {
                                                uVar2 = *(uint *)(lVar6 + 0x18);
                                                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                  *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                       lVar9;
                                                }
                                                else {
                                                  FUN_042e4a64(lVar6,lVar9,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar11 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                lVar9 = *(long *)(unaff_x21 + 0x10);
                                                *(long *)(lVar8 + 0x28) = lVar6;
                                                *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                if (lVar9 != 0) {
                                                  uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                    *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) =
                                                         lVar8;
                                                  }
                                                  else {
                                                    FUN_042e4a64();
                                                  }
                                                  lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  puVar4 = PTR_DAT_0711dfd8;
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)PTR_DAT_0711dfd8;
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                                                  ;
                                                  puVar5 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)puVar4;
                                                    lVar10 = *(long *)PTR_DAT_070c2cb8;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar7;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar6,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Xml_XmlBaseWriter_NamespaceManager_XmlAttribute_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionConverter_OptionPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_TypeInfo
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_0711ac20;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 2;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass19_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass16_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass17_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_LightCookieManager_LightCookieMapping_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_InputControlScheme_MatchResult_Match_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionCollection_WrappedPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 2;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_000001E7_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_000001E6_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Xml_XmlBaseReader_NamespaceManager_XmlAttribute_TypeInfo
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_<>c__DisplayClass0_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 3;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 3;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar8 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar8 + 0x18) = 4;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x25;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*unaff_x20);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x19);
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


