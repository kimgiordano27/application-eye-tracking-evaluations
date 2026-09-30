/*
FUNCTION_NAME: FUN_06950bdc
ENTRY_POINT: 06950bdc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_file_logging_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06950bdc(undefined8 param_1)

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
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  
  puVar3 = System_Xml_XmlBaseReader_QuotaNameTable_TypeInfo;
  if ((DAT_07559bdc & 1) == 0) {
    FUN_03188a78(System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_QuotaNameTable_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2cb8);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlDeclarationNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
    FUN_03188a78(PTR_DAT_070c25c8);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo);
    FUN_03188a78(PTR_DAT_070c25e8);
    FUN_03188a78(System_Collections_Generic_IEnumerator<Expression>_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo);
    FUN_03188a78(
                System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_TypeInfo
                );
    FUN_03188a78(System_Data_TypeLimiter_Scope_<>c_TypeInfo);
    FUN_03188a78(PTR_DAT_071048a0);
    FUN_03188a78(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                );
    FUN_03188a78(UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_<>c_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_UIRAtlasAllocator_Row_<>c_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_03188a78(System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_UQuery_UQueryMatcher_<>c_TypeInfo);
    FUN_03188a78(Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<NetSyncSession>_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo);
    FUN_03188a78(Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t_TypeInfo
                );
    FUN_03188a78(OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo);
    FUN_03188a78(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t_TypeInfo
                );
    FUN_03188a78(PTR_DAT_0711dfd0);
    FUN_03188a78(Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_free_t_TypeInfo);
    FUN_03188a78(Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t_TypeInfo);
    FUN_03188a78(Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t_TypeInfo);
    FUN_03188a78(PTR_DAT_070c20c8);
    FUN_03188a78(System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo);
    FUN_03188a78(PTR_DAT_0712a010);
    FUN_03188a78(System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo);
    FUN_03188a78(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                );
    DAT_07559bdc = 1;
  }
  lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_06938f88(lVar11,0);
  puVar8 = System_Xml_XmlBaseReader_XmlDeclarationNode_TypeInfo;
  puVar5 = System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo;
  puVar4 = PTR_DAT_0712a010;
  puVar3 = PTR_DAT_070c20c8;
  if (lVar11 != 0) {
    uVar16 = *(undefined8 *)
              System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_TypeInfo
    ;
    uVar21 = *(undefined8 *)Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo;
    uVar12 = *(undefined8 *)System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo;
    *(undefined8 *)(lVar11 + 0x10) =
         *(undefined8 *)
          Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t_TypeInfo;
    *(undefined8 *)(lVar11 + 0x18) = uVar16;
    uVar16 = *(undefined8 *)puVar4;
    uVar17 = *(undefined8 *)puVar3;
    *(undefined8 *)(lVar11 + 0x30) = uVar21;
    *(undefined8 *)(lVar11 + 0x38) = uVar16;
    *(undefined8 *)(lVar11 + 0x40) = uVar17;
    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
    FUN_042e4268(lVar13,*(undefined8 *)puVar8);
    lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar5);
    FUN_06938f80(lVar14,0);
    puVar3 = System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo;
    if (lVar14 != 0) {
      *(undefined4 *)(lVar14 + 0x10) = 0x16c;
      *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)puVar3;
      puVar3 = System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo;
      if (lVar13 != 0) {
        lVar15 = *(long *)(lVar13 + 0x10);
        lVar18 = *(long *)System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
            *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
          }
          else {
            FUN_042e4a64(lVar13,lVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar5);
          FUN_06938f80(lVar14,0);
          puVar4 = System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo;
          if (lVar14 != 0) {
            iVar1 = *(int *)(lVar13 + 0x1c);
            *(undefined4 *)(lVar14 + 0x10) = 0x26c;
            lVar18 = *(long *)puVar3;
            uVar12 = *(undefined8 *)puVar4;
            lVar15 = *(long *)(lVar13 + 0x10);
            *(int *)(lVar13 + 0x1c) = iVar1 + 1;
            *(undefined8 *)(lVar14 + 0x18) = uVar12;
            puVar4 = System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo;
            puVar3 = System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo;
            if (lVar15 != 0) {
              uVar2 = *(uint *)(lVar13 + 0x18);
              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
              }
              else {
                FUN_042e4a64(lVar13,lVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              uVar12 = *(undefined8 *)puVar4;
              *(long *)(lVar11 + 0x20) = lVar13;
              lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (uVar12);
              FUN_042e4268(lVar13,*(undefined8 *)puVar3);
              lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*(undefined8 *)System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo)
              ;
              FUN_06938f78(lVar14,0);
              puVar4 = PTR_DAT_070c25e8;
              puVar3 = PTR_DAT_070c25c8;
              if (lVar14 != 0) {
                uVar16 = *(undefined8 *)UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo;
                uVar12 = *(undefined8 *)PTR_DAT_070c25e8;
                *(undefined8 *)(lVar14 + 0x10) =
                     *(undefined8 *)System_Collections_Generic_IEnumerator<Expression>_TypeInfo;
                *(undefined8 *)(lVar14 + 0x20) = uVar16;
                *(undefined4 *)(lVar14 + 0x18) = 1;
                lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (uVar12);
                FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                puVar5 = PTR_DAT_070c2cb8;
                if (lVar15 != 0) {
                  lVar18 = *(long *)(lVar15 + 0x10);
                  uVar12 = *(undefined8 *)UnityEngine_UIElements_UIRAtlasAllocator_Row_<>c_TypeInfo;
                  lVar19 = *(long *)PTR_DAT_070c2cb8;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar18 != 0) {
                    uVar2 = *(uint *)(lVar15 + 0x18);
                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
                    }
                    else {
                      FUN_042e4a64(lVar15,uVar12,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                    }
                    puVar8 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                    *(long *)(lVar14 + 0x30) = lVar15;
                    lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                       (*(undefined8 *)puVar8);
                    FUN_042e4268(lVar15,*(undefined8 *)
                                         System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                    lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                       (*(undefined8 *)
                                         System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
                    FUN_06938f70(lVar18,0);
                    puVar8 = UnityEngine_UIElements_UQuery_UQueryMatcher_<>c_TypeInfo;
                    if (lVar18 != 0) {
                      uVar12 = *(undefined8 *)
                                UnityEngine_UIElements_UQuery_UQueryMatcher_<>c_TypeInfo;
                      *(undefined8 *)(lVar18 + 0x10) =
                           *(undefined8 *)Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                      ;
                      *(undefined8 *)(lVar18 + 0x18) = uVar12;
                      puVar6 = System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                      if (lVar15 != 0) {
                        lVar19 = *(long *)(lVar15 + 0x10);
                        lVar20 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar19 != 0) {
                          uVar2 = *(uint *)(lVar15 + 0x18);
                          if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                            *(long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20) = lVar18;
                          }
                          else {
                            FUN_042e4a64(lVar15,lVar18,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar14 + 0x28) = lVar15;
                          puVar7 = System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                          if (lVar13 != 0) {
                            lVar15 = *(long *)(lVar13 + 0x10);
                            lVar18 = *(long *)System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar2 = *(uint *)(lVar13 + 0x18);
                              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
                              }
                              else {
                                FUN_042e4a64(lVar13,lVar14,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (*(undefined8 *)
                                                                                                      
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                 );
                              FUN_06938f78(lVar14,0);
                              puVar10 = 
                              Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t_TypeInfo
                              ;
                              puVar9 = 
                              UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_<>c_TypeInfo;
                              if (lVar14 != 0) {
                                uVar12 = *(undefined8 *)puVar4;
                                *(undefined4 *)(lVar14 + 0x18) = 0;
                                uVar16 = *(undefined8 *)puVar10;
                                *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)puVar9;
                                *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                   (uVar12);
                                FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                                if (lVar15 != 0) {
                                  lVar18 = *(long *)(lVar15 + 0x10);
                                  uVar12 = *(undefined8 *)
                                            OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay_TypeInfo
                                  ;
                                  lVar19 = *(long *)puVar5;
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                  if (lVar18 != 0) {
                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                      *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar12
                                      ;
                                    }
                                    else {
                                      FUN_042e4a64(lVar15,uVar12,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    puVar9 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                    *(long *)(lVar14 + 0x30) = lVar15;
                                    lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (*(undefined8 *)puVar9);
                                    FUN_042e4268(lVar15,*(undefined8 *)
                                                                                                                  
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                    lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (*(undefined8 *)
                                                                                                                  
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                    FUN_06938f70(lVar18,0);
                                    if (lVar18 != 0) {
                                      uVar12 = *(undefined8 *)puVar8;
                                      *(undefined8 *)(lVar18 + 0x10) =
                                           *(undefined8 *)
                                            Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                      if (lVar15 != 0) {
                                        lVar19 = *(long *)(lVar15 + 0x10);
                                        lVar20 = *(long *)puVar6;
                                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                        if (lVar19 != 0) {
                                          uVar2 = *(uint *)(lVar15 + 0x18);
                                          if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20) = lVar18
                                            ;
                                          }
                                          else {
                                            FUN_042e4a64(lVar15,lVar18,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          iVar1 = *(int *)(lVar13 + 0x1c);
                                          lVar18 = *(long *)(lVar13 + 0x10);
                                          lVar19 = *(long *)puVar7;
                                          *(long *)(lVar14 + 0x28) = lVar15;
                                          *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                          if (lVar18 != 0) {
                                            uVar2 = *(uint *)(lVar13 + 0x18);
                                            if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                              *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) =
                                                   lVar14;
                                            }
                                            else {
                                              FUN_042e4a64(lVar13,lVar14,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar19 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                            FUN_06938f78(lVar14,0);
                                            if (lVar14 != 0) {
                                              uVar12 = *(undefined8 *)puVar4;
                                              uVar16 = *(undefined8 *)
                                                                                                                
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar14 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                              *(undefined4 *)(lVar14 + 0x18) = 1;
                                              lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                              FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                                              if (lVar15 != 0) {
                                                lVar18 = *(long *)(lVar15 + 0x10);
                                                uVar12 = *(undefined8 *)PTR_DAT_0711dfd0;
                                                lVar19 = *(long *)puVar5;
                                                *(int *)(lVar15 + 0x1c) =
                                                     *(int *)(lVar15 + 0x1c) + 1;
                                                if (lVar18 != 0) {
                                                  uVar2 = *(uint *)(lVar15 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                    *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                    *(undefined8 *)
                                                     (lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar12
                                                    ;
                                                  }
                                                  else {
                                                    FUN_042e4a64(lVar15,uVar12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar19 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  puVar8 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_042e4268(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar18 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar18,0);
                                                  puVar8 = 
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass14_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar19 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar19 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar18 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)puVar7;
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar14,0);
                                                  puVar10 = 
                                                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_free_t_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  System_Data_TypeLimiter_Scope_<>c_TypeInfo;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar16 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                    lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar18 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo
                                                  ;
                                                  lVar19 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar9 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar9);
                                                  FUN_042e4268(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar18 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)puVar8;
                                                    *(undefined8 *)(lVar18 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar19 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar19 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar18 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)puVar7;
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    uVar16 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                  *(undefined4 *)(lVar14 + 0x18) = 3;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar18 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_TypeInfo
                                                  ;
                                                  lVar19 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar8 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar8);
                                                  FUN_042e4268(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar18 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000146_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar19 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar19 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar18 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)puVar7;
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo
                                                  );
                                                  FUN_06938f78(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    uVar16 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_Background_PropertyBag_TextureProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_071048a0;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                  *(undefined4 *)(lVar14 + 0x18) = 3;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar12);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar18 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_List<NetSyncSession>_TypeInfo
                                                  ;
                                                  lVar19 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_042e4268(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
                                                  lVar18 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo
                                                  );
                                                  FUN_06938f70(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Oculus_Interaction_UniqueIdentifier_Decorator_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar19 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar19 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar18 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)puVar7;
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  FUN_06938d58(param_1,lVar11,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


