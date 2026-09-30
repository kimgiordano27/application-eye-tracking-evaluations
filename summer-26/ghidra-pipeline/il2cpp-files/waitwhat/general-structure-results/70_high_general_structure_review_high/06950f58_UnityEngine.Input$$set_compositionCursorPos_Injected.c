/*
FUNCTION_NAME: UnityEngine.Input$$set_compositionCursorPos_Injected
ENTRY_POINT: 06950f58
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Input__set_compositionCursorPos_Injected(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x28;
  
  FUN_06938f80(param_1,0);
  puVar3 = System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo;
  if (param_1 != 0) {
    iVar1 = *(int *)(unaff_x21 + 0x1c);
    *(undefined4 *)(param_1 + 0x10) = 0x26c;
    uVar18 = *(undefined8 *)puVar3;
    lVar13 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
    *(undefined8 *)(param_1 + 0x18) = uVar18;
    puVar4 = System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo;
    puVar3 = System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo;
    if (lVar13 != 0) {
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = param_1;
      }
      else {
        FUN_042e4a64();
      }
      uVar18 = *(undefined8 *)puVar4;
      *(long *)(unaff_x20 + 0x20) = unaff_x21;
      lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar18);
      FUN_042e4268(lVar13,*(undefined8 *)puVar3);
      lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
      FUN_06938f78(lVar11,0);
      puVar4 = PTR_DAT_070c25e8;
      puVar3 = PTR_DAT_070c25c8;
      if (lVar11 != 0) {
        uVar15 = *(undefined8 *)UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo;
        uVar18 = *(undefined8 *)PTR_DAT_070c25e8;
        *(undefined8 *)(lVar11 + 0x10) =
             *(undefined8 *)System_Collections_Generic_IEnumerator<Expression>_TypeInfo;
        *(undefined8 *)(lVar11 + 0x20) = uVar15;
        *(undefined4 *)(lVar11 + 0x18) = 1;
        lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar18);
        FUN_042e4268(lVar12,*(undefined8 *)puVar3);
        puVar5 = PTR_DAT_070c2cb8;
        if (lVar12 != 0) {
          lVar14 = *(long *)(lVar12 + 0x10);
          uVar18 = *(undefined8 *)UnityEngine_UIElements_UIRAtlasAllocator_Row_<>c_TypeInfo;
          lVar16 = *(long *)PTR_DAT_070c2cb8;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar18;
            }
            else {
              FUN_042e4a64(lVar12,uVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            puVar8 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
            *(long *)(lVar11 + 0x30) = lVar12;
            lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)puVar8);
            FUN_042e4268(lVar12,*(undefined8 *)System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
            lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
            FUN_06938f70(lVar14,0);
            puVar8 = UnityEngine_UIElements_UQuery_UQueryMatcher_<>c_TypeInfo;
            if (lVar14 != 0) {
              uVar18 = *(undefined8 *)UnityEngine_UIElements_UQuery_UQueryMatcher_<>c_TypeInfo;
              *(undefined8 *)(lVar14 + 0x10) =
                   *(undefined8 *)Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo;
              *(undefined8 *)(lVar14 + 0x18) = uVar18;
              puVar6 = System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
              if (lVar12 != 0) {
                lVar16 = *(long *)(lVar12 + 0x10);
                lVar17 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar16 != 0) {
                  uVar2 = *(uint *)(lVar12 + 0x18);
                  if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                    *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
                  }
                  else {
                    FUN_042e4a64(lVar12,lVar14,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar11 + 0x28) = lVar12;
                  puVar7 = System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                  if (lVar13 != 0) {
                    lVar12 = *(long *)(lVar13 + 0x10);
                    lVar14 = *(long *)System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar12 != 0) {
                      uVar2 = *(uint *)(lVar13 + 0x18);
                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                        *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar11;
                      }
                      else {
                        FUN_042e4a64(lVar13,lVar11,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                         (*(undefined8 *)
                                           System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
                      FUN_06938f78(lVar11,0);
                      puVar10 = 
                      Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t_TypeInfo
                      ;
                      puVar9 = UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_<>c_TypeInfo;
                      if (lVar11 != 0) {
                        uVar18 = *(undefined8 *)puVar4;
                        *(undefined4 *)(lVar11 + 0x18) = 0;
                        uVar15 = *(undefined8 *)puVar10;
                        *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)puVar9;
                        *(undefined8 *)(lVar11 + 0x20) = uVar15;
                        lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                           (uVar18);
                        FUN_042e4268(lVar12,*(undefined8 *)puVar3);
                        if (lVar12 != 0) {
                          lVar14 = *(long *)(lVar12 + 0x10);
                          uVar18 = *(undefined8 *)
                                    OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay_TypeInfo;
                          lVar16 = *(long *)puVar5;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar14 != 0) {
                            uVar2 = *(uint *)(lVar12 + 0x18);
                            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                              *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar18;
                            }
                            else {
                              FUN_042e4a64(lVar12,uVar18,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                            }
                            puVar9 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                            *(long *)(lVar11 + 0x30) = lVar12;
                            lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                               (*(undefined8 *)puVar9);
                            FUN_042e4268(lVar12,*(undefined8 *)
                                                 System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                            lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                               (*(undefined8 *)
                                                 System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                               );
                            FUN_06938f70(lVar14,0);
                            if (lVar14 != 0) {
                              uVar18 = *(undefined8 *)puVar8;
                              *(undefined8 *)(lVar14 + 0x10) =
                                   *(undefined8 *)
                                    Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo;
                              *(undefined8 *)(lVar14 + 0x18) = uVar18;
                              if (lVar12 != 0) {
                                lVar16 = *(long *)(lVar12 + 0x10);
                                lVar17 = *(long *)puVar6;
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (lVar16 != 0) {
                                  uVar2 = *(uint *)(lVar12 + 0x18);
                                  if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                    *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                    *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
                                  }
                                  else {
                                    FUN_042e4a64(lVar12,lVar14,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                  lVar14 = *(long *)(lVar13 + 0x10);
                                  lVar16 = *(long *)puVar7;
                                  *(long *)(lVar11 + 0x28) = lVar12;
                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                  if (lVar14 != 0) {
                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar11;
                                    }
                                    else {
                                      FUN_042e4a64(lVar13,lVar11,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (*(undefined8 *)
                                                                                                                  
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                    FUN_06938f78(lVar11,0);
                                    if (lVar11 != 0) {
                                      uVar18 = *(undefined8 *)puVar4;
                                      uVar15 = *(undefined8 *)
                                                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar11 + 0x10) =
                                           *(undefined8 *)
                                            Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                      *(undefined4 *)(lVar11 + 0x18) = 1;
                                      lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                         (uVar18);
                                      FUN_042e4268(lVar12,*(undefined8 *)puVar3);
                                      if (lVar12 != 0) {
                                        lVar14 = *(long *)(lVar12 + 0x10);
                                        uVar18 = *(undefined8 *)PTR_DAT_0711dfd0;
                                        lVar16 = *(long *)puVar5;
                                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                        if (lVar14 != 0) {
                                          uVar2 = *(uint *)(lVar12 + 0x18);
                                          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                            *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                 uVar18;
                                          }
                                          else {
                                            FUN_042e4a64(lVar12,uVar18,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          puVar8 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                          *(long *)(lVar11 + 0x30) = lVar12;
                                          lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                          FUN_042e4268(lVar12,*(undefined8 *)
                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                          lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                          FUN_06938f70(lVar14,0);
                                          puVar8 = 
                                          UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                                          ;
                                          if (lVar14 != 0) {
                                            uVar18 = *(undefined8 *)
                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                                            ;
                                            *(undefined8 *)(lVar14 + 0x10) =
                                                 *(undefined8 *)
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                            ;
                                            *(undefined8 *)(lVar14 + 0x18) = uVar18;
                                            if (lVar12 != 0) {
                                              lVar16 = *(long *)(lVar12 + 0x10);
                                              lVar17 = *(long *)puVar6;
                                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                              if (lVar16 != 0) {
                                                uVar2 = *(uint *)(lVar12 + 0x18);
                                                if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                  *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                  *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) =
                                                       lVar14;
                                                }
                                                else {
                                                  FUN_042e4a64(lVar12,lVar14,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar17 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                iVar1 = *(int *)(lVar13 + 0x1c);
                                                lVar14 = *(long *)(lVar13 + 0x10);
                                                lVar16 = *(long *)puVar7;
                                                *(long *)(lVar11 + 0x28) = lVar12;
                                                *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                if (lVar14 != 0) {
                                                  uVar2 = *(uint *)(lVar13 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                    *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                    *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20)
                                                         = lVar11;
                                                  }
                                                  else {
                                                    FUN_042e4a64(lVar13,lVar11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar11,0);
                                                  puVar10 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_free_t_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  System_Data_TypeLimiter_Scope_<>c_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    uVar18 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    uVar15 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                    lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar18);
                                                  FUN_042e4268(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar18 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar18;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,uVar18,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar9 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar9);
                                                  FUN_042e4268(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar18 = *(undefined8 *)puVar8;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar18;
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar6;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar14 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    uVar18 = *(undefined8 *)puVar4;
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar18);
                                                  FUN_042e4268(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar18 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar18;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,uVar18,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar8 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_042e4268(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar18 = *(undefined8 *)
                                                                                                                            
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar18;
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar6;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar14 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    uVar18 = *(undefined8 *)puVar4;
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar15;
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar18);
                                                  FUN_042e4268(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar18 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar18;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,uVar18,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar18 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar18;
                                                  if (lVar12 != 0) {
                                                    lVar16 = *(long *)(lVar12 + 0x10);
                                                    lVar17 = *(long *)puVar6;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar14;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar14 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x20 + 0x28) = lVar13;
                                                  FUN_06938d58(unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


