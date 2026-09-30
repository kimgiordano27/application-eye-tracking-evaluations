/*
FUNCTION_NAME: FUN_05e538fc
ENTRY_POINT: 05e538fc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2
*/


void FUN_05e538fc(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar2 = Method_System_Xml_XmlNamespaceManager_RemoveNamespace__;
  if ((DAT_06a58d9f & 1) == 0) {
    FUN_02d4dc40(Method_System_Xml_XmlNode__ctor__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_AppendChild__);
    FUN_02d4dc40(Method_System_Xml_XmlNamespaceManager_RemoveNamespace__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_GetEventArgs__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_InsertAfter__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_InsertBefore__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_RemoveChild__);
    FUN_02d4dc40(PTR_DAT_06646c18);
    FUN_02d4dc40(Method_System_Xml_XmlNode_set_InnerXml__);
    FUN_02d4dc40(Method_System_Xml_XmlNode_set_Value__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__);
    FUN_02d4dc40(PTR_DAT_06646c10);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_ConvertTokenToXmlValue__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateDocumentType__);
    FUN_02d4dc40(Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__);
    FUN_02d4dc40(PTR_DAT_06646c08);
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_UxmlFactory<RepeatButton,_RepeatButton_UxmlTraits>__ctor__
                );
    FUN_02d4dc40(Method_System_Xml_Serialization_XmlReflectionImporter_CreateMapMember__);
    FUN_02d4dc40(PTR_DAT_0664c580);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d4dc40(
                Method_System_Xml_Serialization_XmlSerializationWriter_WritePotentiallyReferencingElement__
                );
    FUN_02d4dc40(PTR_DAT_066596b8);
    FUN_02d4dc40(Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__);
    FUN_02d4dc40(Method_System_Xml_XmlSqlBinaryReader_Read__);
    FUN_02d4dc40(Method_System_RuntimeType_GetEnumUnderlyingType__);
    FUN_02d4dc40(Method_System_Xml_Serialization_XmlReflectionImporter_ImportAnyElementInfo__);
    FUN_02d4dc40(Method_System_Xml_Serialization_XmlReflectionImporter_ImportElementInfo__);
    FUN_02d4dc40(Method_System_Xml_XmlNodeReader_GetAttribute__);
    FUN_02d4dc40(
                Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_StateChangeMonitorListener>__
                );
    FUN_02d4dc40(Method_System_Xml_Serialization_XmlReflectionImporter_ImportTextElementInfo__);
    FUN_02d4dc40(Method_System_Net_Configuration_SmtpNetworkElement_set_DefaultCredentials__);
    FUN_02d4dc40(Method_System_Xml_XmlSqlBinaryReader_ReadInit__);
    FUN_02d4dc40(Method_System_Net_Configuration_SmtpNetworkElement_set_Password__);
    FUN_02d4dc40(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_OnHoverEntered__
                );
    FUN_02d4dc40(PTR_DAT_06646708);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__);
    FUN_02d4dc40(Method_System_Xml_XmlSqlBinaryReader_AddQName__);
    FUN_02d4dc40(Method_System_Xml_XmlSqlBinaryReader_ReadNameRef__);
    FUN_02d4dc40(Method_System_Xml_XmlReader_ReadValueChunk__);
    FUN_02d4dc40(Method_System_Xml_XmlSqlBinaryReader_ReadQNameRef__);
    FUN_02d4dc40(Method_System_Xml_XmlSqlBinaryReader_RescanNextToken__);
    FUN_02d4dc40(Method_System_Xml_Serialization_XmlReflectionImporter_IncludeType__);
    DAT_06a58d9f = 1;
  }
  lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
  FUN_05044d4c(lVar9,0);
  puVar5 = Method_System_Xml_XmlSqlBinaryReader_ReadQNameRef__;
  puVar7 = Method_System_Xml_XmlSqlBinaryReader_ReadNameRef__;
  puVar6 = Method_System_Xml_XmlSqlBinaryReader_Read__;
  puVar8 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_ConvertTokenToXmlValue__;
  puVar4 = Method_System_Xml_XmlNode_set_Value__;
  puVar3 = Method_System_Xml_XmlNode_GetEventArgs__;
  puVar2 = PTR_DAT_06646708;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_RescanNextToken__;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar6;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar7;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar5;
    thunk_FUN_02dc1ef0();
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02dc1ef0();
    lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar8);
    FUN_036a55a0(lVar10,*(undefined8 *)puVar4);
    lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
    FUN_05044d4c(lVar11,0);
    if (lVar11 != 0) {
      *(undefined8 *)(lVar11 + 0x18) =
           *(undefined8 *)Method_System_Xml_Schema_XmlNumeric10Converter_ToDecimal__;
      *(undefined4 *)(lVar11 + 0x10) = 0x164;
      thunk_FUN_02dc1ef0();
      puVar2 = Method_System_Xml_XmlNode_InsertAfter__;
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)Method_System_Xml_XmlNode_InsertAfter__;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_02dc1ef0(plVar12,lVar11);
          }
          else {
            FUN_036a5e08(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
          FUN_05044d4c(lVar11,0);
          if (lVar11 != 0) {
            *(undefined8 *)(lVar11 + 0x18) =
                 *(undefined8 *)Method_System_Xml_XmlNodeReader_GetAttribute__;
            *(undefined4 *)(lVar11 + 0x10) = 0x264;
            thunk_FUN_02dc1ef0();
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar3 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateDocumentType__;
            puVar2 = Method_System_Xml_XmlNode_set_InnerXml__;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar11;
                thunk_FUN_02dc1ef0(plVar12,lVar11);
              }
              else {
                FUN_036a5e08(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x20) = lVar10;
              thunk_FUN_02dc1ef0((long *)(lVar9 + 0x20),lVar10);
              lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
              FUN_036a55a0(lVar10,*(undefined8 *)puVar2);
              lVar11 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Xml_XmlNode_AppendChild__);
              FUN_05044d4c(lVar11,0);
              puVar4 = Method_System_RuntimeType_GetEnumUnderlyingType__;
              puVar3 = PTR_DAT_06646c10;
              puVar2 = PTR_DAT_06646c08;
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x10) =
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_UxmlFactory<RepeatButton,_RepeatButton_UxmlTraits>__ctor__
                ;
                thunk_FUN_02dc1ef0();
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar4;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                uVar13 = *(undefined8 *)puVar2;
                *(undefined4 *)(lVar11 + 0x18) = 0;
                lVar14 = thunk_FUN_02d8a638(uVar13);
                FUN_036a55a0(lVar14,*(undefined8 *)puVar3);
                puVar4 = PTR_DAT_06646c18;
                if (lVar14 != 0) {
                  lVar15 = *(long *)(lVar14 + 0x10);
                  uVar13 = *(undefined8 *)
                            Method_System_Net_Configuration_SmtpNetworkElement_set_DefaultCredentials__
                  ;
                  lVar16 = *(long *)PTR_DAT_06646c18;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  puVar8 = Method_Newtonsoft_Json_Converters_XmlNodeConverter_AddAttribute__;
                  if (lVar15 != 0) {
                    uVar1 = *(uint *)(lVar14 + 0x18);
                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                      thunk_FUN_02dc1ef0();
                    }
                    else {
                      FUN_036a5e08(lVar14,uVar13,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar11 + 0x30) = lVar14;
                    thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar14);
                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                 Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                               );
                    FUN_036a55a0(lVar14,*(undefined8 *)puVar8);
                    lVar15 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Xml_XmlNode__ctor__);
                    FUN_05044d4c(lVar15,0);
                    if (lVar15 != 0) {
                      *(undefined8 *)(lVar15 + 0x18) =
                           *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ReadInit__;
                      thunk_FUN_02dc1ef0();
                      *(undefined8 *)(lVar15 + 0x10) =
                           *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ReadNameRef__;
                      thunk_FUN_02dc1ef0();
                      puVar6 = Method_System_Xml_XmlNode_InsertBefore__;
                      if (lVar14 != 0) {
                        lVar16 = *(long *)(lVar14 + 0x10);
                        lVar17 = *(long *)Method_System_Xml_XmlNode_InsertBefore__;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (lVar16 != 0) {
                          uVar1 = *(uint *)(lVar14 + 0x18);
                          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                            plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar12 = lVar15;
                            thunk_FUN_02dc1ef0(plVar12,lVar15);
                          }
                          else {
                            FUN_036a5e08(lVar14,lVar15,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar11 + 0x28) = lVar14;
                          thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar14);
                          puVar7 = Method_System_Xml_XmlNode_RemoveChild__;
                          if (lVar10 != 0) {
                            lVar14 = *(long *)(lVar10 + 0x10);
                            lVar15 = *(long *)Method_System_Xml_XmlNode_RemoveChild__;
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar1 = *(uint *)(lVar10 + 0x18);
                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar12 = lVar11;
                                thunk_FUN_02dc1ef0(plVar12,lVar11);
                              }
                              else {
                                FUN_036a5e08(lVar10,lVar11,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                           Method_System_Xml_XmlNode_AppendChild__);
                              FUN_05044d4c(lVar11,0);
                              puVar5 = 
                              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate_TypeInfo
                              ;
                              if (lVar11 != 0) {
                                *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)PTR_DAT_0664c580;
                                thunk_FUN_02dc1ef0();
                                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar5;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                uVar13 = *(undefined8 *)puVar2;
                                *(undefined4 *)(lVar11 + 0x18) = 0;
                                lVar14 = thunk_FUN_02d8a638(uVar13);
                                FUN_036a55a0(lVar14,*(undefined8 *)puVar3);
                                if (lVar14 != 0) {
                                  lVar15 = *(long *)(lVar14 + 0x10);
                                  uVar13 = *(undefined8 *)
                                            Method_System_Net_Configuration_SmtpNetworkElement_set_Password__
                                  ;
                                  lVar16 = *(long *)puVar4;
                                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                  if (lVar15 != 0) {
                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13
                                      ;
                                      thunk_FUN_02dc1ef0();
                                    }
                                    else {
                                      FUN_036a5e08(lVar14,uVar13,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar11 + 0x30) = lVar14;
                                    thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar14);
                                    lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                  
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                    FUN_036a55a0(lVar14,*(undefined8 *)puVar8);
                                    lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                 Method_System_Xml_XmlNode__ctor__);
                                    FUN_05044d4c(lVar15,0);
                                    if (lVar15 != 0) {
                                      *(undefined8 *)(lVar15 + 0x18) =
                                           *(undefined8 *)
                                            Method_System_Xml_Serialization_XmlSerializationWriter_WritePotentiallyReferencingElement__
                                      ;
                                      thunk_FUN_02dc1ef0();
                                      *(undefined8 *)(lVar15 + 0x10) =
                                           *(undefined8 *)
                                            Method_System_Xml_XmlSqlBinaryReader_ReadNameRef__;
                                      thunk_FUN_02dc1ef0();
                                      if (lVar14 != 0) {
                                        lVar16 = *(long *)(lVar14 + 0x10);
                                        lVar17 = *(long *)puVar6;
                                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                        if (lVar16 != 0) {
                                          uVar1 = *(uint *)(lVar14 + 0x18);
                                          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                            plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar12 = lVar15;
                                            thunk_FUN_02dc1ef0(plVar12,lVar15);
                                          }
                                          else {
                                            FUN_036a5e08(lVar14,lVar15,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar11 + 0x28) = lVar14;
                                          thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar14);
                                          lVar14 = *(long *)(lVar10 + 0x10);
                                          lVar15 = *(long *)puVar7;
                                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                          if (lVar14 != 0) {
                                            uVar1 = *(uint *)(lVar10 + 0x18);
                                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                              plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar12 = lVar11;
                                              thunk_FUN_02dc1ef0(plVar12,lVar11);
                                            }
                                            else {
                                              FUN_036a5e08(lVar10,lVar11,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar15 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                            FUN_05044d4c(lVar11,0);
                                            puVar5 = 
                                            Method_System_Xml_Serialization_XmlReflectionImporter_ImportTextElementInfo__
                                            ;
                                            if (lVar11 != 0) {
                                              *(undefined8 *)(lVar11 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportAnyElementInfo__
                                              ;
                                              thunk_FUN_02dc1ef0();
                                              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar5
                                              ;
                                              thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                              uVar13 = *(undefined8 *)puVar2;
                                              *(undefined4 *)(lVar11 + 0x18) = 3;
                                              lVar14 = thunk_FUN_02d8a638(uVar13);
                                              FUN_036a55a0(lVar14,*(undefined8 *)puVar3);
                                              if (lVar14 != 0) {
                                                lVar15 = *(long *)(lVar14 + 0x10);
                                                uVar13 = *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlReader_ReadValueChunk__;
                                                lVar16 = *(long *)puVar4;
                                                *(int *)(lVar14 + 0x1c) =
                                                     *(int *)(lVar14 + 0x1c) + 1;
                                                if (lVar15 != 0) {
                                                  uVar1 = *(uint *)(lVar14 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13
                                                    ;
                                                    thunk_FUN_02dc1ef0();
                                                  }
                                                  else {
                                                    FUN_036a5e08(lVar14,uVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar14,*(undefined8 *)puVar8);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05044d4c(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_IncludeType__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlSqlBinaryReader_ReadNameRef__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar6;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02dc1ef0(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar7;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                                  FUN_05044d4c(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_CreateMapMember__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_066596b8;
                                                    thunk_FUN_02dc1ef0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar14 = thunk_FUN_02d8a638(uVar13);
                                                    FUN_036a55a0(lVar14,*(undefined8 *)puVar3);
                                                    if (lVar14 != 0) {
                                                      lVar15 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_StateChangeMonitorListener>__
                                                  ;
                                                  lVar16 = *(long *)puVar4;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar14,*(undefined8 *)puVar8);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05044d4c(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlReflectionImporter_ImportElementInfo__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlSqlBinaryReader_ReadNameRef__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar6;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02dc1ef0(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar7;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode_AppendChild__);
                                                  FUN_05044d4c(lVar11,0);
                                                  puVar5 = 
                                                  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteMemberElement__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_XmlSqlBinaryReader_AddQName__;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 4;
                                                  lVar14 = thunk_FUN_02d8a638(uVar13);
                                                  FUN_036a55a0(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_OnHoverEntered__
                                                  ;
                                                  lVar16 = *(long *)puVar4;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dc1ef0();
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Converters_XmlNodeConverter_CreateInstruction__
                                                  );
                                                  FUN_036a55a0(lVar14,*(undefined8 *)puVar8);
                                                  lVar15 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Xml_XmlNode__ctor__);
                                                  FUN_05044d4c(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlSerializationWriter_WriteTypedPrimitive__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlSqlBinaryReader_ReadNameRef__
                                                  ;
                                                  thunk_FUN_02dc1ef0();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar6;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02dc1ef0(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_036a5e08(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02dc1ef0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar7;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02dc1ef0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_036a5e08(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  uVar13 = thunk_FUN_02dc1ef0((long *)(lVar9 + 0x28)
                                                                              ,lVar10);
                                                  FUN_05e465bc(uVar13,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


