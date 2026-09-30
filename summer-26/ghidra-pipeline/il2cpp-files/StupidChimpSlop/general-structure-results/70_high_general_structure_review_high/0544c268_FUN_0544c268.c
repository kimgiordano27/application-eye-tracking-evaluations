/*
FUNCTION_NAME: FUN_0544c268
ENTRY_POINT: 0544c268
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_0544c268(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_06646310;
  if ((DAT_06a5385a & 1) == 0) {
    FUN_02d4dc40(System_TermInfoDriver_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06646310);
    FUN_02d4dc40(UnityEngine_UIElements_TextEditingManipulator_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextEditingUtilities_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextEditor_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_TextElement_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextElementType_TypeInfo);
    FUN_02d4dc40(System_TermInfoReader_TypeInfo);
    FUN_02d4dc40(System_Xml_TextEncodedRawTextWriter_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066467f8);
    FUN_02d4dc40(System_TermInfoStrings_TypeInfo);
    FUN_02d4dc40(System_Xml_TernaryTreeReadOnly_TypeInfo);
    FUN_02d4dc40(UnityEngine_TerrainCallbacks_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664c060);
    FUN_02d4dc40(UnityEngine_UIElements_TextEventHandler_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextEventManager_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_TextField_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextFontWeight_TypeInfo);
    FUN_02d4dc40(UnityEngine_TerrainData_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066480c0);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextGenerationSettings_TypeInfo);
    FUN_02d4dc40(UnityEngine_TerrainUtils_TerrainMap_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextGenerator_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextGenerator_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextGeneratorUtilities_TypeInfo);
    FUN_02d4dc40(UnityEditor_Analytics_TestAnalytic_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextAlignment_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextHandle_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextHandlePermanentCache_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_TextAutoSize_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextHandleTemporaryCache_TypeInfo);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextColorGradient_TypeInfo);
    FUN_02d4dc40(TMPro_TextContainer_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_UIR_TextCoreSettings_TypeInfo);
    FUN_02d4dc40(System_Globalization_TextInfo_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06649fb8);
    FUN_02d4dc40(UnityEngine_TextCore_Text_TextInfo_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportingEventArgs_TypeInfo
                );
    FUN_02d4dc40(UnityEngine_TextEditOp_TypeInfo);
    FUN_02d4dc40(System_Globalization_TextInfoToLowerData_TypeInfo);
    FUN_02d4dc40(System_Globalization_TextInfoToUpperData_TypeInfo);
    DAT_06a5385a = 1;
  }
  lVar2 = FUN_02d4dd2c(*(undefined8 *)puVar1,0x27);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_066480c0;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) =
             *(undefined8 *)UnityEngine_TextCore_Text_TextFontWeight_TypeInfo;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_06649fb8;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x30));
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)UnityEngine_UIElements_TextField_TypeInfo
            ;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) =
                   *(undefined8 *)UnityEngine_UIElements_TextEventHandler_TypeInfo;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x40));
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)System_TermInfoStrings_TypeInfo;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x48));
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) =
                       *(undefined8 *)System_Xml_TextEncodedRawTextWriter_TypeInfo;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x50));
                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar2 + 0x58) =
                         *(undefined8 *)UnityEngine_TextCore_Text_TextGeneratorUtilities_TypeInfo;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x58));
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)UnityEngine_TextEditor_TypeInfo
                      ;
                      thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x60));
                      if (9 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x68) =
                             *(undefined8 *)UnityEngine_TextEditingUtilities_TypeInfo;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x68));
                        if (10 < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x70) =
                               *(undefined8 *)UnityEngine_TextCore_Text_TextHandle_TypeInfo;
                          thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x70));
                          if (0xb < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)PTR_DAT_066467f8;
                            thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x78));
                            if (0xc < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x80) =
                                   *(undefined8 *)
                                    UnityEngine_TextCore_Text_TextHandleTemporaryCache_TypeInfo;
                              thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x80));
                              if (0xd < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x88) =
                                     *(undefined8 *)System_Globalization_TextInfo_TypeInfo;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x88));
                                if (0xe < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x90) =
                                       *(undefined8 *)UnityEngine_TextGenerator_TypeInfo;
                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x90));
                                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar2 + 0x98) =
                                         *(undefined8 *)
                                          UnityEngine_TextCore_Text_TextGenerationSettings_TypeInfo;
                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x98));
                                    if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0xa0) =
                                           *(undefined8 *)
                                            UnityEngine_TextCore_Text_TextHandlePermanentCache_TypeInfo
                                      ;
                                      thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xa0));
                                      if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0xa8) =
                                             *(undefined8 *)
                                              UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportingEventArgs_TypeInfo
                                        ;
                                        thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xa8));
                                        if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0xb0) =
                                               *(undefined8 *)
                                                System_Globalization_TextInfoToUpperData_TypeInfo;
                                          thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xb0));
                                          if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0xb8) =
                                                 *(undefined8 *)
                                                  UnityEditor_Analytics_TestAnalytic_TypeInfo;
                                            thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xb8));
                                            if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 0xc0) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_TextCore_Text_TextEventManager_TypeInfo
                                              ;
                                              thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xc0));
                                              if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 200) =
                                                     *(undefined8 *)UnityEngine_TextEditOp_TypeInfo;
                                                thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 200));
                                                if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0xd0) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Globalization_TextInfoToLowerData_TypeInfo;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xd0));
                                                  if (0x17 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xd8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_TextCore_Text_TextElementType_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xd8));
                                                  if (0x18 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_TextCore_Text_TextInfo_TypeInfo;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xe0));
                                                  if (0x19 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_TextEditingManipulator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xe8));
                                                  if (0x1a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xf0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_TextElement_TypeInfo;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xf0));
                                                  if (0x1b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xf8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_TextCore_Text_TextColorGradient_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xf8));
                                                  if (0x1c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x100) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_TextCore_Text_TextGenerator_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x100);
                                                  if (0x1d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x108) =
                                                         *(undefined8 *)
                                                          System_Xml_TernaryTreeReadOnly_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x108);
                                                    if (0x1e < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x110) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_TextCore_Text_TextAlignment_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x110);
                                                  if ((*(uint *)(lVar2 + 0x18) & 0xffffffe0) != 0) {
                                                    *(undefined8 *)(lVar2 + 0x118) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_TerrainUtils_TerrainMap_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x118);
                                                  if (0x20 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x120) =
                                                         *(undefined8 *)
                                                          UnityEngine_TerrainCallbacks_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x120);
                                                    if (0x21 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x128) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_TextAutoSize_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x128);
                                                  if (0x22 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x130) =
                                                         *(undefined8 *)
                                                          UnityEngine_TerrainData_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x130);
                                                    if (0x23 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x138) =
                                                           *(undefined8 *)PTR_DAT_0664c060;
                                                      thunk_FUN_02dc1ef0(lVar2 + 0x138);
                                                      if (0x24 < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x140) =
                                                             *(undefined8 *)
                                                              TMPro_TextContainer_TypeInfo;
                                                        thunk_FUN_02dc1ef0(lVar2 + 0x140);
                                                        if (0x25 < *(uint *)(lVar2 + 0x18)) {
                                                          *(undefined8 *)(lVar2 + 0x148) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_UIElements_UIR_TextCoreSettings_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x148);
                                                  puVar1 = System_TermInfoDriver_TypeInfo;
                                                  if (0x26 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x150) =
                                                         *(undefined8 *)
                                                          System_TermInfoReader_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x150);
                                                    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                                                    thunk_FUN_02dc1ef0(*(undefined8 *)
                                                                        (*(long *)puVar1 + 0xb8),
                                                                       lVar2);
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
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


