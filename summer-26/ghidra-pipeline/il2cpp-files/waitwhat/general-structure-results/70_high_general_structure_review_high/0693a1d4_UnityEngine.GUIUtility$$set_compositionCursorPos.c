/*
FUNCTION_NAME: UnityEngine.GUIUtility$$set_compositionCursorPos
ENTRY_POINT: 0693a1d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void UnityEngine_GUIUtility__set_compositionCursorPos(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *in_x9;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  uVar8 = *in_x9;
  *(undefined8 *)(unaff_x21 + 0x10) = *param_1;
  *(undefined8 *)(unaff_x21 + 0x20) = uVar8;
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  FUN_042e4268(lVar5,*unaff_x27);
  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x26);
  FUN_05971910(lVar6,0);
  if (lVar6 != 0) {
    uVar8 = *(undefined8 *)
             System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
    ;
    *(undefined8 *)(lVar6 + 0x10) =
         *(undefined8 *)
          System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
    ;
    *(undefined8 *)(lVar6 + 0x18) = uVar8;
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar9 = *unaff_x29;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
        }
        else {
          FUN_042e4a64(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        iVar1 = *(int *)(unaff_x20 + 0x1c);
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(undefined1 *)(unaff_x21 + 0x38) = 1;
        *(long *)(unaff_x21 + 0x28) = lVar5;
        *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
        if (lVar6 != 0) {
          uVar2 = *(uint *)(unaff_x20 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
            *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = unaff_x21;
          }
          else {
            FUN_042e4a64();
          }
          lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*unaff_x25);
          FUN_05971910(lVar5,0);
          puVar4 = System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo;
          puVar3 = System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo;
          if (lVar5 != 0) {
            uVar8 = *unaff_x28;
            *(undefined4 *)(lVar5 + 0x18) = 0;
            uVar10 = *(undefined8 *)puVar3;
            *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar4;
            *(undefined8 *)(lVar5 + 0x20) = uVar10;
            lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (uVar8);
            FUN_042e4268(lVar6,*unaff_x27);
            lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*unaff_x26);
            FUN_05971910(lVar7,0);
            if (lVar7 != 0) {
              uVar8 = *(undefined8 *)
                       System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_TypeInfo
              ;
              *(undefined8 *)(lVar7 + 0x10) =
                   *(undefined8 *)
                    System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
              ;
              *(undefined8 *)(lVar7 + 0x18) = uVar8;
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
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  iVar1 = *(int *)(unaff_x20 + 0x1c);
                  lVar7 = *(long *)(unaff_x20 + 0x10);
                  *(undefined1 *)(lVar5 + 0x38) = 1;
                  *(long *)(lVar5 + 0x28) = lVar6;
                  *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                  if (lVar7 != 0) {
                    uVar2 = *(uint *)(unaff_x20 + 0x18);
                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                      *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                    }
                    else {
                      FUN_042e4a64();
                    }
                    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                      (*unaff_x25);
                    FUN_05971910(lVar5,0);
                    puVar4 = 
                    System_Xml_Serialization_XmlSerializationReader_WriteCallbackInfo_TypeInfo;
                    puVar3 = System_Xml_XmlCanonicalWriter_AttributeSorter_TypeInfo;
                    if (lVar5 != 0) {
                      uVar8 = *unaff_x28;
                      *(undefined4 *)(lVar5 + 0x18) = 0;
                      uVar10 = *(undefined8 *)puVar4;
                      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar3;
                      *(undefined8 *)(lVar5 + 0x20) = uVar10;
                      lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                        (uVar8);
                      FUN_042e4268(lVar6,*unaff_x27);
                      lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                        (*unaff_x26);
                      FUN_05971910(lVar7,0);
                      if (lVar7 != 0) {
                        uVar8 = *(undefined8 *)
                                 System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass24_0_TypeInfo
                        ;
                        *(undefined8 *)(lVar7 + 0x10) =
                             *(undefined8 *)
                              System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                        ;
                        *(undefined8 *)(lVar7 + 0x18) = uVar8;
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
                            *(undefined1 *)(lVar5 + 0x38) = 1;
                            *(long *)(lVar5 + 0x28) = lVar6;
                            *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
                            if (lVar7 != 0) {
                              uVar2 = *(uint *)(unaff_x20 + 0x18);
                              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                                *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


