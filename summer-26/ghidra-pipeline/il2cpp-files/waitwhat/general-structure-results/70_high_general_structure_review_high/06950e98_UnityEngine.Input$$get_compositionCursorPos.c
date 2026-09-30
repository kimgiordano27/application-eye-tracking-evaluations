/*
FUNCTION_NAME: UnityEngine.Input$$get_compositionCursorPos
ENTRY_POINT: 06950e98
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Input__get_compositionCursorPos(undefined8 param_1)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 in_x9;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *in_x10;
  undefined8 *in_x11;
  undefined8 *in_x12;
  undefined8 in_x13;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x28;
  
  uVar11 = *in_x12;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = in_x9;
  uVar14 = *in_x10;
  uVar16 = *in_x11;
  *(undefined8 *)(unaff_x20 + 0x30) = in_x13;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar16;
  lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar11);
  FUN_042e4268(lVar12,*unaff_x21);
  lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x19);
  FUN_06938f80(lVar13,0);
  puVar3 = System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo;
  if (lVar13 != 0) {
    *(undefined4 *)(lVar13 + 0x10) = 0x16c;
    *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)puVar3;
    puVar3 = System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo;
    if (lVar12 != 0) {
      lVar15 = *(long *)(lVar12 + 0x10);
      lVar17 = *(long *)System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar15 != 0) {
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
        }
        else {
          FUN_042e4a64(lVar12,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*unaff_x19);
        FUN_06938f80(lVar13,0);
        puVar4 = System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo;
        if (lVar13 != 0) {
          iVar1 = *(int *)(lVar12 + 0x1c);
          *(undefined4 *)(lVar13 + 0x10) = 0x26c;
          lVar17 = *(long *)puVar3;
          uVar11 = *(undefined8 *)puVar4;
          lVar15 = *(long *)(lVar12 + 0x10);
          *(int *)(lVar12 + 0x1c) = iVar1 + 1;
          *(undefined8 *)(lVar13 + 0x18) = uVar11;
          puVar4 = System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo;
          puVar3 = System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo;
          if (lVar15 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
            }
            else {
              FUN_042e4a64(lVar12,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = *(undefined8 *)puVar4;
            *(long *)(unaff_x20 + 0x20) = lVar12;
            lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (uVar11);
            FUN_042e4268(lVar12,*(undefined8 *)puVar3);
            lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
            FUN_06938f78(lVar13,0);
            puVar4 = PTR_DAT_070c25e8;
            puVar3 = PTR_DAT_070c25c8;
            if (lVar13 != 0) {
              uVar14 = *(undefined8 *)UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo;
              uVar11 = *(undefined8 *)PTR_DAT_070c25e8;
              *(undefined8 *)(lVar13 + 0x10) =
                   *(undefined8 *)System_Collections_Generic_IEnumerator<Expression>_TypeInfo;
              *(undefined8 *)(lVar13 + 0x20) = uVar14;
              *(undefined4 *)(lVar13 + 0x18) = 1;
              lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (uVar11);
              FUN_042e4268(lVar15,*(undefined8 *)puVar3);
              puVar5 = PTR_DAT_070c2cb8;
              if (lVar15 != 0) {
                lVar17 = *(long *)(lVar15 + 0x10);
                uVar11 = *(undefined8 *)UnityEngine_UIElements_UIRAtlasAllocator_Row_<>c_TypeInfo;
                lVar18 = *(long *)PTR_DAT_070c2cb8;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar17 != 0) {
                  uVar2 = *(uint *)(lVar15 + 0x18);
                  if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                  }
                  else {
                    FUN_042e4a64(lVar15,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  puVar8 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                  *(long *)(lVar13 + 0x30) = lVar15;
                  lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)puVar8);
                  FUN_042e4268(lVar15,*(undefined8 *)
                                       System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                  lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)
                                       System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
                  FUN_06938f70(lVar17,0);
                  puVar8 = UnityEngine_UIElements_UQuery_UQueryMatcher_<>c_TypeInfo;
                  if (lVar17 != 0) {
                    uVar11 = *(undefined8 *)UnityEngine_UIElements_UQuery_UQueryMatcher_<>c_TypeInfo
                    ;
                    *(undefined8 *)(lVar17 + 0x10) =
                         *(undefined8 *)Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo;
                    *(undefined8 *)(lVar17 + 0x18) = uVar11;
                    puVar6 = System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                    if (lVar15 != 0) {
                      lVar18 = *(long *)(lVar15 + 0x10);
                      lVar19 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (lVar18 != 0) {
                        uVar2 = *(uint *)(lVar15 + 0x18);
                        if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                          *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                          *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = lVar17;
                        }
                        else {
                          FUN_042e4a64(lVar15,lVar17,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar13 + 0x28) = lVar15;
                        puVar7 = System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                        if (lVar12 != 0) {
                          lVar15 = *(long *)(lVar12 + 0x10);
                          lVar17 = *(long *)System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar15 != 0) {
                            uVar2 = *(uint *)(lVar12 + 0x18);
                            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                              *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
                            }
                            else {
                              FUN_042e4a64(lVar12,lVar13,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                               (*(undefined8 *)
                                                 System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo)
                            ;
                            FUN_06938f78(lVar13,0);
                            puVar10 = 
                            Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t_TypeInfo
                            ;
                            puVar9 = UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_<>c_TypeInfo;
                            if (lVar13 != 0) {
                              uVar11 = *(undefined8 *)puVar4;
                              *(undefined4 *)(lVar13 + 0x18) = 0;
                              uVar14 = *(undefined8 *)puVar10;
                              *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)puVar9;
                              *(undefined8 *)(lVar13 + 0x20) = uVar14;
                              lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (uVar11);
                              FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                              if (lVar15 != 0) {
                                lVar17 = *(long *)(lVar15 + 0x10);
                                uVar11 = *(undefined8 *)
                                          OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay_TypeInfo;
                                lVar18 = *(long *)puVar5;
                                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                if (lVar17 != 0) {
                                  uVar2 = *(uint *)(lVar15 + 0x18);
                                  if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                    *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                    *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                                  }
                                  else {
                                    FUN_042e4a64(lVar15,uVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  puVar9 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                  *(long *)(lVar13 + 0x30) = lVar15;
                                  lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                     (*(undefined8 *)puVar9);
                                  FUN_042e4268(lVar15,*(undefined8 *)
                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                  lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                     (*(undefined8 *)
                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                  FUN_06938f70(lVar17,0);
                                  if (lVar17 != 0) {
                                    uVar11 = *(undefined8 *)puVar8;
                                    *(undefined8 *)(lVar17 + 0x10) =
                                         *(undefined8 *)
                                          Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                    ;
                                    *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                    if (lVar15 != 0) {
                                      lVar18 = *(long *)(lVar15 + 0x10);
                                      lVar19 = *(long *)puVar6;
                                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                      if (lVar18 != 0) {
                                        uVar2 = *(uint *)(lVar15 + 0x18);
                                        if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                          *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                          *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = lVar17;
                                        }
                                        else {
                                          FUN_042e4a64(lVar15,lVar17,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        iVar1 = *(int *)(lVar12 + 0x1c);
                                        lVar17 = *(long *)(lVar12 + 0x10);
                                        lVar18 = *(long *)puVar7;
                                        *(long *)(lVar13 + 0x28) = lVar15;
                                        *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                        if (lVar17 != 0) {
                                          uVar2 = *(uint *)(lVar12 + 0x18);
                                          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = lVar13
                                            ;
                                          }
                                          else {
                                            FUN_042e4a64(lVar12,lVar13,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                          FUN_06938f78(lVar13,0);
                                          if (lVar13 != 0) {
                                            uVar11 = *(undefined8 *)puVar4;
                                            uVar14 = *(undefined8 *)
                                                                                                            
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t_TypeInfo
                                            ;
                                            *(undefined8 *)(lVar13 + 0x10) =
                                                 *(undefined8 *)
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t_TypeInfo
                                            ;
                                            *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                            *(undefined4 *)(lVar13 + 0x18) = 1;
                                            lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                            FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                                            if (lVar15 != 0) {
                                              lVar17 = *(long *)(lVar15 + 0x10);
                                              uVar11 = *(undefined8 *)PTR_DAT_0711dfd0;
                                              lVar18 = *(long *)puVar5;
                                              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                              if (lVar17 != 0) {
                                                uVar2 = *(uint *)(lVar15 + 0x18);
                                                if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                  *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                                                }
                                                else {
                                                  FUN_042e4a64(lVar15,uVar11,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar18 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                puVar8 = 
                                                System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                *(long *)(lVar13 + 0x30) = lVar15;
                                                lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                FUN_042e4268(lVar15,*(undefined8 *)
                                                                                                                                          
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                FUN_06938f70(lVar17,0);
                                                puVar8 = 
                                                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                                                ;
                                                if (lVar17 != 0) {
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar15 != 0) {
                                                    lVar18 = *(long *)(lVar15 + 0x10);
                                                    lVar19 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar18 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar18 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar17;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x28) = lVar15;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar13,0);
                                                  puVar10 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_free_t_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  System_Data_TypeLimiter_Scope_<>c_TypeInfo;
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar13 + 0x18) = 0;
                                                    uVar14 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                    lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo
                                                  ;
                                                  lVar18 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar9 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar13 + 0x30) = lVar15;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar9);
                                                  FUN_042e4268(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)puVar8;
                                                    *(undefined8 *)(lVar17 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar15 != 0) {
                                                    lVar18 = *(long *)(lVar15 + 0x10);
                                                    lVar19 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar18 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar18 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar17;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x28) = lVar15;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                  *(undefined4 *)(lVar13 + 0x18) = 3;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  lVar18 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar8 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar13 + 0x30) = lVar15;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_042e4268(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar15 != 0) {
                                                    lVar18 = *(long *)(lVar15 + 0x10);
                                                    lVar19 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar18 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar18 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar17;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x28) = lVar15;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                  *(undefined4 *)(lVar13 + 0x18) = 3;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar11);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  lVar18 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar13 + 0x30) = lVar15;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar15 != 0) {
                                                    lVar18 = *(long *)(lVar15 + 0x10);
                                                    lVar19 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar18 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar18 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar17;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x28) = lVar15;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x20 + 0x28) = lVar12;
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


