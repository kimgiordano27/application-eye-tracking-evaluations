/*
FUNCTION_NAME: UnityEngineInternal.Input.NativeInputSystem$$get_currentTime
ENTRY_POINT: 06952a6c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngineInternal_Input_NativeInputSystem__get_currentTime(long param_1,undefined8 param_2)

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
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  FUN_042e4268(param_2,**(undefined8 **)(param_1 + 0x5c8));
  if (unaff_x23 != 0) {
    lVar8 = *(long *)(unaff_x23 + 0x10);
    uVar7 = *unaff_x24;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(unaff_x23 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_042e4a64();
      }
      puVar3 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
      *(long *)(unaff_x22 + 0x30) = unaff_x23;
      lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar3);
      FUN_042e4268(lVar8,*(undefined8 *)System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
      lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
      FUN_06938f70(lVar6,0);
      puVar3 = UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_Input_TypeInfo;
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)
                 UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_Input_TypeInfo;
        *(undefined8 *)(lVar6 + 0x10) = *unaff_x29;
        *(undefined8 *)(lVar6 + 0x18) = uVar7;
        if (lVar8 != 0) {
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *unaff_x27;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
            }
            else {
              FUN_042e4a64(lVar8,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            iVar1 = *(int *)(unaff_x21 + 0x1c);
            lVar6 = *(long *)(unaff_x21 + 0x10);
            *(long *)(unaff_x22 + 0x28) = lVar8;
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
              lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
              FUN_06938f78(lVar8,0);
              puVar5 = 
              UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_TypeInfo
              ;
              puVar4 = 
              System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
              ;
              if (lVar8 != 0) {
                uVar7 = *unaff_x25;
                *(undefined4 *)(lVar8 + 0x18) = 0;
                uVar11 = *(undefined8 *)puVar5;
                *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)puVar4;
                *(undefined8 *)(lVar8 + 0x20) = uVar11;
                lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (uVar7);
                FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8);
                if (lVar6 != 0) {
                  lVar9 = *(long *)(lVar6 + 0x10);
                  uVar7 = *(undefined8 *)OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo;
                  lVar10 = *unaff_x26;
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
                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                    }
                    puVar4 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                    *(long *)(lVar8 + 0x30) = lVar6;
                    lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                      (*(undefined8 *)puVar4);
                    FUN_042e4268(lVar6,*(undefined8 *)
                                        System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                      (*(undefined8 *)
                                        System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
                    FUN_06938f70(lVar9,0);
                    if (lVar9 != 0) {
                      uVar7 = *(undefined8 *)puVar3;
                      *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                      *(undefined8 *)(lVar9 + 0x18) = uVar7;
                      if (lVar6 != 0) {
                        lVar10 = *(long *)(lVar6 + 0x10);
                        lVar12 = *unaff_x27;
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
                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
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
                                              (*(undefined8 *)
                                                System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
                            FUN_06938f78(lVar8,0);
                            puVar4 = PTR_DAT_07137b40;
                            puVar3 = PTR_DAT_070f4598;
                            if (lVar8 != 0) {
                              uVar7 = *unaff_x25;
                              *(undefined4 *)(lVar8 + 0x18) = 0;
                              uVar11 = *(undefined8 *)puVar4;
                              *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)puVar3;
                              *(undefined8 *)(lVar8 + 0x20) = uVar11;
                              lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                (uVar7);
                              FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8);
                              if (lVar6 != 0) {
                                lVar9 = *(long *)(lVar6 + 0x10);
                                uVar7 = *(undefined8 *)
                                         OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
                                lVar10 = *unaff_x26;
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
                                                  (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  puVar3 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                  *(long *)(lVar8 + 0x30) = lVar6;
                                  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                    (*(undefined8 *)puVar3);
                                  FUN_042e4268(lVar6,*(undefined8 *)
                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                    (*(undefined8 *)
                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                  FUN_06938f70(lVar9,0);
                                  if (lVar9 != 0) {
                                    uVar7 = *(undefined8 *)
                                             UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass13_0_TypeInfo
                                    ;
                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                    *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                    if (lVar6 != 0) {
                                      lVar10 = *(long *)(lVar6 + 0x10);
                                      lVar12 = *unaff_x27;
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
                                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                        + 0x70));
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
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                          FUN_06938f78(lVar8,0);
                                          puVar3 = PTR_DAT_0711dfd8;
                                          if (lVar8 != 0) {
                                            uVar7 = *unaff_x25;
                                            uVar11 = *(undefined8 *)PTR_DAT_0711dfd8;
                                            *(undefined8 *)(lVar8 + 0x10) =
                                                 *(undefined8 *)
                                                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                                            ;
                                            *(undefined8 *)(lVar8 + 0x20) = uVar11;
                                            *(undefined4 *)(lVar8 + 0x18) = 1;
                                            lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                            FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8);
                                            if (lVar6 != 0) {
                                              lVar9 = *(long *)(lVar6 + 0x10);
                                              uVar7 = *(undefined8 *)puVar3;
                                              lVar10 = *unaff_x26;
                                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                              if (lVar9 != 0) {
                                                uVar2 = *(uint *)(lVar6 + 0x18);
                                                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
                                                }
                                                else {
                                                  FUN_042e4a64(lVar6,uVar7,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar10 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                puVar3 = 
                                                System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                *(long *)(lVar8 + 0x30) = lVar6;
                                                lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                FUN_042e4268(lVar6,*(undefined8 *)
                                                                                                                                        
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                FUN_06938f70(lVar9,0);
                                                puVar3 = 
                                                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                ;
                                                if (lVar9 != 0) {
                                                  uVar7 = *(undefined8 *)
                                                                                                                      
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
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
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar8,0);
                                                  puVar5 = 
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass7_0_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar7 = *unaff_x25;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar8 + 0x20) = uVar11;
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo;
                                                  lVar10 = *unaff_x26;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                    if (lVar6 != 0) {
                                                      lVar10 = *(long *)(lVar6 + 0x10);
                                                      lVar12 = *unaff_x27;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  ;
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
                                                                    (*(long *)(*(long *)(lVar12 + 
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
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar8,0);
                                                  puVar5 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar7 = *unaff_x25;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar8 + 0x20) = uVar11;
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                                  ;
                                                  lVar10 = *unaff_x26;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass17_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
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
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar8,0);
                                                  puVar5 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  Oculus_Interaction_DistantCandidateComputer<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar7 = *unaff_x25;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar8 + 0x20) = uVar11;
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__GetOverlayWidthInMeters_TypeInfo
                                                  ;
                                                  lVar10 = *unaff_x26;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_DefaultEventSystem_InputForUIProcessor_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
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
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar8,0);
                                                  puVar5 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  Fusion_LogUtils_DumpDeferredPtr<NetBitBuffer>_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar7 = *unaff_x25;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar8 + 0x20) = uVar11;
                                                    lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo
                                                  ;
                                                  lVar10 = *unaff_x26;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
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
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *unaff_x25;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar8 + 0x18) = 3;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  lVar10 = *unaff_x26;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
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
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *unaff_x25;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar8 + 0x18) = 3;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  lVar10 = *unaff_x26;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_042e4268(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
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
                                                            (*(undefined8 *)puVar3);
                                                  FUN_06938f78(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *unaff_x25;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar8 + 0x18) = 4;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar7);
                                                  FUN_042e4268(lVar6,*(undefined8 *)PTR_DAT_070c25c8
                                                              );
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_TextAsset_EncodingUtility_TypeInfo;
                                                  lVar10 = *unaff_x26;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass15_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
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
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    FUN_06938d58(in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


