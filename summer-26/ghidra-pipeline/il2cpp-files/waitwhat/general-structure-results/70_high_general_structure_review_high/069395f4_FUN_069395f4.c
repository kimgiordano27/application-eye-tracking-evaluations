/*
FUNCTION_NAME: FUN_069395f4
ENTRY_POINT: 069395f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_21;strong_file_logging_hits_3;telemetry_or_network_hits_15;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_069395f4(void)

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
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  puVar3 = System_Xml_XmlBaseReader_QuotaNameTable_TypeInfo;
  if ((DAT_07559a5b & 1) == 0) {
    FUN_03188a78(System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_QuotaNameTable_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlDeclarationNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlWhitespaceTextNode_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseWriter_Element_TypeInfo);
    FUN_03188a78(System_Xml_XmlBaseWriter_NamespaceManager_TypeInfo);
    FUN_03188a78(System_Xml_XmlCanonicalWriter_AttributeSorter_TypeInfo);
    FUN_03188a78(System_Runtime_Serialization_XmlDataContract_XmlDataContractCriticalHelper_TypeInfo
                );
    FUN_03188a78(System_Xml_XmlDictionaryReader_XmlWrappedReader_TypeInfo);
    FUN_03188a78(System_Xml_XmlDictionaryString_EmptyStringDictionary_TypeInfo);
    FUN_03188a78(System_Xml_XmlDictionaryWriter_XmlWrappedWriter_TypeInfo);
    FUN_03188a78(System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo);
    FUN_03188a78(System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_TypeInfo);
    FUN_03188a78(System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_TypeInfo);
    FUN_03188a78(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass24_0_TypeInfo
                );
    FUN_03188a78(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass25_0_TypeInfo
                );
    FUN_03188a78(System_Xml_XmlBaseReader_Namespace_TypeInfo);
    FUN_03188a78(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo
                );
    FUN_03188a78(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
                );
    FUN_03188a78(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                );
    FUN_03188a78(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
                );
    FUN_03188a78(System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo);
    FUN_03188a78(System_Xml_Serialization_XmlReflectionImporter_<>c_TypeInfo);
    FUN_03188a78(System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_TypeInfo);
    FUN_03188a78(System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo);
    FUN_03188a78(System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo);
    FUN_03188a78(PTR_DAT_070c20c8);
    FUN_03188a78(System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo);
    FUN_03188a78(System_Xml_Serialization_XmlSerializationReader_CollectionFixup_TypeInfo);
    FUN_03188a78(System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo);
    FUN_03188a78(System_Xml_Serialization_XmlSerializationReader_Fixup_TypeInfo);
    FUN_03188a78(System_Xml_Serialization_XmlSerializationReader_WriteCallbackInfo_TypeInfo);
    FUN_03188a78(
                System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo_TypeInfo
                );
    FUN_03188a78(
                System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_TypeInfo
                );
    FUN_03188a78(System_Xml_Serialization_XmlSerializationWriter_WriteCallbackInfo_TypeInfo);
    FUN_03188a78(System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_TypeInfo);
    DAT_07559a5b = 1;
  }
  lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar3);
  FUN_05971910(lVar11,0);
  puVar8 = System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo;
  puVar4 = System_Xml_XmlBaseReader_XmlDeclarationNode_TypeInfo;
  puVar3 = PTR_DAT_070c20c8;
  if (lVar11 != 0) {
    uVar17 = *(undefined8 *)System_Xml_XmlBaseReader_Namespace_TypeInfo;
    uVar20 = *(undefined8 *)
              System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
    ;
    *(undefined8 *)(lVar11 + 0x10) =
         *(undefined8 *)
          System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_TypeInfo;
    *(undefined8 *)(lVar11 + 0x18) = uVar17;
    puVar5 = System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo;
    uVar14 = *(undefined8 *)puVar3;
    uVar17 = *(undefined8 *)puVar8;
    *(undefined8 *)(lVar11 + 0x30) = uVar20;
    *(undefined8 *)(lVar11 + 0x38) = uVar14;
    *(undefined8 *)(lVar11 + 0x40) = uVar14;
    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar17);
    FUN_042e4268(lVar12,*(undefined8 *)puVar4);
    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar5);
    FUN_05971910(lVar13,0);
    puVar3 = System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo;
    if (lVar13 != 0) {
      *(undefined4 *)(lVar13 + 0x10) = 0x164;
      *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)puVar3;
      puVar3 = System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo;
      if (lVar12 != 0) {
        lVar15 = *(long *)(lVar12 + 0x10);
        lVar18 = *(long *)System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
          }
          else {
            FUN_042e4a64(lVar12,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar5);
          FUN_05971910(lVar13,0);
          puVar4 = System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo;
          if (lVar13 != 0) {
            iVar1 = *(int *)(lVar12 + 0x1c);
            *(undefined4 *)(lVar13 + 0x10) = 0x264;
            lVar18 = *(long *)puVar3;
            uVar17 = *(undefined8 *)puVar4;
            lVar15 = *(long *)(lVar12 + 0x10);
            *(int *)(lVar12 + 0x1c) = iVar1 + 1;
            *(undefined8 *)(lVar13 + 0x18) = uVar17;
            puVar8 = System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo;
            puVar4 = System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo;
            puVar3 = System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo;
            if (lVar15 != 0) {
              uVar2 = *(uint *)(lVar12 + 0x18);
              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
              }
              else {
                FUN_042e4a64(lVar12,lVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              uVar17 = *(undefined8 *)puVar8;
              *(long *)(lVar11 + 0x20) = lVar12;
              lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (uVar17);
              FUN_042e4268(lVar12,*(undefined8 *)puVar4);
              lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*(undefined8 *)puVar3);
              FUN_05971910(lVar13,0);
              puVar5 = System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
              puVar8 = System_Xml_XmlBaseReader_XmlElementNode_TypeInfo;
              puVar4 = System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo;
              if (lVar13 != 0) {
                uVar14 = *(undefined8 *)
                          System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo_TypeInfo
                ;
                uVar20 = *(undefined8 *)
                          System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo;
                uVar17 = *(undefined8 *)System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo;
                *(undefined4 *)(lVar13 + 0x18) = 0;
                *(undefined8 *)(lVar13 + 0x10) = uVar14;
                *(undefined8 *)(lVar13 + 0x20) = uVar20;
                lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (uVar17);
                FUN_042e4268(lVar15,*(undefined8 *)puVar8);
                lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*(undefined8 *)puVar4);
                FUN_05971910(lVar18,0);
                if (lVar18 != 0) {
                  uVar17 = *(undefined8 *)
                            System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo
                  ;
                  *(undefined8 *)(lVar18 + 0x10) =
                       *(undefined8 *)
                        System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                  ;
                  *(undefined8 *)(lVar18 + 0x18) = uVar17;
                  puVar6 = System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                  if (lVar15 != 0) {
                    lVar16 = *(long *)(lVar15 + 0x10);
                    lVar19 = *(long *)System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    if (lVar16 != 0) {
                      uVar2 = *(uint *)(lVar15 + 0x18);
                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                        *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = lVar18;
                      }
                      else {
                        FUN_042e4a64(lVar15,lVar18,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar13 + 0x28) = lVar15;
                      *(undefined1 *)(lVar13 + 0x38) = 1;
                      puVar7 = System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
                      if (lVar12 != 0) {
                        lVar15 = *(long *)(lVar12 + 0x10);
                        lVar18 = *(long *)System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
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
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                             (*(undefined8 *)puVar3);
                          FUN_05971910(lVar13,0);
                          puVar10 = System_Xml_Serialization_XmlSerializationReader_Fixup_TypeInfo;
                          puVar9 = 
                          System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass25_0_TypeInfo
                          ;
                          if (lVar13 != 0) {
                            uVar17 = *(undefined8 *)puVar5;
                            *(undefined4 *)(lVar13 + 0x18) = 0;
                            uVar14 = *(undefined8 *)puVar9;
                            *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)puVar10;
                            *(undefined8 *)(lVar13 + 0x20) = uVar14;
                            lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                               (uVar17);
                            FUN_042e4268(lVar15,*(undefined8 *)puVar8);
                            lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                               (*(undefined8 *)puVar4);
                            FUN_05971910(lVar18,0);
                            if (lVar18 != 0) {
                              uVar17 = *(undefined8 *)
                                        System_Xml_Serialization_XmlReflectionImporter_<>c_TypeInfo;
                              *(undefined8 *)(lVar18 + 0x10) =
                                   *(undefined8 *)
                                    System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                              ;
                              *(undefined8 *)(lVar18 + 0x18) = uVar17;
                              if (lVar15 != 0) {
                                lVar16 = *(long *)(lVar15 + 0x10);
                                lVar19 = *(long *)puVar6;
                                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                if (lVar16 != 0) {
                                  uVar2 = *(uint *)(lVar15 + 0x18);
                                  if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                    *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                    *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = lVar18;
                                  }
                                  else {
                                    FUN_042e4a64(lVar15,lVar18,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                  lVar18 = *(long *)(lVar12 + 0x10);
                                  *(undefined1 *)(lVar13 + 0x38) = 1;
                                  lVar16 = *(long *)puVar7;
                                  *(long *)(lVar13 + 0x28) = lVar15;
                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                  if (lVar18 != 0) {
                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
                                    }
                                    else {
                                      FUN_042e4a64(lVar12,lVar13,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (*(undefined8 *)puVar3);
                                    FUN_05971910(lVar13,0);
                                    puVar10 = 
                                    System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo
                                    ;
                                    puVar9 = 
                                    System_Xml_XmlDictionaryWriter_XmlWrappedWriter_TypeInfo;
                                    if (lVar13 != 0) {
                                      uVar17 = *(undefined8 *)puVar5;
                                      *(undefined4 *)(lVar13 + 0x18) = 0;
                                      uVar14 = *(undefined8 *)puVar9;
                                      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)puVar10;
                                      *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                      lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                         (uVar17);
                                      FUN_042e4268(lVar15,*(undefined8 *)puVar8);
                                      lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                         (*(undefined8 *)puVar4);
                                      FUN_05971910(lVar18,0);
                                      if (lVar18 != 0) {
                                        uVar17 = *(undefined8 *)
                                                  System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar18 + 0x10) =
                                             *(undefined8 *)
                                              System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar18 + 0x18) = uVar17;
                                        if (lVar15 != 0) {
                                          lVar16 = *(long *)(lVar15 + 0x10);
                                          lVar19 = *(long *)puVar6;
                                          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                          if (lVar16 != 0) {
                                            uVar2 = *(uint *)(lVar15 + 0x18);
                                            if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                              *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) =
                                                   lVar18;
                                            }
                                            else {
                                              FUN_042e4a64(lVar15,lVar18,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar19 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            iVar1 = *(int *)(lVar12 + 0x1c);
                                            lVar18 = *(long *)(lVar12 + 0x10);
                                            *(undefined1 *)(lVar13 + 0x38) = 1;
                                            lVar16 = *(long *)puVar7;
                                            *(long *)(lVar13 + 0x28) = lVar15;
                                            *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                            if (lVar18 != 0) {
                                              uVar2 = *(uint *)(lVar12 + 0x18);
                                              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) =
                                                     lVar13;
                                              }
                                              else {
                                                FUN_042e4a64(lVar12,lVar13,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                              FUN_05971910(lVar13,0);
                                              puVar10 = 
                                              System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_TypeInfo
                                              ;
                                              puVar9 = 
                                              System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
                                              ;
                                              if (lVar13 != 0) {
                                                uVar17 = *(undefined8 *)puVar5;
                                                *(undefined4 *)(lVar13 + 0x18) = 0;
                                                uVar14 = *(undefined8 *)puVar9;
                                                *(undefined8 *)(lVar13 + 0x10) =
                                                     *(undefined8 *)puVar10;
                                                *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar17);
                                                FUN_042e4268(lVar15,*(undefined8 *)puVar8);
                                                lVar18 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                FUN_05971910(lVar18,0);
                                                if (lVar18 != 0) {
                                                  uVar17 = *(undefined8 *)
                                                                                                                        
                                                  System_Xml_XmlDictionaryString_EmptyStringDictionary_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar17;
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar19 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar18 = *(long *)(lVar12 + 0x10);
                                                  *(undefined1 *)(lVar13 + 0x38) = 1;
                                                  lVar16 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x28) = lVar15;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_05971910(lVar13,0);
                                                  puVar10 = 
                                                  System_Runtime_Serialization_XmlDataContract_XmlDataContractCriticalHelper_TypeInfo
                                                  ;
                                                  puVar9 = System_Xml_XmlBaseWriter_Element_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    uVar17 = *(undefined8 *)puVar5;
                                                    *(undefined4 *)(lVar13 + 0x18) = 0;
                                                    uVar14 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                    lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar17);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar8);
                                                  lVar18 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_05971910(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  System_Xml_Serialization_XmlSerializationReader_CollectionFixup_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar17;
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar19 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar18 = *(long *)(lVar12 + 0x10);
                                                  *(undefined1 *)(lVar13 + 0x38) = 1;
                                                  lVar16 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x28) = lVar15;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_05971910(lVar13,0);
                                                  puVar10 = 
                                                  System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  System_Xml_XmlBaseReader_XmlWhitespaceTextNode_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    uVar17 = *(undefined8 *)puVar5;
                                                    *(undefined4 *)(lVar13 + 0x18) = 0;
                                                    uVar14 = *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                    lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar17);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar8);
                                                  lVar18 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_05971910(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  System_Xml_Serialization_XmlSerializationWriter_WriteCallbackInfo_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar17;
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar19 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar18 = *(long *)(lVar12 + 0x10);
                                                  *(undefined1 *)(lVar13 + 0x38) = 1;
                                                  lVar16 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x28) = lVar15;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_05971910(lVar13,0);
                                                  puVar10 = 
                                                  System_Xml_XmlDictionaryReader_XmlWrappedReader_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  System_Xml_XmlBaseWriter_NamespaceManager_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    uVar17 = *(undefined8 *)puVar5;
                                                    *(undefined4 *)(lVar13 + 0x18) = 0;
                                                    uVar14 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                    lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar17);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar8);
                                                  lVar18 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_05971910(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar17;
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar19 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar18 = *(long *)(lVar12 + 0x10);
                                                  *(undefined1 *)(lVar13 + 0x38) = 1;
                                                  lVar16 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x28) = lVar15;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_05971910(lVar13,0);
                                                  puVar10 = 
                                                  System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    uVar17 = *(undefined8 *)puVar5;
                                                    *(undefined4 *)(lVar13 + 0x18) = 0;
                                                    uVar14 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                    lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar17);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar8);
                                                  lVar18 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_05971910(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar17;
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar19 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_042e4a64(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar18 = *(long *)(lVar12 + 0x10);
                                                  *(undefined1 *)(lVar13 + 0x38) = 1;
                                                  lVar16 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x28) = lVar15;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_042e4a64(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                                  FUN_05971910(lVar13,0);
                                                  puVar9 = 
                                                  System_Xml_Serialization_XmlSerializationReader_WriteCallbackInfo_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  System_Xml_XmlCanonicalWriter_AttributeSorter_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    uVar17 = *(undefined8 *)puVar5;
                                                    *(undefined4 *)(lVar13 + 0x18) = 0;
                                                    uVar14 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                    lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar17);
                                                  FUN_042e4268(lVar15,*(undefined8 *)puVar8);
                                                  lVar18 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  uVar17 = FUN_05971910(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass24_0_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar14;
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar19 = *(long *)puVar6;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        uVar17 = FUN_042e4a64(lVar15,lVar18,
                                                                              *(undefined8 *)
                                                                               (*(long *)(*(long *)(
                                                  lVar19 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar18 = *(long *)(lVar12 + 0x10);
                                                  *(undefined1 *)(lVar13 + 0x38) = 1;
                                                  lVar16 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x28) = lVar15;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      uVar17 = FUN_042e4a64(lVar12,lVar13,
                                                                            *(undefined8 *)
                                                                             (*(long *)(*(long *)(
                                                  lVar16 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  FUN_06938d58(uVar17,lVar11);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


