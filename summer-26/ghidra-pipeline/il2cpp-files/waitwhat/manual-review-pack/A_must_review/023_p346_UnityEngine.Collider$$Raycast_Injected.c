/*
FUNCTION_NAME: UnityEngine.Collider$$Raycast_Injected
ENTRY_POINT: 069590dc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 177
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_21;telemetry_or_network_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_21
*/


void UnityEngine_Collider__Raycast_Injected(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *in_x9;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_x10;
  undefined8 *puVar16;
  long unaff_x19;
  undefined8 *puVar17;
  long unaff_x21;
  long unaff_x22;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  puVar16 = *(undefined8 **)(in_x10 + 0x5e8);
  uVar12 = *in_x9;
  puVar17 = *(undefined8 **)(unaff_x19 + 0x5c8);
  *(undefined4 *)(unaff_x22 + 0x18) = 0;
  uVar9 = *puVar16;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar9);
  FUN_042e4268(lVar10,*puVar17);
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 0x10);
    uVar9 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
    lVar13 = *(long *)PTR_DAT_070c2cb8;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    puVar8 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
    puVar7 = System_Xml_XmlBaseReader_XmlElementNode_TypeInfo;
    puVar6 = System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo;
    if (lVar11 != 0) {
      uVar2 = *(uint *)(lVar10 + 0x18);
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
      }
      else {
        FUN_042e4a64(lVar10,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar9 = *(undefined8 *)puVar8;
      *(long *)(unaff_x22 + 0x30) = lVar10;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar9);
      FUN_042e4268(lVar10,*(undefined8 *)puVar7);
      lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar6);
      FUN_06938f70(lVar11,0);
      if (lVar11 != 0) {
        uVar9 = *(undefined8 *)
                 UnityEngine_Rendering_DebugUI_RuntimeDebugShadersMessageBox_<>c_TypeInfo;
        *(undefined8 *)(lVar11 + 0x10) = *unaff_x28;
        *(undefined8 *)(lVar11 + 0x18) = uVar9;
        if (lVar10 != 0) {
          lVar13 = *(long *)(lVar10 + 0x10);
          lVar14 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          puVar3 = PTR_DAT_070c25c8;
          if (lVar13 != 0) {
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = lVar11;
            }
            else {
              FUN_042e4a64(lVar10,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar10;
            if (unaff_x21 != 0) {
              lVar10 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar2 = *(uint *)(unaff_x21 + 0x18);
                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                  *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
                }
                else {
                  FUN_042e4a64();
                }
                lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*unaff_x29);
                FUN_06938f78(lVar10,0);
                if (lVar10 != 0) {
                  uVar9 = *(undefined8 *)
                           UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted_000001F4_BurstDirectCall_TypeInfo
                  ;
                  *(undefined8 *)(lVar10 + 0x10) =
                       *(undefined8 *)
                        System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_<>c__DisplayClass2_0_TypeInfo
                  ;
                  puVar4 = PTR_DAT_070c25e8;
                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                  *(undefined4 *)(lVar10 + 0x18) = 0;
                  lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)puVar4);
                  FUN_042e4268(lVar11,*(undefined8 *)puVar3);
                  puVar4 = PTR_DAT_070c2cb8;
                  if (lVar11 != 0) {
                    lVar13 = *(long *)(lVar11 + 0x10);
                    uVar9 = *(undefined8 *)
                             System_Xml_XmlBaseWriter_NamespaceManager_Namespace_TypeInfo;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar13 != 0) {
                      uVar2 = *(uint *)(lVar11 + 0x18);
                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                      }
                      else {
                        FUN_042e4a64(lVar11,uVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar9 = *(undefined8 *)puVar8;
                      *(long *)(lVar10 + 0x30) = lVar11;
                      lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                         (uVar9);
                      FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                      lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                         (*(undefined8 *)puVar6);
                      FUN_06938f70(lVar13,0);
                      if (lVar13 != 0) {
                        uVar9 = *(undefined8 *)
                                 UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_000001E6_BurstDirectCall_TypeInfo
                        ;
                        *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                        *(undefined8 *)(lVar13 + 0x18) = uVar9;
                        if (lVar11 != 0) {
                          lVar14 = *(long *)(lVar11 + 0x10);
                          lVar15 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar14 != 0) {
                            uVar2 = *(uint *)(lVar11 + 0x18);
                            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                              *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
                            }
                            else {
                              FUN_042e4a64(lVar11,lVar13,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                            }
                            iVar1 = *(int *)(unaff_x21 + 0x1c);
                            lVar13 = *(long *)(unaff_x21 + 0x10);
                            *(long *)(lVar10 + 0x28) = lVar11;
                            *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                            if (lVar13 != 0) {
                              uVar2 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                              }
                              else {
                                FUN_042e4a64();
                              }
                              lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (*unaff_x29);
                              FUN_06938f78(lVar10,0);
                              if (lVar10 != 0) {
                                uVar9 = *(undefined8 *)
                                         UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_TypeInfo
                                ;
                                *(undefined8 *)(lVar10 + 0x10) =
                                     *(undefined8 *)
                                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                ;
                                puVar4 = PTR_DAT_070c25e8;
                                *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                *(undefined4 *)(lVar10 + 0x18) = 0;
                                lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                   (*(undefined8 *)puVar4);
                                FUN_042e4268(lVar11,*(undefined8 *)puVar3);
                                puVar4 = PTR_DAT_070c2cb8;
                                if (lVar11 != 0) {
                                  lVar13 = *(long *)(lVar11 + 0x10);
                                  uVar9 = *(undefined8 *)
                                           OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay_TypeInfo;
                                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                  if (lVar13 != 0) {
                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                      *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                                    }
                                    else {
                                      FUN_042e4a64(lVar11,uVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(*(long *)puVar4 + 0x20) +
                                                              0xc0) + 0x70));
                                    }
                                    uVar9 = *(undefined8 *)puVar8;
                                    *(long *)(lVar10 + 0x30) = lVar11;
                                    lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (uVar9);
                                    FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (*(undefined8 *)puVar6);
                                    FUN_06938f70(lVar13,0);
                                    if (lVar13 != 0) {
                                      uVar9 = *(undefined8 *)
                                               UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass6_0_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                      *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                      if (lVar11 != 0) {
                                        lVar14 = *(long *)(lVar11 + 0x10);
                                        lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                        if (lVar14 != 0) {
                                          uVar2 = *(uint *)(lVar11 + 0x18);
                                          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar13
                                            ;
                                          }
                                          else {
                                            FUN_042e4a64(lVar11,lVar13,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          iVar1 = *(int *)(unaff_x21 + 0x1c);
                                          lVar13 = *(long *)(unaff_x21 + 0x10);
                                          *(long *)(lVar10 + 0x28) = lVar11;
                                          *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                          if (lVar13 != 0) {
                                            uVar2 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                   lVar10;
                                            }
                                            else {
                                              FUN_042e4a64();
                                            }
                                            lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                            FUN_06938f78(lVar10,0);
                                            if (lVar10 != 0) {
                                              uVar9 = *(undefined8 *)
                                                                                                              
                                                  UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar10 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TypeInfo
                                              ;
                                              puVar4 = PTR_DAT_070c25e8;
                                              *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                              *(undefined4 *)(lVar10 + 0x18) = 0;
                                              lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                              FUN_042e4268(lVar11,*(undefined8 *)puVar3);
                                              puVar4 = PTR_DAT_070c2cb8;
                                              if (lVar11 != 0) {
                                                lVar13 = *(long *)(lVar11 + 0x10);
                                                uVar9 = *(undefined8 *)
                                                                                                                  
                                                  OVR_OpenVR_IVROverlay__SetDashboardOverlaySceneProcess_TypeInfo
                                                ;
                                                *(int *)(lVar11 + 0x1c) =
                                                     *(int *)(lVar11 + 0x1c) + 1;
                                                if (lVar13 != 0) {
                                                  uVar2 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                    *(undefined8 *)
                                                     (lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                                                  }
                                                  else {
                                                    FUN_042e4a64(lVar11,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Fusion_NetworkBehaviour_ChangeDetector_OnChangedCallbackWrapper_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__ReleaseNativeOverlayHandle_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Fusion_NetworkSceneAsyncOp_Awaiter_<>c__DisplayClass5_1_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar3);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__GetTransformForOverlayCoordinates_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Fusion_NetworkSceneAsyncOp_Awaiter_<>c__DisplayClass5_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  puVar4 = PTR_DAT_0711dfd0;
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)PTR_DAT_0711dfd0;
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                                                  ;
                                                  puVar5 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)puVar4;
                                                    lVar14 = *(long *)PTR_DAT_070c2cb8;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar11,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  puVar3 = 
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
                                                  ;
                                                  puVar4 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar11,*(undefined8 *)
                                                                       PTR_DAT_070c25c8);
                                                  puVar4 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                    puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    puVar4 = PTR_DAT_070c25c8;
                                                    if (lVar14 != 0) {
                                                      uVar2 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar14 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar13;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar11,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_000001F5_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted_000001F4_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_000001F5_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  puVar3 = PTR_DAT_0711dfd8;
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)PTR_DAT_0711dfd8;
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                                                  ;
                                                  puVar5 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)puVar3;
                                                    lVar14 = *(long *)PTR_DAT_070c2cb8;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar11,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_Xml_XmlBaseWriter_NamespaceManager_XmlAttribute_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionConverter_OptionPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_0711ac20;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 2;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass19_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass16_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass17_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_LightCookieManager_LightCookieMapping_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_InputControlScheme_MatchResult_Match_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_ComponentModel_Design_DesignerOptionService_DesignerOptionCollection_WrappedPropertyDescriptor_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 2;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection_000001E7_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted_000001E6_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_Xml_XmlBaseReader_NamespaceManager_XmlAttribute_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_<>c__DisplayClass0_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_DebugUI_Table_Row_TypeInfo;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 3;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 3;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    lVar10 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x29);
                                                  FUN_06938f78(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_070c25e8;
                                                  *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar4);
                                                  puVar3 = PTR_DAT_070c2cb8;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar9;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = *(undefined8 *)puVar8;
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar9);
                                                  FUN_042e4268(lVar11,*(undefined8 *)puVar7);
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar6);
                                                  FUN_06938f70(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar9;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar13 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar10;
                                                    }
                                                    else {
                                                      FUN_042e4a64();
                                                    }
                                                    *(long *)(unaff_x26 + 0x28) = unaff_x21;
                                                    FUN_06938d58(unaff_x27,unaff_x26,0);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


