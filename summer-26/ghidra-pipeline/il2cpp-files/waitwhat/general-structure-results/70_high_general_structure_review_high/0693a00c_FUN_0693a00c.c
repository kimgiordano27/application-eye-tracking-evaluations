/*
FUNCTION_NAME: FUN_0693a00c
ENTRY_POINT: 0693a00c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


void FUN_0693a00c(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  *(undefined1 *)(unaff_x21 + 0x38) = 1;
  *(undefined8 *)(unaff_x21 + 0x28) = unaff_x22;
  *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
  if (lVar8 != 0) {
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = unaff_x21;
    }
    else {
      FUN_042e4a64();
    }
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x25)
    ;
    FUN_05971910(lVar8,0);
    puVar4 = System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_TypeInfo;
    puVar3 = System_Xml_XmlBaseReader_XmlWhitespaceTextNode_TypeInfo;
    if (lVar8 != 0) {
      uVar5 = *unaff_x28;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      uVar10 = *(undefined8 *)puVar4;
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)puVar3;
      *(undefined8 *)(lVar8 + 0x20) = uVar10;
      lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
      FUN_042e4268(lVar6,*unaff_x27);
      lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*unaff_x26);
      FUN_05971910(lVar7,0);
      if (lVar7 != 0) {
        uVar5 = *(undefined8 *)
                 System_Xml_Serialization_XmlSerializationWriter_WriteCallbackInfo_TypeInfo;
        *(undefined8 *)(lVar7 + 0x10) =
             *(undefined8 *)
              System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
        ;
        *(undefined8 *)(lVar7 + 0x18) = uVar5;
        if (lVar6 != 0) {
          lVar9 = *(long *)(lVar6 + 0x10);
          lVar11 = *unaff_x29;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
            }
            else {
              FUN_042e4a64(lVar6,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            iVar1 = *(int *)(unaff_x20 + 0x1c);
            lVar7 = *(long *)(unaff_x20 + 0x10);
            *(undefined1 *)(lVar8 + 0x38) = 1;
            *(long *)(lVar8 + 0x28) = lVar6;
            *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
            if (lVar7 != 0) {
              uVar2 = *(uint *)(unaff_x20 + 0x18);
              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
              }
              else {
                FUN_042e4a64();
              }
              lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*unaff_x25);
              FUN_05971910(lVar8,0);
              puVar4 = System_Xml_XmlDictionaryReader_XmlWrappedReader_TypeInfo;
              puVar3 = System_Xml_XmlBaseWriter_NamespaceManager_TypeInfo;
              if (lVar8 != 0) {
                uVar5 = *unaff_x28;
                *(undefined4 *)(lVar8 + 0x18) = 0;
                uVar10 = *(undefined8 *)puVar3;
                *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)puVar4;
                *(undefined8 *)(lVar8 + 0x20) = uVar10;
                lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (uVar5);
                FUN_042e4268(lVar6,*unaff_x27);
                lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*unaff_x26);
                FUN_05971910(lVar7,0);
                if (lVar7 != 0) {
                  uVar5 = *(undefined8 *)
                           System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
                  ;
                  *(undefined8 *)(lVar7 + 0x10) =
                       *(undefined8 *)
                        System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                  ;
                  *(undefined8 *)(lVar7 + 0x18) = uVar5;
                  if (lVar6 != 0) {
                    lVar9 = *(long *)(lVar6 + 0x10);
                    lVar11 = *unaff_x29;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar9 != 0) {
                      uVar2 = *(uint *)(lVar6 + 0x18);
                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                        *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
                      }
                      else {
                        FUN_042e4a64(lVar6,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar1 = *(int *)(unaff_x20 + 0x1c);
                      lVar7 = *(long *)(unaff_x20 + 0x10);
                      *(undefined1 *)(lVar8 + 0x38) = 1;
                      *(long *)(lVar8 + 0x28) = lVar6;
                      *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                      if (lVar7 != 0) {
                        uVar2 = *(uint *)(unaff_x20 + 0x18);
                        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                          *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                        }
                        else {
                          FUN_042e4a64();
                        }
                        lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*unaff_x25);
                        FUN_05971910(lVar8,0);
                        puVar4 = System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo;
                        puVar3 = 
                        System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo;
                        if (lVar8 != 0) {
                          uVar5 = *unaff_x28;
                          *(undefined4 *)(lVar8 + 0x18) = 0;
                          uVar10 = *(undefined8 *)puVar3;
                          *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)puVar4;
                          *(undefined8 *)(lVar8 + 0x20) = uVar10;
                          lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                            (uVar5);
                          FUN_042e4268(lVar6,*unaff_x27);
                          lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                            (*unaff_x26);
                          FUN_05971910(lVar7,0);
                          if (lVar7 != 0) {
                            uVar5 = *(undefined8 *)
                                     System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_TypeInfo
                            ;
                            *(undefined8 *)(lVar7 + 0x10) =
                                 *(undefined8 *)
                                  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                            ;
                            *(undefined8 *)(lVar7 + 0x18) = uVar5;
                            if (lVar6 != 0) {
                              lVar9 = *(long *)(lVar6 + 0x10);
                              lVar11 = *unaff_x29;
                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                              if (lVar9 != 0) {
                                uVar2 = *(uint *)(lVar6 + 0x18);
                                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                  *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
                                }
                                else {
                                  FUN_042e4a64(lVar6,lVar7,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                iVar1 = *(int *)(unaff_x20 + 0x1c);
                                lVar7 = *(long *)(unaff_x20 + 0x10);
                                *(undefined1 *)(lVar8 + 0x38) = 1;
                                *(long *)(lVar8 + 0x28) = lVar6;
                                *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                                if (lVar7 != 0) {
                                  uVar2 = *(uint *)(unaff_x20 + 0x18);
                                  if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                    *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                    *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                                  }
                                  else {
                                    FUN_042e4a64();
                                  }
                                  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                    (*unaff_x25);
                                  FUN_05971910(lVar8,0);
                                  puVar4 = 
                                  System_Xml_Serialization_XmlSerializationReader_WriteCallbackInfo_TypeInfo
                                  ;
                                  puVar3 = System_Xml_XmlCanonicalWriter_AttributeSorter_TypeInfo;
                                  if (lVar8 != 0) {
                                    uVar5 = *unaff_x28;
                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                    uVar10 = *(undefined8 *)puVar4;
                                    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)puVar3;
                                    *(undefined8 *)(lVar8 + 0x20) = uVar10;
                                    lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                      (uVar5);
                                    FUN_042e4268(lVar6,*unaff_x27);
                                    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                      (*unaff_x26);
                                    FUN_05971910(lVar7,0);
                                    if (lVar7 != 0) {
                                      uVar5 = *(undefined8 *)
                                               System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass24_0_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar7 + 0x10) =
                                           *(undefined8 *)
                                            System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                                      ;
                                      *(undefined8 *)(lVar7 + 0x18) = uVar5;
                                      if (lVar6 != 0) {
                                        lVar9 = *(long *)(lVar6 + 0x10);
                                        lVar11 = *unaff_x29;
                                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                        if (lVar9 != 0) {
                                          uVar2 = *(uint *)(lVar6 + 0x18);
                                          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
                                          }
                                          else {
                                            FUN_042e4a64(lVar6,lVar7,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          iVar1 = *(int *)(unaff_x20 + 0x1c);
                                          lVar7 = *(long *)(unaff_x20 + 0x10);
                                          *(undefined1 *)(lVar8 + 0x38) = 1;
                                          *(long *)(lVar8 + 0x28) = lVar6;
                                          *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                                          if (lVar7 != 0) {
                                            uVar2 = *(uint *)(unaff_x20 + 0x18);
                                            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar8
                                              ;
                                            }
                                            else {
                                              FUN_042e4a64();
                                            }
                                            *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                            FUN_06938d58();
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


